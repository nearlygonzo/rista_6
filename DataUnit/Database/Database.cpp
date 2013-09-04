#include "Database.h"

Database::Database(const QString db_path)
{
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName(db_path);
    this->setTable();
}  

void Database::setTable(const QString table_name) {
    QSqlDatabase sdb = QSqlDatabase::database();
    if (!sdb.isOpen())
        sdb.open();
    query = boost::shared_ptr<QSqlQueryModel>(new QSqlQueryModel());
    query->setQuery("SELECT * FROM " + table_name);
}

QSqlRecord Database::getRecord(const quint32 index) {
    return query->record(index);
}

int Database::getRecordsCount() const {
    return query->rowCount();
}


