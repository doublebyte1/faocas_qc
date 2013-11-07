/********************************************************************************
** Form generated from reading UI file 'frmtrip.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMTRIP_H
#define UI_FRMTRIP_H

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
#include <QtGui/QListView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "catchinputctrl.h"
#include "customtimectrl.h"

QT_BEGIN_NAMESPACE

class Ui_FrmTrip
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbHeader;
    QLabel *lbSource;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushNew;
    QPushButton *pushEdit;
    QPushButton *pushRemove;
    QGroupBox *groupDetails;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QComboBox *cmbSampler;
    QLabel *label_2;
    QComboBox *cmbSite;
    QLabel *label_22;
    QSpinBox *spinProf;
    QLabel *label_24;
    QSpinBox *spinPart;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    CustomTimeCtrl *customDtStart;
    QLabel *label_25;
    CustomTimeCtrl *customDtEnd;
    QLabel *label_13;
    QPlainTextEdit *textComments;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupTotals;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QSpinBox *spinNOE;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QSpinBox *spinNOC;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    CatchInputCtrl *catchInputCtrl;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QPushButton *pushClear;
    QListView *listGears;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QPushButton *pushClear2;
    QListView *listZones;
    QHBoxLayout *horizontalLayout_12;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout_16;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushPrevious;
    QPushButton *pushNext;

    void setupUi(QWidget *FrmTrip)
    {
        if (FrmTrip->objectName().isEmpty())
            FrmTrip->setObjectName(QString::fromUtf8("FrmTrip"));
        FrmTrip->resize(752, 767);
        verticalLayout_5 = new QVBoxLayout(FrmTrip);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lbHeader = new QLabel(FrmTrip);
        lbHeader->setObjectName(QString::fromUtf8("lbHeader"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbHeader->sizePolicy().hasHeightForWidth());
        lbHeader->setSizePolicy(sizePolicy);
        lbHeader->setStyleSheet(QString::fromUtf8("background-color:rgb(247, 247, 247)"));

        horizontalLayout_9->addWidget(lbHeader);

        lbSource = new QLabel(FrmTrip);
        lbSource->setObjectName(QString::fromUtf8("lbSource"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbSource->sizePolicy().hasHeightForWidth());
        lbSource->setSizePolicy(sizePolicy1);
        lbSource->setMinimumSize(QSize(0, 19));
        lbSource->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(220, 220, 220, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 75 10pt \"Fixedsys\";"));
        lbSource->setFrameShape(QFrame::StyledPanel);
        lbSource->setFrameShadow(QFrame::Raised);
        lbSource->setScaledContents(true);

        horizontalLayout_9->addWidget(lbSource);


        verticalLayout_5->addLayout(horizontalLayout_9);

        label_23 = new QLabel(FrmTrip);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_5->addWidget(label_23);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableView = new QTableView(FrmTrip);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);
        tableView->setFocusPolicy(Qt::StrongFocus);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushNew = new QPushButton(FrmTrip);
        pushNew->setObjectName(QString::fromUtf8("pushNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app_new/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNew->setIcon(icon);

        verticalLayout_4->addWidget(pushNew);

        pushEdit = new QPushButton(FrmTrip);
        pushEdit->setObjectName(QString::fromUtf8("pushEdit"));
        sizePolicy.setHeightForWidth(pushEdit->sizePolicy().hasHeightForWidth());
        pushEdit->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app_new/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushEdit->setIcon(icon1);
        pushEdit->setCheckable(true);

        verticalLayout_4->addWidget(pushEdit);

        pushRemove = new QPushButton(FrmTrip);
        pushRemove->setObjectName(QString::fromUtf8("pushRemove"));
        sizePolicy.setHeightForWidth(pushRemove->sizePolicy().hasHeightForWidth());
        pushRemove->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app_new/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushRemove->setIcon(icon2);

        verticalLayout_4->addWidget(pushRemove);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        groupDetails = new QGroupBox(FrmTrip);
        groupDetails->setObjectName(QString::fromUtf8("groupDetails"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupDetails->sizePolicy().hasHeightForWidth());
        groupDetails->setSizePolicy(sizePolicy3);
        groupDetails->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(groupDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_6 = new QLabel(groupDetails);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_6);

        cmbSampler = new QComboBox(groupDetails);
        cmbSampler->setObjectName(QString::fromUtf8("cmbSampler"));

        horizontalLayout_11->addWidget(cmbSampler);

        label_2 = new QLabel(groupDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_2);

        cmbSite = new QComboBox(groupDetails);
        cmbSite->setObjectName(QString::fromUtf8("cmbSite"));

        horizontalLayout_11->addWidget(cmbSite);

        label_22 = new QLabel(groupDetails);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_22);

        spinProf = new QSpinBox(groupDetails);
        spinProf->setObjectName(QString::fromUtf8("spinProf"));
        sizePolicy1.setHeightForWidth(spinProf->sizePolicy().hasHeightForWidth());
        spinProf->setSizePolicy(sizePolicy1);
        spinProf->setFocusPolicy(Qt::StrongFocus);
        spinProf->setMaximum(1000);

        horizontalLayout_11->addWidget(spinProf);

        label_24 = new QLabel(groupDetails);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_24);

        spinPart = new QSpinBox(groupDetails);
        spinPart->setObjectName(QString::fromUtf8("spinPart"));
        sizePolicy1.setHeightForWidth(spinPart->sizePolicy().hasHeightForWidth());
        spinPart->setSizePolicy(sizePolicy1);
        spinPart->setFocusPolicy(Qt::StrongFocus);
        spinPart->setMaximum(1000);

        horizontalLayout_11->addWidget(spinPart);


        gridLayout->addLayout(horizontalLayout_11, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_14 = new QLabel(groupDetails);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_14);

        customDtStart = new CustomTimeCtrl(groupDetails);
        customDtStart->setObjectName(QString::fromUtf8("customDtStart"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(customDtStart->sizePolicy().hasHeightForWidth());
        customDtStart->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(customDtStart);

        label_25 = new QLabel(groupDetails);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_25);

        customDtEnd = new CustomTimeCtrl(groupDetails);
        customDtEnd->setObjectName(QString::fromUtf8("customDtEnd"));
        sizePolicy4.setHeightForWidth(customDtEnd->sizePolicy().hasHeightForWidth());
        customDtEnd->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(customDtEnd);

        label_13 = new QLabel(groupDetails);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_13);

        textComments = new QPlainTextEdit(groupDetails);
        textComments->setObjectName(QString::fromUtf8("textComments"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textComments->sizePolicy().hasHeightForWidth());
        textComments->setSizePolicy(sizePolicy5);

        verticalLayout->addWidget(textComments);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupTotals = new QGroupBox(groupDetails);
        groupTotals->setObjectName(QString::fromUtf8("groupTotals"));
        sizePolicy4.setHeightForWidth(groupTotals->sizePolicy().hasHeightForWidth());
        groupTotals->setSizePolicy(sizePolicy4);
        verticalLayout_8 = new QVBoxLayout(groupTotals);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupTotals);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label = new QLabel(groupTotals);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 13));

        verticalLayout_6->addWidget(label);

        spinNOE = new QSpinBox(groupTotals);
        spinNOE->setObjectName(QString::fromUtf8("spinNOE"));
        spinNOE->setMaximum(1000);

        verticalLayout_6->addWidget(spinNOE);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_3 = new QLabel(groupTotals);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(0, 13));

        verticalLayout_7->addWidget(label_3);

        spinNOC = new QSpinBox(groupTotals);
        spinNOC->setObjectName(QString::fromUtf8("spinNOC"));
        spinNOC->setEnabled(false);
        spinNOC->setMaximum(1000);

        verticalLayout_7->addWidget(spinNOC);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(groupTotals);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy6);
        label_8->setMinimumSize(QSize(0, 28));

        horizontalLayout_4->addWidget(label_8);

        catchInputCtrl = new CatchInputCtrl(groupTotals);
        catchInputCtrl->setObjectName(QString::fromUtf8("catchInputCtrl"));
        sizePolicy2.setHeightForWidth(catchInputCtrl->sizePolicy().hasHeightForWidth());
        catchInputCtrl->setSizePolicy(sizePolicy2);
        catchInputCtrl->setMinimumSize(QSize(270, 160));

        horizontalLayout_4->addWidget(catchInputCtrl);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(groupTotals);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setMinimumSize(QSize(36, 0));

        verticalLayout_2->addWidget(label_7);

        pushClear = new QPushButton(groupTotals);
        pushClear->setObjectName(QString::fromUtf8("pushClear"));
        sizePolicy.setHeightForWidth(pushClear->sizePolicy().hasHeightForWidth());
        pushClear->setSizePolicy(sizePolicy);
        pushClear->setMinimumSize(QSize(0, 26));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/app_new/locationbar_erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushClear->setIcon(icon3);
        pushClear->setIconSize(QSize(32, 16));

        verticalLayout_2->addWidget(pushClear);


        horizontalLayout->addLayout(verticalLayout_2);

        listGears = new QListView(groupTotals);
        listGears->setObjectName(QString::fromUtf8("listGears"));
        sizePolicy5.setHeightForWidth(listGears->sizePolicy().hasHeightForWidth());
        listGears->setSizePolicy(sizePolicy5);
        listGears->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listGears->setAlternatingRowColors(false);
        listGears->setSelectionMode(QAbstractItemView::MultiSelection);
        listGears->setSelectionBehavior(QAbstractItemView::SelectRows);
        listGears->setProperty("isWrapping", QVariant(false));
        listGears->setResizeMode(QListView::Adjust);
        listGears->setWordWrap(true);

        horizontalLayout->addWidget(listGears);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(groupTotals);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy7.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy7);
        label_5->setMinimumSize(QSize(36, 16));

        verticalLayout_3->addWidget(label_5);

        pushClear2 = new QPushButton(groupTotals);
        pushClear2->setObjectName(QString::fromUtf8("pushClear2"));
        sizePolicy.setHeightForWidth(pushClear2->sizePolicy().hasHeightForWidth());
        pushClear2->setSizePolicy(sizePolicy);
        pushClear2->setMinimumSize(QSize(0, 26));
        pushClear2->setIcon(icon3);
        pushClear2->setIconSize(QSize(32, 16));

        verticalLayout_3->addWidget(pushClear2);


        horizontalLayout->addLayout(verticalLayout_3);

        listZones = new QListView(groupTotals);
        listZones->setObjectName(QString::fromUtf8("listZones"));
        sizePolicy5.setHeightForWidth(listZones->sizePolicy().hasHeightForWidth());
        listZones->setSizePolicy(sizePolicy5);
        listZones->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listZones->setProperty("showDropIndicator", QVariant(false));
        listZones->setAlternatingRowColors(false);
        listZones->setSelectionMode(QAbstractItemView::MultiSelection);
        listZones->setSelectionBehavior(QAbstractItemView::SelectRows);
        listZones->setProperty("isWrapping", QVariant(false));
        listZones->setResizeMode(QListView::Adjust);
        listZones->setWordWrap(true);

        horizontalLayout->addWidget(listZones);


        verticalLayout_8->addLayout(horizontalLayout);


        verticalLayout_9->addWidget(groupTotals);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        buttonBox = new QDialogButtonBox(groupDetails);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        horizontalLayout_12->addWidget(buttonBox);


        verticalLayout_9->addLayout(horizontalLayout_12);


        gridLayout->addLayout(verticalLayout_9, 1, 1, 1, 1);


        verticalLayout_5->addWidget(groupDetails);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        groupBox_2 = new QGroupBox(FrmTrip);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 48));
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        pushPrevious = new QPushButton(groupBox_2);
        pushPrevious->setObjectName(QString::fromUtf8("pushPrevious"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/app_new/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushPrevious->setIcon(icon4);

        horizontalLayout_10->addWidget(pushPrevious);

        pushNext = new QPushButton(groupBox_2);
        pushNext->setObjectName(QString::fromUtf8("pushNext"));
        pushNext->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/app_new/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushNext->setIcon(icon5);

        horizontalLayout_10->addWidget(pushNext);


        horizontalLayout_16->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_16);

#ifndef QT_NO_SHORTCUT
        label_23->setBuddy(tableView);
        label_6->setBuddy(cmbSampler);
        label_2->setBuddy(cmbSite);
        label_22->setBuddy(spinProf);
        label_24->setBuddy(spinPart);
        label_14->setBuddy(customDtStart);
        label_25->setBuddy(customDtEnd);
        label_13->setBuddy(textComments);
        label_4->setBuddy(spinNOE);
        label_8->setBuddy(catchInputCtrl);
        label_7->setBuddy(listGears);
        label_5->setBuddy(listZones);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tableView, pushNew);
        QWidget::setTabOrder(pushNew, pushEdit);
        QWidget::setTabOrder(pushEdit, pushRemove);
        QWidget::setTabOrder(pushRemove, cmbSampler);
        QWidget::setTabOrder(cmbSampler, cmbSite);
        QWidget::setTabOrder(cmbSite, spinProf);
        QWidget::setTabOrder(spinProf, spinPart);
        QWidget::setTabOrder(spinPart, customDtStart);
        QWidget::setTabOrder(customDtStart, customDtEnd);
        QWidget::setTabOrder(customDtEnd, textComments);
        QWidget::setTabOrder(textComments, spinNOE);
        QWidget::setTabOrder(spinNOE, spinNOC);
        QWidget::setTabOrder(spinNOC, catchInputCtrl);
        QWidget::setTabOrder(catchInputCtrl, listGears);
        QWidget::setTabOrder(listGears, listZones);
        QWidget::setTabOrder(listZones, pushClear);
        QWidget::setTabOrder(pushClear, pushClear2);
        QWidget::setTabOrder(pushClear2, buttonBox);
        QWidget::setTabOrder(buttonBox, pushPrevious);
        QWidget::setTabOrder(pushPrevious, pushNext);

        retranslateUi(FrmTrip);
        QObject::connect(pushNew, SIGNAL(clicked()), FrmTrip, SLOT(createRecord()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), FrmTrip, SLOT(onButtonClick(QAbstractButton*)));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), FrmTrip, SLOT(previewRow(QModelIndex)));
        QObject::connect(pushEdit, SIGNAL(clicked(bool)), FrmTrip, SLOT(editRecord(bool)));
        QObject::connect(pushRemove, SIGNAL(clicked()), FrmTrip, SLOT(removeRecord()));
        QObject::connect(pushClear, SIGNAL(clicked()), listGears, SLOT(clearSelection()));
        QObject::connect(pushClear2, SIGNAL(clicked()), listZones, SLOT(clearSelection()));

        QMetaObject::connectSlotsByName(FrmTrip);
    } // setupUi

    void retranslateUi(QWidget *FrmTrip)
    {
        FrmTrip->setWindowTitle(QApplication::translate("FrmTrip", "Form", 0, QApplication::UnicodeUTF8));
        lbHeader->setText(QApplication::translate("FrmTrip", "WRITE SOMETHING HERE LATER <---", 0, QApplication::UnicodeUTF8));
        lbSource->setText(QApplication::translate("FrmTrip", "[SOURCE]", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("FrmTrip", "Choose Fishing Trip:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("FrmTrip", "Choose sampled fishing trip (or create a new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableView->setStatusTip(QApplication::translate("FrmTrip", "Choose sampled fishing trip (or create a new one)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableView->setWhatsThis(QApplication::translate("FrmTrip", "In this widget we can choose a sampled fishing trip, or create a new one", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushNew->setToolTip(QApplication::translate("FrmTrip", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushNew->setStatusTip(QApplication::translate("FrmTrip", "Create new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushNew->setWhatsThis(QApplication::translate("FrmTrip", "Creates new record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushNew->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushEdit->setToolTip(QApplication::translate("FrmTrip", "Edit record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushEdit->setStatusTip(QApplication::translate("FrmTrip", "Edit record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushEdit->setWhatsThis(QApplication::translate("FrmTrip", "Edits record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushRemove->setToolTip(QApplication::translate("FrmTrip", "Remove record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushRemove->setStatusTip(QApplication::translate("FrmTrip", "Remove record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushRemove->setWhatsThis(QApplication::translate("FrmTrip", "Removes record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushRemove->setText(QString());
        pushRemove->setShortcut(QApplication::translate("FrmTrip", "Del", 0, QApplication::UnicodeUTF8));
        groupDetails->setTitle(QApplication::translate("FrmTrip", "Details", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FrmTrip", "Sampler", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbSampler->setToolTip(QApplication::translate("FrmTrip", "Choose sampler", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbSampler->setStatusTip(QApplication::translate("FrmTrip", "Choose sampler", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbSampler->setWhatsThis(QApplication::translate("FrmTrip", "In this widget we can choose a sampler", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("FrmTrip", "Landing Site", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbSite->setToolTip(QApplication::translate("FrmTrip", "Choose Landing Site", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbSite->setStatusTip(QApplication::translate("FrmTrip", "Choose Landing Site", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbSite->setWhatsThis(QApplication::translate("FrmTrip", "In this widget we can select a landing site", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_22->setText(QApplication::translate("FrmTrip", "No of professional fishermen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinProf->setToolTip(QApplication::translate("FrmTrip", "Number of professional fishermen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinProf->setStatusTip(QApplication::translate("FrmTrip", "Number of professional fishermen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinProf->setWhatsThis(QApplication::translate("FrmTrip", "Input the number of professional fishermen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_24->setText(QApplication::translate("FrmTrip", "No part-time fishermen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinPart->setToolTip(QApplication::translate("FrmTrip", "Part-time fishermen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinPart->setStatusTip(QApplication::translate("FrmTrip", "Part-time fishermen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinPart->setWhatsThis(QApplication::translate("FrmTrip", "Input the number of part-time fishermen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("FrmTrip", "Start", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customDtStart->setToolTip(QApplication::translate("FrmTrip", "Start datetime", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        customDtStart->setWhatsThis(QApplication::translate("FrmTrip", "Input the starting datetime of the fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_25->setText(QApplication::translate("FrmTrip", "End", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customDtEnd->setToolTip(QApplication::translate("FrmTrip", "End datetime", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        customDtEnd->setWhatsThis(QApplication::translate("FrmTrip", "Input the finishing datetime of the fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("FrmTrip", "Comments:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textComments->setToolTip(QApplication::translate("FrmTrip", "Comments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        textComments->setStatusTip(QApplication::translate("FrmTrip", "Comments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        textComments->setWhatsThis(QApplication::translate("FrmTrip", "Input comments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        groupTotals->setTitle(QApplication::translate("FrmTrip", "Totals", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FrmTrip", "No of operations", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrmTrip", "Estimated", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinNOE->setToolTip(QApplication::translate("FrmTrip", "Number of fishing operations (estimated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinNOE->setStatusTip(QApplication::translate("FrmTrip", "Number of fishing operations (estimated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinNOE->setWhatsThis(QApplication::translate("FrmTrip", "Number of fishing operations (estimated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("FrmTrip", "Calculated", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinNOC->setToolTip(QApplication::translate("FrmTrip", "Number of fishing operations (calculated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinNOC->setStatusTip(QApplication::translate("FrmTrip", "Number of fishing operations (calculated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinNOC->setWhatsThis(QApplication::translate("FrmTrip", "Number of fishing operations (calculated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("FrmTrip", "Catch", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FrmTrip", "Gear(s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushClear->setToolTip(QApplication::translate("FrmTrip", "Clear selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushClear->setStatusTip(QApplication::translate("FrmTrip", "Clear selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushClear->setWhatsThis(QApplication::translate("FrmTrip", "Clears selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushClear->setText(QString());
#ifndef QT_NO_TOOLTIP
        listGears->setToolTip(QApplication::translate("FrmTrip", "Select the gear(s) used during this fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        listGears->setStatusTip(QApplication::translate("FrmTrip", "Select the gear(s) used during this fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        listGears->setWhatsThis(QApplication::translate("FrmTrip", "Select the gear(s) used during this fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("FrmTrip", "Zone(s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushClear2->setToolTip(QApplication::translate("FrmTrip", "Clear selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushClear2->setStatusTip(QApplication::translate("FrmTrip", "Clear selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushClear2->setWhatsThis(QApplication::translate("FrmTrip", "Clears selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushClear2->setText(QString());
#ifndef QT_NO_TOOLTIP
        listZones->setToolTip(QApplication::translate("FrmTrip", "Select the gear(s) used during this fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        listZones->setStatusTip(QApplication::translate("FrmTrip", "Select the gear(s) used during this fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        listZones->setWhatsThis(QApplication::translate("FrmTrip", "Select the gear(s) used during this fishing trip", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(QString());
        pushPrevious->setText(QApplication::translate("FrmTrip", "Previous", 0, QApplication::UnicodeUTF8));
        pushNext->setText(QApplication::translate("FrmTrip", "Next", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmTrip: public Ui_FrmTrip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMTRIP_H
