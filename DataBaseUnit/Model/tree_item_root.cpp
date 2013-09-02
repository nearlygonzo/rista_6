#include "tree_item_root.h"

TreeItemRoot::TreeItemRoot(const TMU::RecordData &data)
    : TreeItem(data, 0)
{
    title = QString();
}

int TreeItemRoot::columnCount() const
{
    return PROPERTES_COUNT;
}

QVariant TreeItemRoot::data(const int param)
{
    return QVariant(0);
}

TMU::ItemData TreeItemRoot::getInfo()
{
    TMU::ItemData info;
    return info;
}

bool TreeItemRoot::setInfo(const TMU::ItemData &info)
{
    return true;
}
