#ifndef CODEEDITOR_H
#define CODEEDITOR_H
#include <QPlainTextEdit>
#include <QTextEdit>
#include "highlighter.h"

namespace Ui {
class codeEditor;
}


class codeEditor :public QPlainTextEdit{
    Q_OBJECT

public:
    codeEditor();
    ~codeEditor();
    void setupUi();

protected:
    Highlighter *highlighter;

};

#endif // CODEEDITOR_H
