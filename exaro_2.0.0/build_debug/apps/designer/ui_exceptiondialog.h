/********************************************************************************
** Form generated from reading UI file 'exceptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCEPTIONDIALOG_H
#define UI_EXCEPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_exceptionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *exceptionTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *exceptionDialog)
    {
        if (exceptionDialog->objectName().isEmpty())
            exceptionDialog->setObjectName(QString::fromUtf8("exceptionDialog"));
        exceptionDialog->resize(500, 300);
        verticalLayout = new QVBoxLayout(exceptionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        exceptionTextEdit = new QTextEdit(exceptionDialog);
        exceptionTextEdit->setObjectName(QString::fromUtf8("exceptionTextEdit"));
        exceptionTextEdit->setLineWrapMode(QTextEdit::NoWrap);
        exceptionTextEdit->setReadOnly(true);

        verticalLayout->addWidget(exceptionTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(exceptionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(exceptionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(exceptionDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), exceptionDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), exceptionTextEdit, SLOT(selectAll()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), exceptionTextEdit, SLOT(copy()));

        QMetaObject::connectSlotsByName(exceptionDialog);
    } // setupUi

    void retranslateUi(QDialog *exceptionDialog)
    {
        exceptionDialog->setWindowTitle(QApplication::translate("exceptionDialog", "Exception", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("exceptionDialog", "&Copy", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("exceptionDialog", "C&lose", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class exceptionDialog: public Ui_exceptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCEPTIONDIALOG_H
