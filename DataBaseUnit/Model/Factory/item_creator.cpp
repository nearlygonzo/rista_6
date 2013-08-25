#include "item_creator.h"

ItemCreator::ItemCreator()
{
}

TreeItem* ItemCreator::factoryMethod(const QList<QVariant> &data, TreeItem *parent) {
    int type = 0;
    switch (type) {
    case 0: return new TreeItemPatient(data, parent);
    }
}
