#include "TreeItem.h"

TreeItem::TreeItem(const int id, const int pos, Element *elem, TreeItem *parent)
    : itemId(id),
      element(elem),
      position(pos)
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

int TreeItem::columnCount() const {
    return COLUMN_COUNT;
}

int TreeItem::getId() const {
    return itemId;
}

QString TreeItem::getTitle() {
    return title;
}

Element *TreeItem::getElement() {
    return element;
}






