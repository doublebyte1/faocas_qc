//#include <QTest>
#include "mainfrm.h"

#define JUMP 1 //!< This is the last common form from logbook and sampling (where the "jump" starts for logbook!)
#define STEP 3 //!< This is the number of forms that only exist on sampling (size of the "jump" for logbook!)

MainFrm::MainFrm(RoleDef* roleDef, QWidget *parent, Qt::WFlags flags):
m_roleDef(roleDef),QMainWindow(parent, flags){

    pFrmFrame=0;
    pFrmMinorStrata=0;
    pFrmFrameDetails=0;
    pFrmSampling=0;
    pFrmCell=0;
    sSample=new Sample;
    pFrmVesselType=0;
    pFrmVessel=0;
    pFrmTrip=0;
    pFrmOperation=0;
    pFrmCatch=0;
    pFrmPrjPage=0;
    toolbar=0;
    ruleCheckerPtr=0;
    pFrmReports=0;
    process=0;
    curHelpId="";
    handler=0;

    setAttribute( Qt::WA_AlwaysShowToolTips);
    setupUi(this);

    initUi();
}

MainFrm::~MainFrm()
{
    tabWidget->disconnect();
    vTabs.clear();

    if (pFrmReports!=0) delete pFrmReports;
    if (pFrmFrame!=0) delete pFrmFrame;
    if (pFrmMinorStrata!=0) delete pFrmMinorStrata;
    if (pFrmFrameDetails!=0) delete pFrmFrameDetails;
    if (pFrmSampling!=0) delete pFrmSampling;
    if (pFrmCell!=0) delete pFrmCell;
    if (pFrmVesselType!=0) delete pFrmVesselType;
    if (pFrmVessel!=0) delete pFrmVessel;
    if (pFrmTrip!=0) delete pFrmTrip;
    if (pFrmOperation!=0) delete pFrmOperation;
    if (pFrmCatch!=0) delete pFrmCatch;
    if (pFrmPrjPage!=0) delete pFrmPrjPage;
    if (toolbar!=0) delete toolbar;
    //n.b.: delete these in the end, as they are used by the forms!
    if (sSample!=0) delete sSample;
    if (ruleCheckerPtr!=0) delete ruleCheckerPtr;
    if (handler!=0) delete handler;

    if (process!=0 && process->isOpen()){
        // Make sure we close the process before deleting it;
        process->close();
        delete process; process=0;
    }
}

void MainFrm::initRules()
{
    if (ruleCheckerPtr!=0) {delete ruleCheckerPtr; ruleCheckerPtr=0;}

    ruleCheckerPtr=new RuleChecker();

    connect(ruleCheckerPtr, SIGNAL(showStatus(QString)), this,
        SLOT(statusShow(QString)));

    connect(ruleCheckerPtr, SIGNAL(showError(QString,bool)), this,
        SLOT(displayError(QString,bool)));

    rulesInitialized(ruleCheckerPtr->init());
}

void MainFrm::rulesInitialized(bool bReady)
{
    if (!bReady)
        displayError(tr("Could not initialize rules!"),true);
    else
        statusShow(tr("Rules correctly initialized!"));
}

