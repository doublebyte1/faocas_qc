#include <QMessageBox>
#include <QDir>
#include "conf_app.h"
#include "connection.h"
#include "sql.h"
//#include "json.h"

using namespace QtJson;

static const QString strViewUsers=
    "SELECT     ui_user.id, ui_user.username AS Name, ui_role.name AS Role"
    " FROM         ui_user INNER JOIN"
    "                      ui_role ON ui_user.role_id = ui_role.id WHERE username NOT LIKE '%n/a%'"
;
static const QString strViewRole=
"SELECT     id, name AS Name, description AS Description"
" FROM         ui_role WHERE name NOT LIKE '%n/a%'"
;

static const QString strBackupTool="pg_dump";
static const QString strRestoreTool="pg_restore";

conf_app::conf_app(QWidget *parent, Qt::WFlags flags)
    : QMainWindow(parent, flags)
{
    setupUi(this);
    m_bConnected=false;

    cityModel=0;
    countryModel=0;
    tableModel=0;
    userModel=0;
    roleModel=0;
    viewUsers=0;
    viewRoles=0;
    myProcess=0;
    mapperUsers=0;
    mapperRoles=0;
    nullDelegateUsers=0;
    nullDelegateRoles=0;
    m_lastIndex=QModelIndex();
    m_previousUser="";

    initUI();

}

conf_app::~conf_app()
{
    //if (QSqlDatabase::database().isOpen()){
        if (cityModel!=0) delete cityModel;
        if (countryModel!=0) delete countryModel;
        if (userModel!=0) delete userModel;
        if (roleModel!=0) delete roleModel;
        if (tableModel!=0) delete tableModel;
        if (viewUsers!=0) delete viewUsers;
        if (viewRoles!=0) delete viewRoles;
        if (mapperUsers!=0) delete mapperUsers;
        if (mapperRoles!=0) delete mapperRoles;
        if (nullDelegateUsers!=0) delete nullDelegateUsers;
        if (nullDelegateRoles!=0) delete nullDelegateRoles;
    if (myProcess!=0 && myProcess->isOpen()){
        myProcess->close();
        delete myProcess;
    }
}

void conf_app::apply()
{
    saveSettings(1);
    pushApply->setEnabled(false);
    emit statusShow(tr("Location Settings successfully saved!"));
}

void conf_app::enableApply()
{
    pushApply->setEnabled(true);
}

void conf_app::initModels()
{
    if (cityModel!=0){
        delete cityModel;
        cityModel=0;
    }if (countryModel!=0){
        delete countryModel;
        countryModel=0;
    }if (viewUsers!=0){
        delete viewUsers;
        viewUsers=0;
    }if (viewRoles!=0){
        delete viewRoles;
        viewRoles=0;
    }if (userModel!=0){
        delete userModel;
        userModel=0;
    }if (roleModel!=0){
        delete roleModel;
        roleModel=0;
    }

     cityModel = new QSqlQueryModel;
     countryModel = new QSqlQueryModel;

    userModel = new QSqlRelationalTableModel;
    userModel->setTable(QSqlDatabase().driver()->escapeIdentifier("ui_user",
    QSqlDriver::TableName));

    userModel->setRelation(1, QSqlRelation("ui_role", "id", "name"));
    userModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    userModel->sort(0,Qt::AscendingOrder);

    filterTable(userModel->relationModel(1),"name");//removing the n/a*/
    filterTable(userModel,"username");

    userModel->select();

    //Check if users were created in the database; TODO: ask if it wants to create the users
    if (!checkUsers()){

        QMessageBox msgBox;
        msgBox.setText(tr("It seems that not all users have been created in the database"));
        msgBox.setInformativeText(tr("Would you like the app to do that now?"));
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();

         switch (ret) {
           case QMessageBox::Yes:
             //now actually create the missing users
             checkUsers(true);
             break;
            case QMessageBox::No:
             QMessageBox::critical(this, tr("Check User Backend"),
                                     tr("Ok. But you may have to do that later, or the app will not function properly!"));
                break;
            default:
                break;
            }
        }

    //resetting the filter, just in case...
    userModel->setFilter("");

    roleModel = new QSqlTableModel;
    roleModel->setTable(QSqlDatabase().driver()->escapeIdentifier("ui_role",
    QSqlDriver::TableName));
    roleModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    roleModel->sort(0,Qt::AscendingOrder);
    roleModel->select();
}

bool conf_app::checkUsers(const bool bCreate)
{
    for (int i=0; i < userModel->rowCount();++i){
        bool bExists;
        if (!checkIfUserExists(userModel->record(i).value("username").toString(),bExists)){
                QMessageBox::critical(this, tr("Check User Backend"),
                                        tr("Could not check users in the database!"));
                return true;// we return true, to stop the process here
        }
        if (!bExists)
            if (bCreate){
                if (!addDatabaseUser(userModel->record(i).value("username").toString(),
                                     userModel->record(i).value("password").toString())){
                        QMessageBox::critical(this, tr("Check User Backend"),
                                                tr("Could not create user '") +  userModel->record(i).value("username").toString()
                                                   + tr("' in the database!"));
                        return true;
                 }else
                    qDebug() << "user '" + userModel->record(i).value("username").toString() + "' has been created!" << endl;
            }else return false;
    }
    return true;
}

void conf_app::readProcessError()
{
    m_strOutputError.append(myProcess->readAllStandardError().data());
}

void conf_app::readProcessOutput()
{
    m_buffer.append( myProcess->readAllStandardOutput());
    emit statusShow("Writing data..");

}

QString conf_app::getDefaultOutputName()
{
    QString strDtFormat="yyyyMMddThhmm";
    return (QObject::tr("backup_") + QDateTime::currentDateTime().toString(strDtFormat));
}

void conf_app::createProcess()
{
    if (myProcess!=0){
        myProcess->close();
        delete myProcess; myProcess=0;
    }
    myProcess=new QProcess();
}

void conf_app::finishedDump( int exitCode, QProcess::ExitStatus exitStatus )
{
    myProcess->close();

    QFile file(m_backupFileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this, tr("Backup Process"),
                                tr("Could not open file") + m_backupFileName + tr(" for writing!"));
        return;
    }

    file.write(m_buffer);
    file.close();

    m_buffer.clear();

    emit statusShow(tr("Backup finished with exit code ") + QVariant(exitCode).toString() + "; "
                     +(exitStatus==QProcess::NormalExit?"the process exited normally.":"the process crashed.")
                     );

    if (!m_restoreMode){
        if (!exitCode){
            QMessageBox::information(this, tr("Backup Process"),
                                     tr("Backup finished with exit code ") + QVariant(exitCode).toString() + "; "
                                     +"the process exited normally."
                                     );
        } else{

            qDebug() << m_strOutputError << endl;

            QMessageBox::critical(this, tr("Backup Process"),
                                     tr("Backup finished with exit code ") + QVariant(exitCode).toString() + "; "
                                     +"the process crashed:" + m_strOutputError
                                     );

        }
        qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
    }else
        emit backupOk(!exitCode);

}

