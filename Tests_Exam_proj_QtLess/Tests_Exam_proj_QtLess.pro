QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_tests_triangle.cpp \
    ../Exam_proj_QtLess/triangle.cpp