/********************************************************************************
** Form generated from reading UI file 'frmminorstrata.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMINORSTRATA_H
#define UI_FRMMINORSTRATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "customtimectrl.h"

QT_BEGIN_NAMESPACE

class Ui_frmminorstrata
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lbHeader;
    QLabel *lbSource;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushNew;
    QPushButton *pushEdit;
    QPushButton *pushRemove;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineNew;
    QGroupBox *groupDetails;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cmbGLS;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *groupActivity;
    QGridLayout *gridLayout_3;
    QRadioButton *radioActive;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioInactive;
    QComboBox *cmbReasons;
    QPlainTextEdit *textComments;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_8;
    CustomTimeCtrl *customDtStart;
    CustomTimeCtrl *customDtEnd;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBackNext;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushPrevious;
    QPushButton *pushNext;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *frmminorstrata)
    {
        if (frmminorstrata->objectName().isEmpty())
            frmminorstrata->setObjectName(QString::fromUtf8("frmminorstrata"));
        frmminorstrata->resize(711, 743);
        verticalLayout_3 = new QVBoxLayout(frmminorstrata);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lbHeader = new QLabel(frmminorstrata);
        lbHeader->setObjectName(QString::fromUtf8("lbHeader"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbHeader->sizePolicy().hasHeightForWidth());
        lbHeader->setSizePolicy(sizePolicy);
        lbHeader->setStyleSheet(QString::fromUtf8("background-color:rgb(247, 247, 247)"));

        horizontalLayout_12->addWidget(lbHeader);

        lbSource = new QLabel(frmminorstrata);
        lbSource->setObjectName(QString::fromUtf8("lbSource"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbSource->sizePolicy().hasHeightForWidth());
        lbSource->setSizePolicy(sizePolicy1);
        lbSource->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(220, 220, 220, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 75 10pt \"Fixedsys\";"));
        lbSource->setFrameShape(QFrame::StyledPanel);
        lbSource->setFrameShadow(QFrame::Raised);
        lbSource->setScaledContents(true);

        horizontalLayout_12->addWidget(lbSource);


        verticalLayout_3->addLayout(horizontalLayout_12);

        label_6 = new QLabel(frmminorstrata);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tableView = new QTableView(frmminorstrata);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFocusPolicy(Qt::StrongFocus);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(false);

        horizontalLayout_6->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushNew = new QPushButton(frmminorstrata);
        pushNew->setObjectName(QString::fromUtf8("pushNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app_new/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNew->setIcon(icon);

        verticalLayout->addWidget(pushNew);

        pushEdit = new QPushButton(frmminorstrata);
        pushEdit->setObjectName(QString::fromUtf8("pushEdit"));
        sizePolicy.setHeightForWidth(pushEdit->sizePolicy().hasHeightForWidth());
        pushEdit->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app_new/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushEdit->setIcon(icon1);
        pushEdit->setCheckable(true);

        verticalLayout->addWidget(pushEdit);

        pushRemove = new QPushButton(frmminorstrata);
        pushRemove->setObjectName(QString::fromUtf8("pushRemove"));
        sizePolicy.setHeightForWidth(pushRemove->sizePolicy().hasHeightForWidth());
        pushRemove->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app_new/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushRemove->setIcon(icon2);

        verticalLayout->addWidget(pushRemove);

        toolButton = new QToolButton(frmminorstrata);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(toolButton);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(frmminorstrata);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineNew = new QLineEdit(frmminorstrata);
        lineNew->setObjectName(QString::fromUtf8("lineNew"));

        horizontalLayout_5->addWidget(lineNew);


        verticalLayout_3->addLayout(horizontalLayout_5);

        groupDetails = new QGroupBox(frmminorstrata);
        groupDetails->setObjectName(QString::fromUtf8("groupDetails"));
        sizePolicy.setHeightForWidth(groupDetails->sizePolicy().hasHeightForWidth());
        groupDetails->setSizePolicy(sizePolicy);
        groupDetails->setFocusPolicy(Qt::StrongFocus);
        verticalLayout_2 = new QVBoxLayout(groupDetails);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupDetails);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        cmbGLS = new QComboBox(groupDetails);
        cmbGLS->setObjectName(QString::fromUtf8("cmbGLS"));
        cmbGLS->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(cmbGLS);


        horizontalLayout_11->addLayout(horizontalLayout_2);

        label_4 = new QLabel(groupDetails);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        groupActivity = new QGroupBox(groupDetails);
        groupActivity->setObjectName(QString::fromUtf8("groupActivity"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupActivity->sizePolicy().hasHeightForWidth());
        groupActivity->setSizePolicy(sizePolicy3);
        groupActivity->setMaximumSize(QSize(16777215, 15777215));
        groupActivity->setFocusPolicy(Qt::StrongFocus);
        gridLayout_3 = new QGridLayout(groupActivity);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioActive = new QRadioButton(groupActivity);
        buttonGroup = new QButtonGroup(frmminorstrata);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioActive);
        radioActive->setObjectName(QString::fromUtf8("radioActive"));

        gridLayout_3->addWidget(radioActive, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioInactive = new QRadioButton(groupActivity);
        buttonGroup->addButton(radioInactive);
        radioInactive->setObjectName(QString::fromUtf8("radioInactive"));

        horizontalLayout->addWidget(radioInactive);

        cmbReasons = new QComboBox(groupActivity);
        cmbReasons->setObjectName(QString::fromUtf8("cmbReasons"));
        cmbReasons->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(cmbReasons);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        horizontalLayout_10->addWidget(groupActivity);

        textComments = new QPlainTextEdit(groupDetails);
        textComments->setObjectName(QString::fromUtf8("textComments"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(textComments->sizePolicy().hasHeightForWidth());
        textComments->setSizePolicy(sizePolicy4);
        textComments->setMaximumSize(QSize(16777215, 15777215));

        horizontalLayout_10->addWidget(textComments);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(groupDetails);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_9->addWidget(label);

        label_2 = new QLabel(groupDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_9->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        customDtStart = new CustomTimeCtrl(groupDetails);
        customDtStart->setObjectName(QString::fromUtf8("customDtStart"));
        sizePolicy3.setHeightForWidth(customDtStart->sizePolicy().hasHeightForWidth());
        customDtStart->setSizePolicy(sizePolicy3);
        customDtStart->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_8->addWidget(customDtStart);

        customDtEnd = new CustomTimeCtrl(groupDetails);
        customDtEnd->setObjectName(QString::fromUtf8("customDtEnd"));
        sizePolicy3.setHeightForWidth(customDtEnd->sizePolicy().hasHeightForWidth());
        customDtEnd->setSizePolicy(sizePolicy3);
        customDtEnd->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_8->addWidget(customDtEnd);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(groupDetails);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        horizontalLayout_7->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(groupDetails);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(478, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        groupBackNext = new QGroupBox(frmminorstrata);
        groupBackNext->setObjectName(QString::fromUtf8("groupBackNext"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBackNext->sizePolicy().hasHeightForWidth());
        groupBackNext->setSizePolicy(sizePolicy5);
        horizontalLayout_3 = new QHBoxLayout(groupBackNext);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushPrevious = new QPushButton(groupBackNext);
        pushPrevious->setObjectName(QString::fromUtf8("pushPrevious"));
        pushPrevious->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/app_new/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushPrevious->setIcon(icon3);

        horizontalLayout_3->addWidget(pushPrevious);

        pushNext = new QPushButton(groupBackNext);
        pushNext->setObjectName(QString::fromUtf8("pushNext"));
        pushNext->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/app_new/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNext->setIcon(icon4);

        horizontalLayout_3->addWidget(pushNext);


        horizontalLayout_4->addWidget(groupBackNext);


        verticalLayout_3->addLayout(horizontalLayout_4);

#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(tableView);
        label_5->setBuddy(lineNew);
        label_3->setBuddy(cmbGLS);
        label_4->setBuddy(textComments);
        label->setBuddy(customDtStart);
        label_2->setBuddy(customDtEnd);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tableView, pushNew);
        QWidget::setTabOrder(pushNew, pushEdit);
        QWidget::setTabOrder(pushEdit, pushRemove);
        QWidget::setTabOrder(pushRemove, toolButton);
        QWidget::setTabOrder(toolButton, lineNew);
        QWidget::setTabOrder(lineNew, groupDetails);
        QWidget::setTabOrder(groupDetails, cmbGLS);
        QWidget::setTabOrder(cmbGLS, groupActivity);
        QWidget::setTabOrder(groupActivity, radioActive);
        QWidget::setTabOrder(radioActive, radioInactive);
        QWidget::setTabOrder(radioInactive, cmbReasons);
        QWidget::setTabOrder(cmbReasons, textComments);
        QWidget::setTabOrder(textComments, customDtStart);
        QWidget::setTabOrder(customDtStart, customDtEnd);
        QWidget::setTabOrder(customDtEnd, buttonBox);
        QWidget::setTabOrder(buttonBox, pushPrevious);
        QWidget::setTabOrder(pushPrevious, pushNext);

        retranslateUi(frmminorstrata);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), frmminorstrata, SLOT(onButtonClick(QAbstractButton*)));
        QObject::connect(radioActive, SIGNAL(clicked(bool)), frmminorstrata, SLOT(setActiveReason(bool)));
        QObject::connect(radioActive, SIGNAL(clicked(bool)), frmminorstrata, SLOT(disableReasonCombo()));
        QObject::connect(radioInactive, SIGNAL(clicked()), frmminorstrata, SLOT(disableReasonCombo()));
        QObject::connect(pushNew, SIGNAL(clicked()), frmminorstrata, SLOT(createRecord()));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), frmminorstrata, SLOT(previewRow(QModelIndex)));
        QObject::connect(pushEdit, SIGNAL(clicked(bool)), frmminorstrata, SLOT(editRecord(bool)));
        QObject::connect(pushRemove, SIGNAL(clicked()), frmminorstrata, SLOT(removeRecord()));

        QMetaObject::connectSlotsByName(frmminorstrata);
    } // setupUi

    void retranslateUi(QWidget *frmminorstrata)
    {
        frmminorstrata->setWindowTitle(QApplication::translate("frmminorstrata", "Form", 0, QApplication::UnicodeUTF8));
        lbHeader->setText(QApplication::translate("frmminorstrata", "WRITE SOMETHING HERE LATER <---", 0, QApplication::UnicodeUTF8));
        lbSource->setText(QApplication::translate("frmminorstrata", "[SOURCE]", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("frmminorstrata", "Choose Stratum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("frmminorstrata", "Choose minor strata (or create new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableView->setStatusTip(QApplication::translate("frmminorstrata", "Choose minor strata (or create new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableView->setWhatsThis(QApplication::translate("frmminorstrata", "In this widget we can choose a minor strata, or create a new one", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushNew->setToolTip(QApplication::translate("frmminorstrata", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushNew->setStatusTip(QApplication::translate("frmminorstrata", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushNew->setWhatsThis(QApplication::translate("frmminorstrata", "Creates new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushNew->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushEdit->setToolTip(QApplication::translate("frmminorstrata", "Edit record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushEdit->setStatusTip(QApplication::translate("frmminorstrata", "Edit record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushEdit->setWhatsThis(QApplication::translate("frmminorstrata", "Edits record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushRemove->setToolTip(QApplication::translate("frmminorstrata", "Remove record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushRemove->setStatusTip(QApplication::translate("frmminorstrata", "Remove record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushRemove->setWhatsThis(QApplication::translate("frmminorstrata", "Removes record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushRemove->setText(QString());
        pushRemove->setShortcut(QApplication::translate("frmminorstrata", "Del", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("frmminorstrata", "Setup temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolButton->setStatusTip(QApplication::translate("frmminorstrata", "Setup temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        toolButton->setWhatsThis(QApplication::translate("frmminorstrata", "Setups temporary frame changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolButton->setText(QApplication::translate("frmminorstrata", "...", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("frmminorstrata", "Create New", 0, QApplication::UnicodeUTF8));
        groupDetails->setTitle(QApplication::translate("frmminorstrata", "Details", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("frmminorstrata", "Group of Landing Sites", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("frmminorstrata", "Comments", 0, QApplication::UnicodeUTF8));
        groupActivity->setTitle(QApplication::translate("frmminorstrata", "Activity Status", 0, QApplication::UnicodeUTF8));
        radioActive->setText(QApplication::translate("frmminorstrata", "Active", 0, QApplication::UnicodeUTF8));
        radioInactive->setText(QApplication::translate("frmminorstrata", "Inactive", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frmminorstrata", "Start Date", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmminorstrata", "End Date", 0, QApplication::UnicodeUTF8));
        groupBackNext->setTitle(QString());
        pushPrevious->setText(QApplication::translate("frmminorstrata", "Previous", 0, QApplication::UnicodeUTF8));
        pushNext->setText(QApplication::translate("frmminorstrata", "Next", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmminorstrata: public Ui_frmminorstrata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMINORSTRATA_H
