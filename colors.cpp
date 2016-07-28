#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QtGui>
#include <QPalette>
#include <QColorDialog>

void MainWindow::on_actionBlack_triggered()
{
    ui->actionBlack->setChecked(true);
    ui->actionWhite->setChecked(false);
    QPalette p = palette();
    p.setColor(QPalette::Base,QColor(0,0,0));
    p.setColor(QPalette::Text,QColor(180,180,180));
    p.setColor(QPalette::HighlightedText,QColor(70,70,70));
    p.setColor(QPalette::Highlight,QColor(200,200,200));
    ui -> plainTextEdit -> setPalette(p);
    p.setColor(QPalette::Background,QColor(100,100,100));
    this-> setPalette(p);
    ui -> statusBar-> setPalette(p);
}

void MainWindow::on_actionWhite_triggered()
{
    ui->actionWhite->setChecked(true);
    ui->actionBlack->setChecked(false);
    QPalette p = palette();
    p.setColor(QPalette::Base,QColor(255,255,255));
    p.setColor(QPalette::Text,QColor(0,0,0));
    p.setColor(QPalette::Highlight,QColor(238,130,98));
    p.setColor(QPalette::HighlightedText,QColor(230,230,230));
    ui -> plainTextEdit -> setPalette(p);
    p.setColor(QPalette::Background,QColor(255,255,255));
    this-> setPalette(p);
    ui -> statusBar-> setPalette(p);

}
