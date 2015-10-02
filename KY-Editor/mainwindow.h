#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setColor();
    void uiset();
    void editComplete();
    QString path1;
    bool if_opened;
    ~MainWindow();

private slots:
    void on_actionBlack_triggered();

    void on_actionWhite_triggered();

    void on_pushButton_clicked();

    void on_actionOpen_File_Ctrl_O_triggered();

    void on_actionSave_Ctrl_s_triggered();


    void on_actionOpen_File_Ctrl_O_hovered();

    void on_actionSave_As_triggered();

private:

    Ui::MainWindow *ui;
protected:
    //void keyPressEvent(QKeyEvent *e);
};

class plaintext{
    public:
    //void keyPressEvent(QKeyEvent *e);

    private:

};

#endif // MAINWINDOW_H
