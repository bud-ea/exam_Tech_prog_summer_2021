QT += core gui
QT += core gui network widgets
QT += sql

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        circle.cpp \
        square.cpp \
        triangle.cpp\
        main.cpp

HEADERS += \
    circle.h \
    square.h \
    triangle.h

FORMS +=
