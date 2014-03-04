#include "connection.h"
#include "login.h"
#include "globaldefs.h"
#include "simplecrypt.h"

#define MaxRecentFiles 5

// static const char *strLoadDatabase = 
//     QT_TRANSLATE_NOOP("Login", "Create new connection...");

SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023)); //some random number

Login::Login(const QString lbText, QWidget *parent, Qt::WFlags flags):
QWidget(parent, flags){

    mainFrmPtr=0;
    userModel=0;
    m_roleDef=0;

    setupUi(this);

    lbLocale->setText(lbText);
/*
    connect(qApp,
                   SIGNAL(aboutToQuit()),
                   this,
                   SLOT(finalTouches()));*/

}

Login::~Login()
{
    /*!
    //Clean Pointers here!
    */

    if (mainFrmPtr!=0) delete mainFrmPtr;
    if (userModel!=0) delete userModel;
    if (m_roleDef!=0) delete m_roleDef;
}

/*void Login::finalTouches()
{

}*/

void Login::updateTooltip(QString user){

    cmbUser->setToolTip(cmbUser->model()->index(cmbUser->currentIndex(),1).data().toString());
}

bool Login::initCmbUsers()
{
    userModel=new QSqlQueryModel();
    userModel->setQuery("SELECT username, password, description from ui_user where username not like '%n/a%'");
    if (userModel->rowCount()<1){
        emit showError(tr("There are no users defined in the database! The app is unusable!"));
        //exit(0);//severe!
        return false;
    }

    if (!checkUsers()) exit(0);

    cmbUser->setModel(userModel);
    cmbUser->setModelColumn(0);

    QSettings settings("FaoCAS", "App");
    if (settings.contains("AppUser")){
        int cur=cmbUser->findText(settings.value("AppUser").toString(),Qt::MatchExactly);
        if (cur==-1){
            emit showError(tr("Wrong user stored on the registry! How is this possible?"));
            //exit(0);
            return false;
        }
        cmbUser->setCurrentIndex(cur);
    }

    return true;
}

void Login::validate()
{
        QString strStyleSheet="background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));";

        QSqlQuery query;
        query.prepare( "SELECT username, password, name, new, \"view\", modify, remove, report, admin FROM \"ui_user\", \"ui_role\" WHERE ( (ui_user.role_id=ui_role.id) AND (username= :user))" );
        query.bindValue(":user", cmbUser->currentText() );

        //query.setForwardOnly(true);

        if (!query.exec()){
            QMessageBox::critical( this, tr("DB Error"),
            query.lastError().text());
               exit(0);
        }else{

            if (query.size()< 1){
                qDebug() << "Something went terrible wrong: we cannot find the username that was selected in the DB..." << endl;
                exit(0);
            }

            query.first();
            QString passwd= query.value(1).toString();
            QString decrypted = crypto.decryptToString(passwd);

            if (decrypted != linePasswd->text()){

                linePasswd->setStyleSheet(strStyleSheet);

                QMessageBox::critical( this, tr("Authentication Error"),
                tr("Invalid Password!"));

            }else{


                if (!setRoleDef(&query)){
                    emit showError(tr("Could not retrieve the role of this user on the database!"));
                    exit(0);
                }

                query.clear();

                /*!
                We silently disconnect from the database, and setup a new connection "behind the scenes"
                */
                QString strHost, strDatabase, strUsername, strPassword, strDriver;
                int port;
                if (!readSettings(strHost,strDatabase,strUsername,strPassword,strDriver,port))
                {
                        QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                            tr("You must run the configurator prior to run this application!") +
                            tr("\n Make sure you filled the connection settings *and* the global settings!"),QMessageBox::Ok,0);
                        msgBox.exec();
                        exit(0);
                }
                if (!disconnectDB()){
                    emit showError(tr("Could not disconnect database!"));
                    exit(0);
                }

                if (!connectDB(strHost,strDatabase,cmbUser->currentText(),decrypted,strDriver,port)){
                    QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                        tr("Could not match the user credentials with the DB credentials!"),QMessageBox::Ok,0);
                    msgBox.exec();
                    exit(0);
                }

                /*!
                Proceed to Login: but set the role first!
                */
                hide();
                update();

                //Store session data, username and passwd
                QSettings settings("FaoCAS", "App");
                settings.setValue("AppUser", cmbUser->currentText());

                if (mainFrmPtr==0) {


                    mainFrmPtr=new MainFrm(m_roleDef);

                    connect(this, SIGNAL(showError(QString,bool)), mainFrmPtr,
                        SLOT(displayError(QString,bool)));

                    connect(this, SIGNAL(showStatus(QString)), mainFrmPtr,
                        SLOT(statusShow(QString)));

                }

                if (!setAppSetting()){
                    QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),tr("Could no set the application setting in the DB"),QMessageBox::Ok,0);
                    msgBox.exec();
                }

                mainFrmPtr->show();
                mainFrmPtr->repaint();
                //This is assynchronous, so no point in checking for return value now...
                mainFrmPtr->initRules();
            }
        }

}

