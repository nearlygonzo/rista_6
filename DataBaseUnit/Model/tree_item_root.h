#ifndef TREE_ITEM_ROOT_H
#define TREE_ITEM_ROOT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemRoot : public TreeItem
{
typedef QList<QVariant> RecordData;

public:
    TreeItemRoot(const RecordData &data);
    virtual int columnCount();
};

#endif // TREE_ITEM_ROOT_H
