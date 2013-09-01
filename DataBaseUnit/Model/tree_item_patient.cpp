#include "tree_item_patient.h"

TreeItemPatient::TreeItemPatient(const RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      surname(data["surname"].toString()),
      first_name(data["first_name"].toString()),
      second_name(data["second_name"].toString())
{
    title = formTitle();
}

int TreeItemPatient::columnCount() const {
    return PROPERTES_COUNT;
}

QVariant TreeItemPatient::data(const int param) {
    switch (param) {
    case TreeItem::TITLE:       return QVariant(title);
    case TreeItem::ID:          return QVariant(id);
    case TreeItem::SURNAME:     return QVariant(surname);
    case TreeItem::FIRST_NAME:  return QVariant(first_name);
    case TreeItem::SECOND_NAME: return QVariant(second_name);
    default:    return QVariant();
    }
}

QString TreeItemPatient::formTitle() {
    return QString(surname + " " + first_name);
}
