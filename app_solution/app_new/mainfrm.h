#include <QtGui>
#include <QtSql>
 #include <QXmlDefaultHandler>
#include "ui_mainfrm.h"
#include "custommsgbox.h"
#include "frmframedetails.h"
#include "frmsampling.h"
#include "frmframe.h"
#include "frmminorstrata.h"
#include "frmcell.h"
#include "frmvesseltype.h"
#include "frmvessel.h"
#include "frmtrip.h"
#include "frmoperation.h"
#include "frmcatch.h"
#include "frmprjpage.h"
#include "frmreports.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

using namespace boost;

//////////////////////////////////////////////////////////////////////
#ifndef REBUILDINDEXESTHREAD_H
#define REBUILDINDEXESTHREAD_H

//! RebuildIndexesThread Class
/*!
This thread serves the only purpose of rebuilding the indexes in the database;
There is no one waiting for the results, so we can run it paralelly to other tasks...
*/

 class RebuildIndexesThread : public QThread
 {
    Q_OBJECT

    public:
        void run();

    signals:
        void showStatus(const QString str);//!< For showing messages on the main window status bar
        void showError(QString str, const bool bShowMsgBox=true);

 };
#endif //REBUILDINDEXESTHREAD_H


//////////////////////////////////////////////////////////////////////
#ifndef SESSIONFILEPARSER_H
#define SESSIONFILEPARSER_H

//! Session File Handler
/*!
//This is an XML handler, to use with the SAX Qt classes;
In this handler we parse the elements frame id and frametime id from an XML configuration file,
and put them inside a sample structure, ready to be integrated into the app.
This class is very simple and we only provide implementation for a few virtual functions;
Usage: just give a sample and parse: have fun!":-);
*/

class SessionFileParser : public QXmlDefaultHandler
{
    public:
        /*! A constructor
          \sa ~SessionFileParser()
        */
        SessionFileParser(Sample* sample);
        /*! A destructor
          \sa SessionFileParser()
        */
        ~SessionFileParser();

        /*! StartElement
          \\Reimplementation of the virtual function on the base class
          \sa characters ( const QString & ch );
        */
        bool              startElement( const QString&, const QString&, const QString &name, const QXmlAttributes &);
        /*! Characters
          \\Reimplementation of the virtual function on the base class
          \sa startElement( const QString& ns, const QString& localName, const QString &name, const QXmlAttributes &attrs );
        */
        bool              characters ( const QString & ch );
        bool              fatalError (const QXmlParseException & exception);
        bool              endDocument();

        /*! sample()
          \\returns an initialized sample structure, with frameID and frameTimeId (parsed from the XML configuration file)
        */

    private:
        Sample*           m_sample;
        bool              m_bReadingIsLogbook;
        bool              m_bReadingFrameId;
        bool              m_bReadingFrameTimeId;
        bool              m_bReadingMinorStrataId;
        bool              m_bReadingCellId;
        bool              m_bReadingVesselTypeId;
        bool              m_bReadingSampVesselId;
        bool              m_bReadingTripId;
        bool              m_bReadingOperationId;

        int               m_ct;
};
#endif //SESSIONFILEPARSER_H

//////////////////////////////////////////////////////////////////////

#ifndef MAINFRM_H
#define MAINFRM_H

typedef shared_ptr<CustomMsgBox>                    MsgBoxPtr;

//! Main Frm Class
/*!
This class contains an instantiation of the UI mainFrm class.
It stores pointers for the other UI classes, such as Logbook and for a RuleChecker;
N.b.: all the UI classes instantiated here, should ihnerit ReportWidget, if we want to make use of the print/export functionality!
*/

class MainFrm : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT

    public:
        MainFrm(RoleDef* roleDef, QWidget *parent = 0, Qt::WFlags flags = 0);
        ~MainFrm();

        //! Init Rules
        /*!
        This function initializes the pointer for the rule checker class and fills the rules hash tables;
        It should be called on the constructor;
        */
        void                    initRules();

    private:
        bool                    getNextIndex(const int idx, const bool bLogbook, int& newIndex);
        bool                    getPrevIndex(const int idx, const bool bLogbook, int& newIndex);

        void                    initSecondaryFrm(SecondaryFrm* frm);
        void                    resetTabs();
        void                    initPreviewTab(PreviewTab* tab);
        void                    initUi();

        bool                    CreateXMLFile(const QString strFileName);
        bool                    readXMLFile(const QString strFileName);

        void                    initTabs();
        void                    loadTabs();

        void                    applyReportAdminPermissions();

        RoleDef*                m_roleDef;
        FrmFrame                *pFrmFrame;
        FrmMinorStrata          *pFrmMinorStrata;
        FrmFrameDetails         *pFrmFrameDetails;
        FrmSampling             *pFrmSampling;
        FrmCell                 *pFrmCell;
        FrmVesselType           *pFrmVesselType;
        FrmVessel               *pFrmVessel;
        FrmTrip                 *pFrmTrip;
        FrmOperation            *pFrmOperation;
        FrmCatch                *pFrmCatch;
        FrmPrjPage              *pFrmPrjPage;
        FrmReports              *pFrmReports;
        QVector<PreviewTab*>    vTabs;//!< container for storing pointers to the tabs;
        QVector<SecondaryFrm*>  vSecondaryFrms;//!< container for storing pointers to the secondary forms;
        QList<MsgBoxPtr>        m_listMsgBoxes;//!< container for storing pointers to the messageboxes;
        Sample*                 sSample;
        QToolBar*               toolbar;
        RuleChecker*            ruleCheckerPtr;//!< Pointer to a Rule Checker
        //InitRulesThread*        workerThread;//!< Thread that initializes the rule containers
        //QThread*               thread;
        SessionFileParser       *handler;

        enum { MaxRecentFiles = 5 };
        QAction *recentFileActs[MaxRecentFiles];

        QMenu *recentFilesMenu;
        void setCurrentFile(const QString &fileName);
        void updateRecentFileActions();
        QString strippedName(const QString &fullFileName);

        QString                 curFile;
        QAction*                separatorAct;
        QString                 curHelpId;
        QProcess                *process;

    private slots:
        void                    disableTabs(bool bDisable=true);

        void                    setCurHelpId(const QString strHelpId){curHelpId=strHelpId;}
        void                    newTabs();
        void                    navigateThroughTabs(const bool bNext, const int idx);
        void                    showFrameDetails(const FrmFrameDetails::Mode mode, 
                                        const FrmFrameDetails::Persistence persistence,Sample* sample, 
                                        QList<int> blackList, const int options);
        void                    hideFrameDetails();
        void                    showFrmSampling();
        void                    hideFrmSampling();
        void                    statusShow(QString str);
        void                    statusClean(QString str);
        void                    displayError(QString strError, const bool bShowMsgBox);
        void                    cleanupMsgBoxes();
        void                    aboutThisProject();
        void                    callAssistant();
        void                    rulesInitialized(bool bReady);

        void                    loadFile();
        void                    openRecentFile();
        void                    closeFile();
        void                    writeFile();
        void                    closeSecondaryFrm();
        void                    closeSecondaryFrm(SecondaryFrm* frm);
        void                    loadSecondaryFrm();
        void                    loadSecondaryFrm(SecondaryFrm* frm);
        void                    RebuildIndexes();
};
#endif //MAINFRM_H
