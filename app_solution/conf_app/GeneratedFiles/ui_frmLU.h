/********************************************************************************
** Form generated from reading UI file 'frmLU.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLU_H
#define UI_FRMLU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_frmlu
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *frmlu)
    {
        if (frmlu->objectName().isEmpty())
            frmlu->setObjectName(QString::fromUtf8("frmlu"));
        frmlu->resize(379, 166);
        gridLayout = new QGridLayout(frmlu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(frmlu);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(9999);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(frmlu);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(frmlu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        label_2 = new QLabel(frmlu);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(frmlu);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(frmlu);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinBox);
        label_2->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinBox, lineEdit);
        QWidget::setTabOrder(lineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(frmlu);
        QObject::connect(okButton, SIGNAL(clicked()), frmlu, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), frmlu, SLOT(reject()));
        QObject::connect(okButton, SIGNAL(clicked()), frmlu, SLOT(emitLU()));

        QMetaObject::connectSlotsByName(frmlu);
    } // setupUi

    void retranslateUi(QDialog *frmlu)
    {
        frmlu->setWindowTitle(QApplication::translate("frmlu", " Update Info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox->setToolTip(QApplication::translate("frmlu", "ID of the update; the patch will include all the records after this ID;", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinBox->setStatusTip(QApplication::translate("frmlu", "ID of the update; the patch will include all the records after this ID;", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        spinBox->setWhatsThis(QApplication::translate("frmlu", "ID of the update; the patch will include all the records after this ID;", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("frmlu", "Insert the ID of the last update", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmlu", "Insert mac address of the requester", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("frmlu", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("frmlu", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmlu: public Ui_frmlu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLU_H
