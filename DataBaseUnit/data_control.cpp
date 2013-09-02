#include "data_control.h"

DataControl::DataControl()
    : _treeModelPatients(new TreeModel()),
      _db(new Database())
{
    fillTreeModels();
}

void DataControl::fillTreeModels() {
    QList<ModelPair> vectorModels;
    vectorModels << std::make_pair(_treeModelPatients, "patients");

    for (QList<ModelPair>::iterator it = vectorModels.begin();
         it != vectorModels.end(); ++it)
    {
        _db->setTable(it->second);
        QList<TMU::RecordData> recordsList;
        for (int j = 0; j < _db->getRecordsCount(); ++j) {
            recordsList << convertToRecordData(_db->getRecord(j));
        }
        it->first->fillModel(recordsList);
    }
}

TMU::RecordData DataControl::convertToRecordData(const QSqlRecord& record) {
    TMU::RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData[record.fieldName(i)] = QVariant(record.value(i));
    }
    return recordData;
}

void DataControl::setView(QTreeView *view)
{
    view->setModel(_treeModelPatients.get());
}
