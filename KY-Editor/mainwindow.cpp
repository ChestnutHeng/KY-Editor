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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "Fuck" ;

    ui->setupUi(this);
    on_actionBlack_triggered();
    ui -> plainTextEdit -> zoomIn();
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
    ui->statusBar->showMessage(tr("GitHub,Inc."));
    ui->plainTextEdit->addAction(ui->actionOpen_File_Ctrl_O);
    ui->plainTextEdit->addAction(ui->actionSave_Ctrl_s);
    ui->plainTextEdit->addAction(ui->actionSave_As);
    //ui->actionOpen_File_Ctrl_O->setStatusTip(tr("Open an existing file"));

}
