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

void MainWindow::on_actionOpen_File_Ctrl_O_triggered()
{
    if_opened = true;
    path1 = QFileDialog::getOpenFileName(this,"Open...",".",tr("Bat Files(*.bat);;TextFiles(*.txt);;All Files(*.*)"));
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
          QMessageBox::warning(this,tr("ReadFile"),tr("The Path haven't been selected."));
    }
}


void MainWindow::on_actionSave_Ctrl_s_triggered()
{
    if(!path1.isEmpty()){
        QFile file_path(path1);
        if(!file_path.open(QIODevice::WriteOnly|QIODevice::Text)){
                on_actionSave_As_triggered();
                return;
        }
        QTextStream file_stream(&file_path);
        file_stream << ui->plainTextEdit-> toPlainText();
        file_path.close();

    }else{
          path1 = QFileDialog::getSaveFileName(this,"Save...",".",tr("Bat Files(*.bat);;TextFiles(*.txt);;All Files(*.*)"));
          on_actionSave_Ctrl_s_triggered();
    }
}

void MainWindow::on_actionSave_As_triggered()
{
    QString temp_path = path1;
    path1 = QFileDialog::getSaveFileName(this,"Save As...",".",tr("Bat Files(*.bat);;TextFiles(*.txt);;All Files(*.*)"));
    if(!path1.isEmpty()){
       QFile file_path(path1);
       if(!file_path.open(QIODevice::WriteOnly|QIODevice::Text)){
               return;
       }
       QTextStream file_stream(&file_path);
       file_stream << ui->plainTextEdit-> toPlainText();
       file_path.close();

   }else{
         //QMessageBox::warning(this,tr("ReadFile"),tr("The Path haven't been selected."));
   }
   if(if_opened) {
       path1 = temp_path;
   }
}
