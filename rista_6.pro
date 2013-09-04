#-------------------------------------------------
#
# Project created by QtCreator 2013-08-11T01:03:18
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += d:/boost/include/boost-1_54/
LIBS += -Ld:/boost/lib -llibboost_system-mgw48-mt-1_54 -llibboost_thread-mgw48-mt-d-1_54

#INCLUDEPATH += f:/boost/boost_1_54_0/
#LIBS += -Lf:/boost/boost_1_54_0/stage/lib -llibboost_system-mgw48-mt-1_54 -llibboost_thread-mgw48-mt-d-1_54

TARGET = rista_6
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    core.cpp \
    DataBaseUnit/Exceptions/db_exceptions.cpp \
    tests/TestsDataBase/test_data_control.cpp \
    DataBaseUnit/Widgets/WidgetPatient.cpp \
    DataBaseUnit/Model/TreeItemSimpleDir.cpp \
    DataBaseUnit/Model/TreeItemPatientDir.cpp \
    DataBaseUnit/Model/TreeItem.cpp \
    DataBaseUnit/Model/TreeItemRoot.cpp \
    DataBaseUnit/Model/TreeModel.cpp \
    DataBaseUnit/DataControl.cpp \
    DataBaseUnit/Database.cpp \
    DataBaseUnit/Model/Factory/ItemCreator.cpp \
    DataBaseUnit/Model/Patient.cpp \
    DataBaseUnit/Model/Record.cpp \
    DataBaseUnit/Model/TreeItemDefRecord.cpp \
    DataBaseUnit/Model/TreeItemUndefRecord.cpp \
    DataBaseUnit/ListModel/ListModel.cpp \
    DataBaseUnit/Database/Database.cpp \
    DataUnit/DataControl.cpp \
    DataUnit/Widgets/WidgetPatient.cpp \
    DataUnit/TreeModel/TreeModel.cpp \
    DataUnit/TreeModel/TreeItems/TreeItemUndefRecord.cpp \
    DataUnit/TreeModel/TreeItems/TreeItemSimpleDir.cpp \
    DataUnit/TreeModel/TreeItems/TreeItemRoot.cpp \
    DataUnit/TreeModel/TreeItems/TreeItemPatientDir.cpp \
    DataUnit/TreeModel/TreeItems/TreeItemDefRecord.cpp \
    DataUnit/TreeModel/TreeItems/TreeItem.cpp \
    DataUnit/TreeModel/Factory/ItemCreator.cpp \
    DataUnit/ListModel/Record.cpp \
    DataUnit/ListModel/Patient.cpp \
    DataUnit/ListModel/ListModel.cpp \
    DataUnit/Database/Database.cpp \
    DataUnit/Exceptions/DBExceptions.cpp

HEADERS  += \
    mainwindow.h \
    core.h \
    DataBaseUnit/Exceptions/db_exceptions.h \
    tests/TestsDataBase/test_data_control.h \
    DataBaseUnit/Model/TMU_namespace.h \
    DataBaseUnit/Widgets/WidgetPatient.h \
    DataBaseUnit/Model/TreeItemSimpleDir.h \
    DataBaseUnit/Model/TreeItemPatientDir.h \
    DataBaseUnit/Model/TreeItem.h \
    DataBaseUnit/Model/TreeItemRoot.h \
    DataBaseUnit/Model/TreeModel.h \
    DataBaseUnit/DataControl.h \
    DataBaseUnit/Database.h \
    DataBaseUnit/Model/Factory/ItemCreator.h \
    DataBaseUnit/Model/Patient.h \
    DataBaseUnit/Model/Record.h \
    DataBaseUnit/Model/TreeItemDefRecord.h \
    DataBaseUnit/Model/TreeItemUndefRecord.h \
    DataBaseUnit/ListModel/ListModel.h \
    DataBaseUnit/Database/Database.h \
    DataUnit/DataControl.h \
    DataUnit/Widgets/WidgetPatient.h \
    DataUnit/TreeModel/TreeModel.h \
    DataUnit/TreeModel/TreeItems/TreeItemUndefRecord.h \
    DataUnit/TreeModel/TreeItems/TreeItemSimpleDir.h \
    DataUnit/TreeModel/TreeItems/TreeItemRoot.h \
    DataUnit/TreeModel/TreeItems/TreeItemPatientDir.h \
    DataUnit/TreeModel/TreeItems/TreeItemDefRecord.h \
    DataUnit/TreeModel/TreeItems/TreeItem.h \
    DataUnit/TreeModel/Factory/ItemCreator.h \
    DataUnit/ListModel/Record.h \
    DataUnit/ListModel/Patient.h \
    DataUnit/ListModel/ListModel.h \
    DataUnit/Database/Database.h \
    DataUnit/DataUnitNamespace.h \
    DataUnit/Exceptions/DBExceptions.h

FORMS    += mainwindow.ui \
    DataBaseUnit/Widgets/WidgetPatient.ui \
    DataUnit/Widgets/WidgetPatient.ui

OTHER_FILES += \
    DataUnit/Database/rista_data_base.db

