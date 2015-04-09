#-------------------------------------------------
#
# Project created by QtCreator 2015-04-06T15:04:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShowingWindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mydialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    mydialog.h \
    about.h

FORMS    += mainwindow.ui \
    mydialog.ui \
    about.ui
