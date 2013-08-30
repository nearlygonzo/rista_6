#include "item_creator.h"

ItemCreator::ItemCreator()
{
}

TreeItem* ItemCreator::factoryMethod(RecordData &data, TreeItem *parent) {
    int type = data["type"].toInt();
    switch (type) {
    case TYPE_ITEM_ROOT:    return new TreeItemRoot(data);
    case TYPE_ITEM_PATIENT: return new TreeItemPatient(data, parent);

    default: return new TreeItemRoot(data);
    }
}
