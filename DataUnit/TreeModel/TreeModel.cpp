#include "TreeModel.h"

TreeModel::TreeModel(QObject *parent)
     : QAbstractItemModel(parent)
{
    rootItem = new TreeItem(0, 0);
}

TreeModel::~TreeModel()
{
    delete rootItem;
}

int TreeModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return static_cast<TreeItem*>(parent.internalPointer())->columnCount();
    else
        return rootItem->columnCount();
}

QVariant TreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole)
        return QVariant();

    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());
    switch (index.column()) {
    case DataUnit::TITLE:
        return QVariant(item->getTitle());
    case DataUnit::ID:
        return QVariant(item->getId());
    case DataUnit::ELEMENT_OBJ:
        return QVariant(item->getElement());
    }
}

Qt::ItemFlags TreeModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::ItemIsEnabled;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

QModelIndex TreeModel::index(int row, int column, const QModelIndex &parent)
         const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    TreeItem *parentItem;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    TreeItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

QModelIndex TreeModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    TreeItem *childItem = static_cast<TreeItem*>(index.internalPointer());
    TreeItem *parentItem = childItem->parent();

    if (parentItem == rootItem)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

int TreeModel::rowCount(const QModelIndex &parent) const
{
    TreeItem *parentItem;
    if (parent.column() > 0)
        return 0;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    return parentItem->childCount();
}

void TreeModel::addElement(const int id, const int pos,
                           const int parentId, Element &elem) {
    TreeItem *parent = findItem(parentId, rootItem);
    parent->appendChild(new TreeItem(id, pos, elem, parent));
}


TreeItem* TreeModel::findItem(const int id, TreeItem* parent)
{
    TreeItem* item = parent;
    if (item->getId() == id)
        return item;
    for (int i = 0; i < parent->childCount(); ++i) {
        item = parent->child(i);
        if (item->childCount() != 0) {
            TreeItem* childItem = findItem(id, item);
            if (item != childItem)
                return childItem;
        }
        else if (item->getId() == id)
            return item;
    }
    return item;
}


