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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winwareClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *OpenCamera;
    QPushButton *CloseCamera;
    QTextBrowser *CameraBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *winwareClass)
    {
        if (winwareClass->objectName().isEmpty())
            winwareClass->setObjectName(QStringLiteral("winwareClass"));
        winwareClass->resize(621, 530);
        centralWidget = new QWidget(winwareClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 111, 41));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 161, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        OpenCamera = new QPushButton(verticalLayoutWidget);
        OpenCamera->setObjectName(QStringLiteral("OpenCamera"));
        QFont font;
        font.setPointSize(11);
        OpenCamera->setFont(font);

        verticalLayout->addWidget(OpenCamera);

        CloseCamera = new QPushButton(verticalLayoutWidget);
        CloseCamera->setObjectName(QStringLiteral("CloseCamera"));
        CloseCamera->setFont(font);

        verticalLayout->addWidget(CloseCamera);

        CameraBrowser = new QTextBrowser(centralWidget);
        CameraBrowser->setObjectName(QStringLiteral("CameraBrowser"));
        CameraBrowser->setGeometry(QRect(200, 10, 361, 421));
        winwareClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(winwareClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 621, 23));
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
        OpenCamera->setText(QApplication::translate("winwareClass", "OpenCamera", Q_NULLPTR));
        CloseCamera->setText(QApplication::translate("winwareClass", "CloseCamera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class winwareClass: public Ui_winwareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWARE_H
