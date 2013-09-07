#include "DataControl.h"

DataControl::DataControl()
    : db(new Database())
{
}

TreeModel *DataControl::fillModel(const QString tableName) {
    TreeModel *model = new TreeModel();
    QList<DataUnit::RecordData> listRecords;
    fillList(tableName, listRecords);

    QList<DataUnit::RecordData>::iterator it = listRecords.begin();
    for (; it != listRecords.end(); ++it) {
        Element *element;
        switch ((*it)["type"].toInt()) {
        case DataUnit::PATIENT_OBJ:
            element = new Patient(db->getRecord((*it)["pointer"].toInt(), TABLE_PATIENTS));
            break;
        case DataUnit::RECORD_OBJ:
            element = new Record(db->getRecord((*it)["pointer"].toInt(), TABLE_RECORDS));
            break;
        case DataUnit::FOLDER_OBJ:
            element = new Folder(db->getRecord((*it)["pointer"].toInt(), TABLE_FOLDERS));
            break;
        }
        model->addElement((*it), element);
    }
    return model;
}

void DataControl::fillList(const QString tableName, QList<DataUnit::RecordData> &list) {
    db->setTable(tableName);
    int count = db->recordsCount();
    for (int i = 0; i < count; ++i)
        list.append(db->getRecord(i));
}

void DataControl::setModelForView(QTreeView *view) {
    if (view->objectName() == "treeViewMain")
        view->setModel(fillModel(TABLE_MAIN_CATALOG));
    else if (view->objectName() == "treeViewTemp")
        view->setModel(fillModel(TABLE_TEMP_CATALOG));
    else if (view->objectName() == "treeViewImport")
        view->setModel(fillModel(TABLE_IMPORT_CATALOG));
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

    //DataUnit::ItemData data = index.model()->itemData(index);
    //widgetPatient->setData(data);
    widgetPatient->show();
}




