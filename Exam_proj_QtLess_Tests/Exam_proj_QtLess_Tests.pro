QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_exam_proj_qtless_tests.cpp \
    ../Exam_proj_QtLess/circle.cpp

SUBDIRS += \
    ../Exam_proj_QtLess/Exam_proj_QtLess.pro

HEADERS += \
    ../Exam_proj_QtLess/circle.h
