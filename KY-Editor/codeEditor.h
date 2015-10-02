#ifndef CODEEDITOR_H
#define CODEEDITOR_H
#include <QPlainTextEdit>

class codeEditor :private QPlainTextEdit{
    Q_OBJECT

public:
    codeEditor(QWidget *parent = 0);
protected:
    void keyPressEvent(QKeyEvent *e);

};

#endif // CODEEDITOR_H
