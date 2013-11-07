/********************************************************************************
** Form generated from reading UI file 'fieldswizardpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDSWIZARDPAGE_H
#define UI_FIELDSWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_fieldsWizardPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *pages;
    QLabel *label_2;
    QComboBox *details;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *fields;
    QToolButton *addAll;
    QListWidget *onDetail;
    QToolButton *moveUp;
    QToolButton *add;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QToolButton *remove;
    QToolButton *removeAll;
    QToolButton *moveDown;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *drawLine;

    void setupUi(QWizardPage *fieldsWizardPage)
    {
        if (fieldsWizardPage->objectName().isEmpty())
            fieldsWizardPage->setObjectName(QString::fromUtf8("fieldsWizardPage"));
        fieldsWizardPage->resize(483, 461);
        verticalLayout = new QVBoxLayout(fieldsWizardPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(fieldsWizardPage);
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

        details = new QComboBox(groupBox);
        details->setObjectName(QString::fromUtf8("details"));

        gridLayout->addWidget(details, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 4);

        label_3 = new QLabel(fieldsWizardPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(fieldsWizardPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        fields = new QListWidget(fieldsWizardPage);
        fields->setObjectName(QString::fromUtf8("fields"));

        gridLayout_2->addWidget(fields, 2, 0, 5, 1);

        addAll = new QToolButton(fieldsWizardPage);
        addAll->setObjectName(QString::fromUtf8("addAll"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/arrow-right-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAll->setIcon(icon);
        addAll->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(addAll, 2, 1, 1, 1);

        onDetail = new QListWidget(fieldsWizardPage);
        onDetail->setObjectName(QString::fromUtf8("onDetail"));

        gridLayout_2->addWidget(onDetail, 2, 2, 5, 1);

        moveUp = new QToolButton(fieldsWizardPage);
        moveUp->setObjectName(QString::fromUtf8("moveUp"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUp->setIcon(icon1);
        moveUp->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(moveUp, 2, 3, 1, 1);

        add = new QToolButton(fieldsWizardPage);
        add->setObjectName(QString::fromUtf8("add"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon2);
        add->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(add, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 154, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 3, 3, 1);

        verticalSpacer = new QSpacerItem(20, 84, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 1, 1, 1);

        remove = new QToolButton(fieldsWizardPage);
        remove->setObjectName(QString::fromUtf8("remove"));
        sizePolicy.setHeightForWidth(remove->sizePolicy().hasHeightForWidth());
        remove->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/arrow-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove->setIcon(icon3);
        remove->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(remove, 5, 1, 1, 1);

        removeAll = new QToolButton(fieldsWizardPage);
        removeAll->setObjectName(QString::fromUtf8("removeAll"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/arrow-left-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeAll->setIcon(icon4);
        removeAll->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(removeAll, 6, 1, 1, 1);

        moveDown = new QToolButton(fieldsWizardPage);
        moveDown->setObjectName(QString::fromUtf8("moveDown"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDown->setIcon(icon5);
        moveDown->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(moveDown, 6, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        drawLine = new QCheckBox(fieldsWizardPage);
        drawLine->setObjectName(QString::fromUtf8("drawLine"));

        horizontalLayout->addWidget(drawLine);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(fieldsWizardPage);

        QMetaObject::connectSlotsByName(fieldsWizardPage);
    } // setupUi

    void retranslateUi(QWizardPage *fieldsWizardPage)
    {
        fieldsWizardPage->setWindowTitle(QApplication::translate("fieldsWizardPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        fieldsWizardPage->setTitle(QApplication::translate("fieldsWizardPage", "Fields to detail", 0, QApplication::UnicodeUTF8));
        fieldsWizardPage->setSubTitle(QApplication::translate("fieldsWizardPage", "Here you have to add fileds to report", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("fieldsWizardPage", "Select a page and a detail for fields", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fieldsWizardPage", "Page:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fieldsWizardPage", "Detail:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("fieldsWizardPage", "Available", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("fieldsWizardPage", "On detail", 0, QApplication::UnicodeUTF8));
        addAll->setText(QApplication::translate("fieldsWizardPage", ">>", 0, QApplication::UnicodeUTF8));
        moveUp->setText(QApplication::translate("fieldsWizardPage", "/\\", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("fieldsWizardPage", ">", 0, QApplication::UnicodeUTF8));
        remove->setText(QApplication::translate("fieldsWizardPage", "<", 0, QApplication::UnicodeUTF8));
        removeAll->setText(QApplication::translate("fieldsWizardPage", "<<", 0, QApplication::UnicodeUTF8));
        moveDown->setText(QApplication::translate("fieldsWizardPage", "\\/", 0, QApplication::UnicodeUTF8));
        drawLine->setText(QApplication::translate("fieldsWizardPage", "Add lines between fields", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fieldsWizardPage: public Ui_fieldsWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDSWIZARDPAGE_H
