#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QList>
#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>
#include <DataBaseUnit/Exceptions/db_exceptions.h>

#define DB_PATH "f:\\Rista_6\\rista_6-master\\DataBaseUnit\\rista_data_base.db"

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
    void setTable(const QString table_name = "patients");
    QSqlRecord getRecord(const quint32 index);
    int getRecordsCount() const;

};

#endif // CDATABASE_H
