#include "TreeItemSimpleDir.h"

TreeItemSimpleDir::TreeItemSimpleDir(const TMU::RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      name(data["name"].toString())
{
}

int TreeItemSimpleDir::columnCount() const
{
    return PROPERTES_COUNT;
}

QString TreeItemSimpleDir::title()
{
    return name;
}

QVariant TreeItemSimpleDir::getData(const int )
{
    return QVariant(0);
}

bool TreeItemSimpleDir::setData(const int , const QVariant &)
{
    return false;
}
