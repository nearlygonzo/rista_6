#ifndef TREE_ITEM_PATIENT_H
#define TREE_ITEM_PATIENT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemPatient : public TreeItem
{
private:
    QString surname;
    QString first_name;
    QString second_name;

public:
    TreeItemPatient(const QList<QVariant> &data, TreeItem *parent = 0);
    const QString getSurname();
};

#endif