void conf_app::finishedRestore( int exitCode, QProcess::ExitStatus exitStatus )
{
    myProcess->close();

    if (!exitCode){
        QMessageBox::information(this, tr("Restore Process"),
                                 tr("Restore finished with exit code ") + QVariant(exitCode).toString() + ";"
                                 +" the process exited normally."
                                 );
    }else{
       qDebug() << m_strOutputError << endl;

        QMessageBox::critical(this, tr("Restore Process"),
                                 tr("Restore finished with exit code ") + QVariant(exitCode).toString() + "; "
                                 +"the process crashed: " + m_strOutputError
                                 );
    }

    emit statusShow(tr("Restore finished with exit code ") + QVariant(exitCode).toString() + "; "
                    +(exitStatus==QProcess::NormalExit?"the process exited normally.":"the process crashed.")
                                                 );


    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
}

void conf_app::startRestore(const bool backupOk)
{
    if (!backupOk){
        QMessageBox::critical(this, tr("Backup Process"),
                                 tr("Something went wrong with the safety backup, and we cannot proceed with the restore! process")
                                 );

    }else{
            qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );
            statusShow(tr("Wait..."));

            QSettings settings("FaoCAS", "App");
            QStringList arguments;
            arguments << "-U" << settings.value("username").toString() << "-h" << settings.value("host").toString()
                    << "-p" << settings.value("port").toString() << "--dbname"
                    << settings.value("database").toString() << "--role" << "postgres" << "--no-password" << "--clean"
                       << "--verbose" << m_restoreFileName;

            createProcess();

            connect(myProcess, SIGNAL(readyReadStandardError()),this,
              SLOT(readProcessError() ),Qt::UniqueConnection);

            connect(myProcess, SIGNAL(finished(int,QProcess::ExitStatus)),this,
              SLOT(finishedRestore(int,QProcess::ExitStatus) ),Qt::UniqueConnection);

            if (!m_strOutputError.isEmpty()) m_strOutputError.clear();

            QString app(strRestoreTool);

            myProcess->start(app,arguments);
            if (!myProcess->waitForStarted()) {
            QMessageBox::critical(this, tr("App"),
                tr("Could not start ") + strRestoreTool);
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;
            }
    }
}

void conf_app::doBackup()
{
    m_restoreMode=false;

    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Export backup to file"), getDefaultOutputName(), "Custom (*.tar)");
    if (!fileName.isEmpty()){

    qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );
    statusShow(tr("Wait..."));

        m_backupFileName=fileName;

        QSettings settings("FaoCAS", "App");
        if (!settings.contains("database")){

            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read database name! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;

        }
        else if (!settings.contains("username")){

            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read DB username! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;

        }
        else if(!settings.contains("host")){
            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read DB host! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;
        }
        else if(!settings.contains("port")){
            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read host port! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;
        }

        QStringList arguments;
        arguments << "-Fc" << "-U" << settings.value("username").toString() << "-h" << settings.value("host").toString()
                  << "-p" << settings.value("port").toString()
                  << settings.value("database").toString();

        createProcess();

         connect(myProcess, SIGNAL(readyReadStandardOutput()),this,
            SLOT(readProcessOutput() ),Qt::UniqueConnection);

         connect(myProcess, SIGNAL(readyReadStandardError()),this,
            SLOT(readProcessError() ),Qt::UniqueConnection);

         connect(myProcess, SIGNAL(finished(int,QProcess::ExitStatus)),this,
            SLOT(finishedDump( int, QProcess::ExitStatus ) ),Qt::UniqueConnection);

       if (!m_buffer.isEmpty()) m_buffer.clear();
       if (!m_strOutputError.isEmpty()) m_strOutputError.clear();

       QString app(strBackupTool);

       myProcess->start(app,arguments);
      if (!myProcess->waitForStarted()) {
          QMessageBox::critical(this, tr("App"),
              tr("Could not start ") + strBackupTool);
          qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
          return;
      }

    }
}

