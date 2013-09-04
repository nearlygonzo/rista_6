#include "DataControl.h"

DataControl::DataControl()
    : db(new Database()),
      tmCatalogMain(new TreeModel(db.get(), TABLE_MAIN_CATALOG)),
      tmCatalogTemp(new TreeModel(db.get(), TABLE_TEMP_CATALOG)),
      tmCatalogImport(new TreeModel(db.get(), TABLE_IMPORT_CATALOG))
{
}

DataUnit::RecordData DataControl::convertToRecordData(const QSqlRecord& record) {
    DataUnit::RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData[record.fieldName(i)] = QVariant(record.value(i));
    }
    return recordData;
}

void DataControl::fillModelMain() {

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




