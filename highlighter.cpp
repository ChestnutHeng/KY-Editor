#include "highlighter.h"



Highlighter::Highlighter(QTextDocument *parent)
    : QSyntaxHighlighter(parent)
{
    HighlightingRule rule;

    keywordFormat.setForeground(Qt::yellow);
    keywordFormat.setFontWeight(QFont::Bold);
    QStringList keywordPatterns;
    keywordPatterns << "\\b[E|e]cho|ECHO\\b" << "\\bon|ON\\b" << "\\boff|OFF\\b"
                    << "\\bpause|PAUSE\\b" << "\\bTITLE|title\\b" << "\\bERRORLEVEL|errorlevel\\b"
                    << "\\bCOLOR|color\\b" << "\\bMODE|mode\\b" << "\\bGOTO|goto\\b"
                    << "\\bfind|FIND\\b" << "\\bTYPE|type\\b" << "\\bASSOC|assoc\\b"
                    << "\\bPUSHD|pushd\\b" << "\\bPOPD|popd\\b" << "\\bcall|CALL\\b"
                    << "\\bset|SET\\b" << "\\bshift|SHIFT\\b" << "\\bif|IF\\b"
                    << "\\belse:ELSE\\b" << "\\bEXIST|exist\\b" << "\\b(GEQ|EQU|NEQ|LSS|LEQ|GTR)\\b"
                    << "\\bSETLOCAL|setlocal\\b" << "\\bATTRIB|attrib\\b" << "\\b(stdin|stdout|stderr)\\b"
                    << "\\b(cd|CD|dir|DIR|rd|RD|MD|md|ren|REN)\\b" << "\\bfor|FOR\\b" << "\\b(copy|COPY|move|MOVE|xcpoy|XCOPY)\\b"
                    << "\\b(tree|TREE|time|TIME|date|DATE)\\b" << "\\b(cls|CLS|ping|PING)\\b" << "\\b(nul|NUL|exit|EXIT)\\b";
    foreach (const QString &pattern, keywordPatterns) {
        rule.pattern = QRegExp(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }
    labelFormat.setFontWeight(QFont::Bold);
    labelFormat.setForeground(Qt::darkMagenta);
    rule.pattern = QRegExp("^:[^\\s]*");
    rule.format = labelFormat;
    highlightingRules.append(rule);

    paramFormat.setForeground(Qt::darkGreen);
    rule.pattern = QRegExp(" (-|/)[A-Za-z]\\b");
    rule.format = paramFormat;
    highlightingRules.append(rule);

    valueFormat.setFontItalic(true);
    valueFormat.setForeground(Qt::blue);
    rule.pattern = QRegExp("%[A-Za-z0-9_]+%");
    rule.format = valueFormat;
    highlightingRules.append(rule);

    singleLineCommentFormat.setForeground(Qt::green);
    rule.pattern = QRegExp("::[^\n]*");
    rule.format = singleLineCommentFormat;
    highlightingRules.append(rule);
    rule.pattern = QRegExp("REM [^\n]*");
    rule.format = singleLineCommentFormat;
    highlightingRules.append(rule);
}

void Highlighter::highlightBlock(const QString &text)
{
    foreach (const HighlightingRule &rule, highlightingRules) {
            QRegExp expression(rule.pattern);
            int index = expression.indexIn(text);
            while (index >= 0) {
                int length = expression.matchedLength();
                setFormat(index, length, rule.format);
                index = expression.indexIn(text, index + length);
            }
    }
    setCurrentBlockState(0);
}