void MainFrm::initUi()
{
    //read this from the app settings
    this->setWindowTitle(qApp->applicationName() + qApp->applicationVersion());

     connect(actionMedfisis_Help, SIGNAL(triggered()),this,
        SLOT(callAssistant() ),Qt::UniqueConnection);

     connect(actionAbout_this_project, SIGNAL(triggered()),this,
        SLOT(aboutThisProject () ),Qt::UniqueConnection);

     connect(actionLoad, SIGNAL(triggered()),this,
        SLOT(loadFile () ),Qt::UniqueConnection);

     connect(actionClose, SIGNAL(triggered()),this,
        SLOT(closeFile () ),Qt::UniqueConnection);

     connect(actionSave, SIGNAL(triggered()),this,
        SLOT(writeFile () ),Qt::UniqueConnection);

     connect(actionReports, SIGNAL(triggered()),this,
        SLOT(loadSecondaryFrm() ),Qt::UniqueConnection);

     connect(actionRebuild_Indexes, SIGNAL(triggered()),this,
        SLOT(RebuildIndexes() ),Qt::UniqueConnection);

     for (int i = 0; i < MaxRecentFiles; ++i) {
         recentFileActs[i] = new QAction(this);
         recentFileActs[i]->setVisible(false);
         connect(recentFileActs[i], SIGNAL(triggered()),
                 this, SLOT(openRecentFile()));
     }

    separatorAct = menuSampling_Operation->addSeparator();
    for (int i = 0; i < MaxRecentFiles; ++i)
        menuSampling_Operation->addAction(recentFileActs[i]);
    menuSampling_Operation->addSeparator();
    updateRecentFileActions();

    toolbar=addToolBar(tr("Main Toolbar"));
    toolbar->setFloatable(true);
    toolbar->setMovable(true);
    toolbar->addAction(this->actionNew);
    toolbar->addAction(this->actionLoad);
    toolbar->addAction(this->actionClose);
    toolbar->addAction(this->actionSave);
    toolbar->addSeparator();
    toolbar->addAction(this->actionReports);
    //since it is impossible to remove it later, we must take care on inserting the separator here!
    if (m_roleDef->bAdmin || m_roleDef->bRep)
        toolbar->addSeparator();
    toolbar->addAction(actionRebuild_Indexes);
    if (m_roleDef->bAdmin)
        toolbar->addSeparator();
    toolbar->addAction(this->actionAbout_this_project);
    toolbar->addAction(this->actionMedfisis_Help);
    toolbar->addSeparator();
    toolbar->addAction(this->actionExit);

    pFrmReports=new FrmReports();
    initSecondaryFrm(pFrmReports);

    applyReportAdminPermissions();
}

void MainFrm::applyReportAdminPermissions()
{
    if (!m_roleDef->bAdmin){
        menubar->removeAction(menuTools->menuAction());
        toolbar->removeAction(actionRebuild_Indexes);
    }
    if (!m_roleDef->bRep){
        menuView->removeAction(actionReports);
        toolbar->removeAction(actionReports);
    }

    if (!m_roleDef->bAdmin && !m_roleDef->bRep){
        menubar->removeAction(menuView->menuAction());
    }
}

void MainFrm::RebuildIndexes()
{
    //Rebuilding indexes on a separate thread...
    RebuildIndexesThread t;

    connect(&t, SIGNAL(showStatus(QString)), this,
        SLOT(statusShow(QString)));

    connect(&t, SIGNAL(showError(QString,bool)), this,
        SLOT(displayError(QString,bool)));

    t.run();
}

void MainFrm::initSecondaryFrm(SecondaryFrm* frm)
{
    frm->hide();
    vSecondaryFrms.push_back(frm);

     connect(frm, SIGNAL(showStatus(QString)), this,
    SLOT(statusShow(QString)));

     connect(frm, SIGNAL(showError(QString, const bool)), this,
    SLOT(displayError(QString, const bool)));

     connect(frm, SIGNAL(hideFrm()), this,
    SLOT(closeSecondaryFrm()),Qt::UniqueConnection);
}

bool MainFrm::readXMLFile(const QString strFileName)
{
    //TODO: add some XML semantic  validation?

    //SessionFileParser *handler=new SessionFileParser(sSample);
    if (handler!=0) {delete handler; handler=0;}
    handler=new SessionFileParser(sSample);

    QFile file( strFileName );
    QXmlInputSource source( &file );

    QXmlSimpleReader reader;
    reader.setContentHandler( handler );
    reader.setErrorHandler(handler);

    if (!reader.parse( source )){
        //delete handler; handler=0;
        return false;
    }

    //delete handler; handler=0;
    return true;
}

void MainFrm::loadTabs()
{
    qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );
    statusShow(tr("Wait..."));

        resetTabs();

        initTabs();

        if (pFrmFrame==0) return;
        this->tabWidget->insertTab(0,pFrmFrame, pFrmFrame->title());

        if (sSample->frameId==-1 || sSample->frameTimeId==-1) return;

        QVector<int> vSample;
        vSample << sSample->frameTimeId;
        vSample << sSample->minorStrataId;
        vSample << sSample->cellId;
        vSample << sSample->vesselTypeId;
        vSample << sSample->sampVesselId;
        vSample << sSample->tripId;
        vSample << sSample->operationId;
        vSample << sSample->catchId;

        if (vSample.size() != vTabs.size()){
            displayError(tr("Could not load project file!"),true);//TODO: improve errors!
        }else{

            bool bOk=true;
            int ct=0;
            QVector<int>::const_iterator it;
             for (it = vSample.begin(); it != vSample.end(); ++it){

                 if ( qobject_cast<PreviewTab*>(vTabs.at(ct))!=0){
                    PreviewTab* pTab=qobject_cast<PreviewTab*>(vTabs.at(ct));

                    if (*it!=-1){

                            if (!pTab->tableSelect(*it)){
                                displayError(tr("Could not find the saved record on form ") +
                                    vTabs.at(ct)->title(),true);
                                bOk=false;
                                break;
                            }

                            QVector<int>::const_iterator it2;
                            if (sSample->bLogBook && pTab->title()==tr("Stratum"))
                                it2=it+3;
                            else
                                it2=it+1;

                            //qDebug() << pTab->objectName() << endl;
                            if (*it2!=-1 && ct<vTabs.size()-1){
                                //|| (sSample->bLogBook && ( pTab->objectName()){
                             vTabs.at(ct)->setLoading(true);
                             if (!vTabs.at(ct)->next()){
                                bOk=false;
                                vTabs.at(ct)->setLoading(false);
                                break;
                             }
                             vTabs.at(ct)->setLoading(false);
                        }
                    }
                     ct++;

                 }//cast
             }//for

            if (bOk) statusShow(tr("Project successfully loaded."));
            else displayError (tr("Could not load tab ") + vTabs.at(ct)->title() + tr("!"),false);
        }

    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
}

