#ifndef TREE_ITEM_PATIENT_H
#define TREE_ITEM_PATIENT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemPatient : public TreeItem
{
typedef QList<QVariant> RecordData;
private:
    static const int PROPERTES_COUNT = 4;
    QString surname;
    QString first_name;
    QString second_name;

public:
    TreeItemPatient(const RecordData &data, TreeItem *parent = 0);
    virtual int columnCount() const;
    virtual QVariant data(const int param);
};

#endif
