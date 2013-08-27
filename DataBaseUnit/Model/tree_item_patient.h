#ifndef TREE_ITEM_PATIENT_H
#define TREE_ITEM_PATIENT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemPatient : public TreeItem
{
typedef QList<QVariant> RecordData;
private:
    QString surname;
    QString first_name;
    QString second_name;

public:
    TreeItemPatient(const RecordData &data, TreeItem *parent = 0);
    const QString getSurname();
    const QString getFirstName();
    const QString getSecondName();
    virtual int columnCount();
};

#endif
