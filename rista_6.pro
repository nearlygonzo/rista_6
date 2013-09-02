#-------------------------------------------------
#
# Project created by QtCreator 2013-08-11T01:03:18
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#INCLUDEPATH += d:/boost/include/boost-1_54/
#LIBS += -Ld:/boost/lib -llibboost_system-mgw48-mt-1_54 -llibboost_thread-mgw48-mt-d-1_54

INCLUDEPATH += f:/boost/boost_1_54_0/
LIBS += -Lf:/boost/boost_1_54_0/stage/lib -llibboost_system-mgw48-mt-1_54 -llibboost_thread-mgw48-mt-d-1_54

TARGET = rista_6
TEMPLATE = app


SOURCES += main.cpp\
    DataBaseUnit/database.cpp \
    mainwindow.cpp \
    core.cpp \
    DataBaseUnit/Exceptions/db_exceptions.cpp \
    DataBaseUnit/Model/tree_model.cpp \
    DataBaseUnit/Model/tree_item.cpp \
    DataBaseUnit/Model/tree_item_patient.cpp \
    DataBaseUnit/Model/Factory/item_creator.cpp \
    DataBaseUnit/Model/tree_item_root.cpp \
    DataBaseUnit/data_control.cpp \
    tests/TestsDataBase/test_data_control.cpp \
    DataBaseUnit/Delegate/delegate_frame_patient.cpp \
    DataBaseUnit/Delegate/Widget/WidgetPatient.cpp

HEADERS  += \
    DataBaseUnit/database.h \
    mainwindow.h \
    core.h \
    DataBaseUnit/Exceptions/db_exceptions.h \
    DataBaseUnit/Model/tree_model.h \
    DataBaseUnit/Model/tree_item.h \
    DataBaseUnit/Model/tree_item_patient.h \
    DataBaseUnit/Model/Factory/item_creator.h \
    DataBaseUnit/Model/tree_item_root.h \
    DataBaseUnit/data_control.h \
    tests/TestsDataBase/test_data_control.h \
    DataBaseUnit/Delegate/delegate_frame_patient.h \
    DataBaseUnit/Model/TMU_namespace.h \
    DataBaseUnit/Delegate/Widget/WidgetPatient.h

FORMS    += mainwindow.ui \
    DataBaseUnit/Delegate/Widget/WidgetPatient.ui

OTHER_FILES +=