bool Login::setRoleDef(QSqlQuery* query)
{
    if (!query->isActive()){
        emit showError(tr("Could not use the role query!"));
        return false;
    }
    query->first();

    m_roleDef=new RoleDef();
    m_roleDef->bNew=query->value(3).toBool();
    m_roleDef->bView=query->value(4).toBool();
    m_roleDef->bMod=query->value(5).toBool();
    m_roleDef->bDel=query->value(6).toBool();
    m_roleDef->bRep=query->value(7).toBool();
    m_roleDef->bAdmin=query->value(8).toBool();

    return true;
}

void Login::showEvent ( QShowEvent * event )
{
    QString strHost, strDatabase, strUsername, strPassword, strDriver;
    int port;
    if (!readSettings(strHost,strDatabase,strUsername,strPassword,strDriver,port))
    {
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                tr("You must run the configurator prior to run this application!") +
                tr("\n Make sure you filled the connection settings *and* the global settings!"),QMessageBox::Ok,0);
            msgBox.exec();
            exit(0);
    }else{
        if (!connectDB(strHost,strDatabase,strUsername,strPassword,strDriver,port)){
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                tr("Please run the configurator again and fix the connection values!"),QMessageBox::Ok,0);
            msgBox.exec();
            exit(0);
        }
     }
    //if everything went ok, lets read the users from the db!
    initCmbUsers();
}

bool Login::checkUsers()
{
    for (int i=0; i < userModel->rowCount();++i){
        bool bExists;
        if (!checkIfUserExists(userModel->record(i).value("username").toString(),bExists)){
                QMessageBox::critical(this, tr("Check User Backend"),
                                        tr("Could not check users in the database!"));
                return false;// we return true, to stop the process here
        }
        if (!bExists){
            QMessageBox::critical(this, tr("Check User Backend"),
                                    tr("It appears some app users do not have matching roles in the database! \n") +
                                       tr("Please run the configurator to fix this!"));
            return false;
        }
    }
    return true;
}

 bool Login::readSettings(QString& strHost, QString& strDatabase, QString& strUsername, 
     QString& strPassword, QString& strDriver, int& port)
 {
    QSettings settings("FaoCAS", "App");

    /*!
    //Settings for the App credentials
    */
    //n.b.: user is read later, after the combo is filled!

    if (settings.contains("AppPass"))
        linePasswd->setText(settings.value("AppPass").toString());

    if ( !settings.contains("host") || !settings.contains("database") ||
        !settings.contains("username") || !settings.contains("password") ||
        !settings.contains("driver") || !settings.contains("city") || !settings.contains("port")){
            return false;

    } else{
        //Settings for the DB credentials
        strHost=settings.value("host").toString();
        strDatabase=settings.value("database").toString();
        strUsername=settings.value("username").toString();
        strPassword=settings.value("password").toString();
        strDriver=settings.value("driver").toString();
        port=settings.value("port").toInt();

    }

    return true;
 }

 bool Login::connectDB(const QString strHost,const QString strDatabase,
        const QString strUsername,const QString strPassword, const QString strDriver, const int port)
{
        if (!createConnection(strHost,strDatabase, strUsername,strPassword,strDriver,port)){
            QSqlDatabase db=QSqlDatabase::database();
            QMessageBox::critical( this, tr("User Error"),
                db.lastError().text());

            return false;
       }
    return true;
 }

 bool Login::disconnectDB()
{
     // For the default connection
     QString connName;
     {
       QSqlDatabase db = QSqlDatabase::database();
       connName = db.connectionName();
     }
     QSqlDatabase::removeDatabase(connName);
    return true;
 }

 ///////////////////////////////////////////////


