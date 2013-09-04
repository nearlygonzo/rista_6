#include "TreeItem.h"

TreeItem::TreeItem(const TMU::RecordData &data, TreeItem *parent)
    : id(data["id"].toInt())
{
    parentItem = parent;
}

TreeItem::~TreeItem()
{
    qDeleteAll(childItems);
}

void TreeItem::appendChild(TreeItem *item)
{
    childItems.append(item);
}

TreeItem *TreeItem::child(int row)
{
    return childItems.value(row);
}

int TreeItem::childCount() const
{
    return childItems.count();
}

int TreeItem::row() const
{
    if (parentItem)
        return parentItem->childItems.indexOf(const_cast<TreeItem*>(this));

    return 0;
}

TreeItem* TreeItem::parent()
{
    return parentItem;
}

