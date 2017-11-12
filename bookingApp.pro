#-------------------------------------------------
#
# Project created by QtCreator 2017-11-01T17:36:47
#
#-------------------------------------------------

QT       += core gui network webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bookingApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    PanelMail.cpp \
    MailPage.cpp

HEADERS  += MainWindow.h \
    PanelMail.h \
    globals.h \
    MailPage.h

FORMS    += MainWindow.ui \
    PanelMail.ui \
    MailPage.ui

RESOURCES += \
    jquery.qrc
