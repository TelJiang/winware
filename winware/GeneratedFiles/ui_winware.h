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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winwareClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *OpenCamera;
    QPushButton *CloseCamera;
    QPushButton *pushButton;
    QLabel *label;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *CameraTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *winwareClass)
    {
        if (winwareClass->objectName().isEmpty())
            winwareClass->setObjectName(QStringLiteral("winwareClass"));
        winwareClass->resize(556, 438);
        centralWidget = new QWidget(winwareClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setMinimumSize(QSize(155, 221));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        OpenCamera = new QPushButton(groupBox);
        OpenCamera->setObjectName(QStringLiteral("OpenCamera"));
        QFont font;
        font.setPointSize(11);
        OpenCamera->setFont(font);

        verticalLayout->addWidget(OpenCamera);

        CloseCamera = new QPushButton(groupBox);
        CloseCamera->setObjectName(QStringLiteral("CloseCamera"));
        CloseCamera->setFont(font);

        verticalLayout->addWidget(CloseCamera);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 3);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(472, 110));

        gridLayout->addWidget(groupBox_3, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(311, 221));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        CameraTextEdit = new QPlainTextEdit(tab_2);
        CameraTextEdit->setObjectName(QStringLiteral("CameraTextEdit"));
        CameraTextEdit->setReadOnly(true);

        gridLayout_3->addWidget(CameraTextEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        winwareClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(winwareClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 23));
        winwareClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(winwareClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        winwareClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(winwareClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        winwareClass->setStatusBar(statusBar);

        retranslateUi(winwareClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(winwareClass);
    } // setupUi

    void retranslateUi(QMainWindow *winwareClass)
    {
        winwareClass->setWindowTitle(QApplication::translate("winwareClass", "winware", Q_NULLPTR));
		winwareClass->setWindowIcon(QIcon(":/winware/test.ico"));
        groupBox->setTitle(QString());
        OpenCamera->setText(QApplication::translate("winwareClass", "OpenCamera", Q_NULLPTR));
        CloseCamera->setText(QApplication::translate("winwareClass", "CloseCamera", Q_NULLPTR));
        pushButton->setText(QApplication::translate("winwareClass", "\346\211\223\345\274\200\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
        label->setText(QString());
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("winwareClass", "CameraNum", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class winwareClass: public Ui_winwareClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWARE_H
