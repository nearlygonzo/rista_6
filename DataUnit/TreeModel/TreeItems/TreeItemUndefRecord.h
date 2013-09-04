#ifndef TREEITEMUNDEFRECORD_H
#define TREEITEMUNDEFRECORD_H

#include <DataUnit/TreeModel/TreeItems/TreeItem.h>
#include <DataUnit/ListModel/Record.h>

class TreeItemUndefRecord : public TreeItem
{
private:
    Record *const record;

public:
    TreeItemUndefRecord(const TMU::RecordData &data, TreeItem *parent = 0);
};

#endif // TREEITEMUNDEFRECORD_H
