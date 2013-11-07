/********************************************************************************
** Form generated from reading UI file 'querywizardpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYWIZARDPAGE_H
#define UI_QUERYWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_queryWizardPage
{
public:
    QGridLayout *gridLayout;
    QPushButton *setupDatabase;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QListWidget *queriesList;
    QVBoxLayout *verticalLayout;
    QPushButton *addQuery;
    QSpacerItem *verticalSpacer;
    QPushButton *editName;
    QSpacerItem *verticalSpacer_2;
    QPushButton *editQuery;
    QSpacerItem *verticalSpacer_3;
    QPushButton *removeQuery;

    void setupUi(QWizardPage *queryWizardPage)
    {
        if (queryWizardPage->objectName().isEmpty())
            queryWizardPage->setObjectName(QString::fromUtf8("queryWizardPage"));
        queryWizardPage->resize(378, 368);
        gridLayout = new QGridLayout(queryWizardPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        setupDatabase = new QPushButton(queryWizardPage);
        setupDatabase->setObjectName(QString::fromUtf8("setupDatabase"));

        gridLayout->addWidget(setupDatabase, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        queriesList = new QListWidget(queryWizardPage);
        queriesList->setObjectName(QString::fromUtf8("queriesList"));

        horizontalLayout->addWidget(queriesList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addQuery = new QPushButton(queryWizardPage);
        addQuery->setObjectName(QString::fromUtf8("addQuery"));

        verticalLayout->addWidget(addQuery);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        editName = new QPushButton(queryWizardPage);
        editName->setObjectName(QString::fromUtf8("editName"));

        verticalLayout->addWidget(editName);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        editQuery = new QPushButton(queryWizardPage);
        editQuery->setObjectName(QString::fromUtf8("editQuery"));

        verticalLayout->addWidget(editQuery);

        verticalSpacer_3 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        removeQuery = new QPushButton(queryWizardPage);
        removeQuery->setObjectName(QString::fromUtf8("removeQuery"));

        verticalLayout->addWidget(removeQuery);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(queryWizardPage);

        QMetaObject::connectSlotsByName(queryWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *queryWizardPage)
    {
        queryWizardPage->setWindowTitle(QApplication::translate("queryWizardPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        queryWizardPage->setTitle(QApplication::translate("queryWizardPage", "Setup queries", 0, QApplication::UnicodeUTF8));
        queryWizardPage->setSubTitle(QApplication::translate("queryWizardPage", "Please add one or more queies. To continue you have to add at least one query. ", 0, QApplication::UnicodeUTF8));
        setupDatabase->setText(QApplication::translate("queryWizardPage", "Setup &database", 0, QApplication::UnicodeUTF8));
        addQuery->setText(QApplication::translate("queryWizardPage", "&Add", 0, QApplication::UnicodeUTF8));
        editName->setText(QApplication::translate("queryWizardPage", "Edit na&me", 0, QApplication::UnicodeUTF8));
        editQuery->setText(QApplication::translate("queryWizardPage", "Edit &query", 0, QApplication::UnicodeUTF8));
        removeQuery->setText(QApplication::translate("queryWizardPage", "&Remove", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class queryWizardPage: public Ui_queryWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWIZARDPAGE_H
