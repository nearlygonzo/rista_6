#ifndef ITEM_CREATOR_H
#define ITEM_CREATOR_H

#include <DataBaseUnit/Model/tree_item_patient.h>
#include <DataBaseUnit/Model/tree_item_root.h>

class ItemCreator      // factory for create specialy items
{
typedef QList<QVariant> RecordData;

public:
    TreeItem* factoryMethod(QList<QVariant> &data, TreeItem *parent = 0);
    ItemCreator();
};

#endif // ITEM_CREATOR_H
