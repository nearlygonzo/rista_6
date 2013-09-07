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
    DataUnit/DataControl.cpp \
    DataUnit/Widgets/WidgetPatient.cpp \
    DataUnit/TreeModel/TreeModel.cpp \
    DataUnit/TreeModel/TreeItems/TreeItem.cpp \
    DataUnit/Database/Database.cpp \
    DataUnit/Exceptions/DBExceptions.cpp \
    Core.cpp \
    DataUnit/ListModel/Folder.cpp \
    DataUnit/Record.cpp \
    DataUnit/Patient.cpp \
    DataUnit/Folder.cpp \
    DataUnit/Elements/Element.cpp \
    DataUnit/Elements/Record.cpp \
    DataUnit/Elements/Patient.cpp \
    DataUnit/Elements/Folder.cpp \
    DataUnit/TreeModel/TreeItem.cpp \
    DataUnit/Elements/FactoryElements.cpp

HEADERS  += \
    mainwindow.h \
    DataUnit/DataControl.h \
    DataUnit/Widgets/WidgetPatient.h \
    DataUnit/TreeModel/TreeModel.h \
    DataUnit/Database/Database.h \
    DataUnit/DataUnitNamespace.h \
    DataUnit/Exceptions/DBExceptions.h \
    Core.h \
    DataUnit/ListModel/Folder.h \
    DataUnit/Record.h \
    DataUnit/Patient.h \
    DataUnit/Elements/Element.h \
    DataUnit/Elements/Record.h \
    DataUnit/Elements/Patient.h \
    DataUnit/Elements/Folder.h \
    DataUnit/TreeModel/TreeItem.h \
    DataUnit/Elements/FactoryElements.h

FORMS    += mainwindow.ui \
    DataUnit/Widgets/WidgetPatient.ui

OTHER_FILES += \
    DataUnit/Database/rista_data_base.db