void conf_app::doRestore()
{
    m_restoreMode=true;

    QMessageBox msgBox;
    msgBox.setText(tr("You are restoring a backup."));
    msgBox.setInformativeText(tr("Are you sure that you want to replace your current database?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

     switch (ret) {
       case QMessageBox::Yes:
         break;
       case QMessageBox::No:
            return;
            break;
       default:
           // should never be reached
           break;
     }

    QSettings settings("FaoCAS", "App");
    if(!settings.contains("host")){

             QMessageBox::warning(this, tr("Restore Process"),
             tr("We cannot retrieve the host value from any previous connection!!")
             +tr("\n Please connect to the database to build the string, \n disconnect, and try again!"));
             return;
    }

    QString filename = QFileDialog::getOpenFileName(this,
     tr("Restore Backup"), tr(""), tr("Custom Backup (*.tar)"));

    if (!filename.isEmpty()){

        qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );
        statusShow(tr("Wait..."));

        m_restoreFileName=filename;

        //first we create an automatic safety backup (without asking);
        QString strPath=QFileInfo(filename).absolutePath();

        m_backupFileName=strPath + "/automatic_" + getDefaultOutputName() + ".tar";

        QSettings settings("FaoCAS", "App");
        if (!settings.contains("database")){

            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read database name! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;

        }
        else if (!settings.contains("username")){

            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read DB username! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;

        }
        else if(!settings.contains("host")){
            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read DB host! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;
        }
        else if(!settings.contains("port")){
            QMessageBox::critical(this, tr("Backup Process"),
                                    tr("Could not read host port! Did you already initialized a connection?"));
            qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
            return;
        }

        QStringList arguments;
        arguments << "-Fc" << "-U" << settings.value("username").toString() << "-h" << settings.value("host").toString()
                  << "-p" << settings.value("port").toString()
                  << settings.value("database").toString();

        createProcess();

         connect(myProcess, SIGNAL(readyReadStandardOutput()),this,
            SLOT(readProcessOutput() ),Qt::UniqueConnection);

         connect(myProcess, SIGNAL(readyReadStandardError()),this,
            SLOT(readProcessError() ),Qt::UniqueConnection);

         connect(myProcess, SIGNAL(finished(int,QProcess::ExitStatus)),this,
            SLOT(finishedDump( int, QProcess::ExitStatus ) ),Qt::UniqueConnection);

         connect(this, SIGNAL(backupOk(const bool)),this,
            SLOT(startRestore( const bool) ),Qt::UniqueConnection);

        if (!m_buffer.isEmpty()) m_buffer.clear();
        if (!m_strOutputError.isEmpty()) m_strOutputError.clear();

        QString app(strBackupTool);

        myProcess->start(app,arguments);
        if (!myProcess->waitForStarted()) {
          QMessageBox::critical(this, tr("App"),
              tr("Could not start ") + strBackupTool);
          qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
          return;
        }

      }

}

void conf_app::initUI()
{
    this->setWindowTitle(qApp->applicationName() + qApp->applicationVersion());

    toolbar->addAction(this->actionCreate_backup);
    toolbar->addAction(this->actionRestore_backup);
    toolbar->addAction(this->actionExit);
    toolbar->setFloatable(true);
    toolbar->setMovable(true);

     connect(actionShow_startup_message, SIGNAL(triggered(bool)),this,
        SLOT(onShowStartupMsg(bool) ),Qt::UniqueConnection);

     connect(actionCreate_backup, SIGNAL(triggered()),this,
        SLOT(doBackup() ),Qt::UniqueConnection);

     connect(actionRestore_backup, SIGNAL(triggered()),this,
        SLOT(doRestore() ),Qt::UniqueConnection);

    if (QSqlDatabase::drivers().isEmpty())
    QMessageBox::information(this, tr("No database drivers found"),
                             tr("This app requires at least one Qt database driver. "
                                "Please check the documentation how to build the "
                                "Qt SQL plugins."));

    this->cmbDriver->addItems(QSqlDatabase::drivers());

    this->toolBox->setCurrentIndex(0);

    pushDisconnect->setEnabled(false);
    groupSettings->setEnabled(false);
    groupTables->setEnabled(false);

    groupUsers->setEnabled(false);
    groupUsersDetail->setVisible(false);
    groupUsers->layout()->update();

    groupRole->setEnabled(false);
    groupRoleDetail->setVisible(false);
    groupRole->layout()->update();

    pushInsert->setEnabled(false);
    pushRemove->setEnabled(true);

    connect(this, SIGNAL(connectionChanged()), this,
        SLOT(onConnectionChange()));

    connect(this, SIGNAL(statusShow(const QString)), this,
        SLOT(onStatusShow(const QString)));

     connect(toolBox, SIGNAL(currentChanged(int)),this,
        SLOT(resizeTables(int) ),Qt::UniqueConnection);

     connect(this, SIGNAL(submit(QDataWidgetMapper*, QDialogButtonBox*, QGroupBox*, QSqlQueryModel*,const QString,
                                            QPushButton*,QPushButton*, QPushButton*, QSqlTableModel*,QTableView*)),this,
        SLOT(ApplyModel(QDataWidgetMapper*, QDialogButtonBox*, QGroupBox*,QSqlQueryModel*,const QString,
        QPushButton*,QPushButton*, QPushButton*, QSqlTableModel*,QTableView*)),Qt::UniqueConnection);

    connect(this, SIGNAL(lockControls(bool,QGroupBox*)), this,
    SLOT(onLockControls(bool,QGroupBox*)));

    connect(this, SIGNAL(editLeave(const bool,QPushButton*,QPushButton*,QPushButton*,QGroupBox*,
        QDataWidgetMapper*,QSqlTableModel*,QDialogButtonBox*,QSqlQueryModel*,const QString,QTableView*,const bool)), this,
        SLOT(onEditLeave(const bool,QPushButton*,QPushButton*,QPushButton*,QGroupBox*,QDataWidgetMapper*,
        QSqlTableModel*,QDialogButtonBox*,QSqlQueryModel*,const QString, QTableView*,const bool)));

    loadSettings(0);
}

void conf_app::onEditLeave(const bool bFinished, QPushButton* aPushEdit,QPushButton* aPushNew,
                           QPushButton* aPushRemove,QGroupBox* aGroupDetails,QDataWidgetMapper* aMapper,QSqlTableModel* aModel,QDialogButtonBox* aButtonBox,
                           QSqlQueryModel* viewModel, const QString strQuery, QTableView* aTable, const bool bDiscarded)
{
   if (bFinished){
       aPushEdit->setChecked(false);
       aPushNew->setEnabled(!pushEditUser->isChecked());
       aPushRemove->setEnabled(!aPushEdit->isChecked());
        previewRecord(m_lastIndex,aMapper,aPushNew,aPushEdit,aPushRemove,aGroupDetails,aButtonBox,aModel
            ,viewModel,strQuery,aTable);

        if (aModel==roleModel){
            //refresh combo
            userModel->relationModel(1)->select();
            comboRole->setModel(userModel->relationModel(1));
        }
       emit lockControls(true,aGroupDetails);
   }else{
        aPushNew->setEnabled(false);
        aPushRemove->setEnabled(false);
   }
}

void conf_app::resizeTables(int index)
{
    if (index==3) resizeToVisibleColumns(tableRoles);
    if (index==4) resizeToVisibleColumns(tableUsers);
}

void conf_app::filterModel(QString strCountry)
{
    cityModel->setQuery("SELECT     ref_countries.name AS country_name, ref_location.city_name"
    "                       FROM         ref_location INNER JOIN"
    "                      ref_countries ON ref_location.country = ref_countries.id"
    "                       WHERE (ref_countries.name='" + strCountry + "')"
    );

    cmbCity->setModel(cityModel);
    cmbCity->setModelColumn(1);
}

void conf_app::showEvent ( QShowEvent * event )
{
    actionShow_startup_message->setChecked(queryShowStartupMsg());
    actionShow_SQL_message->setChecked(queryShowSqlMsg());

    m_bShowSqlMessages=actionShow_SQL_message->isChecked();
}

void conf_app::onShowStartupMsgI(bool bNoShow)
{
    onShowStartupMsg(!bNoShow);
    this->actionShow_startup_message->setChecked(!bNoShow);
}

void conf_app::onShowStartupMsg(const bool bShow)
{
    QSettings settings("FaoCAS", "App");
    settings.setValue("showStartupMsg", QVariant(bShow).toString());
}

void conf_app::enableConnectionCtrls(const bool bEnable)
{
    lineHost->setEnabled(bEnable);
    lineDatabase->setEnabled(bEnable);
    lineUsername->setEnabled(bEnable);
    linePassword->setEnabled(bEnable);
    cmbDriver->setEnabled(bEnable);
    spinPort->setEnabled(bEnable);
}

void conf_app::onConnectionChange()
{
    pushConnect->setEnabled(!m_bConnected);
    pushDisconnect->setEnabled(m_bConnected);
    groupSettings->setEnabled(m_bConnected);
    groupTables->setEnabled(m_bConnected);    
    enableConnectionCtrls(!m_bConnected);

}

void conf_app::disconnectDB()
{
qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );

        if (cityModel!=0){
            delete cityModel;
            cityModel=0;
        }if (countryModel!=0){
            delete countryModel;
            countryModel=0;
        }if (tableModel!=0){
            delete tableModel;
            tableModel=0;
        }if (viewUsers!=0){
            delete viewUsers;
            viewUsers=0;
        }if (viewRoles!=0){
            delete viewRoles;
            viewRoles=0;
        }if (userModel!=0){
            delete userModel;
            userModel=0;
        }if (roleModel!=0){
            delete roleModel;
            roleModel=0;
        }

    QString strConn;
        QSqlDatabase db=QSqlDatabase::database();
        strConn=db.connectionName();
        db.close();
        db = QSqlDatabase();

    db.removeDatabase(strConn);

    emit statusShow(tr("Connection removed!"));

    m_bConnected=false;

    emit connectionChanged();
    groupSettings->setEnabled(m_bConnected);
    groupTables->setEnabled(m_bConnected);
    groupUsers->setEnabled(m_bConnected);
    groupRole->setEnabled(m_bConnected);

    //m_dbmode=INVALID;
    setWindowTitle(qApp->applicationName() + qApp->applicationVersion());

qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
}

