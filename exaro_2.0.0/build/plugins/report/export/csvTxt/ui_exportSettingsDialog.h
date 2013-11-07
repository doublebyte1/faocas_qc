/********************************************************************************
** Form generated from reading UI file 'exportSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSETTINGSDIALOG_H
#define UI_EXPORTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *comma;
    QRadioButton *tabulator;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *semicolon;
    QRadioButton *space;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *other;
    QLineEdit *delimiter;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *quote_1;
    QRadioButton *quote_2;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *quote_3;
    QLineEdit *quote;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(404, 282);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comma = new QRadioButton(groupBox);
        comma->setObjectName(QString::fromUtf8("comma"));

        verticalLayout->addWidget(comma);

        tabulator = new QRadioButton(groupBox);
        tabulator->setObjectName(QString::fromUtf8("tabulator"));
        tabulator->setChecked(true);

        verticalLayout->addWidget(tabulator);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        semicolon = new QRadioButton(groupBox);
        semicolon->setObjectName(QString::fromUtf8("semicolon"));

        verticalLayout_2->addWidget(semicolon);

        space = new QRadioButton(groupBox);
        space->setObjectName(QString::fromUtf8("space"));

        verticalLayout_2->addWidget(space);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        other = new QRadioButton(groupBox);
        other->setObjectName(QString::fromUtf8("other"));

        verticalLayout_3->addWidget(other);

        delimiter = new QLineEdit(groupBox);
        delimiter->setObjectName(QString::fromUtf8("delimiter"));
        delimiter->setEnabled(false);

        verticalLayout_3->addWidget(delimiter);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        quote_1 = new QRadioButton(groupBox_2);
        quote_1->setObjectName(QString::fromUtf8("quote_1"));
        quote_1->setChecked(true);

        verticalLayout_4->addWidget(quote_1);

        quote_2 = new QRadioButton(groupBox_2);
        quote_2->setObjectName(QString::fromUtf8("quote_2"));
        quote_2->setChecked(false);

        verticalLayout_4->addWidget(quote_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        quote_3 = new QRadioButton(groupBox_2);
        quote_3->setObjectName(QString::fromUtf8("quote_3"));

        verticalLayout_6->addWidget(quote_3);

        quote = new QLineEdit(groupBox_2);
        quote->setObjectName(QString::fromUtf8("quote"));
        quote->setEnabled(false);

        verticalLayout_6->addWidget(quote);


        horizontalLayout_3->addLayout(verticalLayout_6);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(186, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(other, SIGNAL(toggled(bool)), delimiter, SLOT(setEnabled(bool)));
        QObject::connect(quote_3, SIGNAL(toggled(bool)), quote, SLOT(setEnabled(bool)));
        QObject::connect(quote_3, SIGNAL(clicked()), quote, SLOT(setFocus()));
        QObject::connect(other, SIGNAL(clicked()), delimiter, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "CSV settings", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "Delimiter", 0, QApplication::UnicodeUTF8));
        comma->setText(QApplication::translate("Dialog", "C&omma (,)", 0, QApplication::UnicodeUTF8));
        tabulator->setText(QApplication::translate("Dialog", "&Tabulator {tab}", 0, QApplication::UnicodeUTF8));
        semicolon->setText(QApplication::translate("Dialog", "&Semicolon (;)", 0, QApplication::UnicodeUTF8));
        space->setText(QApplication::translate("Dialog", "S&pace", 0, QApplication::UnicodeUTF8));
        other->setText(QApplication::translate("Dialog", "Other", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Cell quotes", 0, QApplication::UnicodeUTF8));
        quote_1->setText(QApplication::translate("Dialog", "\"", 0, QApplication::UnicodeUTF8));
        quote_2->setText(QApplication::translate("Dialog", "'", 0, QApplication::UnicodeUTF8));
        quote_3->setText(QApplication::translate("Dialog", "Other", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSETTINGSDIALOG_H
