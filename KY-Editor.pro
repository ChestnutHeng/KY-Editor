#-------------------------------------------------
#
# Project created by QtCreator 2015-08-02T14:09:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KY-Editor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    colors.cpp \
    files.cpp \
    codeEditor.cpp \
    highlighter.cpp

HEADERS  += mainwindow.h \
    codeEditor.h \
    ui_mainwindow.h \
    highlighter.h

FORMS    += \
    mainwindow.ui