void conf_app::connectDB()
{
    qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );
    emit statusShow(tr("Establishing connection... wait!"));

    enableConnectionCtrls(false);

    m_bConnected=createConnection(lineHost->text(),lineDatabase->text(),
        lineUsername->text(),linePassword->text(),
        cmbDriver->currentText(),spinPort->value());

    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );

    if (m_bConnected){

        saveSettings(0);
        if (!setAppSetting()){
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),tr("Could no set the application setting in the DB"),QMessageBox::Ok,0);
            msgBox.exec();
        }

        if (!fillLocations()){
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                tr("Could not read locations from the database!"),QMessageBox::Ok,0);
            msgBox.exec();
        }
        if (!listTables()){
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                tr("Could not read table list from the database!"),QMessageBox::Ok,0);
            msgBox.exec();
        }
        if (!initUsers()){
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                tr("Could not read users from the database!"),QMessageBox::Ok,0);
            msgBox.exec();
        }
        if (!initRoles()){
            QMessageBox msgBox(QMessageBox::Critical,tr("Connection Error"),
                tr("Could not read roles from the database!"),QMessageBox::Ok,0);
            msgBox.exec();
        }

        loadSettings(1);
        emit statusShow(tr("Connection sucessfully created!"));
    }else{

        QString strError;
        if (QSqlDatabase::database().lastError().type()!=QSqlError::NoError)
            strError=QSqlDatabase::database().lastError().text();
        else
            strError=tr("Could not connect to the database!");

        QMessageBox msgBox(QMessageBox::Warning,tr("Connection Error"),strError,QMessageBox::Ok,0);
        msgBox.exec();

        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }

    emit connectionChanged();
    groupSettings->setEnabled(m_bConnected);
    groupTables->setEnabled(m_bConnected);
    groupUsers->setEnabled(m_bConnected);
    groupRole->setEnabled(m_bConnected);
}


void conf_app::loadTranslationFile()
{

    QString fileName = QFileDialog::getOpenFileName(this,
     tr("Load Translation"), tr(""), tr("Translation Files (*.qm)"));

    if (!fileName.isEmpty()){
        lineTranslation->setText(fileName);
    }

}


void conf_app::saveSettings(const int section)
{
    QSettings settings("FaoCAS", "App");

    if (section==0){

        settings.setValue("host", lineHost->text());
        settings.setValue("database", lineDatabase->text());
        settings.setValue("username", lineUsername->text());
        settings.setValue("password", linePassword->text());
        settings.setValue("driver", cmbDriver->currentText());
        settings.setValue("port", spinPort->value());

    } else if (section==1){

        settings.setValue("country", cmbCountry->currentText());
        settings.setValue("city", cmbCity->currentText());
        settings.setValue("defaultLocale", !chkTranslation->isChecked());
        if (!lineTranslation->text().isEmpty())
            settings.setValue("translation_path", lineTranslation->text());
        settings.setValue("defaultLayout", !chkLayout->isChecked());

    }
}

void conf_app::loadSettings(const int section)
{

    QSettings settings("FaoCAS", "App");

    if (section==0){

        //Settings for the DB credentials
        lineHost->setText(settings.contains("host")?settings.value("host").toString():"localhost");
        spinPort->setValue(settings.contains("port")?settings.value("port").toInt():5432);
        lineDatabase->setText(settings.contains("database")?settings.value("database").toString():"faocasdata");
        lineUsername->setText(settings.contains("username")?settings.value("username").toString():"postgres");
        linePassword->setText(settings.contains("password")?settings.value("password").toString():"test123");

        cmbDriver->setCurrentIndex(
                cmbDriver->findText(settings.contains("driver")?
                settings.value("driver").toString():"QPSQL7"));

    } else if (section==1){

        int found= cmbCountry->findData(settings.value("country").toString(),Qt::DisplayRole,Qt::MatchExactly);
        if (found !=-1){
            cmbCountry->setCurrentIndex(found);
        }
        found= cmbCity->findData(settings.value("city").toString(),Qt::DisplayRole,Qt::MatchExactly);
        if (found !=-1){
            cmbCity->setCurrentIndex(found);
        }

        chkTranslation->setChecked(settings.contains("defaultLocale")?!settings.value("defaultLocale").toBool():false);
        lineTranslation->setText(settings.contains("translation_path")?settings.value("translation_path").toString():"");

        chkLayout->setChecked(settings.contains("defaultLayout")?!settings.value("defaultLayout").toBool():false);


    }else{ //n.b.: it should never come here!
        QMessageBox msgBox(QMessageBox::Critical,tr("Settings Error"),
            tr("You are trying to read a non-existent settings group!"),QMessageBox::Ok,0);
        msgBox.exec();
    }
}

void conf_app::onStatusShow(const QString str)
{
    this->statusBar()->setStyleSheet(tr(
     "QStatusBar {"
     "    background: "
     "qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                     " stop: 0 #FFFF00, stop: 0.4 #FFFF66,"
                                     " stop: 0.5 #FFFF99, stop: 1.0 #FFFFCC)"
     ";"
     "}"));

    this->statusBar()->showMessage(str);
}

bool conf_app::listTables()
{
    QSqlDatabase db=QSqlDatabase::database();
    cmbTables->addItems(db.tables());

    return(cmbTables->count()>0);
}

void conf_app::applyChanges2Table()
{
    bool bError=false;

    if (!tableModel->submitAll()){
        if (tableModel->lastError().type()!=QSqlError::NoError){

            QMessageBox msgBox(QMessageBox::Critical,tr("Table Edition Error"),
                tableModel->lastError().text(),QMessageBox::Ok,0);
            msgBox.exec();

        }else{

            QMessageBox msgBox(QMessageBox::Critical,tr("Table Edition Error"),
                tr("Could not write Sampling levels in the database!"),QMessageBox::Ok,0);
            msgBox.exec();

        }
        bError=true;
    }else{
        emit statusShow(tr("Changes successfully written in the database!"));
    }

    pushApply_2->setEnabled(bError);
    pushInsert->setEnabled(bError);
    pushRemove->setEnabled(bError);
    tableView->setEnabled(bError);
}

void conf_app::showTable(const QString strTable)
{
    if (tableModel==0){
        tableModel= new QSqlRelationalTableModel;
    }

    bool bDirty=false;

    for (int i=0; i < tableModel->rowCount(); ++i){
        for (int j=0; j < tableModel->columnCount(); ++j){
            QModelIndex index=tableModel->index(i,j);
            if (tableModel->isDirty(index)){
                bDirty=true;
                break;
            }
        }
        if (bDirty) break;
    }

    if (bDirty){

        QMessageBox msgBox;
        msgBox.setText(tr("You have uncomitted changes!")
        );
        msgBox.setInformativeText(tr("Are you sure you want to abandon the edition of this table?"));
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();

         switch (ret) {
           //case QMessageBox::Yes:
            case QMessageBox::No:
                return;
                break;
            default:
                break;
         }
    }

    tableModel->setTable(QSqlDatabase().driver()->escapeIdentifier(strTable,
    QSqlDriver::TableName));
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tableModel->sort(0,Qt::AscendingOrder);
    tableModel->select();

    tableView->setModel(tableModel);

    QSqlRecord rec=tableModel->record();
    for (int i=0; i < rec.count(); ++i){
        if (rec.field(i).isGenerated()){
            tableView->hideColumn(i);
            break;
        }
    }

    pushInsert->setEnabled(true);
    pushRemove->setEnabled(true);
    pushApply_2->setEnabled(true);
    tableView->setEnabled(true);
}

