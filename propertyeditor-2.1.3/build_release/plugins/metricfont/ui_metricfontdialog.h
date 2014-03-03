/********************************************************************************
** Form generated from reading UI file 'metricfontdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METRICFONTDIALOG_H
#define UI_METRICFONTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_metricFontDialog
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *writingSystemsComboBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListView *familiesListView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListView *styleListView;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QDoubleSpinBox *sizeDoubleSpinBox;
    QListView *sizeListView;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *strikeoutCheckBox;
    QCheckBox *underlineCheckBox;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QGraphicsView *sampleGraphicsView;
    QLabel *label_2;
    QComboBox *writingSystemComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *metricFontDialog)
    {
        if (metricFontDialog->objectName().isEmpty())
            metricFontDialog->setObjectName(QString::fromUtf8("metricFontDialog"));
        metricFontDialog->resize(623, 542);
        gridLayout_3 = new QGridLayout(metricFontDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(metricFontDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        writingSystemsComboBox = new QComboBox(metricFontDialog);
        writingSystemsComboBox->setObjectName(QString::fromUtf8("writingSystemsComboBox"));

        gridLayout_3->addWidget(writingSystemsComboBox, 0, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(metricFontDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(300, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        familiesListView = new QListView(groupBox);
        familiesListView->setObjectName(QString::fromUtf8("familiesListView"));
        familiesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_2->addWidget(familiesListView);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(metricFontDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        styleListView = new QListView(groupBox_2);
        styleListView->setObjectName(QString::fromUtf8("styleListView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(styleListView->sizePolicy().hasHeightForWidth());
        styleListView->setSizePolicy(sizePolicy2);
        styleListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(styleListView, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(metricFontDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sizeDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        sizeDoubleSpinBox->setObjectName(QString::fromUtf8("sizeDoubleSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sizeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        sizeDoubleSpinBox->setSizePolicy(sizePolicy3);
        sizeDoubleSpinBox->setDecimals(1);
        sizeDoubleSpinBox->setMinimum(0.5);
        sizeDoubleSpinBox->setMaximum(100);
        sizeDoubleSpinBox->setSingleStep(0.5);
        sizeDoubleSpinBox->setValue(4);

        verticalLayout->addWidget(sizeDoubleSpinBox);

        sizeListView = new QListView(groupBox_3);
        sizeListView->setObjectName(QString::fromUtf8("sizeListView"));
        sizePolicy2.setHeightForWidth(sizeListView->sizePolicy().hasHeightForWidth());
        sizeListView->setSizePolicy(sizePolicy2);
        sizeListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(sizeListView);


        horizontalLayout->addWidget(groupBox_3);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 3);

        groupBox_4 = new QGroupBox(metricFontDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        strikeoutCheckBox = new QCheckBox(groupBox_4);
        strikeoutCheckBox->setObjectName(QString::fromUtf8("strikeoutCheckBox"));

        verticalLayout_3->addWidget(strikeoutCheckBox);

        underlineCheckBox = new QCheckBox(groupBox_4);
        underlineCheckBox->setObjectName(QString::fromUtf8("underlineCheckBox"));

        verticalLayout_3->addWidget(underlineCheckBox);


        gridLayout_3->addWidget(groupBox_4, 2, 0, 1, 2);

        groupBox_5 = new QGroupBox(metricFontDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sampleGraphicsView = new QGraphicsView(groupBox_5);
        sampleGraphicsView->setObjectName(QString::fromUtf8("sampleGraphicsView"));

        gridLayout_2->addWidget(sampleGraphicsView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 2, 2, 3, 1);

        label_2 = new QLabel(metricFontDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 2);

        writingSystemComboBox = new QComboBox(metricFontDialog);
        writingSystemComboBox->setObjectName(QString::fromUtf8("writingSystemComboBox"));

        gridLayout_3->addWidget(writingSystemComboBox, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(metricFontDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 5, 2, 1, 1);

        QWidget::setTabOrder(familiesListView, styleListView);
        QWidget::setTabOrder(styleListView, sizeDoubleSpinBox);
        QWidget::setTabOrder(sizeDoubleSpinBox, sizeListView);
        QWidget::setTabOrder(sizeListView, strikeoutCheckBox);
        QWidget::setTabOrder(strikeoutCheckBox, underlineCheckBox);
        QWidget::setTabOrder(underlineCheckBox, writingSystemsComboBox);
        QWidget::setTabOrder(writingSystemsComboBox, writingSystemComboBox);
        QWidget::setTabOrder(writingSystemComboBox, buttonBox);
        QWidget::setTabOrder(buttonBox, sampleGraphicsView);

        retranslateUi(metricFontDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), metricFontDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), metricFontDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(metricFontDialog);
    } // setupUi

    void retranslateUi(QDialog *metricFontDialog)
    {
        metricFontDialog->setWindowTitle(QApplication::translate("metricFontDialog", "Font", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("metricFontDialog", "Writing systems:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("metricFontDialog", "Font families", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("metricFontDialog", "Font style", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("metricFontDialog", "Font size (mm)", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("metricFontDialog", "Font effects", 0, QApplication::UnicodeUTF8));
        strikeoutCheckBox->setText(QApplication::translate("metricFontDialog", "Strikeout", 0, QApplication::UnicodeUTF8));
        underlineCheckBox->setText(QApplication::translate("metricFontDialog", "Underline", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("metricFontDialog", "Font sample", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("metricFontDialog", "Font writing systems:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class metricFontDialog: public Ui_metricFontDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METRICFONTDIALOG_H
