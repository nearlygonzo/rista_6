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

QList<QSqlRecord> Database::getAllRecords() {
    QList<QSqlRecord> records_list;
    sql_query->first();
    while (sql_query->isValid()) {
        QSqlRecord record = sql_query->record();
        records_list.append(record);
        sql_query->next();
    }
    return records_list;
}


