/********************************************************************************
** Form generated from reading UI file 'groupwizardpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPWIZARDPAGE_H
#define UI_GROUPWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_groupWizardPage
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *pages;
    QLabel *label_2;
    QComboBox *queries;
    QListWidget *groupsList;
    QVBoxLayout *verticalLayout;
    QPushButton *addGroup;
    QSpacerItem *verticalSpacer;
    QPushButton *removeGroup;
    QCheckBox *generateDetailFooters;
    QCheckBox *detailOnFirstGroup;

    void setupUi(QWizardPage *groupWizardPage)
    {
        if (groupWizardPage->objectName().isEmpty())
            groupWizardPage->setObjectName(QString::fromUtf8("groupWizardPage"));
        groupWizardPage->resize(443, 391);
        gridLayout_2 = new QGridLayout(groupWizardPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(groupWizardPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pages = new QComboBox(groupBox);
        pages->setObjectName(QString::fromUtf8("pages"));

        gridLayout->addWidget(pages, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        queries = new QComboBox(groupBox);
        queries->setObjectName(QString::fromUtf8("queries"));

        gridLayout->addWidget(queries, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        groupsList = new QListWidget(groupWizardPage);
        groupsList->setObjectName(QString::fromUtf8("groupsList"));

        gridLayout_2->addWidget(groupsList, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addGroup = new QPushButton(groupWizardPage);
        addGroup->setObjectName(QString::fromUtf8("addGroup"));

        verticalLayout->addWidget(addGroup);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        removeGroup = new QPushButton(groupWizardPage);
        removeGroup->setObjectName(QString::fromUtf8("removeGroup"));

        verticalLayout->addWidget(removeGroup);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        generateDetailFooters = new QCheckBox(groupWizardPage);
        generateDetailFooters->setObjectName(QString::fromUtf8("generateDetailFooters"));

        gridLayout_2->addWidget(generateDetailFooters, 2, 0, 1, 2);

        detailOnFirstGroup = new QCheckBox(groupWizardPage);
        detailOnFirstGroup->setObjectName(QString::fromUtf8("detailOnFirstGroup"));

        gridLayout_2->addWidget(detailOnFirstGroup, 3, 0, 1, 2);


        retranslateUi(groupWizardPage);

        QMetaObject::connectSlotsByName(groupWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *groupWizardPage)
    {
        groupWizardPage->setWindowTitle(QApplication::translate("groupWizardPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        groupWizardPage->setTitle(QApplication::translate("groupWizardPage", "Setup groups", 0, QApplication::UnicodeUTF8));
        groupWizardPage->setSubTitle(QApplication::translate("groupWizardPage", "Here you can setup the groups. You don't have to add any group if you don't need.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("groupWizardPage", "Select a page and a query to use for groups", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("groupWizardPage", "Page:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("groupWizardPage", "Query:", 0, QApplication::UnicodeUTF8));
        addGroup->setText(QApplication::translate("groupWizardPage", "&Add", 0, QApplication::UnicodeUTF8));
        removeGroup->setText(QApplication::translate("groupWizardPage", "&Remove", 0, QApplication::UnicodeUTF8));
        generateDetailFooters->setText(QApplication::translate("groupWizardPage", "generate detail footer(s) for every group", 0, QApplication::UnicodeUTF8));
        detailOnFirstGroup->setText(QApplication::translate("groupWizardPage", "detail header on first group", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class groupWizardPage: public Ui_groupWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPWIZARDPAGE_H
