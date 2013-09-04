#include "TreeItemRoot.h"

TreeItemRoot::TreeItemRoot(const TMU::RecordData &data)
    : TreeItem(data, 0)
{
}

int TreeItemRoot::columnCount() const
{
    return PROPERTES_COUNT;
}

QString TreeItemRoot::title()
{
    return QString("root");
}

QVariant TreeItemRoot::getData(const int )
{
    return QVariant(0);
}

bool TreeItemRoot::setData(const int , const QVariant &)
{
    return false;
}


