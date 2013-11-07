/********************************************************************************
** Form generated from reading UI file 'flagsList.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAGSLIST_H
#define UI_FLAGSLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_flagsDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *list;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *checkAllButton;
    QPushButton *uncheckAllButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *flagsDialog)
    {
        if (flagsDialog->objectName().isEmpty())
            flagsDialog->setObjectName(QString::fromUtf8("flagsDialog"));
        flagsDialog->resize(309, 458);
        flagsDialog->setSizeGripEnabled(false);
        flagsDialog->setModal(false);
        gridLayout = new QGridLayout(flagsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        list = new QListWidget(flagsDialog);
        list->setObjectName(QString::fromUtf8("list"));

        gridLayout->addWidget(list, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkAllButton = new QPushButton(flagsDialog);
        checkAllButton->setObjectName(QString::fromUtf8("checkAllButton"));

        horizontalLayout_2->addWidget(checkAllButton);

        uncheckAllButton = new QPushButton(flagsDialog);
        uncheckAllButton->setObjectName(QString::fromUtf8("uncheckAllButton"));

        horizontalLayout_2->addWidget(uncheckAllButton);

        horizontalSpacer = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(152, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(flagsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(flagsDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(flagsDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), flagsDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), flagsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(flagsDialog);
    } // setupUi

    void retranslateUi(QDialog *flagsDialog)
    {
        flagsDialog->setWindowTitle(QApplication::translate("flagsDialog", "Flags", 0, QApplication::UnicodeUTF8));
        checkAllButton->setText(QApplication::translate("flagsDialog", "C&heck all", 0, QApplication::UnicodeUTF8));
        uncheckAllButton->setText(QApplication::translate("flagsDialog", "&Uncheck all", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("flagsDialog", "&OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("flagsDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class flagsDialog: public Ui_flagsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAGSLIST_H
