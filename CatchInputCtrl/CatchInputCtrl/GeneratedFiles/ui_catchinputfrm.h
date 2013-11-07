/********************************************************************************
** Form generated from reading UI file 'catchinputfrm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATCHINPUTFRM_H
#define UI_CATCHINPUTFRM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CatchInputCtrl
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *pageWeight;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinTotalE;
    QDoubleSpinBox *doubleSpinTotalC;
    QComboBox *cmbWeightUnits;
    QWidget *pageBoxes;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinNoBoxesE;
    QDoubleSpinBox *doubleSpinNoBoxesC;
    QDoubleSpinBox *doubleSpinWeightBox;
    QComboBox *cmbBoxUnits;
    QWidget *pageUnits;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QSpinBox *spinUnitsE;
    QSpinBox *spinUnitsC;
    QDoubleSpinBox *doubleSpinWeightUnit;
    QComboBox *cmbUnitUnits;

    void setupUi(QWidget *CatchInputCtrl)
    {
        if (CatchInputCtrl->objectName().isEmpty())
            CatchInputCtrl->setObjectName(QString::fromUtf8("CatchInputCtrl"));
        CatchInputCtrl->resize(283, 157);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CatchInputCtrl->sizePolicy().hasHeightForWidth());
        CatchInputCtrl->setSizePolicy(sizePolicy);
        CatchInputCtrl->setMinimumSize(QSize(270, 157));
        CatchInputCtrl->setFocusPolicy(Qt::TabFocus);
        verticalLayout = new QVBoxLayout(CatchInputCtrl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolBox = new QToolBox(CatchInputCtrl);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(250, 139));
        toolBox->setFocusPolicy(Qt::TabFocus);
        pageWeight = new QWidget();
        pageWeight->setObjectName(QString::fromUtf8("pageWeight"));
        pageWeight->setGeometry(QRect(0, 0, 265, 58));
        gridLayout_3 = new QGridLayout(pageWeight);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(pageWeight);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(pageWeight);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(pageWeight);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_3, 0, 2, 1, 1);

        doubleSpinTotalE = new QDoubleSpinBox(pageWeight);
        doubleSpinTotalE->setObjectName(QString::fromUtf8("doubleSpinTotalE"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(94);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(doubleSpinTotalE->sizePolicy().hasHeightForWidth());
        doubleSpinTotalE->setSizePolicy(sizePolicy2);
        doubleSpinTotalE->setMinimumSize(QSize(0, 20));
        doubleSpinTotalE->setFocusPolicy(Qt::WheelFocus);
        doubleSpinTotalE->setMaximum(50000);

        gridLayout_3->addWidget(doubleSpinTotalE, 1, 0, 1, 1);

        doubleSpinTotalC = new QDoubleSpinBox(pageWeight);
        doubleSpinTotalC->setObjectName(QString::fromUtf8("doubleSpinTotalC"));
        doubleSpinTotalC->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(93);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(doubleSpinTotalC->sizePolicy().hasHeightForWidth());
        doubleSpinTotalC->setSizePolicy(sizePolicy3);
        doubleSpinTotalC->setMinimumSize(QSize(0, 20));
        doubleSpinTotalC->setFocusPolicy(Qt::WheelFocus);
        doubleSpinTotalC->setMaximum(50000);

        gridLayout_3->addWidget(doubleSpinTotalC, 1, 1, 1, 1);

        cmbWeightUnits = new QComboBox(pageWeight);
        cmbWeightUnits->setObjectName(QString::fromUtf8("cmbWeightUnits"));
        sizePolicy2.setHeightForWidth(cmbWeightUnits->sizePolicy().hasHeightForWidth());
        cmbWeightUnits->setSizePolicy(sizePolicy2);
        cmbWeightUnits->setMinimumSize(QSize(0, 20));
        cmbWeightUnits->setFocusPolicy(Qt::WheelFocus);

        gridLayout_3->addWidget(cmbWeightUnits, 1, 2, 1, 1);

        toolBox->addItem(pageWeight, QString::fromUtf8("by Weight"));
        pageBoxes = new QWidget();
        pageBoxes->setObjectName(QString::fromUtf8("pageBoxes"));
        pageBoxes->setGeometry(QRect(0, 0, 265, 58));
        gridLayout_2 = new QGridLayout(pageBoxes);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(pageBoxes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(pageBoxes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(pageBoxes);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(pageBoxes);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_7, 0, 3, 1, 1);

        doubleSpinNoBoxesE = new QDoubleSpinBox(pageBoxes);
        doubleSpinNoBoxesE->setObjectName(QString::fromUtf8("doubleSpinNoBoxesE"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(67);
        sizePolicy4.setVerticalStretch(20);
        sizePolicy4.setHeightForWidth(doubleSpinNoBoxesE->sizePolicy().hasHeightForWidth());
        doubleSpinNoBoxesE->setSizePolicy(sizePolicy4);
        doubleSpinNoBoxesE->setMinimumSize(QSize(0, 20));
        doubleSpinNoBoxesE->setFocusPolicy(Qt::WheelFocus);
        doubleSpinNoBoxesE->setMaximum(50000);

        gridLayout_2->addWidget(doubleSpinNoBoxesE, 1, 0, 1, 1);

        doubleSpinNoBoxesC = new QDoubleSpinBox(pageBoxes);
        doubleSpinNoBoxesC->setObjectName(QString::fromUtf8("doubleSpinNoBoxesC"));
        doubleSpinNoBoxesC->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(53);
        sizePolicy5.setVerticalStretch(20);
        sizePolicy5.setHeightForWidth(doubleSpinNoBoxesC->sizePolicy().hasHeightForWidth());
        doubleSpinNoBoxesC->setSizePolicy(sizePolicy5);
        doubleSpinNoBoxesC->setMinimumSize(QSize(0, 20));
        doubleSpinNoBoxesC->setFocusPolicy(Qt::WheelFocus);
        doubleSpinNoBoxesC->setMaximum(50000);

        gridLayout_2->addWidget(doubleSpinNoBoxesC, 1, 1, 1, 1);

        doubleSpinWeightBox = new QDoubleSpinBox(pageBoxes);
        doubleSpinWeightBox->setObjectName(QString::fromUtf8("doubleSpinWeightBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(65);
        sizePolicy6.setVerticalStretch(20);
        sizePolicy6.setHeightForWidth(doubleSpinWeightBox->sizePolicy().hasHeightForWidth());
        doubleSpinWeightBox->setSizePolicy(sizePolicy6);
        doubleSpinWeightBox->setMinimumSize(QSize(0, 20));
        doubleSpinWeightBox->setFocusPolicy(Qt::WheelFocus);
        doubleSpinWeightBox->setMaximum(50000);

        gridLayout_2->addWidget(doubleSpinWeightBox, 1, 2, 1, 1);

        cmbBoxUnits = new QComboBox(pageBoxes);
        cmbBoxUnits->setObjectName(QString::fromUtf8("cmbBoxUnits"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(74);
        sizePolicy7.setVerticalStretch(20);
        sizePolicy7.setHeightForWidth(cmbBoxUnits->sizePolicy().hasHeightForWidth());
        cmbBoxUnits->setSizePolicy(sizePolicy7);
        cmbBoxUnits->setMinimumSize(QSize(0, 20));
        cmbBoxUnits->setFocusPolicy(Qt::WheelFocus);

        gridLayout_2->addWidget(cmbBoxUnits, 1, 3, 1, 1);

        toolBox->addItem(pageBoxes, QString::fromUtf8("by Boxes"));
        pageUnits = new QWidget();
        pageUnits->setObjectName(QString::fromUtf8("pageUnits"));
        pageUnits->setGeometry(QRect(0, 0, 265, 58));
        gridLayout = new QGridLayout(pageUnits);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(pageUnits);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(pageUnits);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(pageUnits);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        label_11 = new QLabel(pageUnits);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_11, 0, 3, 1, 1);

        spinUnitsE = new QSpinBox(pageUnits);
        spinUnitsE->setObjectName(QString::fromUtf8("spinUnitsE"));
        sizePolicy4.setHeightForWidth(spinUnitsE->sizePolicy().hasHeightForWidth());
        spinUnitsE->setSizePolicy(sizePolicy4);
        spinUnitsE->setMinimumSize(QSize(0, 20));
        spinUnitsE->setFocusPolicy(Qt::WheelFocus);
        spinUnitsE->setMaximum(1000);

        gridLayout->addWidget(spinUnitsE, 1, 0, 1, 1);

        spinUnitsC = new QSpinBox(pageUnits);
        spinUnitsC->setObjectName(QString::fromUtf8("spinUnitsC"));
        spinUnitsC->setEnabled(false);
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(50);
        sizePolicy8.setVerticalStretch(20);
        sizePolicy8.setHeightForWidth(spinUnitsC->sizePolicy().hasHeightForWidth());
        spinUnitsC->setSizePolicy(sizePolicy8);
        spinUnitsC->setMinimumSize(QSize(0, 20));
        spinUnitsC->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(spinUnitsC, 1, 1, 1, 1);

        doubleSpinWeightUnit = new QDoubleSpinBox(pageUnits);
        doubleSpinWeightUnit->setObjectName(QString::fromUtf8("doubleSpinWeightUnit"));
        doubleSpinWeightUnit->setEnabled(true);
        sizePolicy6.setHeightForWidth(doubleSpinWeightUnit->sizePolicy().hasHeightForWidth());
        doubleSpinWeightUnit->setSizePolicy(sizePolicy6);
        doubleSpinWeightUnit->setMinimumSize(QSize(0, 20));
        doubleSpinWeightUnit->setFocusPolicy(Qt::WheelFocus);
        doubleSpinWeightUnit->setMaximum(50000);

        gridLayout->addWidget(doubleSpinWeightUnit, 1, 2, 1, 1);

        cmbUnitUnits = new QComboBox(pageUnits);
        cmbUnitUnits->setObjectName(QString::fromUtf8("cmbUnitUnits"));
        sizePolicy7.setHeightForWidth(cmbUnitUnits->sizePolicy().hasHeightForWidth());
        cmbUnitUnits->setSizePolicy(sizePolicy7);
        cmbUnitUnits->setMinimumSize(QSize(0, 20));
        cmbUnitUnits->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(cmbUnitUnits, 1, 3, 1, 1);

        toolBox->addItem(pageUnits, QString::fromUtf8("by Units"));

        verticalLayout->addWidget(toolBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(doubleSpinTotalE);
        label_2->setBuddy(doubleSpinTotalC);
        label_3->setBuddy(cmbWeightUnits);
        label_4->setBuddy(doubleSpinNoBoxesE);
        label_5->setBuddy(doubleSpinNoBoxesC);
        label_6->setBuddy(doubleSpinWeightBox);
        label_7->setBuddy(cmbBoxUnits);
        label_8->setBuddy(spinUnitsE);
        label_9->setBuddy(spinUnitsC);
        label_10->setBuddy(doubleSpinWeightUnit);
        label_11->setBuddy(cmbUnitUnits);
#endif // QT_NO_SHORTCUT

        retranslateUi(CatchInputCtrl);
        QObject::connect(spinUnitsE, SIGNAL(valueChanged(int)), CatchInputCtrl, SLOT(adjustTotalWeightFromUnits(int)));
        QObject::connect(doubleSpinWeightUnit, SIGNAL(valueChanged(double)), CatchInputCtrl, SLOT(adjustTotalWeightFromUnits(double)));
        QObject::connect(doubleSpinNoBoxesE, SIGNAL(valueChanged(double)), CatchInputCtrl, SLOT(adjustTotalWeightFromNoBoxes(double)));
        QObject::connect(doubleSpinWeightBox, SIGNAL(valueChanged(double)), CatchInputCtrl, SLOT(adjustTotalWeightFromBoxWeight(double)));
        QObject::connect(cmbWeightUnits, SIGNAL(currentIndexChanged(QString)), CatchInputCtrl, SLOT(onWeightUnitChange(QString)));
        QObject::connect(cmbBoxUnits, SIGNAL(currentIndexChanged(QString)), CatchInputCtrl, SLOT(onBoxUnitChange(QString)));
        QObject::connect(cmbUnitUnits, SIGNAL(currentIndexChanged(QString)), CatchInputCtrl, SLOT(onUnitsUnitChange(QString)));
        QObject::connect(doubleSpinTotalE, SIGNAL(valueChanged(QString)), CatchInputCtrl, SLOT(updateWeightLabel(QString)));
        QObject::connect(doubleSpinTotalC, SIGNAL(valueChanged(QString)), CatchInputCtrl, SLOT(updateWeightLabel(QString)));

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CatchInputCtrl);
    } // setupUi

    void retranslateUi(QWidget *CatchInputCtrl)
    {
        CatchInputCtrl->setWindowTitle(QApplication::translate("CatchInputCtrl", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolBox->setToolTip(QApplication::translate("CatchInputCtrl", "This widget allows us to introduce the catch, \n"
" using several methods that match each other.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolBox->setStatusTip(QApplication::translate("CatchInputCtrl", "This widget allows us to introduce the catch, \\n using several methods that match each other.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        toolBox->setWhatsThis(QApplication::translate("CatchInputCtrl", "This widget allows us to introduce the catch, \n"
" using several methods that match each other.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("CatchInputCtrl", "Estimated", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CatchInputCtrl", "Calculated", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CatchInputCtrl", "Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinTotalE->setToolTip(QApplication::translate("CatchInputCtrl", "Estimated total catch weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinTotalE->setStatusTip(QApplication::translate("CatchInputCtrl", "Estimated total catch weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinTotalE->setWhatsThis(QApplication::translate("CatchInputCtrl", "Estimated total catch weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinTotalC->setToolTip(QApplication::translate("CatchInputCtrl", "Calculated total catch weight \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinTotalC->setStatusTip(QApplication::translate("CatchInputCtrl", "Calculated total catch weight \\n (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinTotalC->setWhatsThis(QApplication::translate("CatchInputCtrl", "Calculated total catch weight \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbWeightUnits->setToolTip(QApplication::translate("CatchInputCtrl", "Weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbWeightUnits->setStatusTip(QApplication::translate("CatchInputCtrl", "Weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbWeightUnits->setWhatsThis(QApplication::translate("CatchInputCtrl", "Weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(pageWeight), QApplication::translate("CatchInputCtrl", "by Weight", 0, QApplication::UnicodeUTF8));
        toolBox->setItemToolTip(toolBox->indexOf(pageWeight), QApplication::translate("CatchInputCtrl", "Insert aggregated weight (total weight)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CatchInputCtrl", "Estimated", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CatchInputCtrl", "Calculated", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CatchInputCtrl", "Weight/box", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CatchInputCtrl", "Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinNoBoxesE->setToolTip(QApplication::translate("CatchInputCtrl", "Estimated number of boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinNoBoxesE->setStatusTip(QApplication::translate("CatchInputCtrl", "Estimated number of boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinNoBoxesE->setWhatsThis(QApplication::translate("CatchInputCtrl", "Estimated number of boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinNoBoxesC->setToolTip(QApplication::translate("CatchInputCtrl", "Calculated number of boxes \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinNoBoxesC->setStatusTip(QApplication::translate("CatchInputCtrl", "Calculated number of boxes \\n (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinNoBoxesC->setWhatsThis(QApplication::translate("CatchInputCtrl", "Calculated number of boxes \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinWeightBox->setToolTip(QApplication::translate("CatchInputCtrl", "Box weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinWeightBox->setStatusTip(QApplication::translate("CatchInputCtrl", "Box weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinWeightBox->setWhatsThis(QApplication::translate("CatchInputCtrl", "Box weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbBoxUnits->setToolTip(QApplication::translate("CatchInputCtrl", "Box weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbBoxUnits->setStatusTip(QApplication::translate("CatchInputCtrl", "Box weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbBoxUnits->setWhatsThis(QApplication::translate("CatchInputCtrl", "Box weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(pageBoxes), QApplication::translate("CatchInputCtrl", "by Boxes", 0, QApplication::UnicodeUTF8));
        toolBox->setItemToolTip(toolBox->indexOf(pageBoxes), QApplication::translate("CatchInputCtrl", "Insert weight by boxes (number of boxes x box weight)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CatchInputCtrl", "Estimated", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CatchInputCtrl", "Calculated", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CatchInputCtrl", "Weight/unit", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CatchInputCtrl", "Units", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinUnitsE->setToolTip(QApplication::translate("CatchInputCtrl", "Estimated units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinUnitsE->setStatusTip(QApplication::translate("CatchInputCtrl", "Estimated units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinUnitsE->setWhatsThis(QApplication::translate("CatchInputCtrl", "Estimated units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        spinUnitsC->setToolTip(QApplication::translate("CatchInputCtrl", "Calculated units \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinUnitsC->setStatusTip(QApplication::translate("CatchInputCtrl", "Calculated units \\n (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinUnitsC->setWhatsThis(QApplication::translate("CatchInputCtrl", "Calculated units \n"
" (comes from the aggregation of totals introduced in next forms)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        doubleSpinWeightUnit->setToolTip(QApplication::translate("CatchInputCtrl", "Unit weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        doubleSpinWeightUnit->setStatusTip(QApplication::translate("CatchInputCtrl", "Unit weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinWeightUnit->setWhatsThis(QApplication::translate("CatchInputCtrl", "Unit weight", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cmbUnitUnits->setToolTip(QApplication::translate("CatchInputCtrl", "Unit weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbUnitUnits->setStatusTip(QApplication::translate("CatchInputCtrl", "Unit weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbUnitUnits->setWhatsThis(QApplication::translate("CatchInputCtrl", "Unit weight units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(pageUnits), QApplication::translate("CatchInputCtrl", "by Units", 0, QApplication::UnicodeUTF8));
        toolBox->setItemToolTip(toolBox->indexOf(pageUnits), QApplication::translate("CatchInputCtrl", "Insert weight by units (number of units x unit weight)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CatchInputCtrl: public Ui_CatchInputCtrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATCHINPUTFRM_H
