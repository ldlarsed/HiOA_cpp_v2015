TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

CONFIG += c++11


LIBS = -L/usr/lib64/ -lMagick++-6 -lMagickWand-6 -lMagickCore-6
#LIBS +=     /usr/lib64/libMagick++-6.Q16.so \
#            /usr/lib64/libMagickCore-6.Q16.so \
#            /usr/lib64/libMagickWand-6.Q16.so

INCLUDEPATH +=  /usr/include/ImageMagick-6/
DEPENDPATH +=   /usr/lib64/ImageMagick-6.8.8/


QMAKE_CXXFLAGS += `Magick++-config --cxxflags --cppflags` -O2 `Magick++-config --ldflags --libs`



#unix: LIBS += -L$$PWD/../../../../../../../../../../usr/lib64/ -lMagick++-6 -lMagickWand-6 -lMagickCore-6

#INCLUDEPATH += $$PWD/../../../../../../../../../../usr/include/ImageMagick-6/
#DEPENDPATH += $$PWD/../../../../../../../../../../usr/lib64/ImageMagick-6.8.8
