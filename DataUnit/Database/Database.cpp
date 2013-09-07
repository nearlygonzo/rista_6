#include "Database.h"

Database::Database(const QString dbPath)
{
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName(dbPath);
    query = boost::shared_ptr<QSqlQueryModel>(new QSqlQueryModel());
}  

void Database::setTable(const QString tableName) {
    QSqlDatabase::database();
    query->setQuery("SELECT * FROM " + tableName);
}

int Database::recordsCount() const {
    return query->rowCount();
}

DataUnit::RecordData &Database::getRecord(const int index) {
    return convertToRecordData(query->record(index));
}

DataUnit::RecordData &Database::getRecord(const int id, const QString tableName) {
    query->setQuery("SELECT * FROM " + tableName + " WHERE id=" + id);
    return convertToRecordData(query->record());
}

DataUnit::RecordData &Database::convertToRecordData(QSqlRecord record) {
    DataUnit::RecordData recordData;
    int count = record.count();
    for (int i = 0; i < count; ++i) {
        recordData[record.fieldName(i)] = record.value(i);
    }
    return recordData;
}




