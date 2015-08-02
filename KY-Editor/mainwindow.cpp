#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QtGui>
#include <QPalette>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "Fuck" ;

    ui->setupUi(this);
    on_actionBlack_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}