void conf_app::insertRow()
{
    if (!tableModel->insertRow(tableModel->rowCount())){

        QMessageBox msgBox(QMessageBox::Critical,tr("Table Edition Error"),
            tr("Could not add a row to this table!"),QMessageBox::Ok,0);
        msgBox.exec();

    }else 
        emit statusShow(tr("Record successfully initialized!"));
}

void conf_app::removeRow()
{
    if (!tableView->selectionModel()->hasSelection()){

        QMessageBox msgBox(QMessageBox::Critical,tr("Table Edition Error"),
            tr("If you want to remove a row, you must select it first!"),QMessageBox::Ok,0);
        msgBox.exec();

    }else{
        int delRow=tableView->selectionModel()->currentIndex().row();
        if (!tableModel->removeRow(delRow)){

            QMessageBox msgBox(QMessageBox::Critical,tr("Table Edition Error"),
                tr("Could not remove a row from this table!"),QMessageBox::Ok,0);
            msgBox.exec();

        }else
            emit statusShow(tr("Row successfully removed!"));
    }
}

bool conf_app::fillLocations()
{
    initModels();

    countryModel->setQuery(
        "SELECT ID, Name from Ref_Countries WHERE"
        "   ID IN (SELECT Country from Ref_Location)"
        );

    cmbCountry->setModel(countryModel);
    cmbCountry->setModelColumn(1);


    return (countryModel->rowCount()>0);
}

bool conf_app::initRoles()
{
    viewRoles = new QSqlQueryModel;
    viewRoles->setHeaderData(1, Qt::Horizontal, tr("Name"));
    viewRoles->setHeaderData(2, Qt::Horizontal, tr("Description"));

    setPreviewQuery(viewRoles,QString(strViewRole));

    initPreviewTable(tableRoles,viewRoles);
/*
    QList<bool> chkCols;
    // fields that should be checkbox are 1
    chkCols<<0<<0<<0<<1<<1<<1<<1<<1<<1;

    if(proxymodel!=0) delete proxymodel;
    proxymodel=new GenericSortProxyModel();
    proxymodel->setparametros(chkCols);
    proxymodel->setSourceModel(roleModel);

    tablePerm->setModel(proxymodel);
    tablePerm->hideColumn(0);
    tablePerm->hideColumn(1);
    tablePerm->hideColumn(2);
*/
    if (mapperRoles!=0) {delete mapperRoles; mapperRoles=0;}

    mapperRoles= new QDataWidgetMapper(this);
    mapperRoles->setModel(roleModel);
    mapperRoles->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    if (nullDelegateRoles!=0) delete nullDelegateRoles;
    QList<int> lText;
    QList<int> lCmb;
    lText << 2;
    nullDelegateRoles=new NullRelationalDelegate(lCmb,lText);
    mapperRoles->setItemDelegate(nullDelegateRoles);

    mapperRoles->addMapping(lineRoleName, roleModel->fieldIndex("name"));
    mapperRoles->addMapping(textRoleDesc, roleModel->fieldIndex("description"));
    mapperRoles->addMapping(checkNew, 3, "checked");
    mapperRoles->addMapping(checkView, 4, "checked");
    mapperRoles->addMapping(checkMod, 5, "checked");
    mapperRoles->addMapping(checkRemove, 6, "checked");
    mapperRoles->addMapping(checkRep, 7, "checked");
    mapperRoles->addMapping(checkAdmin, 8, "checked");

    return true;
}

bool conf_app::initUsers()
{
    viewUsers = new QSqlQueryModel;
    viewUsers->setHeaderData(0, Qt::Horizontal, "name");
    viewUsers->setHeaderData(1, Qt::Horizontal, "role");

    setPreviewQuery(viewUsers,QString(strViewUsers));

    initPreviewTable(tableUsers,viewUsers);

    if (mapperUsers!=0) {delete mapperUsers; mapperUsers=0;}

    mapperUsers= new QDataWidgetMapper(this);
    mapperUsers->setModel(userModel);
    mapperUsers->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    comboRole->setModel(userModel->relationModel(1));
    comboRole->setModelColumn(userModel->relationModel(1)->fieldIndex("name"));

    mapperUsers->addMapping(lineUser, 0);
    mapperUsers->addMapping(lineUserPassword, userModel->fieldIndex("password"));//the other line password is dummy!
    mapperUsers->addMapping(lineUserPassword_2, userModel->fieldIndex("password"));//the other line password is dummy!
    mapperUsers->addMapping(comboRole, 1);
    mapperUsers->addMapping(textUserDesc, userModel->fieldIndex("description"));

    if (nullDelegateUsers!=0) delete nullDelegateUsers;
    QList<int> lCmb;
    lCmb << 1;//0 << 1 << 4;
    QList<int> lText;
    lText << 3;
    QList<int>lPass;
    lPass << 4;
    nullDelegateUsers=new PasswdDelegate(lCmb,lText,lPass);
    mapperUsers->setItemDelegate(nullDelegateUsers);

    return true;
}

bool conf_app::genericCreateRecord(QSqlTableModel* aModel,QPushButton* aPushEdit,
                              QPushButton* aPushRemove)
{
    //removing filters
    if (aModel==0) return false;
    if (!aModel->filter().isEmpty()) aModel->setFilter(tr(""));

    if (!discardNewRecord(aModel,aPushEdit)) return false;

    if (pushEditUser->isChecked()) pushEditUser->setChecked(false);
    aPushEdit->setEnabled(false);
    aPushRemove->setEnabled(false);

    return insertRecordIntoModel(aModel);
}

void conf_app::createRoleRecord()
{
    createRecord(roleModel,mapperRoles,groupRoleDetail,roleButtonBox,pushEditRole,pushRemoveRole);

    //some more specific user UI settings go here!
    lineRoleName->clear();
    textRoleDesc->clear();

    QObjectList children=frame->children();
    for (int i=0; i < children.count(); ++i){
        if (qobject_cast<QCheckBox*>(children.at(i))!=0){
            qobject_cast<QCheckBox*>(children.at(i))->setChecked(false);
        }
    }
}

void conf_app::createUserRecord()
{
    createRecord(userModel,mapperUsers,groupUsersDetail,userButtonBox,pushEditUser,pushRemoveUser);

    //some more specific user UI settings go here!

    lineUser->clear();
    lineUserPassword->clear();
    lineUserPassword_2->clear();
    textUserDesc->clear();

    m_previousUser="";
}

void conf_app::createRecord(QSqlTableModel* aModel,QDataWidgetMapper* aMapper, QGroupBox* aGroupDetails,
                            QDialogButtonBox* aButtonBox,QPushButton* aPushEdit,QPushButton* aPushRemove)
{
    if (!genericCreateRecord(aModel,aPushEdit,aPushRemove)){
        QMessageBox::critical(this, tr("Record Error"),
                            tr("Could not create record!"));
        return;
    }

    aMapper->toLast();

    UI4NewRecord(aGroupDetails,aButtonBox);//init UI
}

void conf_app::UI4NewRecord(QGroupBox* aGroupDetails,QDialogButtonBox* aButtonBox)
{
    aGroupDetails->setVisible(true);
    emit lockControls(false,aGroupDetails);

    aButtonBox->button(QDialogButtonBox::Close)->setVisible(false);
    aButtonBox->button(QDialogButtonBox::Apply)->setVisible(true);
    aButtonBox->button(QDialogButtonBox::Apply)->setEnabled(true);
}

