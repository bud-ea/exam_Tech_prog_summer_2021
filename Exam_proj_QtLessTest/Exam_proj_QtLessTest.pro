QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_testexam_proj_qtless.cpp \
    ../Exam_proj_QtLess/square.cpp
