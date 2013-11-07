/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *leDesignerPath;
    QPushButton *bDesignerPath;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbIconSize;
    QCheckBox *drawSelection;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(425, 218);
        verticalLayout_2 = new QVBoxLayout(OptionsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(OptionsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        leDesignerPath = new QLineEdit(groupBox_2);
        leDesignerPath->setObjectName(QString::fromUtf8("leDesignerPath"));

        horizontalLayout->addWidget(leDesignerPath);

        bDesignerPath = new QPushButton(groupBox_2);
        bDesignerPath->setObjectName(QString::fromUtf8("bDesignerPath"));

        horizontalLayout->addWidget(bDesignerPath);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(OptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        cbIconSize = new QComboBox(groupBox);
        cbIconSize->setObjectName(QString::fromUtf8("cbIconSize"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbIconSize->sizePolicy().hasHeightForWidth());
        cbIconSize->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(cbIconSize);


        verticalLayout->addLayout(horizontalLayout_2);

        drawSelection = new QCheckBox(groupBox);
        drawSelection->setObjectName(QString::fromUtf8("drawSelection"));
        drawSelection->setLayoutDirection(Qt::RightToLeft);
        drawSelection->setAutoFillBackground(false);

        verticalLayout->addWidget(drawSelection);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(OptionsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), OptionsDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), OptionsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("OptionsDialog", "Path", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OptionsDialog", "designer:", 0, QApplication::UnicodeUTF8));
        bDesignerPath->setText(QApplication::translate("OptionsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OptionsDialog", "Interface", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OptionsDialog", "Icon size:", 0, QApplication::UnicodeUTF8));
        cbIconSize->clear();
        cbIconSize->insertItems(0, QStringList()
         << QApplication::translate("OptionsDialog", "12 x 12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OptionsDialog", "16 x 16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OptionsDialog", "24 x 24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OptionsDialog", "32 x 32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OptionsDialog", "48 x 48", 0, QApplication::UnicodeUTF8)
        );
        drawSelection->setText(QApplication::translate("OptionsDialog", "Draw selection border around items", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
