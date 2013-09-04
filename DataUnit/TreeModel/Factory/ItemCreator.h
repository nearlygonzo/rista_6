#ifndef ITEM_CREATOR_H
#define ITEM_CREATOR_H

#include <DataUnit/TreeModel/TreeItems/TreeItemPatientDir.h>
#include <DataUnit/TreeModel/TreeItems/TreeItemRoot.h>
#include <DataUnit/TreeModel/TreeItems/TreeItemFolder.h>
#include <DataUnit/TreeModel/TreeItems/TreeItemDefRecord.h>
#include <DataUnit/TreeModel/TreeItems/TreeItemUndefRecord.h>

class ItemCreator
{
private:

public:
    TreeItem *factoryMethod(DataUnit::RecordData &data, TreeItem *parent = 0);
    ItemCreator();
};

#endif // ITEM_CREATOR_H
