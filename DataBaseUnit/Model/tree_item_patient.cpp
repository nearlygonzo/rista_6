#include "tree_item_patient.h"

TreeItemPatient::TreeItemPatient(const TMU::RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      surname(data["surname"].toString()),
      first_name(data["first_name"].toString()),
      second_name(data["second_name"].toString())
{
    title = formTitle();
}

int TreeItemPatient::columnCount() const
{
    return PROPERTES_COUNT;
}

QVariant TreeItemPatient::data(const int param)
{
    switch (param) {
    case TMU::TITLE:       return QVariant(title);
    case TMU::ID:          return QVariant(id);
    case TMU::SURNAME:     return QVariant(surname);
    case TMU::FIRST_NAME:  return QVariant(first_name);
    case TMU::SECOND_NAME: return QVariant(second_name);
    default: return QVariant();
    }
}

QString TreeItemPatient::formTitle()
{
    return QString(surname + " " + first_name);
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
    surname = info[TMU::SURNAME].toString();
    first_name = info[TMU::FIRST_NAME].toString();
    second_name = info[TMU::SECOND_NAME].toString();
    return true;
}



