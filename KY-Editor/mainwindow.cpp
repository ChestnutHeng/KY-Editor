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


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "Fuck" ;

    ui->setupUi(this);
    on_actionBlack_triggered();
    ui -> plainTextEdit -> zoomIn();
    uiset();
    //(this->menuBar)->menuView->;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::uiset()
{
    statusBar() ;
}