bool conf_app::onUserButtonClick(QAbstractButton* button)
{
    return onButtonClick(button,userButtonBox,mapperUsers,groupUsersDetail,viewUsers,
        strViewUsers,pushEditUser,pushNewUser,pushRemoveUser,userModel,tableUsers);
}

bool conf_app::onRoleButtonClick(QAbstractButton* button)
{
    return onButtonClick(button,roleButtonBox,mapperRoles,groupRoleDetail,viewRoles,
        strViewRole,pushEditRole,pushNewRole,pushRemoveRole,roleModel,tableRoles);
}

bool conf_app::onButtonClick(QAbstractButton* button,QDialogButtonBox* aButtonBox,QDataWidgetMapper* aMapper, QGroupBox* aGroupDetails,
                              QSqlQueryModel* viewModel, const QString strQuery, QPushButton* aPushEdit,
                              QPushButton* aPushNew, QPushButton* aPushRemove, QSqlTableModel* aModel,QTableView* aTable)
{
    if ( aButtonBox->buttonRole(button) == QDialogButtonBox::RejectRole)
    {
        aGroupDetails->hide();
        aModel->revertAll();
        return true;

    } else if (aButtonBox->buttonRole(button) == QDialogButtonBox::ApplyRole){
        emit submit(aMapper,aButtonBox,aGroupDetails,viewModel,strQuery,aPushEdit,aPushNew,
            aPushRemove,aModel,aTable);
        return true;
    }
    else return false;
}

bool conf_app::addDatabaseUser(const QString strUser, const QString strPasswd)
{
    //We call an sp to do this
    QSqlQuery query;
    query.prepare("select add_user(?,?)");
    query.bindValue(0, strUser);
    query.bindValue(1, strPasswd);

    if (!query.exec()){
        qDebug() << query.lastError().text() << endl;
        return false;
    }

    return true;
}

bool conf_app::reAddDatabaseUser(const QSqlTableModel* aModel)
{
    if (aModel!=userModel) return false;

    QString strUser=lineUser->text();
    QString strPasswd=lineUserPassword->text();

    //first remove user
    if (!removeDatabaseUser(m_previousUser)) return false;
    //than add it
    if (!addDatabaseUser(strUser, strPasswd)) return false;

    return true;

}

bool conf_app::ApplyModel(QDataWidgetMapper* aMapper, QDialogButtonBox* aButtonBox, QGroupBox* aGroupDetails,
                              QSqlQueryModel* viewModel, const QString strQuery, QPushButton* aPushEdit,
                              QPushButton* aPushNew, QPushButton* aPushRemove, QSqlTableModel* aModel,QTableView* aTable)
{
    if (validate(aModel)){
            //we remove and add the user here
            if (aModel==userModel)
                if (!reAddDatabaseUser(aModel)) return false;
            return reallyApplyModel(aMapper,aButtonBox,aGroupDetails,viewModel,strQuery,aPushEdit,aPushNew,aPushRemove,aModel,aTable);
    }else{
        return false;
    }

}

bool conf_app::validate(const QSqlTableModel* aModel)
{
    bool bOk=true;
    QString strError="";
    QString strStyleSheet="background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));";

    //Validating user controls
    if (aModel==userModel){

        //cleaning the formatting from previous validations...
        lineUser->setStyleSheet("");
        comboRole->setStyleSheet("");
        lineUserPassword->setStyleSheet("");
        lineUserPassword_2->setStyleSheet("");

        if (lineUser->text().isEmpty()){
            strError=tr("Username must not be empty!"); lineUser->setStyleSheet(strStyleSheet);
        }else if (comboRole->currentIndex()==-1) {
            strError=tr("Role must not be empty!"); comboRole->setStyleSheet(strStyleSheet);
        }else if (lineUserPassword->text().isEmpty()){
         strError=tr("Password must not be empty!"); lineUserPassword->setStyleSheet(strStyleSheet);
        }else if (lineUserPassword_2->text().isEmpty()) {
            strError=tr("Please type again the password!"); lineUserPassword_2->setStyleSheet(strStyleSheet);
        }else if (lineUserPassword->text().compare(lineUserPassword_2->text())!=0) {
            strError=tr("Passwords don't match!");
            lineUserPassword->setStyleSheet(strStyleSheet);
            lineUserPassword_2->setStyleSheet(strStyleSheet);
        }

        bOk=!(lineUser->text().isEmpty() || comboRole->currentIndex()==-1 || lineUserPassword->text().isEmpty()
            || lineUserPassword_2->text().isEmpty() || (lineUserPassword->text().compare(lineUserPassword_2->text())!=0));

    } else if (aModel==roleModel){

        //cleaning the formatting from previous validations...
        lineRoleName->setStyleSheet("");
        checkAdmin->setStyleSheet("");
        checkMod->setStyleSheet("");
        checkNew->setStyleSheet("");
        checkRemove->setStyleSheet("");
        checkRep->setStyleSheet("");
        checkView->setStyleSheet("");

        if (lineRoleName->text().isEmpty()){
            strError=tr("Role name must not be empty!"); lineRoleName->setStyleSheet(strStyleSheet);
        } else if (!checkAdmin->isChecked() && !checkMod->isChecked() &&
            !checkNew->isChecked() && !checkRemove->isChecked() && !checkRep->isChecked()
            && !checkView->isChecked()){
                strError=tr("You must select at least one permission type!");
                checkAdmin->setStyleSheet(strStyleSheet);
                checkMod->setStyleSheet(strStyleSheet);
                checkNew->setStyleSheet(strStyleSheet);
                checkRemove->setStyleSheet(strStyleSheet);
                checkRep->setStyleSheet(strStyleSheet);
                checkView->setStyleSheet(strStyleSheet);
        }

        bOk=!lineRoleName->text().isEmpty() && (checkAdmin->isChecked() || checkMod->isChecked() ||
            checkNew->isChecked() || checkRemove->isChecked() || checkRep->isChecked()
            || checkView->isChecked());
    } else bOk=false;

    if (!bOk)
        QMessageBox::critical(this, tr("Validation Error"),
                            strError);

    return bOk;
}

bool conf_app::reallyApplyModel(QDataWidgetMapper* aMapper, QDialogButtonBox* aButtonBox, QGroupBox* aGroupDetails,
                                QSqlQueryModel* viewModel, const QString strQuery, QPushButton* aPushEdit,QPushButton* aPushNew,
                                QPushButton* aPushRemove, QSqlTableModel* aModel,QTableView* aTable)
{
    bool bError=false;

    if (aMapper->submit()){
                    bError=!
                        aModel->submitAll();
                    if (bError){
                        if (aModel->lastError().type()!=QSqlError::NoError)
                            QMessageBox::critical(this, tr("Database Error"),
                                                    aModel->lastError().text());
                        else
                            QMessageBox::critical(this, tr("Database Error"),
                                                    tr("Could not write user in the database!"));
                    }
                    else setPreviewQuery(viewModel,strQuery);        //}else bError=true;
    }else bError=true;

    aButtonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);

    if (!aPushEdit->isChecked())
        aButtonBox->button(QDialogButtonBox::Apply)->setVisible(bError);

    if (!bError) emit editLeave(true,aPushEdit,aPushNew,aPushRemove,aGroupDetails,aMapper,aModel,
        aButtonBox,viewModel,strQuery,aTable,false);

    return true;
}

