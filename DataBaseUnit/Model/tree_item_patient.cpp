#include "tree_item_patient.h"

TreeItemPatient::TreeItemPatient(const RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      surname(data.value(1).toString()),
      first_name(data.value(2).toString()),
      second_name(data.value(3).toString())
{
}

const QString TreeItemPatient::getSurname() {
    return surname;
}

const QString TreeItemPatient::getFirstName() {
    return first_name;
}

const QString TreeItemPatient::getSecondName() {
    return second_name;
}

void TreeItemPatient::viewData() {

}
