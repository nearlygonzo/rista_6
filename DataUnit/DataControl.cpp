#include "DataControl.h"

DataControl::DataControl()
    : db(new Database()),
      tmCatalogMain(new TreeModel()),
      tmCatalogTemp(new TreeModel()),
      tmCatalogImport(new TreeModel()),
      mapPatients(new MapPatients),
      mapRecords(new MapRecords),
      mapFolders(new MapFolders)
{
    fillMapPatients();
    fillMapRecords();
    fillMapFolders();
}

DataUnit::RecordData DataControl::convertToRecordData(const QSqlRecord& record) {
    DataUnit::RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData[record.fieldName(i)] = QVariant(record.value(i));
    }
    return recordData;
}


void DataControl::fillMapPatients() {
    db->setTable(TABLE_PATIENTS);
    int count = db->getRecordsCount();
    DataUnit::RecordData data;
    for (int i = 0; i < count; ++i) {
        data = convertToRecordData(db->getRecord(i));
        mapPatients[data["id"].toInt()] = data;
    }
}

void DataControl::fillMapRecords() {
    db->setTable(TABLE_RECORDS);
    int count = db->getRecordsCount();
    DataUnit::RecordData data;
    for (int i = 0; i < count; ++i) {
        data = convertToRecordData(db->getRecord(i));
        mapRecords[data["id"].toInt()] = data;
    }
}

void DataControl::fillMapFolders() {
    db->setTable(TABLE_FOLDERS);
    int count = db->getRecordsCount();
    DataUnit::RecordData data;
    for (int i = 0; i < count; ++i) {
        data = convertToRecordData(db->getRecord(i));
        mapFolders[data["id"].toInt()] = data;
    }
}

void DataControl::fillModelMain() {
    db->setTable(TABLE_MAIN_CATALOG);
    int count = db->getRecordsCount();
    DataUnit::RecordData data;
    for (int i = 0; i < count; ++i) {
        data = convertToRecordData(db->getRecord(i));
        tmCatalogMain->addElement(data);
    }
}

void DataControl::fillModelTemp() {
}

void DataControl::fillModelImport() {
}


void DataControl::setModelForView(QTreeView *view)
{
    if (view->objectName() == "treeViewMain")
        view->setModel(tmCatalogMain.get());
    else if (view->objectName() == "treeViewTemp")
        view->setModel(tmCatalogTemp.get());
    else if (view->objectName() == "treeViewImport")
        view->setModel(tmCatalogImport.get());
}

void DataControl::showWidgetPatient(QModelIndex index, QWidget *parent)
{
    WidgetPatient *newWidget = new WidgetPatient(index, parent);
    if (!widgetPatient.get()) {
        widgetPatient = boost::shared_ptr<WidgetPatient>(newWidget);
    } else {
        if (widgetPatient.get() != newWidget)
            widgetPatient = boost::shared_ptr<WidgetPatient>(newWidget);
    }

    DataUnit::ItemData data = index.model()->itemData(index);
    widgetPatient->setData(data);
    widgetPatient->show();
}




