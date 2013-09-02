#include "tree_model.h"

TreeModel::TreeModel(QObject *parent)
     : QAbstractItemModel(parent)
{
    TMU::RecordData rootData;
    rootData["id"] = 0;
    rootData["type"] = ItemCreator::TYPE_ITEM_ROOT;
    creator = boost::shared_ptr<ItemCreator>(new ItemCreator);
    rootItem = creator->factoryMethod(rootData);
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

    return item->data(index.column());
}

TMU::ItemData TreeModel::itemData(const QModelIndex &index) const
{
    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());
    TMU::ItemData data = item->getInfo();
    return data;
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

bool TreeModel::setItemData(const QModelIndex &index,
                            const QMap<int, QVariant> &roles)
{
    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());
    return item->setInfo(roles);
}

void TreeModel::fillModel(const QList<TMU::RecordData> &data)
{
    int count = data.size();
    for (int i = 0; i < count; ++i) {
        TMU::RecordData recordData = data.value(i);
        TreeItem *parent = findItem(recordData["parent_item"].toInt(), rootItem);
        TreeItem *item = creator->factoryMethod(recordData, parent);
        TreeItem *parentItem = item->parent();
        parentItem->appendChild(item);
    }
}

TreeItem* TreeModel::findItem(const int id, TreeItem* parent)
{
    TreeItem* item = parent;
    if (item->data(TMU::ID).toInt() == id)
        return item;
    for (int i = 0; i < parent->childCount(); ++i) {
        item = parent->child(i);
        if (item->childCount() != 0) {
            TreeItem* childItem = findItem(id, item);
            if (item != childItem)
                return childItem;
        }
        else if (item->data(TMU::ID).toInt() == id)
            return item;
    }
    return item;
}


