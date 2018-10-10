#-------------------------------------------------
#
# Project created by QtCreator 2018-10-03T19:37:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Multiplayer_Online_Wargamming_Application
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    weapon.cpp \
    marine.cpp

HEADERS  += mainwindow.h \
    weapon.h \
    marine.h

FORMS    += mainwindow.ui

RESOURCES += \
    test.qrc

CONFIG += c++11
