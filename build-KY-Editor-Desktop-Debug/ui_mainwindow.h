/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File_Ctrl_N;
    QAction *actionOpen_File_Ctrl_O;
    QAction *actionSave_Ctrl_s;
    QAction *actionSave_As;
    QAction *actionNew_Window;
    QAction *actionClose_Window;
    QAction *actionClose_File;
    QAction *actionClose_All;
    QAction *actionSyntex;
    QAction *actionBlack;
    QAction *actionWhite;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QScrollBar *verticalScrollBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuColors;
    QMenu *menuBuild;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        actionNew_File_Ctrl_N = new QAction(MainWindow);
        actionNew_File_Ctrl_N->setObjectName(QStringLiteral("actionNew_File_Ctrl_N"));
        actionOpen_File_Ctrl_O = new QAction(MainWindow);
        actionOpen_File_Ctrl_O->setObjectName(QStringLiteral("actionOpen_File_Ctrl_O"));
        actionSave_Ctrl_s = new QAction(MainWindow);
        actionSave_Ctrl_s->setObjectName(QStringLiteral("actionSave_Ctrl_s"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QStringLiteral("actionNew_Window"));
        actionClose_Window = new QAction(MainWindow);
        actionClose_Window->setObjectName(QStringLiteral("actionClose_Window"));
        actionClose_File = new QAction(MainWindow);
        actionClose_File->setObjectName(QStringLiteral("actionClose_File"));
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName(QStringLiteral("actionClose_All"));
        actionSyntex = new QAction(MainWindow);
        actionSyntex->setObjectName(QStringLiteral("actionSyntex"));
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QStringLiteral("actionBlack"));
        actionWhite = new QAction(MainWindow);
        actionWhite->setObjectName(QStringLiteral("actionWhite"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setTabChangesFocus(false);
        plainTextEdit->setBackgroundVisible(false);

        horizontalLayout->addWidget(plainTextEdit);

        verticalScrollBar = new QScrollBar(centralWidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalScrollBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuColors = new QMenu(menuView);
        menuColors->setObjectName(QStringLiteral("menuColors"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QStringLiteral("menuBuild"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_File_Ctrl_N);
        menuFile->addAction(actionOpen_File_Ctrl_O);
        menuFile->addAction(actionSave_Ctrl_s);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionNew_Window);
        menuFile->addAction(actionClose_Window);
        menuFile->addAction(actionClose_File);
        menuFile->addAction(actionClose_All);
        menuView->addAction(actionSyntex);
        menuView->addAction(menuColors->menuAction());
        menuColors->addAction(actionBlack);
        menuColors->addAction(actionWhite);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KT Creator", 0));
        actionNew_File_Ctrl_N->setText(QApplication::translate("MainWindow", "New File (Ctrl+N)", 0));
        actionNew_File_Ctrl_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen_File_Ctrl_O->setText(QApplication::translate("MainWindow", "Open File...(Ctrl+O)", 0));
        actionOpen_File_Ctrl_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave_Ctrl_s->setText(QApplication::translate("MainWindow", "Save (Ctrl+S)", 0));
        actionSave_Ctrl_s->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As..", 0));
        actionNew_Window->setText(QApplication::translate("MainWindow", "New Window", 0));
        actionClose_Window->setText(QApplication::translate("MainWindow", "Close Window", 0));
        actionClose_File->setText(QApplication::translate("MainWindow", "Close File", 0));
        actionClose_All->setText(QApplication::translate("MainWindow", "Close All", 0));
        actionSyntex->setText(QApplication::translate("MainWindow", "Syntex", 0));
        actionBlack->setText(QApplication::translate("MainWindow", "Black", 0));
        actionWhite->setText(QApplication::translate("MainWindow", "White", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File(&F)", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit(&E)", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View(&V)", 0));
        menuColors->setTitle(QApplication::translate("MainWindow", "Colors", 0));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build(&B)", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
