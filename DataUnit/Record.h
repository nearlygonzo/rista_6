#ifndef RECORD_H
#define RECORD_H

#include <DataUnit/DataUnitNamespace.h>

typedef QMap<int, Record>  MapRecords;

class Record
{
private:
    int     id;
    QString name;
    QDateTime datetime;
    QString value;
    QString note;

public:
    Record(const DataUnit::RecordData &data);
    int getId();
    QString getName();
    bool setName(QString val);
    QDateTime getDatetime();
    bool setDateTime(QDateTime val);
    QString getValue();
    bool setValue(QString val);
    QString getNote();
    void setNote(QString val);

};

#endif // RECORD_H
