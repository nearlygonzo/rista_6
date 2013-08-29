#include "data_control.h"

DataControl::DataControl()
{
    _db = boost::shared_ptr<Database>(new Database());
    fillTreeModel();
}

void DataControl::fillTreeModel() {
    QList<RecordData> recordsList;
    const int count = _db->getRecordsCount();
    for (int i = 0; i < count; ++i) {
        recordsList << convertToRecordData(_db->getRecord(i));
    }
    _treeModel = boost::shared_ptr<TreeModel>(new TreeModel(recordsList));
}

DataControl::RecordData DataControl::convertToRecordData(const QSqlRecord& record) {
    RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData << QVariant(record.value(i));
    }
    return recordData;
}

TreeModel* DataControl::getTreeModel() {
    return _treeModel.get();
}
