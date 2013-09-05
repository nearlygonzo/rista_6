#include "ItemCreator.h"

ItemCreator::ItemCreator()
{
}

TreeItem* ItemCreator::factoryMethod(DataUnit::RecordData &data, TreeItem *parent) {
    int type = data["type"].toInt();
    switch (type) {
    case DataUnit::ITEM_TYPE_ROOT:
        return new TreeItemRoot(data);
    case DataUnit::ITEM_TYPE_PATIENT_DIR:
        return new TreeItemPatientDir(data, parent);
    case DataUnit::ITEM_TYPE_SIMPLE_DIR:
        return new TreeItemFolder(data, parent);
    case DataUnit::ITEM_TYPE_DEF_RECORD:
        return new TreeItemDefRecord(data, parent);
    case DataUnit::ITEM_TYPE_UNDEF_RECORD:
        return new TreeItemUndefRecord(data, parent);
    default: return new TreeItemRoot(data);
    }
}
