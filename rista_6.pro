#-------------------------------------------------
#
# Project created by QtCreator 2013-08-11T01:03:18
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += d:/boost/include/boost-1_54/
LIBS += -Ld:/boost/lib -llibboost_system-mgw48-mt-1_54 -llibboost_thread-mgw48-mt-d-1_54

TARGET = rista_6
TEMPLATE = app


SOURCES += main.cpp\
    DataBaseUnit/database.cpp \
    DataBaseUnit/patient.cpp \
    mainwindow.cpp \
    core.cpp \
    DataBaseUnit/Exceptions/db_exceptions.cpp \
    DataBaseUnit/Model/tree_model.cpp \
    DataBaseUnit/Model/tree_item.cpp \
    DataBaseUnit/Model/tree_item_patient.cpp \
    DataBaseUnit/Model/Factory/item_creator.cpp

HEADERS  += \
    DataBaseUnit/database.h \
    DataBaseUnit/patient.h \
    mainwindow.h \
    core.h \
    DataBaseUnit/Exceptions/db_exceptions.h \
    DataBaseUnit/Model/tree_model.h \
    DataBaseUnit/Model/tree_item.h \
    DataBaseUnit/Model/tree_item_patient.h \
    DataBaseUnit/Model/Factory/item_creator.h

FORMS    += mainwindow.ui

OTHER_FILES +=
