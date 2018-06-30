######################################################################
# Automatically generated by qmake (3.1) Sun May 27 10:48:09 2018
######################################################################

TEMPLATE = app
TARGET = Proyecto
QT += widgets
CONFIG += console
QMAKE_CXXFLAGS += -std=c++11
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += File.h Field.h List.h MainWindow.h queue.h \
    addrecordwindow.h \
    addfieldwindow.h \
    listfieldswindow.h \
    deletefieldwindow.h \
    modifyrecordwindow.h \
    modifyfieldwindow.h
FORMS += MainWindow.ui \
    addrecordwindow.ui \
    addfieldwindow.ui \
    listfieldswindow.ui \
    deletefieldwindow.ui \
    modifyrecordwindow.ui \
    modifyfieldwindow.ui
SOURCES += File.cpp Field.cpp main.cpp MainWindow.cpp \
    addrecordwindow.cpp \
    addfieldwindow.cpp \
    listfieldswindow.cpp \
    deletefieldwindow.cpp \
    modifyrecordwindow.cpp \
    modifyfieldwindow.cpp
