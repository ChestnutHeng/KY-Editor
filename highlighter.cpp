#include "highlighter.h"



Highlighter::Highlighter(QTextDocument *parent)
    : QSyntaxHighlighter(parent)
{
    HighlightingRule rule;

    keywordFormat.setForeground(Qt::yellow);
    keywordFormat.setFontWeight(QFont::Bold);
    QStringList keywordPatterns;
    keywordPatterns << "@?([E|e]cho|ECHO)\\b" << "\\b(on|ON|not|NOT|off|OFF)\\b" << "\\b(nul|NUL)\\b"
                    << "\\b(pause|PAUSE)\\b" << "\\b(TITLE|title)\\b" << "\\b(ERRORLEVEL|errorlevel)\\b"
                    << "\\b(COLOR|color)\\b" << "\\b(MODE|mode)\\b" << "\\b(GOTO|goto)\\b"
                    << "\\b(find|FIND)\\b" << "\\(bTYPE|type)\\b" << "\\b(ASSOC|assoc)\\b"
                    << "\\b(PUSHD|pushd)\\b" << "\\b(POPD|popd)\\b" << "\\b(call|CALL)\\b"
                    << "\\b(set|SET)\\b" << "\\b(shift|SHIFT|del|DEL)\\b" << "\\b(if|IF)\\b"
                    << "\\b(else:ELSE)\\b" << "\\b(EXIST|exist)\\b" << "\\b(GEQ|EQU|NEQ|LSS|LEQ|GTR)\\b"
                    << "\\b(SETLOCAL|setlocal)\\b" << "\\b(ATTRIB|attrib)\\b" << "\\b(stdin|stdout|stderr)\\b"
                    << "\\b(cd|CD|dir|DIR|rd|RD|MD|md|ren|REN)\\b" << "\\bfor|FOR\\b" << "\\b(copy|COPY|move|MOVE|xcpoy|XCOPY)\\b"
                    << "\\b(tree|TREE|time|TIME|date|DATE)\\b" << "\\b(cls|CLS|ping|PING)\\b" << "\\b(exit|EXIT)\\b"
                    << "(gcc|GCC|python|PYTHON|java|JAVA|python3)";
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

    echoFormat.setFontItalic(true);
    echoFormat.setForeground(Qt::gray);
    rule.pattern = QRegExp("@?([E|e]cho|ECHO|=) [^\n>|&]+");
    rule.format = echoFormat;
    highlightingRules.append(rule);
    echoFormat.setFontItalic(false);
    echoFormat.setForeground(Qt::yellow);
    rule.pattern = QRegExp("@?([E|e]cho|ECHO)( (off|on|OFF|ON))?");
    rule.format = echoFormat;
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