void MainFrm::loadSecondaryFrm()
{
    QAction *frm = (QAction *)sender();

    if (frm==0) return;

    if (frm==actionReports)loadSecondaryFrm(pFrmReports);
}

void MainFrm::loadSecondaryFrm(SecondaryFrm* frm)
{
    if (!frm->isVisible()){

        //hide the tabwidget
        if (tabWidget->isVisible()){
            tabWidget->hide();
            gridLayout->removeWidget(tabWidget);
        }

        //now hide the other frms
        QVector<SecondaryFrm*>::iterator it;
        for (it = vSecondaryFrms.begin(); it != vSecondaryFrms.end(); ++it){
            if ((*it)!= frm && (*it)->isVisible()){
                (*it)->hide();
                gridLayout->removeWidget(*it);
            }
        }

        gridLayout->addWidget(frm, 0, 0, 1, 1);
        frm->show();
    }
}

void MainFrm::closeSecondaryFrm(SecondaryFrm* frm)
{
    if (frm->isVisible()){
        gridLayout->removeWidget(frm);
        frm->hide();
        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);
        tabWidget->show();
    }
}

void MainFrm::closeSecondaryFrm()
{
    if ( qobject_cast<SecondaryFrm*>(sender())!=0)
        closeSecondaryFrm(qobject_cast<SecondaryFrm*>(sender()));
}

void MainFrm::closeFile()
{
    if (pFrmReports->isVisible())
        closeSecondaryFrm(pFrmReports);

    if ( tabWidget->count() <1 ){
        QMessageBox::information(this, tr("FaoCAS"),
                                        tr("There is nothing to close."),
                                        QMessageBox::Ok);
         return;
    }

    //TODO: Ask if you want to save the changes (also on the load file)
    resetTabs();
}

void MainFrm::openRecentFile()
{
     QAction *action = qobject_cast<QAction *>(sender());
     if (action){
        if (!readXMLFile(action->data().toString()))
            this->displayError(tr("Could not parse XML file! Are you sure it exists and is a valid project file?"),true);
        else
            loadTabs();
     }
}

 void MainFrm::setCurrentFile(const QString &fileName)
 {
     curFile = fileName;
     setWindowFilePath(curFile);

     QSettings settings;
     QStringList files = settings.value("recentFileList").toStringList();
     files.removeAll(fileName);
     files.prepend(fileName);
     while (files.size() > MaxRecentFiles)
         files.removeLast();

     settings.setValue("recentFileList", files);
    updateRecentFileActions();

}

void MainFrm::updateRecentFileActions()
{
     QSettings settings;
     QStringList files = settings.value("recentFileList").toStringList();

     int numRecentFiles = qMin(files.size(), (int)MaxRecentFiles);

     for (int i = 0; i < numRecentFiles; ++i) {
         QString text = tr("&%1 %2").arg(i + 1).arg(strippedName(files[i]));
         recentFileActs[i]->setText(text);
         recentFileActs[i]->setData(files[i]);
         recentFileActs[i]->setVisible(true);
     }
     for (int j = numRecentFiles; j < MaxRecentFiles; ++j)
         recentFileActs[j]->setVisible(false);

     separatorAct->setVisible(numRecentFiles > 0);
}

QString MainFrm::strippedName(const QString &fullFileName)
{
     return QFileInfo(fullFileName).fileName();
}

