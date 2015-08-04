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
    ui->statusBar->showMessage(tr("GitHub,Inc."));

}

void MainWindow::on_actionOpen_File_Ctrl_O_triggered()
{
    QString path1 = QFileDialog::getOpenFileName(this,"Open...",".",tr("Bat Files(*.bat);;TextFiles(*.txt);;All Files(*.*)"));
    if(!path1.isEmpty()){
        QFile file_path(path1);
        if(!file_path.open(QIODevice::ReadOnly))
        {
                QMessageBox::warning(this,tr("ReadFile"),tr("Connot open:\n %1").arg(path1));
                return;

        }
        QTextStream file_stream(&file_path);
        ui-> plainTextEdit -> setPlainText(file_stream.readAll());
        file_path.close();

    }else{
          //QMessageBox::warning(this,tr("ReadFile"),tr("The Path haven't been selected."));
    }
}


void MainWindow::on_actionSave_Ctrl_s_triggered()
{

}
