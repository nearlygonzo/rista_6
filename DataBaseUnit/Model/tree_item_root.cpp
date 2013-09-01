#include "tree_item_root.h"

TreeItemRoot::TreeItemRoot(const RecordData &data)
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

ElementInfo TreeItemRoot::getInfo()
{
    ElementInfo info;
    return info;
}

void TreeItemRoot::setInfo(const ElementInfo &info)
{
}
