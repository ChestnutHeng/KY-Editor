#include <codeEditor.h>
#include <QDebug>


void codeEditor::keyPressEvent(QKeyEvent *e)
{
    qDebug() << "Enter";
    switch (e->key()) {
    case Qt::Key_Enter:
    case Qt::Key_Return:
    case Qt::Key_Escape:
    case Qt::Key_Tab:
    case Qt::Key_Backtab:
        qDebug() << "press" << endl;
        e->ignore();
        return; // let the completer do default behavior
    default:
       break;
   }
}