void conf_app::onLockControls(bool bLock,QGroupBox* aGroupDetails)
{
    //Enabling everuthing *except* the buttonbox!
    QObjectList children=aGroupDetails->children();
    for (int i=0; i < children.count(); ++i){
        if (qobject_cast<QDialogButtonBox*>(children.at(i))==0){
            if (qobject_cast<QWidget*>(children.at(i))!=0){
                qobject_cast<QWidget*>(children.at(i))->setEnabled(!bLock);
            }
        }
    }
}

void conf_app::setPreviewQuery(QSqlQueryModel* viewModel, const QString strQuery)
{
    viewModel->setQuery(strQuery);
}

void conf_app::adjustEnables(QPushButton* aPushEdit,QPushButton* aPushRemove,QSqlTableModel* aModel)
{
    aPushEdit->setEnabled(aModel->rowCount()>0);
    aPushRemove->setEnabled(aModel->rowCount()>0);
}

void conf_app::adjustUserEnables()
{
    if (!userModel || !pushEditUser || !pushRemoveUser) return;
    adjustEnables(pushEditUser,pushRemoveUser,userModel);
}

void conf_app::adjustRoleEnables()
{
    if (!roleModel || !pushEditRole || !pushRemoveRole) return;
    adjustEnables(pushEditRole,pushRemoveRole,roleModel);
}

void conf_app::previewRole(QModelIndex index)
{//entry point for roles
    previewRecord(index,mapperRoles,pushNewRole,pushEditRole,pushRemoveRole,groupRoleDetail,
        roleButtonBox,roleModel,viewRoles,strViewRole,tableRoles);
}

void conf_app::previewUser(QModelIndex index)
{//entry point for users
    previewRecord(index,mapperUsers,pushNewUser,pushEditUser,pushRemoveUser,groupUsersDetail
        ,userButtonBox,userModel,viewUsers,strViewUsers,tableUsers);
}

void conf_app::previewRecord(const QModelIndex index,QDataWidgetMapper* aMapper,QPushButton* aPushNew,
                             QPushButton* aPushEdit, QPushButton* aPushRemove,QGroupBox* aGroupDetails,QDialogButtonBox* aButtonBox,QSqlTableModel* aModel,
                             QSqlQueryModel* viewModel, const QString strQuery, QTableView* aTable)
{
    if (!index.isValid()) return;

    m_lastIndex=index;

    QModelIndex idx=index.model()->index(index.row(),0);
    if (!idx.isValid()){
        QMessageBox::critical(this, tr("Preview Error"),
                                tr("Could not preview this record!"));
        return;
    }

    if (abstractPreviewRow(index,aPushNew,aPushEdit,aPushRemove,aGroupDetails,aButtonBox,aModel,
        aMapper,viewModel,strQuery,aTable)){
        aMapper->toLast();
    }
}

bool conf_app::discardNewRecord(QSqlTableModel* aModel, QPushButton* aPushEdit)
{
    QModelIndex dirtyIdx=aModel->index(aModel->rowCount()-1,0);

    if (aModel->isDirty(dirtyIdx) || aPushEdit->isChecked()){

        QMessageBox msgBox;
        msgBox.setText(aPushEdit->isChecked()?tr("You are editing a record."):
            tr("You are creating a new record."));
        msgBox.setInformativeText(tr("Are you sure you want to leave and loose all changes?"));
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);
        int ret = msgBox.exec();

         switch (ret) {
           case QMessageBox::Yes:
                aModel->revertAll();
                aPushEdit->setChecked(false);
                return true;
               break;
           case QMessageBox::No:
                return false;
               break;
           default:
               // should never be reached
               break;
         }
    }

    return true;
}

bool conf_app::abstractPreviewRow(QModelIndex index,QPushButton* aPushNew,QPushButton* aPushEdit,QPushButton* aPushRemove,
      QGroupBox* aGroupDetails,QDialogButtonBox* aButtonBox, QSqlTableModel* aModel,
      QDataWidgetMapper* aMapper, QSqlQueryModel* viewModel, const QString strQuery, QTableView* aTable)
{
    bool bOk=true;

    //its on a new record
    if (!discardNewRecord(aModel,aPushEdit)) return false;

    aGroupDetails->setVisible(true);

    emit lockControls(true,aGroupDetails);
    aButtonBox->button(QDialogButtonBox::Apply)->setVisible(false);
    aButtonBox->button(QDialogButtonBox::Close)->setVisible(true);

    aPushEdit->setEnabled(true);
    aPushEdit->setEnabled(true);
    aPushRemove->setEnabled(true);

    //setting the filter
    QModelIndex idx=index.model()->index(index.row(),0);
    if (!idx.isValid()){
        bOk=false;
    }

    QString id=idx.data().toString();

    if (qobject_cast<QSqlTableModel*>(aModel)!=0)
        aModel->setFilter(aModel->tableName()+".ID="+id);

    if (aModel->rowCount()!=1)
        bOk=false;

    if (!bOk)
            QMessageBox::critical(this, tr("Preview Error"),
                                tr("Could not preview this record!"));

    return true;//returns if it is discarded or not!
}

bool conf_app::editUser(bool on)
{
    if (on) m_previousUser=lineUser->text();

    return editRecord(on,userModel,pushEditUser,pushNewUser,pushRemoveUser,groupUsersDetail,
        userButtonBox,mapperUsers,viewUsers,strViewUsers,tableUsers);
}

bool conf_app::editRole(bool on)
{
    return editRecord(on,roleModel,pushEditRole,pushNewRole,pushRemoveRole,groupRoleDetail,
        roleButtonBox,mapperRoles,viewRoles,strViewRole,tableRoles);
}

bool conf_app::editRecord(const bool on,QSqlTableModel* aModel,QPushButton* aPushEdit,QPushButton* aPushNew,
                          QPushButton* aPushRemove,QGroupBox* aGroupDetails,QDialogButtonBox* aButtonBox,QDataWidgetMapper* aMapper,
                          QSqlQueryModel* viewModel, const QString strQuery,QTableView* aTable)
{
    if (!on){

      //lets do this first, and then we decide if we want to turn it off!
        aPushEdit->setChecked(true);

        QMessageBox msgBox;
        msgBox.setText(tr("You are modifying a record."));
        msgBox.setInformativeText(tr("Do you want to save your changes?"));
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();

         switch (ret) {
           case QMessageBox::Save:
               ApplyModel(aMapper,aButtonBox,aGroupDetails,viewModel,strQuery,aPushEdit,
                   aPushNew,aPushRemove,aModel,aTable);
               return false;
           case QMessageBox::Discard:
               aModel->revertAll();
               emit editLeave(true,aPushEdit,aPushNew,aPushRemove,
                   aGroupDetails,aMapper,aModel,aButtonBox,viewModel,strQuery,aTable,
                   true);
               break;
           case QMessageBox::Cancel:
               aPushEdit->setChecked(true);
                emit editLeave(false,aPushEdit,aPushNew,aPushRemove,aGroupDetails,aMapper,aModel,
                    aButtonBox,viewModel,strQuery,aTable);
                return true;
                break;
           default:
               // should never be reached
               break;
         }

    }else{//Let's force the user to click on the table!
        if (!aTable->selectionModel()->hasSelection() || !aGroupDetails->isVisible()){

            QMessageBox::critical(this, tr("Edit Record"),
                                    tr("You must select an item to edit!"));

            aPushEdit->setChecked(false);
            return false;
        }

        emit editLeave(false,aPushEdit,aPushNew,aPushRemove,aGroupDetails,aMapper,aModel,aButtonBox,
            viewModel,strQuery,aTable);
    }
    aButtonBox->button(QDialogButtonBox::Close)->setVisible(!on);
    emit lockControls(!on,aGroupDetails);

    return true;
}

