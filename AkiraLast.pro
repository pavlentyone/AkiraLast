#-------------------------------------------------
#
# Project created by QtCreator 2018-10-29T09:23:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AkiraLast
TEMPLATE = app

QT += printsupport

SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

CONFIG += c++11

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui
