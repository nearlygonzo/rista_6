#include "database.h"

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
    sql_query = boost::shared_ptr<QSqlQueryModel>(new QSqlQueryModel());
    sql_query->setQuery("SELECT * FROM " + table_name);
}

QSqlRecord Database::getRecord(const quint32 index) {
    return sql_query->record(index);
}

int Database::getRecordsCount() const {
    return sql_query->rowCount();
}