void MainFrm::loadFile()
{
    if (pFrmReports->isVisible())
        closeSecondaryFrm(pFrmReports);

    QString fileName = QFileDialog::getOpenFileName(this,
     tr("Open Project"), tr(""), tr("Project Files (*.xml)"));

    if (!fileName.isEmpty()){
        if (!readXMLFile(fileName))
            this->displayError(tr("Could not parse XML file! Are you sure this is a valid project file?"),true);
        else
            loadTabs();
            setCurrentFile(fileName);
            statusShow(tr("File loaded"));
    }
}

void MainFrm::writeFile()
{
    if ( tabWidget->count() <1 || sSample->frameId==-1 || sSample->frameTimeId==-1){
        QMessageBox::information(this, tr("FaoCAS"),
                                        tr("There is nothing to save."),
                                        QMessageBox::Ok);
         return;
    }

    QString fileName = QFileDialog::getSaveFileName(this,
     tr("Save Project"), "", tr("Project Files (*.xml)"));

    if (!fileName.isEmpty()){
        if (!CreateXMLFile(fileName))
            this->displayError(tr("Could not write XML file!"),true);
    }
}

bool MainFrm::CreateXMLFile(const QString strFileName)
{
    QFile file(strFileName);

    /*open a file */
    if (!file.open(QIODevice::WriteOnly))
    {
        /* show error message if not able to open file */
        QMessageBox::warning(0, tr("Read only"), tr("The file is in read only mode"));
    }
    else
    {
        if (sSample==0) return false;

        QXmlStreamWriter stream(&file);
        stream.setAutoFormatting(true);
        stream.writeStartDocument();//top
            stream.writeStartElement(tr("session"));
                stream.writeTextElement(tr("title"), tr("Session File"));
                stream.writeTextElement(tr("description"), 
                    tr("This is a session file, which stores the point of the application where the user was.\n Please do *NOT* edit it, unless you know what you are doing!"));
                /*
                stream.writeStartElement(tr("connection"));
                stream.writeAttribute(tr("alias"), QSqlDatabase::database().connectionName());
                    stream.writeTextElement(tr("database"), QSqlDatabase::database().databaseName());
                    stream.writeTextElement(tr("driver"), QSqlDatabase::database().driverName());
                    stream.writeTextElement(tr("host"), QSqlDatabase::database().hostName());
                    stream.writeTextElement(tr("user"), QSqlDatabase::database().userName());
                stream.writeEndElement();//connection*/
                stream.writeStartElement(tr("indexes"));

                    stream.writeTextElement(tr("isLogbook"), QVariant(sSample->bLogBook).toString());
                    stream.writeTextElement(tr("frameId"), QVariant(sSample->frameId).toString());
                    stream.writeTextElement(tr("frameTimeId"), QVariant(sSample->frameTimeId).toString());
                    stream.writeTextElement(tr("minorStrataId"), QVariant(sSample->minorStrataId).toString());
                    stream.writeTextElement(tr("cellId"), QVariant(sSample->cellId).toString());
                    stream.writeTextElement(tr("vesselTypeId"), QVariant(sSample->vesselTypeId).toString());
                    stream.writeTextElement(tr("sampVesselId"), QVariant(sSample->sampVesselId).toString());
                    stream.writeTextElement(tr("tripId"), QVariant(sSample->tripId).toString());
                    stream.writeTextElement(tr("operationId"), QVariant(sSample->operationId).toString());
                    stream.writeTextElement(tr("catchId"), QVariant(sSample->catchId).toString());


                stream.writeEndElement();//indexes
            stream.writeEndElement();//top
        stream.writeEndDocument();

        file.close();
        return true;
    }

    return false;
}
void MainFrm::callAssistant()
{
    if (process!=0){
        process->close();
        delete process; process=0;
    }
     process = new QProcess(this);

    //Builds filename from search path; app *SHOULD BE* on the path!
    QFile helpFile("help:mycollection.qhc");
    QString strHelpFilePath(QFileInfo(helpFile).absoluteFilePath());
    qDebug() << "help is located here: " << strHelpFilePath << endl;

    QStringList args;
    args << QLatin1String("-collectionFile")
         << strHelpFilePath
    << QLatin1String("-enableRemoteControl");

     process->start(QLatin1String("assistant"), args);
     if (!process->waitForStarted()) {
         QMessageBox::critical(this, tr("Remote Control"),
                               tr("Could not start Qt Assistant from %1.").arg("assistant"));
         return;
     }

    QByteArray ba;
    //ba.append("setSource qthelp://medfisis.app.1_1/doc/index.html");
    if (!curHelpId.isEmpty() && !curHelpId.isNull()){
        ba.append("ActivateIdentifier " + curHelpId);
        curHelpId="";
    }else
        ba.append("setSource qthelp://medfisis.app.1_1/doc/index.htm\n;");
    process->write(ba);

}

