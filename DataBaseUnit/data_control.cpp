#include "data_control.h"

DataControl::DataControl()
    : tmPatients(new TreeModel()),
      db(new Database())
{
    fillModelPatient();
}

void DataControl::fillModelPatient() {
    db->setTable("patients");
    QList<TMU::RecordData> recordsData;
    for (int i = 0; i < db->getRecordsCount(); ++i) {
        recordsData << convertToRecordData(db->getRecord(i));
    }
    tmPatients->fillModel(recordsData);
}


TMU::RecordData DataControl::convertToRecordData(const QSqlRecord& record) {
    TMU::RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData[record.fieldName(i)] = QVariant(record.value(i));
    }
    return recordData;
}

void DataControl::setModelForView(QTreeView *view)
{
    if (view->objectName() == "treeViewPatients")
        view->setModel(tmPatients.get());
}

void DataControl::showWidgetPatient(QModelIndex index, QWidget *parent)
{
    WidgetPatient *widget = new WidgetPatient(index, parent);
}
