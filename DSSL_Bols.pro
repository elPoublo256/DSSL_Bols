#-------------------------------------------------
#
# Project created by QtCreator 2017-09-29T15:07:50
#
#-------------------------------------------------

QT       += core gui
QT       += opengl
LIBS += -lX11 -lGLU
QMAKE_LFLAGS += -fopenmp
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QMAKE_CXXFLAGS += -std=c++11
TARGET = DSSL_Bols
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    gl_boals.cpp \
    myglwidget.cpp

HEADERS  += widget.h \
    gl_boals.h \
    myglwidget.h

FORMS    += widget.ui