void MainFrm::aboutThisProject()
{
    if (pFrmPrjPage==0)
    {
        pFrmPrjPage=new FrmPrjPage;
    }
    if (pFrmPrjPage->isVisible()==false)
        pFrmPrjPage->showMaximized();
}

void MainFrm::resetTabs()
{
        tabWidget->disconnect();

        while (tabWidget->count()>0){
            this->tabWidget->removeTab(tabWidget->count()-1);
        }

        tabWidget->repaint();
        vTabs.clear();

        if (pFrmCell!=0) {delete pFrmCell; pFrmCell=0;}
        if (pFrmFrameDetails!=0) {delete pFrmFrameDetails; pFrmFrameDetails=0;}
        if (pFrmMinorStrata!=0) {delete pFrmMinorStrata; pFrmMinorStrata=0;}
        if (pFrmFrame!=0) {delete pFrmFrame; pFrmFrame=0;}
        if (pFrmVesselType!=0) {delete pFrmVesselType; pFrmVesselType=0;}
        if (pFrmVessel!=0) {delete pFrmVessel; pFrmVessel=0;}
        if (pFrmTrip!=0) {delete pFrmTrip; pFrmTrip=0;}
        if (pFrmOperation!=0) {delete pFrmOperation; pFrmOperation=0;}
        if (pFrmCatch!=0) {delete pFrmCatch; pFrmCatch=0;}

        //if (sSample!=0) {delete sSample; sSample=0;}
        //if (ruleCheckerPtr!=0) {delete ruleCheckerPtr; ruleCheckerPtr=0;}
        if (handler!=0) {delete handler; handler=0;}
}

void MainFrm::initPreviewTab(PreviewTab* tab)
{
    vTabs.push_back(tab);
}

void MainFrm::newTabs()
{
    qApp->setOverrideCursor( QCursor(Qt::BusyCursor ) );
    statusShow(tr("Wait..."));

        if (pFrmReports->isVisible())
            closeSecondaryFrm(pFrmReports);

        resetTabs();

        if (sSample!=0) {delete sSample; sSample=0;}
        sSample=new Sample;
        initTabs();

    statusShow(tr("Project successfully initialized."));
    qApp->setOverrideCursor( QCursor(Qt::ArrowCursor ) );
}

