QT += testlib
QT += network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  unittest.cpp \
    E:\Exam\exam_Tech_prog_summer_2021\Exam_proj_QtLess\triangle.cpp

HEADERS += \
    E:\Exam\exam_Tech_prog_summer_2021\Exam_proj_QtLess\triangle.h