void conf_app::removeUser()
{
    removeRecord(tableUsers,userModel,groupUsersDetail,viewUsers,QString(strViewUsers),2);
}

void conf_app::removeRole()
{
    removeRecord(tableRoles,roleModel,groupRoleDetail,viewRoles,QString(strViewRole),0);
}

bool conf_app::removeDatabaseUser(const QString strUser)
{
    //We call an sp to do this
    QSqlQuery query;
    query.prepare("select remove_user(?)");
    query.bindValue(0, strUser);

    if (!query.exec()){
        qDebug() << query.lastError().text() << endl;
        return false;
    }

    return true;
}


void conf_app::removeRecord(QTableView* aTable, QSqlTableModel* aModel, QGroupBox* aGroupDetails,
                            QSqlQueryModel* viewModel, const QString strQuery, const int col)
{
    if (!aTable->selectionModel()->hasSelection()){
        QMessageBox::critical(this, tr("Remove Error"),
                                tr("You have not selected any record to remove!"));
        return;
    }

    if (!aTable->selectionModel()->currentIndex().isValid()){
        QMessageBox::critical(this, tr("Remove Error"),
                                tr("You have not selected a valid record!"));
        return;
    }

    QModelIndex idx;
    if (!translateIndex(aTable->selectionModel()->currentIndex(),col,aTable,aModel,idx)){
        QMessageBox::critical(this, tr("Remove Error"),
                                tr("Could not remove this record!"));
        return;
    }

    QModelIndex idName=aTable->model()->index(aTable->selectionModel()->currentIndex().row(),1);

    QMessageBox msgBox;
    msgBox.setText(tr("You have selected record '") + idName.data().toString() +
        tr("' for deletion."));
    msgBox.setInformativeText(tr("Are you sure you want to remove this record and all its dependants?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();

     switch (ret) {
       case QMessageBox::Yes:
            //Try to remove database user first
         if (aTable->objectName()=="tableUsers" && ! removeDatabaseUser(idName.data().toString())){
                QMessageBox::critical(this, tr("Remove Error"),
                                        tr("Could not remove database record! Aborting..."));
                return;
            }

            if ( !aModel->removeRow(idx.row()) ){

                if (aModel->lastError().type()!=QSqlError::NoError)
                    QMessageBox::critical(this, tr("Remove Error"),
                                            aModel->lastError().text());
                else
                    QMessageBox::critical(this, tr("Remove Error"),
                                            tr("Could not remove this record!"));

            }else{
                if (!aModel->submitAll()){

                    if (aModel->lastError().type()!=QSqlError::NoError)
                        QMessageBox::critical(this, tr("Remove Error"),
                                                aModel->lastError().text());
                    else
                        QMessageBox::critical(this, tr("Remove Error"),
                                                tr("Could not remove this record!"));

                }
                else{
                    statusShow(tr("Record successfully removed from the database!"));
                    setPreviewQuery(viewModel,strQuery);
                    aGroupDetails->hide();                    
                }
            }

           break;
       case QMessageBox::No:
           return;
           break;
       default:
           // should never be reached
           break;
     }
}

bool conf_app::translateIndex(const QModelIndex inIdx, const int col, QTableView* aTable, QSqlTableModel* aModel, QModelIndex& outIdx)
{
    QModelIndex idx=aTable->model()->index(inIdx.row(),0);
    if (!idx.isValid()){

        QMessageBox::critical(this, tr("Remove Error"),
                                tr("Could not remove this row!"));

        return false;
    }

    QModelIndex start=aModel->index(0,col);
    QModelIndexList list=aModel->match(start,0,idx.data(),1,0);

    if (list.count()!=1) return false;
    outIdx=list.at(0);

    return true;
}

void conf_app::initPreviewTable(QTableView* aTable, QSqlQueryModel* view)
{
    aTable->setModel(view);

    if (aTable==tableUsers){
        connect(aTable->model(), SIGNAL(rowsInserted ( const QModelIndex, int, int)), this,
            SLOT(adjustUserEnables()));
        connect(aTable->model(), SIGNAL(rowsRemoved ( const QModelIndex, int, int)), this,
            SLOT(adjustUserEnables()));
    }else if (aTable==tableRoles){
        connect(aTable->model(), SIGNAL(rowsInserted ( const QModelIndex, int, int)), this,
            SLOT(adjustRoleEnables()));
        connect(aTable->model(), SIGNAL(rowsRemoved ( const QModelIndex, int, int)), this,
            SLOT(adjustRoleEnables()));
    }

    aTable->setAlternatingRowColors(true);
    aTable->verticalHeader()->hide();
    aTable->setSelectionMode(
        QAbstractItemView::SingleSelection);
    aTable->setSelectionBehavior( QAbstractItemView::SelectRows);
    aTable->horizontalHeader()->setClickable(false);
    aTable->horizontalHeader()->setFrameStyle(QFrame::NoFrame);
    aTable->hideColumn(0);
}

void conf_app::resizeEvent ( QResizeEvent * event )
{
    (void) event;
    if (tableUsers!=0) resizeToVisibleColumns(tableUsers);
    if (tableRoles!=0) resizeToVisibleColumns(tableRoles);

    if (toolBox->currentIndex()==3)
        groupUsers->layout()->update();
}
//////////////////////////////////////////////////////////////////////

bool queryShowStartupMsg()
{
    QSettings settings("FaoCAS", "App");
    if (!settings.contains("showStartupMsg"))
        return true;

    return settings.value("showStartupMsg").toBool();
}

bool queryShowSqlMsg()
{
    QSettings settings("FaoCAS", "App");
    if (!settings.contains("showSqlMsg"))
        return true;

    return settings.value("showSqlMsg").toBool();
}

void resizeToVisibleColumns ( QTableView* table )
{
    if (table->model()!=0){
        int ct=0;
        for (int i=0; i < table->model()->columnCount(); ++i)
            if (!table->isColumnHidden(i)) ++ ct;

        for (int i=0; i < table->model()->columnCount(); ++i)
            if (!table->isColumnHidden(i))
                table->setColumnWidth(i,table->width()/ct);
    }
}

void filterTable(QSqlTableModel* table, const QString strKeyword)
{            
    table->setFilter(strKeyword + "<>'" + qApp->translate("null_replacements", strNa)
            + "' AND " + strKeyword + "<>'" + qApp->translate("bin", strOutside)
                     + "' AND "+ strKeyword + "<>'" + qApp->translate("null_replacements", strMissing)
            + "' AND "+ strKeyword + "<>'" + qApp->translate("null_replacements", strOther)
            + "' AND "+ strKeyword + "<>'" + qApp->translate("null_replacements", strUnknown)
            + "'");
}