void MainFrm::initTabs()
{
    pFrmFrame=new FrmFrame(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmFrame);

     connect(pFrmFrame, SIGNAL(disableTabs(bool)), this,
    SLOT(disableTabs(bool)));

    pFrmMinorStrata=new FrmMinorStrata(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmMinorStrata);
    pFrmCell=new FrmCell(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmCell);
    pFrmVesselType=new FrmVesselType(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmVesselType);
    pFrmVessel=new FrmVessel(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmVessel);
    pFrmTrip=new FrmTrip(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmTrip);
    pFrmOperation=new FrmOperation(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmOperation);
    pFrmCatch=new FrmCatch(m_roleDef,sSample,ruleCheckerPtr);
    initPreviewTab(pFrmCatch);

    pFrmFrameDetails=new FrmFrameDetails();
     connect(pFrmFrameDetails, SIGNAL(hideFrameDetails(bool)), this,
    SLOT(hideFrameDetails()));

     connect(pFrmFrameDetails, SIGNAL(showStatus(QString)), this,
    SLOT(statusShow(QString)));

     connect(pFrmFrameDetails, SIGNAL(showError(QString, const bool)), this,
    SLOT(displayError(QString, const bool)));

     connect(pFrmMinorStrata, SIGNAL(applyChanges2FrameDetails()), pFrmFrameDetails,
    SLOT(onApplyChanges2FrameDetails()));

     connect(pFrmFrameDetails, SIGNAL(AppliedChanges2FrameDetails()), pFrmMinorStrata,
    SLOT(editFinished()));

     connect(pFrmCell, SIGNAL(applyChanges2FrameDetails()), pFrmFrameDetails,
    SLOT(onApplyChanges2FrameDetails()));

     connect(pFrmFrameDetails, SIGNAL(AppliedChanges2FrameDetails()), pFrmCell,
    SLOT(editFinished()));

    gridLayout->addWidget(pFrmFrameDetails);
    pFrmFrameDetails->hide();

    pFrmSampling=new FrmSampling(m_roleDef,sSample,ruleCheckerPtr);
     connect(pFrmSampling, SIGNAL(hideFrmSampling(bool)), this,
    SLOT(hideFrmSampling()));

     connect(pFrmSampling, SIGNAL(showStatus(QString)), this,
    SLOT(statusShow(QString)));

     connect(pFrmSampling, SIGNAL(showError(QString, const bool)), this,
    SLOT(displayError(QString, const bool)));

     connect(pFrmFrame, SIGNAL(setFrmSamplingMode(const FrmSampling::MODE)), pFrmSampling,
    SLOT(setMode(const FrmSampling::MODE)));

     connect(pFrmFrame, SIGNAL(applyChanges2FrmSampling(const bool)), pFrmSampling,
    SLOT(onApplyChanges2FrmSampling(const bool)));

     connect(pFrmSampling, SIGNAL(AppliedChanges2SamplingFrame()), pFrmFrame,
    SLOT(editFinished()));

    gridLayout->addWidget(pFrmSampling);
    pFrmSampling->hide();

    // Connect all the signals
     for (int i = 0; i < vTabs.size(); ++i) {

         connect(vTabs.at(i), SIGNAL(currentHelpId(const QString)), this,
        SLOT(setCurHelpId(const QString)),Qt::UniqueConnection);

         connect(vTabs.at(i), SIGNAL(navigate(const bool, const int)), this,
        SLOT(navigateThroughTabs(const bool, const int)),Qt::UniqueConnection);

         connect(vTabs.at(i), SIGNAL(showFrameDetails(const FrmFrameDetails::Mode, const FrmFrameDetails::Persistence, Sample*,QList<int>, const int)), this,
        SLOT(showFrameDetails(const FrmFrameDetails::Mode, const FrmFrameDetails::Persistence, Sample*,QList<int>, const int)),Qt::UniqueConnection);

         connect(pFrmFrameDetails, SIGNAL(hideFrameDetails(bool)), vTabs.at(i),
        SIGNAL(hideFrameDetails(bool)),Qt::UniqueConnection);

         connect(vTabs.at(i), SIGNAL(showFrmSampling()), this,
        SLOT(showFrmSampling()),Qt::UniqueConnection);

         connect(pFrmSampling, SIGNAL(hideFrmSampling(bool)), vTabs.at(i),
        SIGNAL(hideFrmSampling(bool)),Qt::UniqueConnection);

         connect(vTabs.at(i), SIGNAL(showError(QString,bool)), this,
        SLOT(displayError(QString,bool)),Qt::UniqueConnection);

         connect(vTabs.at(i), SIGNAL(showStatus(QString)), this,
        SLOT(statusShow(QString)),Qt::UniqueConnection);

         //each remove on a table, triggers a preview wuery on the following tabs
         //(so that we don't have "ghost" records lying around the tables!)
         for (int j=i+1; j < vTabs.size(); ++j){
             connect(vTabs.at(i), SIGNAL(recordRemoved()), vTabs.at(j),
            SLOT(setPreviewQuery()));
         }

        this->tabWidget->insertTab(vTabs.size()
        ,vTabs.at(i), vTabs.at(i)->title());

         if (i>0)
             tabWidget->setTabEnabled(i,false);

     }
     tabWidget->setCurrentIndex(0);

}

void MainFrm::disableTabs(bool bDisable){

    for (int i=1; i < tabWidget->count(); ++i)
    tabWidget->setTabEnabled(i,!bDisable);

}

/*
void MainFrm::rearrangeTabs(bool bLogBook)
{
    //We only want to do this (the first time we press next, and therefore using this flag...)
    if (bLogBook)
    {
        vTabs.remove(2,2);
        updateIndexes(2);
    }
}


void MainFrm::updateIndexes(const int from)
{
     for (int i = from; i < vTabs.size(); ++i) {
         vTabs.at(i)->setIndex(i);
     }

     for (int i = from-1; i < vTabs.size()-1; ++i) {
         connect(vTabs.at(i), SIGNAL(forward(const QString)), vTabs.at(i+1),
        SLOT(fillHeader(const QString)),Qt::UniqueConnection);

         connect(vTabs.at(i), SIGNAL(forward(const QString)), vTabs.at(i+1),
        SLOT(onShowForm()),Qt::UniqueConnection);
     }
}

void MainFrm::addTab(const int idx, const int newIndex, bool bOk)
{
    if (bOk && 
        tabWidget->count()==(idx+1) && 
        idx< vTabs.size()-1){
            this->tabWidget->insertTab(vTabs.size()
            ,vTabs.at(newIndex), vTabs.at(newIndex)->title());
    }
}
*/
bool MainFrm::getPrevIndex(const int idx, const bool bLogbook, int& newIndex)
{
    if (bLogbook && idx==JUMP+STEP){
        newIndex=JUMP;
    }else{
        newIndex=idx-1;
    }
    return (newIndex >=0 && newIndex <= vTabs.count());
}

