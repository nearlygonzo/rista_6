#include "ItemCreator.h"

ItemCreator::ItemCreator()
{
}

TreeItem* ItemCreator::factoryMethod(TMU::RecordData &data, TreeItem *parent) {
    int type = data["type"].toInt();
    switch (type) {
    case TMU::ITEM_TYPE_ROOT:
        return new TreeItemRoot(data);
    case TMU::ITEM_TYPE_PATIENT_DIR:
        return new TreeItemPatientDir(data, parent);
    case TMU::ITEM_TYPE_SIMPLE_DIR:
        return new TreeItemSimpleDir(data, parent);
    case TMU::ITEM_TYPE_DEF_RECORD:
        return new TreeItemDefRecord(data, parent);
    case TMU::ITEM_TYPE_UNDEF_RECORD:
        return new TreeItemUndefRecord(data, parent);
    default: return new TreeItemRoot(data);
    }
}
