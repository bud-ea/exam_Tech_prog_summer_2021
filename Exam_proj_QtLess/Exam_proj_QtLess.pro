TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += qml_debug

SOURCES += \
        circle.cpp \
        main.cpp \
        square.cpp \
        triangle.cpp

HEADERS += \
    circle.h \
    square.h \
    triangle.h