bool MainFrm::getNextIndex(const int idx, const bool bLogbook, int& newIndex)
{
    if (bLogbook && idx==JUMP){
        newIndex=idx+STEP;
    }else{
        newIndex=idx+1;
    }

    QString strLabel;
    if (!vTabs.at(idx)->getNewHeader(strLabel)){
        displayError(tr("Could not retrieve label for next tab!"),false);
        return false;
    }
    vTabs.at(newIndex)->fillHeader(strLabel);
    vTabs.at(newIndex)->onShowForm();

    return (newIndex >=0 && newIndex <= vTabs.count());
}

void MainFrm::navigateThroughTabs(const bool bNext, const int idx)
{
    int curIdx=tabWidget->currentIndex();

    tabWidget->blockSignals(true);//lets block the signals to prevent entering the next again...

    int newIndex=-1;
/*
    bool bEnable=!vTabs.at(idx)->getSample()->bLogBook;
    for (int i=JUMP+1; i < JUMP+STEP; ++i)
        tabWidget->setTabEnabled(i,bEnable);

    if (!bEnable){
        vTabs.at(idx)->getSample()->cellId=-1;
        vTabs.at(idx)->getSample()->vesselTypeId=-1;
    }
*/
    if (bNext){
        if (!getNextIndex(idx,vTabs.at(curIdx)->getSample()->bLogBook,newIndex)){
            displayError(tr("Could not navigate to the next tab!"),false);
            return;
        }

    }else{
        if (!getPrevIndex(curIdx,vTabs.at(curIdx)->getSample()->bLogBook,newIndex)){
            displayError(tr("Could not navigate to the next tab!"),false);
            return;
        }

    }

    tabWidget->setTabEnabled(newIndex,true);
    tabWidget->setCurrentIndex(newIndex);

    tabWidget->blockSignals(false);//and unblock...
}

void MainFrm::hideFrameDetails()
{
    pFrmFrameDetails->hide();
    tabWidget->show();
    //emit hideFrameDetails(bCommited);
}

void MainFrm::showFrameDetails(const FrmFrameDetails::Mode mode,
                               const FrmFrameDetails::Persistence persistence,Sample* sample,
                               QList<int> blackList, const int options){

   if (!pFrmFrameDetails->setFrameDetails(mode,persistence,sample,blackList, options)){
       //displayError(tr("Could not initialize form with frame details!"),true);
   } else{
        tabWidget->hide();
        pFrmFrameDetails->show();
   }
}

void MainFrm::hideFrmSampling()
{
    pFrmSampling->hide();
    tabWidget->show();
}

void MainFrm::showFrmSampling(){
    tabWidget->hide();
    pFrmSampling->show();
}

void MainFrm::displayError(QString strError, const bool bShowMsgBox)
{
    //! Display MsgBox with Error
    /*!
    This implementation of the msgbox functionality
    uses a container for storing the shared_pointers with msgsboxes;
    We need to have pointers, so that they live outside the scope of this function
    and eventually more than one, as multiple error boxes can popup from nested classes.
    To prevent the container from growing forever, we clean it everytime we come to this function
    (b4 adding more boxes!), so its maximum size at a certain moment won't never exceed the number simultaneously displayed msgboxes!
    */

    cleanupMsgBoxes();

    statusShow(strError);
    if (bShowMsgBox){
        m_listMsgBoxes.push_back(MsgBoxPtr(new CustomMsgBox(this)));
        m_listMsgBoxes.last().get()->lbMsg->setWordWrap(true);
        m_listMsgBoxes.last().get()->fillDialog(tr("Error"),strError);
        m_listMsgBoxes.last().get()->show();
    }
}

