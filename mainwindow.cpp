#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QtGui>
#include <QPalette>
#include <QColorDialog>
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QScrollBar>
#include <QFileDialog>
#include <QShortcut>
#include <QCompleter>
#include <QLineEdit>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <codeEditor.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui_MainWindow)
{

    ui ->setupUi(this);
    on_actionBlack_triggered();
    uiset();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::uiset()
{
    if_opened = false;
    statusBar() ;
    ui ->statusBar->showMessage(tr("GitHub,Inc."));
    ui ->codeeditor->addAction(ui->actionOpen_File_Ctrl_O);
    ui ->codeeditor->addAction(ui->actionSave_Ctrl_s);
    ui ->codeeditor->addAction(ui->actionSave_As);
    ui->actionOpen_File_Ctrl_O->setStatusTip(tr("Open an existing file"));
}
