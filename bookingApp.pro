#-------------------------------------------------
#
# Project created by QtCreator 2017-11-01T17:36:47
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bookingApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    PanelMail.cpp

HEADERS  += MainWindow.h \
    PanelMail.h \
    globals.h

FORMS    += MainWindow.ui \
    PanelMail.ui
