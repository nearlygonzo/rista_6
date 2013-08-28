#include "tree_item.h"

TreeItem::TreeItem(const RecordData &data, TreeItem *parent)
    : id(data.value(0).toInt())
{
    parentItem = parent;
    title = data.value(0).toString();
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

