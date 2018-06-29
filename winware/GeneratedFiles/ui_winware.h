/********************************************************************************
** Form generated from reading UI file 'winware.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINWARE_H
#define UI_WINWARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winwareClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *winwareClass)
    {
        if (winwareClass->objectName().isEmpty())
            winwareClass->setObjectName(QStringLiteral("winwareClass"));
        winwareClass->resize(600, 400);
        centralWidget = new QWidget(winwareClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 150, 111, 41));
        winwareClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(winwareClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        winwareClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(winwareClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        winwareClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(winwareClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        winwareClass->setStatusBar(statusBar);

        retranslateUi(winwareClass);

        QMetaObject::connectSlotsByName(winwareClass);
    } // setupUi

    void retranslateUi(QMainWindow *winwareClass)
    {
        winwareClass->setWindowTitle(QApplication::translate("winwareClass", "winware", Q_NULLPTR));
        pushButton->setText(QApplication::translate("winwareClass", "\346\211\223\345\274\200\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class winwareClass: public Ui_winwareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWARE_H
