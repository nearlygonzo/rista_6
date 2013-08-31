#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QList>
#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>
#include <DataBaseUnit/Exceptions/db_exceptions.h>

#define DB_PATH "d:\\rista_6\\rista\\rista_6\\DataBaseUnit\\rista_data_base.db"

class Database : public boost::noncopyable
{
private:
    boost::shared_ptr<QSqlQueryModel> sql_query;
protected:
public:


private:
protected:
public:
    Database(const QString db_path = DB_PATH);
    void setTable(const QString table_name = "patients");
    QSqlRecord getRecord(const quint32 index);
    int getRecordsCount() const;

};

#endif // CDATABASE_H
