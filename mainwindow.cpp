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
    ui(new Ui::MainWindow)
{
    //codeEditor *plainTextEdit = new codeEditor(this);
    ui->setupUi(this);
    on_actionBlack_triggered();
   // plainTextEdit -> zoomIn();
    uiset();
    QStringList wordList;
    wordList << "alpha" << "omega" << "omicron" << "zeta";
    QCompleter *completer = new QCompleter(wordList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    //ui -> plainTextEdit->setCompleter(completer);

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
