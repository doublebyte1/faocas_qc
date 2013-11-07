/********************************************************************************
** Form generated from reading UI file 'pagewizardpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWIZARDPAGE_H
#define UI_PAGEWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_pageWizardPage
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *pagesList;
    QVBoxLayout *verticalLayout;
    QPushButton *addPage;
    QSpacerItem *verticalSpacer;
    QPushButton *removePage;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *pageSize;
    QLabel *label_2;
    QComboBox *pageOrientation;

    void setupUi(QWizardPage *pageWizardPage)
    {
        if (pageWizardPage->objectName().isEmpty())
            pageWizardPage->setObjectName(QString::fromUtf8("pageWizardPage"));
        pageWizardPage->resize(390, 328);
        gridLayout_2 = new QGridLayout(pageWizardPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pagesList = new QListWidget(pageWizardPage);
        pagesList->setObjectName(QString::fromUtf8("pagesList"));

        gridLayout_2->addWidget(pagesList, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addPage = new QPushButton(pageWizardPage);
        addPage->setObjectName(QString::fromUtf8("addPage"));

        verticalLayout->addWidget(addPage);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        removePage = new QPushButton(pageWizardPage);
        removePage->setObjectName(QString::fromUtf8("removePage"));

        verticalLayout->addWidget(removePage);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        groupBox = new QGroupBox(pageWizardPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pageSize = new QComboBox(groupBox);
        pageSize->setObjectName(QString::fromUtf8("pageSize"));

        gridLayout->addWidget(pageSize, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pageOrientation = new QComboBox(groupBox);
        pageOrientation->setObjectName(QString::fromUtf8("pageOrientation"));

        gridLayout->addWidget(pageOrientation, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 2);


        retranslateUi(pageWizardPage);

        QMetaObject::connectSlotsByName(pageWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *pageWizardPage)
    {
        pageWizardPage->setWindowTitle(QApplication::translate("pageWizardPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        pageWizardPage->setTitle(QApplication::translate("pageWizardPage", "Setup pages", 0, QApplication::UnicodeUTF8));
        pageWizardPage->setSubTitle(QApplication::translate("pageWizardPage", "Please add one or more pages. To continue you have to add at least one page.", 0, QApplication::UnicodeUTF8));
        addPage->setText(QApplication::translate("pageWizardPage", "&Add", 0, QApplication::UnicodeUTF8));
        removePage->setText(QApplication::translate("pageWizardPage", "&Remove", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pageWizardPage", "Page properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pageWizardPage", "Page size:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pageWizardPage", "Page orientation:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pageWizardPage: public Ui_pageWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWIZARDPAGE_H
