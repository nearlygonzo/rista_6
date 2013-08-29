#include "database.h"

Database::Database(const QString db_path) {
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName(db_path);
    this->setTable();
}  

void Database::setTable(const QString table_name) {
    QSqlDatabase sdb = QSqlDatabase::database();
    if (!sdb.isOpen())
        sdb.open();
    QSqlQuery *query = new QSqlQuery("SELECT * FROM " + table_name);
    sql_query = boost::shared_ptr<QSqlQuery>(query);
}

QSqlRecord Database::getRecord(const quint32 index) {
    sql_query->seek(index, true);
    return sql_query->record();
}

int Database::getRecordsCount() const {
    sql_query->size();
}


