#include "DataControl.h"

DataControl::DataControl()
    : db(new Database()),
      tmCatalogMain(new TreeModel()),
      tmCatalogTemp(new TreeModel()),
      tmCatalogImport(new TreeModel())
{
    readDatabase();
    fillModel(TABLE_MAIN_CATALOG, tmCatalogMain.get());
}

void DataControl::readDatabase() {
    QList<QString> &tablesName;
    tablesName << TABLE_MAIN_CATALOG << TABLE_TEMP_CATALOG << TABLE_IMPORT_CATALOG
               << TABLE_PATIENTS << TABLE_RECORDS << TABLE_FOLDERS;
    for (QList<QString>::iterator it = tablesName.begin();
         it != tablesName.end(); ++it)
    {
        QString tableName = *it;
        db->setTable(tableName);
        QList<QSqlRecord> tableData;
        int count = db->getRecordsCount();
        for (int i = 0; i < count; ++i) {
            tableData.append(db->getRecord(i));
        }
        tables[tableName] = tableData;
    }
}


void DataControl::fillModel(QString tableName, TreeModel *tm) {
    db->setTable(tableName);

    // read all record from table for model
    QList<QSqlRecord> data;
    int count = db->getRecordsCount();
    for (int i = 0; i < count; ++i) {
        data.append(db->getRecord(i));
    }

    // after associate record data with elements
    for (QList<QSqlRecord>::iterator it = data.begin(); it != data.end(); ++it) {
        int elemId = static_cast<int>(it->field("pointer"));
        int elemType = static_cast<int>(it->field("type"));
        Element &elem = findElement(elemType, elemId);
        int itemId = static_cast<int>(it->field("id"));
        int itemPos = static_cast<int>(it->field("position"));
        int parentId = static_cast<int>(it->field("parent_id"));
        tm->addElement(itemId, pos, parentId, elem);
    }
}



DataUnit::RecordData DataControl::convertToRecordData(const QSqlRecord& record) {
    DataUnit::RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData[record.fieldName(i)] = QVariant(record.value(i));
    }
    return recordData;
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




