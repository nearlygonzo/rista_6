#ifndef RECORD_H
#define RECORD_H

#include <DataUnit/Elements/Element.h>

class Record : public Element
{
private:
    QString name;
    QDateTime datetime;
    QString value;
    QString note;

public:
    static const int PROPERTES_COUNT = 5;
    explicit Record(const QSqlRecord &data);
    QString getName();
    bool setName(QString val);
    QDateTime getDatetime();
    bool setDateTime(QDateTime val);
    QString getValue();
    bool setValue(QString val);
    QString getNote();
    void setNote(QString val);
    QString formTitle();

};

#endif // RECORD_H
