QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_squareunittest.cpp \
    ../Exam_proj_QtLess/circle.cpp \
    ../Exam_proj_QtLess/main.cpp \
    ../Exam_proj_QtLess/square.cpp \
    ../Exam_proj_QtLess/triangle.cpp

HEADERS += \
    ../Exam_proj_QtLess/circle.h \
    ../Exam_proj_QtLess/square.h \
    ../Exam_proj_QtLess/triangle.h
