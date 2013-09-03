#include "tree_item_patient.h"

TreeItemPatient::TreeItemPatient(const TMU::RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      surname(data["surname"].toString()),
      first_name(data["first_name"].toString()),
      second_name(data["second_name"].toString())
{
}

int TreeItemPatient::columnCount() const
{
    return PROPERTES_COUNT;
}

QString TreeItemPatient::title()
{
    return QString(surname + " " + first_name);
}

QVariant TreeItemPatient::getData(const int param)
{
    switch (param) {
    case TMU::TITLE:       return title();
    case TMU::ID:          return QVariant(id);
    case TMU::SURNAME:     return QVariant(surname);
    case TMU::FIRST_NAME:  return QVariant(first_name);
    case TMU::SECOND_NAME: return QVariant(second_name);
    default:               return QVariant();
    }
}

bool TreeItemPatient::setData(const int param, const QVariant &value)
{
    switch (param) {
    case TMU::SURNAME:      surname = value.toString();
                            return true;
    case TMU::FIRST_NAME:   first_name = value.toString();
                            return true;
    case TMU::SECOND_NAME:  second_name = value.toString();
                            return true;
    default:                return false;
    }
}

TMU::ItemData TreeItemPatient::getInfo()
{
    TMU::ItemData info;
    info[TMU::SURNAME] = surname;
    info[TMU::FIRST_NAME] = first_name;
    info[TMU::SECOND_NAME] = second_name;
    return info;
}

bool TreeItemPatient::setInfo(const TMU::ItemData &info)
{
    try
    {
        surname = info[TMU::SURNAME].toString();
        first_name = info[TMU::FIRST_NAME].toString();
        second_name = info[TMU::SECOND_NAME].toString();
        return true;
    } catch (QException) {
        return false;
    }
}



