#include "TreeItemFolder.h"

TreeItemFolder::TreeItemFolder(const DataUnit::RecordData &data, TreeItem *parent)
    : TreeItem(data, parent),
      name(data["name"].toString())
{
}

int TreeItemFolder::columnCount() const
{
    return PROPERTES_COUNT;
}

QString TreeItemFolder::title()
{
    return name;
}

QVariant TreeItemFolder::getData(const int )
{
    return QVariant(0);
}

bool TreeItemFolder::setData(const int , const QVariant &)
{
    return false;
}
