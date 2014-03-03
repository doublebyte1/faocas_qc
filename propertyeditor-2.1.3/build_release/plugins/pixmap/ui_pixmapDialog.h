/********************************************************************************
** Form generated from reading UI file 'pixmapDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXMAPDIALOG_H
#define UI_PIXMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_pixmapDialog
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *chooseButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *pixmapDialog)
    {
        if (pixmapDialog->objectName().isEmpty())
            pixmapDialog->setObjectName(QString::fromUtf8("pixmapDialog"));
        pixmapDialog->resize(450, 447);
        gridLayout = new QGridLayout(pixmapDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(pixmapDialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chooseButton = new QPushButton(pixmapDialog);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));

        horizontalLayout_2->addWidget(chooseButton);

        clearButton = new QPushButton(pixmapDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(pixmapDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(pixmapDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        retranslateUi(pixmapDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), pixmapDialog, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), pixmapDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(pixmapDialog);
    } // setupUi

    void retranslateUi(QDialog *pixmapDialog)
    {
        pixmapDialog->setWindowTitle(QApplication::translate("pixmapDialog", "Pixmap", 0, QApplication::UnicodeUTF8));
        chooseButton->setText(QApplication::translate("pixmapDialog", "Choose", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("pixmapDialog", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("pixmapDialog", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("pixmapDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pixmapDialog: public Ui_pixmapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXMAPDIALOG_H
