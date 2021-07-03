QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_p_check.cpp \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/circle.cpp \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/main.cpp \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/square.cpp \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/triangle.cpp

HEADERS += \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/circle.h \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/square.h \
    ../GitHub/exam_Tech_prog_summer_2021/Exam_proj_QtLess/triangle.h
