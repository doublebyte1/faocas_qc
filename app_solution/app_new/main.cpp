#include "reportinghook.h"
#include "login.h"
//#include "sql.h"

#include <QtGui/QApplication>

#if defined(WIN32) && defined(_DEBUG)
    #define _CRTDBG_MAP_ALLOC
    #include <stdlib.h>
    #include <crtdbg.h>
    #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
    #define new DEBUG_NEW
#endif

int main(int argc, char *argv[])
{
#if defined(_MSC_VER) && defined(_DEBUG)
        _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
#endif

#if defined(WIN32) && defined(_DEBUG)
      setFilterDebugHook();
#endif

    QApplication a(argc, argv);

    //stylesheet
    QFile qss(QObject::tr(":/app_new/stylesheet.qss"));
    qss.open(QFile::ReadOnly);
    a.setStyleSheet(qss.readAll());
    qss.close();

    //Building search path for help files (current dir + project's build)
    QDir path;

#ifdef QT_DEBUG
    QProcessEnvironment env(QProcessEnvironment::systemEnvironment());
    QString projdir = QDir(env.value("PROJDIR")).absolutePath(); // returns empty string for unset
    path=projdir;
    path.cd("app_solution/app_new/help");
    //qDebug() << path.absolutePath() << endl;
    QDir::addSearchPath("help",  path.absolutePath());

    path=projdir;
    path.cd("app_solution/app_new/reports");
    //qDebug() << path.absolutePath() << endl;
    QDir::addSearchPath("reports",  path.absolutePath());
#else
    path=QDir::currentPath();
    path.cd("reports");
    QDir::addSearchPath("reports", path.absolutePath());

    path=(QDir::currentPath());
    path.cd("help");
    QDir::addSearchPath("help", path.absolutePath());

    path=QDir::currentPath();
    path.cd("report");
    QApplication::addLibraryPath(path.absolutePath());

    path=QDir::currentPath();
    path.cd("PropertyEditor");
    QApplication::addLibraryPath(path.absolutePath());
#endif

    //qDebug() << QStyleFactory::keys() << endl;

    //QApplication::setStyle("Cleanlooks");

    /*
    QTranslator qtTranslator;
    qtTranslator.load(("app_new_pt"),
         QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    a.installTranslator(&qtTranslator);

    QTranslator myappTranslator;
    myappTranslator.load("app_new_pt");
    a.installTranslator(&myappTranslator);
*/
    //arabic layout
    //a.setLayoutDirection(Qt::RightToLeft);

    //app details
    a.setApplicationName(QObject::tr("FAOFish CAS"));
    a.setOrganizationName(QObject::tr("FAO-FIRF"));
    a.setOrganizationDomain(QObject::tr("http://www.fao.org/"));
    //a.setApplicationVersion(QObject::tr("1.3"));
    a.setApplicationVersion(QObject::tr("-DevBuild_") + QDateTime::currentDateTime().toString());

    Login l;
    l.show();

    return a.exec();
}
