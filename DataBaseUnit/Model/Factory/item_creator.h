#ifndef ITEM_CREATOR_H
#define ITEM_CREATOR_H

#include <DataBaseUnit/Model/tree_item_patient.h>
#include <DataBaseUnit/Model/tree_item_root.h>

class ItemCreator      // factory for create specialy items
{
private:

public:
    static const int TYPE_ITEM_ROOT     = 0;
    static const int TYPE_ITEM_PATIENT  = 1;
    TreeItem *factoryMethod(TMU::RecordData &data, TreeItem *parent = 0);
    ItemCreator();
};

#endif // ITEM_CREATOR_H
