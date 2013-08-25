#ifndef ITEM_CREATOR_H
#define ITEM_CREATOR_H

#include <DataBaseUnit/Model/tree_item_patient.h>

class ItemCreator      // factory for create specialy items
{
public:
    TreeItem* factoryMethod(const QList<QVariant> &data, TreeItem *parent = 0);
    ItemCreator();
};

#endif // ITEM_CREATOR_H
