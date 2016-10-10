#include "codeEditor.h"
#include <QDebug>
#include <QPainter>
#include <QTextBlock>


codeEditor::codeEditor(){
    setObjectName(QStringLiteral("codeeditor"));
    QFont font;
    font.setFamily(QStringLiteral("Mono Space"));
    font.setPointSize(14);
    font.setBold(false);
    font.setWeight(50);
    setFont(font);
    viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
    setMouseTracking(true);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    setTabChangesFocus(false);
    setBackgroundVisible(false);

    zoomIn();

    this->highlighter = new Highlighter(this->document());
}

codeEditor::~codeEditor(){
    delete highlighter;
}

void codeEditor::setupUi(){

}


