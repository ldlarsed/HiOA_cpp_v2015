#-------------------------------------------------
#
# Project created by QtCreator 2015-04-22T12:08:18
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ImageMagick_test
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

CONFIG += c++11

QMAKE_CXXFLAGS += `Magick++-config --cxxflags --cppflags` -O2 `Magick++-config --ldflags --libs`



unix: LIBS += -L$$PWD/../../../../../../../../../../usr/lib64/ -lMagick++-6 -lMagickWand-6 -lMagickCore-6

INCLUDEPATH += $$PWD/../../../../../../../../../../usr/include/ImageMagick-6/
DEPENDPATH += $$PWD/../../../../../../../../../../usr/lib64/ImageMagick-6.8.8
