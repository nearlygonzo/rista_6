#ifndef TREE_ITEM_PATIENT_H
#define TREE_ITEM_PATIENT_H

#include <DataUnit/TreeModel/TreeItems/TreeItem.h>
#include <DataUnit/Patient.h>

class TreeItemPatientDir : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 2;
    Patient *const patient;

public:
    TreeItemPatientDir(const DataUnit::RecordData &data, TreeItem *parent = 0);
    int columnCount() const;
    inline QString title();
    QVariant getData(const int param);
    bool setData(const int param, const QVariant &value);
};

#endif
