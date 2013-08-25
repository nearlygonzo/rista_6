#include "tree_item_patient.h"

TreeItemPatient::TreeItemPatient(const QList<QVariant> &data, TreeItem *parent)
    : TreeItem(data, parent)
{
}

const QString TreeItemPatient::getSurname() {
    return surname;
}
