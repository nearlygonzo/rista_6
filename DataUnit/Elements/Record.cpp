#include "Record.h"

Record::Record(DataUnit::RecordData &data)
    : Element(data["id"].toInt()),
      name(data["name"].toString()),
      //datetime(data["datetime"].toDatetime()),
      value(data["value"].toString()),
      note(data["note"].toString())
{
}

QString Record::getName() {
    return name;
}

bool Record::setName(QString val) {
    name = val;
    return true;
}

/*QDateTime Record::getDatetime() {
    return datetime;
}

bool Record::setDateTime(QDateTime val) {
    datetime = val;
    return true;
}*/

QString Record::getValue() {
    return value;
}

bool Record::setValue(QString val) {
    value = val;
    return true;
}

QString Record::getNote() {
    return note;
}

void Record::setNote(QString val) {
    note = val;
}

QString Record::formTitle() {
    return name;
}