void MainFrm::cleanupMsgBoxes()
{
    //Cleanup unused pointers!
    for (int i = 0; i < m_listMsgBoxes.length(); ++i){
        if ( !m_listMsgBoxes.at(i).get()->isVisible() )
            m_listMsgBoxes.removeAt(i);
    }
}

void MainFrm::statusShow(QString str)
{
    statusBar()->setStyleSheet(tr(
     "QStatusBar {"
     "    background: "
     "qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                     " stop: 0 #FFFF00, stop: 0.4 #FFFF66,"
                                     " stop: 0.5 #FFFF99, stop: 1.0 #FFFFCC)"
     ";"
     "}"));

    statusBar()->showMessage(str);
}

void MainFrm::statusClean(QString str)
{
    if (str.isEmpty() || str.isNull()){
        statusBar()->setStyleSheet(tr(""));
    }
}

/////////////////////////////////////////////

SessionFileParser::SessionFileParser(Sample* sample)
{
    m_sample=sample;
    m_bReadingIsLogbook=false;
    m_bReadingFrameId=false;
    m_bReadingFrameTimeId=false;
    m_bReadingMinorStrataId=false;
    m_bReadingCellId=false;
    m_bReadingVesselTypeId=false;
    m_bReadingSampVesselId=false;
    m_bReadingTripId=false;
    m_bReadingOperationId=false;

    m_ct=0;
}

SessionFileParser::~SessionFileParser()
{
    //if (m_sample!=0) delete m_sample;
}

bool SessionFileParser::startElement( const QString& , const QString& , const QString &name, const QXmlAttributes &)
{
      if( name == QObject::tr("isLogbook") )
        m_bReadingIsLogbook=true;
      else if( name == QObject::tr("frameId") )
        m_bReadingFrameId=true;
      else if( name == QObject::tr("frameTimeId") )
        m_bReadingFrameTimeId=true;
      else if( name == QObject::tr("minorStrataId") )
        m_bReadingMinorStrataId=true;
      else if( name == QObject::tr("cellId") )
        m_bReadingCellId=true;
      else if( name == QObject::tr("vesselTypeId") )
        m_bReadingVesselTypeId=true;
      else if( name == QObject::tr("sampVesselId") )
        m_bReadingSampVesselId=true;
      else if( name == QObject::tr("tripId") )
        m_bReadingTripId=true;
      else if( name == QObject::tr("operationId") )
        m_bReadingOperationId=true;

    return true;
  }

bool SessionFileParser::characters ( const QString & ch )
{
    if (m_bReadingIsLogbook){
        m_sample->bLogBook=QVariant(ch).toBool();
        m_bReadingIsLogbook=false;
        m_ct++;
    }else if (m_bReadingFrameId){
        m_sample->frameId=QVariant(ch).toInt();
        m_bReadingFrameId=false;
        m_ct++;
    }else if (m_bReadingFrameTimeId){
        m_sample->frameTimeId=QVariant(ch).toInt();
        m_bReadingFrameTimeId=false;
        m_ct++;
    }else if (m_bReadingMinorStrataId){
        m_sample->minorStrataId=QVariant(ch).toInt();
        m_bReadingMinorStrataId=false;
    }else if (m_bReadingCellId){
        m_sample->cellId=QVariant(ch).toInt();
        m_bReadingCellId=false;
    }else if (m_bReadingVesselTypeId){
        m_sample->vesselTypeId=QVariant(ch).toInt();
        m_bReadingVesselTypeId=false;
    }else if (m_bReadingSampVesselId){
        m_sample->sampVesselId=QVariant(ch).toInt();
        m_bReadingSampVesselId=false;
    }else if (m_bReadingTripId){
        m_sample->tripId=QVariant(ch).toInt();
        m_bReadingTripId=false;
    }else if (m_bReadingOperationId){
        m_sample->operationId=QVariant(ch).toInt();
        m_bReadingOperationId=false;
    }

    return m_bReadingFrameId==false || m_bReadingFrameTimeId==false;
    //return true;
}

 bool SessionFileParser::fatalError (const QXmlParseException & exception)
 {
     qWarning() << QObject::tr("Fatal error on line") << exception.lineNumber()
                << QObject::tr(", column") << exception.columnNumber() << ":"
                << exception.message();

     return false;
 }

bool SessionFileParser::endDocument()
{
    return m_ct==3;
}
////////////////////////

 void RebuildIndexesThread::run()
 {
    QString strError;
    if (!vacuum(strError)){
            emit showError(strError);
            return;
    }

    showStatus(tr("Database successfully vacuumed!"));
    exec();

 }
