#include "tree_item_patient.h"

TreeItemPatient::TreeItemPatient(const RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      surname(data.value(1).toString()),
      first_name(data.value(2).toString()),
      second_name(data.value(3).toString())
{
}

int TreeItemPatient::columnCount() const {
    return PROPERTES_COUNT;
}

QVariant TreeItemPatient::data(const int param) {
    switch (param) {
    case TreeItem::ID:          return QVariant(id);
    case TreeItem::SURNAME:     return QVariant(surname);
    case TreeItem::FIRST_NAME:  return QVariant(first_name);
    case TreeItem::SECOND_NAME: return QVariant(second_name);
    default:    return QVariant();
    }
}
