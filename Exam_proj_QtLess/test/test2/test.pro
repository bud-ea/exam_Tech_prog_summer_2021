QT += testlib
QT -= gui
QT += core gui
QT += core gui network widgets

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_auth.cpp \
    functions.cpp

HEADERS += \
    functions.h
