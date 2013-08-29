#ifndef TREE_ITEM_ROOT_H
#define TREE_ITEM_ROOT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemRoot : public TreeItem
{
typedef QList<QVariant> RecordData;
private:
    static const int PROPERTES_COUNT = 1;

public:
    TreeItemRoot(const RecordData &data);
    int columnCount() const;
    QVariant data(const int param);
};

#endif // TREE_ITEM_ROOT_H
