#include "item_creator.h"

ItemCreator::ItemCreator()
{
}

TreeItem* ItemCreator::factoryMethod(QList<QVariant> &data, TreeItem *parent) {
    int type = data.value(1).toInt();
    switch (type) {
    case 0: return new TreeItemRoot(data);
    case 1: return new TreeItemPatient(data, parent);
    default: return new TreeItemRoot(data);
    }
}
