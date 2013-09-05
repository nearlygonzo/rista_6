#ifndef TREEITEMDEFRECORD_H
#define TREEITEMDEFRECORD_H

#include <DataUnit/TreeModel/TreeItems/TreeItem.h>
#include <DataUnit/ListModel/Record.h>
#include <DataUnit/ListModel/Patient.h>

class TreeItemDefRecord : public TreeItem
{
private:
    Record *const record;
    Patient *const patient;

public:
    TreeItemDefRecord(const DataUnit::RecordData &data, TreeItem *parent = 0);
};

#endif // TREEITEMDEFRECORD_H
