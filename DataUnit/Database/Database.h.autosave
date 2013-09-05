#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QList>
#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>
#include <DataUnit/Exceptions/DBExceptions.h>

#define TABLE_PATIENTS       "patients"
#define TABLE_RECORDS        "records"
#define TABLE_FOLDERS        "folders"
#define TABLE_MAIN_CATALOG   "main_catalog"
#define TABLE_IMPORT_CATALOG "import_catalog"
#define TABLE_TEMP_CATALOG   "temp_catalog"
#define DB_PATH "d:\\rista_6\\rista\\rista_6\\DataUnit\\Database\\rista_data_base.db"
//#define DB_PATH "f:\\Rista_6\\rista_6-master\\DataBaseUnit\\rista_data_base.db"

class Database : public boost::noncopyable
{
private:
    boost::shared_ptr<QSqlQueryModel> query;
protected:
public:


private:
protected:
public:
    Database(const QString db_path = DB_PATH);
    void setTable(const QString table_name = TABLE_PATIENTS);
    QSqlRecord getRecord(const quint32 index);
    int getRecordsCount() const;

};

#endif // CDATABASE_H
