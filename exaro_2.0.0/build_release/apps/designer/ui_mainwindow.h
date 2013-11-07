/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionRemove_page;
    QAction *actionNew_report;
    QAction *actionOpen_report;
    QAction *actionSave_report;
    QAction *actionExit;
    QAction *actionNew_page;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionZoom_original;
    QAction *actionEdit_script;
    QAction *actionSave_report_as;
    QAction *actionExecute;
    QAction *actionSetup_a_database;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionLeft_magnet;
    QAction *actionRight_magnet;
    QAction *actionTop_magnet;
    QAction *actionBottom_magnet;
    QAction *actionVertical_magnet;
    QAction *actionHorizontal_magnet;
    QAction *actionDesignerPath;
    QAction *action_About_eXaro;
    QAction *actionZoom_WYSIWYG;
    QAction *actionOpen_template;
    QAction *actionOptions;
    QAction *actionSave_item_as;
    QAction *actionOpen_item_from;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionTool_bars;
    QAction *actionA;
    QAction *actionA_2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuOpen_last_temlate;
    QMenu *menuOpen_last_report;
    QMenu *menuReport;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menu_Help;
    QMenu *menuView;
    QMenu *menuToolbars;
    QMenu *menuToolboxes;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBarTools;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(896, 478);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/exaro.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainWindow->setWindowIcon(icon);
        mainWindow->setIconSize(QSize(16, 16));
        actionRemove_page = new QAction(mainWindow);
        actionRemove_page->setObjectName(QString::fromUtf8("actionRemove_page"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/deletePage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_page->setIcon(icon1);
        actionNew_report = new QAction(mainWindow);
        actionNew_report->setObjectName(QString::fromUtf8("actionNew_report"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/newReport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_report->setIcon(icon2);
        actionOpen_report = new QAction(mainWindow);
        actionOpen_report->setObjectName(QString::fromUtf8("actionOpen_report"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/openReport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_report->setIcon(icon3);
        actionSave_report = new QAction(mainWindow);
        actionSave_report->setObjectName(QString::fromUtf8("actionSave_report"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/saveReport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_report->setIcon(icon4);
        actionExit = new QAction(mainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/application_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionNew_page = new QAction(mainWindow);
        actionNew_page->setObjectName(QString::fromUtf8("actionNew_page"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/newPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_page->setIcon(icon6);
        actionZoom_in = new QAction(mainWindow);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_in->setIcon(icon7);
        actionZoom_out = new QAction(mainWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon8);
        actionZoom_original = new QAction(mainWindow);
        actionZoom_original->setObjectName(QString::fromUtf8("actionZoom_original"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/zoom-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_original->setIcon(icon9);
        actionEdit_script = new QAction(mainWindow);
        actionEdit_script->setObjectName(QString::fromUtf8("actionEdit_script"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/javascript.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_script->setIcon(icon10);
        actionSave_report_as = new QAction(mainWindow);
        actionSave_report_as->setObjectName(QString::fromUtf8("actionSave_report_as"));
        actionSave_report_as->setIcon(icon4);
        actionExecute = new QAction(mainWindow);
        actionExecute->setObjectName(QString::fromUtf8("actionExecute"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExecute->setIcon(icon11);
        actionSetup_a_database = new QAction(mainWindow);
        actionSetup_a_database->setObjectName(QString::fromUtf8("actionSetup_a_database"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetup_a_database->setIcon(icon12);
        actionCopy = new QAction(mainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon13);
        actionCut = new QAction(mainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon14);
        actionPaste = new QAction(mainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon15);
        actionDelete = new QAction(mainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon16);
        actionLeft_magnet = new QAction(mainWindow);
        actionLeft_magnet->setObjectName(QString::fromUtf8("actionLeft_magnet"));
        actionLeft_magnet->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/border_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft_magnet->setIcon(icon17);
        actionRight_magnet = new QAction(mainWindow);
        actionRight_magnet->setObjectName(QString::fromUtf8("actionRight_magnet"));
        actionRight_magnet->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/border_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight_magnet->setIcon(icon18);
        actionTop_magnet = new QAction(mainWindow);
        actionTop_magnet->setObjectName(QString::fromUtf8("actionTop_magnet"));
        actionTop_magnet->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/border_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTop_magnet->setIcon(icon19);
        actionBottom_magnet = new QAction(mainWindow);
        actionBottom_magnet->setObjectName(QString::fromUtf8("actionBottom_magnet"));
        actionBottom_magnet->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/border_bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBottom_magnet->setIcon(icon20);
        actionVertical_magnet = new QAction(mainWindow);
        actionVertical_magnet->setObjectName(QString::fromUtf8("actionVertical_magnet"));
        actionVertical_magnet->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/border_vertical.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVertical_magnet->setIcon(icon21);
        actionHorizontal_magnet = new QAction(mainWindow);
        actionHorizontal_magnet->setObjectName(QString::fromUtf8("actionHorizontal_magnet"));
        actionHorizontal_magnet->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/border_horizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontal_magnet->setIcon(icon22);
        actionDesignerPath = new QAction(mainWindow);
        actionDesignerPath->setObjectName(QString::fromUtf8("actionDesignerPath"));
        action_About_eXaro = new QAction(mainWindow);
        action_About_eXaro->setObjectName(QString::fromUtf8("action_About_eXaro"));
        actionZoom_WYSIWYG = new QAction(mainWindow);
        actionZoom_WYSIWYG->setObjectName(QString::fromUtf8("actionZoom_WYSIWYG"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/zoom-fit-best.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_WYSIWYG->setIcon(icon23);
        actionOpen_template = new QAction(mainWindow);
        actionOpen_template->setObjectName(QString::fromUtf8("actionOpen_template"));
        actionOptions = new QAction(mainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionSave_item_as = new QAction(mainWindow);
        actionSave_item_as->setObjectName(QString::fromUtf8("actionSave_item_as"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/save-item-template.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_item_as->setIcon(icon24);
        actionOpen_item_from = new QAction(mainWindow);
        actionOpen_item_from->setObjectName(QString::fromUtf8("actionOpen_item_from"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/open-item-template.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_item_from->setIcon(icon25);
        actionUndo = new QAction(mainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon26);
        actionRedo = new QAction(mainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon27);
        actionTool_bars = new QAction(mainWindow);
        actionTool_bars->setObjectName(QString::fromUtf8("actionTool_bars"));
        actionA = new QAction(mainWindow);
        actionA->setObjectName(QString::fromUtf8("actionA"));
        actionA_2 = new QAction(mainWindow);
        actionA_2->setObjectName(QString::fromUtf8("actionA_2"));
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 896, 29));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuOpen_last_temlate = new QMenu(menu_File);
        menuOpen_last_temlate->setObjectName(QString::fromUtf8("menuOpen_last_temlate"));
        menuOpen_last_report = new QMenu(menu_File);
        menuOpen_last_report->setObjectName(QString::fromUtf8("menuOpen_last_report"));
        menuReport = new QMenu(menubar);
        menuReport->setObjectName(QString::fromUtf8("menuReport"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuToolbars = new QMenu(menuView);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuToolboxes = new QMenu(menuView);
        menuToolboxes->setObjectName(QString::fromUtf8("menuToolboxes"));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(mainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(32, 32));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBarTools = new QToolBar(mainWindow);
        toolBarTools->setObjectName(QString::fromUtf8("toolBarTools"));
        toolBarTools->setIconSize(QSize(24, 24));
        mainWindow->addToolBar(Qt::RightToolBarArea, toolBarTools);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuReport->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionNew_report);
        menu_File->addAction(actionOpen_report);
        menu_File->addAction(menuOpen_last_report->menuAction());
        menu_File->addAction(actionSave_report);
        menu_File->addAction(actionSave_report_as);
        menu_File->addSeparator();
        menu_File->addAction(actionOpen_template);
        menu_File->addAction(menuOpen_last_temlate->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menuReport->addAction(actionNew_page);
        menuReport->addAction(actionRemove_page);
        menuReport->addSeparator();
        menuReport->addAction(actionEdit_script);
        menuReport->addSeparator();
        menuReport->addAction(actionSetup_a_database);
        menuReport->addSeparator();
        menuReport->addAction(actionExecute);
        menuReport->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionOpen_item_from);
        menuEdit->addAction(actionSave_item_as);
        menuEdit->addSeparator();
        menuEdit->addAction(actionLeft_magnet);
        menuEdit->addAction(actionRight_magnet);
        menuEdit->addAction(actionTop_magnet);
        menuEdit->addAction(actionBottom_magnet);
        menuEdit->addAction(actionVertical_magnet);
        menuEdit->addAction(actionHorizontal_magnet);
        menuTools->addAction(actionOptions);
        menu_Help->addAction(action_About_eXaro);
        menuView->addAction(actionZoom_in);
        menuView->addAction(actionZoom_out);
        menuView->addAction(actionZoom_WYSIWYG);
        menuView->addAction(actionZoom_original);
        menuView->addSeparator();
        menuView->addAction(menuToolboxes->menuAction());
        menuView->addAction(menuToolbars->menuAction());
        toolBar->addAction(actionOpen_report);
        toolBar->addAction(actionSave_report);
        toolBar->addAction(actionNew_page);
        toolBar->addAction(actionRemove_page);
        toolBar->addSeparator();
        toolBar->addAction(actionZoom_in);
        toolBar->addAction(actionZoom_out);
        toolBar->addAction(actionZoom_original);
        toolBar->addAction(actionZoom_WYSIWYG);
        toolBar->addSeparator();
        toolBar->addAction(actionLeft_magnet);
        toolBar->addAction(actionRight_magnet);
        toolBar->addAction(actionTop_magnet);
        toolBar->addAction(actionBottom_magnet);
        toolBar->addAction(actionVertical_magnet);
        toolBar->addAction(actionHorizontal_magnet);
        toolBar->addAction(actionEdit_script);
        toolBar->addAction(actionExecute);
        toolBar->addAction(actionSetup_a_database);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "eXaro v1.0.1", 0, QApplication::UnicodeUTF8));
        actionRemove_page->setText(QApplication::translate("mainWindow", "&Remove page", 0, QApplication::UnicodeUTF8));
        actionRemove_page->setShortcut(QApplication::translate("mainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionNew_report->setText(QApplication::translate("mainWindow", "New report", 0, QApplication::UnicodeUTF8));
        actionOpen_report->setText(QApplication::translate("mainWindow", "Open report", 0, QApplication::UnicodeUTF8));
        actionOpen_report->setShortcut(QApplication::translate("mainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave_report->setText(QApplication::translate("mainWindow", "Save report", 0, QApplication::UnicodeUTF8));
        actionSave_report->setShortcut(QApplication::translate("mainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("mainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("mainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionNew_page->setText(QApplication::translate("mainWindow", "New page", 0, QApplication::UnicodeUTF8));
        actionZoom_in->setText(QApplication::translate("mainWindow", "Zoom in", 0, QApplication::UnicodeUTF8));
        actionZoom_in->setShortcut(QApplication::translate("mainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionZoom_out->setText(QApplication::translate("mainWindow", "Zoom out", 0, QApplication::UnicodeUTF8));
        actionZoom_out->setShortcut(QApplication::translate("mainWindow", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        actionZoom_original->setText(QApplication::translate("mainWindow", "Zoom original", 0, QApplication::UnicodeUTF8));
        actionZoom_original->setShortcut(QApplication::translate("mainWindow", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        actionEdit_script->setText(QApplication::translate("mainWindow", "Edit script", 0, QApplication::UnicodeUTF8));
        actionEdit_script->setShortcut(QApplication::translate("mainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionSave_report_as->setText(QApplication::translate("mainWindow", "Save report as ...", 0, QApplication::UnicodeUTF8));
        actionSave_report_as->setShortcut(QApplication::translate("mainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionExecute->setText(QApplication::translate("mainWindow", "Execute", 0, QApplication::UnicodeUTF8));
        actionExecute->setShortcut(QApplication::translate("mainWindow", "F9", 0, QApplication::UnicodeUTF8));
        actionSetup_a_database->setText(QApplication::translate("mainWindow", "Setup a database", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("mainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("mainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("mainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("mainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("mainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("mainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("mainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        actionDelete->setShortcut(QApplication::translate("mainWindow", "Del", 0, QApplication::UnicodeUTF8));
        actionLeft_magnet->setText(QApplication::translate("mainWindow", "Left magnet", 0, QApplication::UnicodeUTF8));
        actionRight_magnet->setText(QApplication::translate("mainWindow", "Right magnet", 0, QApplication::UnicodeUTF8));
        actionTop_magnet->setText(QApplication::translate("mainWindow", "Top magnet", 0, QApplication::UnicodeUTF8));
        actionBottom_magnet->setText(QApplication::translate("mainWindow", "Bottom magnet", 0, QApplication::UnicodeUTF8));
        actionVertical_magnet->setText(QApplication::translate("mainWindow", "Vertical magnet", 0, QApplication::UnicodeUTF8));
        actionHorizontal_magnet->setText(QApplication::translate("mainWindow", "Horizontal magnet", 0, QApplication::UnicodeUTF8));
        actionDesignerPath->setText(QApplication::translate("mainWindow", "Set designer path", 0, QApplication::UnicodeUTF8));
        action_About_eXaro->setText(QApplication::translate("mainWindow", "&About eXaro", 0, QApplication::UnicodeUTF8));
        actionZoom_WYSIWYG->setText(QApplication::translate("mainWindow", "Zoom WYSIWYG", 0, QApplication::UnicodeUTF8));
        actionZoom_WYSIWYG->setShortcut(QApplication::translate("mainWindow", "Ctrl+1", 0, QApplication::UnicodeUTF8));
        actionOpen_template->setText(QApplication::translate("mainWindow", "Open template", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("mainWindow", "Options...", 0, QApplication::UnicodeUTF8));
        actionSave_item_as->setText(QApplication::translate("mainWindow", "&Save item as ...", 0, QApplication::UnicodeUTF8));
        actionOpen_item_from->setText(QApplication::translate("mainWindow", "Open item from ...", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("mainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("mainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("mainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionRedo->setShortcut(QApplication::translate("mainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionTool_bars->setText(QApplication::translate("mainWindow", "Toolbars", 0, QApplication::UnicodeUTF8));
        actionA->setText(QApplication::translate("mainWindow", "a", 0, QApplication::UnicodeUTF8));
        actionA_2->setText(QApplication::translate("mainWindow", "a", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("mainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuOpen_last_temlate->setTitle(QApplication::translate("mainWindow", "Open last template", 0, QApplication::UnicodeUTF8));
        menuOpen_last_report->setTitle(QApplication::translate("mainWindow", "Open last report", 0, QApplication::UnicodeUTF8));
        menuReport->setTitle(QApplication::translate("mainWindow", "&Report", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("mainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("mainWindow", "&Settings", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("mainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("mainWindow", "&View", 0, QApplication::UnicodeUTF8));
        menuToolbars->setTitle(QApplication::translate("mainWindow", "Toolbars", 0, QApplication::UnicodeUTF8));
        menuToolboxes->setTitle(QApplication::translate("mainWindow", "Toolboxes", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("mainWindow", "Main toolbar", 0, QApplication::UnicodeUTF8));
        toolBarTools->setWindowTitle(QApplication::translate("mainWindow", "Tools toolbar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
