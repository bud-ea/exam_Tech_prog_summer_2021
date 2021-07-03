QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += tst_exam_test.cpp \
    ../Exam_proj_QtLess/square.cpp

HEADERS += \
    ../Exam_proj_QtLess/square.h