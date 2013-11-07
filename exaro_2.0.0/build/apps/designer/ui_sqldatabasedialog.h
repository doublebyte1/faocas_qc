/********************************************************************************
** Form generated from reading UI file 'sqldatabasedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDATABASEDIALOG_H
#define UI_SQLDATABASEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_databaseDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_8;
    QComboBox *cbConnections;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *drivers;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *user;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *host;
    QLineEdit *port;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *database;
    QToolButton *openButton;
    QLineEdit *options;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbSave;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLineEdit *leConnName;

    void setupUi(QDialog *databaseDialog)
    {
        if (databaseDialog->objectName().isEmpty())
            databaseDialog->setObjectName(QString::fromUtf8("databaseDialog"));
        databaseDialog->resize(444, 416);
        gridLayout = new QGridLayout(databaseDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(databaseDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        cbConnections = new QComboBox(databaseDialog);
        cbConnections->setObjectName(QString::fromUtf8("cbConnections"));

        gridLayout->addWidget(cbConnections, 0, 1, 1, 1);

        line = new QFrame(databaseDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(databaseDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label);

        drivers = new QComboBox(databaseDialog);
        drivers->setObjectName(QString::fromUtf8("drivers"));

        horizontalLayout_6->addWidget(drivers);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(databaseDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_7);

        label_5 = new QLabel(databaseDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        user = new QLineEdit(databaseDialog);
        user->setObjectName(QString::fromUtf8("user"));

        verticalLayout->addWidget(user);

        password = new QLineEdit(databaseDialog);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(databaseDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_4);

        label_6 = new QLabel(databaseDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        host = new QLineEdit(databaseDialog);
        host->setObjectName(QString::fromUtf8("host"));

        verticalLayout_3->addWidget(host);

        port = new QLineEdit(databaseDialog);
        port->setObjectName(QString::fromUtf8("port"));
        port->setEchoMode(QLineEdit::Normal);

        verticalLayout_3->addWidget(port);


        horizontalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(databaseDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_3);

        label_2 = new QLabel(databaseDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_2);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        database = new QLineEdit(databaseDialog);
        database->setObjectName(QString::fromUtf8("database"));

        horizontalLayout_5->addWidget(database);

        openButton = new QToolButton(databaseDialog);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        horizontalLayout_5->addWidget(openButton);


        verticalLayout_6->addLayout(horizontalLayout_5);

        options = new QLineEdit(databaseDialog);
        options->setObjectName(QString::fromUtf8("options"));

        verticalLayout_6->addWidget(options);


        horizontalLayout_7->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_7, 9, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 10, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbSave = new QPushButton(databaseDialog);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));

        horizontalLayout_2->addWidget(pbSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(databaseDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(databaseDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 11, 0, 1, 2);

        label_9 = new QLabel(databaseDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        leConnName = new QLineEdit(databaseDialog);
        leConnName->setObjectName(QString::fromUtf8("leConnName"));

        gridLayout->addWidget(leConnName, 1, 1, 1, 1);

        QWidget::setTabOrder(drivers, user);
        QWidget::setTabOrder(user, password);
        QWidget::setTabOrder(password, host);
        QWidget::setTabOrder(host, port);
        QWidget::setTabOrder(port, database);
        QWidget::setTabOrder(database, options);
        QWidget::setTabOrder(options, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(databaseDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), databaseDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), databaseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(databaseDialog);
    } // setupUi

    void retranslateUi(QDialog *databaseDialog)
    {
        databaseDialog->setWindowTitle(QApplication::translate("databaseDialog", "Setup database", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("databaseDialog", "Predefined connections:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("databaseDialog", "Database driver:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("databaseDialog", "UserName :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("databaseDialog", "Password:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("databaseDialog", "HostName:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("databaseDialog", "Port:", 0, QApplication::UnicodeUTF8));
        port->setInputMask(QApplication::translate("databaseDialog", "00000; ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("databaseDialog", "DatabaseName:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("databaseDialog", "ConnectOptions:", 0, QApplication::UnicodeUTF8));
        database->setInputMask(QString());
        openButton->setText(QApplication::translate("databaseDialog", "...", 0, QApplication::UnicodeUTF8));
        pbSave->setText(QApplication::translate("databaseDialog", "Save", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("databaseDialog", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("databaseDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("databaseDialog", "Connection name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class databaseDialog: public Ui_databaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDATABASEDIALOG_H
