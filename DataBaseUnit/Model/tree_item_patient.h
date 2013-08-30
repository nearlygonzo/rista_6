#ifndef TREE_ITEM_PATIENT_H
#define TREE_ITEM_PATIENT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemPatient : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 4;
    QString surname;
    QString first_name;
    QString second_name;

public:
    TreeItemPatient(const RecordData &data, TreeItem *parent = 0);
    int columnCount() const;
    QVariant data(const int param);
    inline QString formTitle();
};

#endif
