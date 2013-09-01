#ifndef TREE_ITEM_ROOT_H
#define TREE_ITEM_ROOT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemRoot : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 1;

public:
    TreeItemRoot(const RecordData &data);
    int columnCount() const;
    QVariant data(const int param);
    ElementInfo getInfo();
};

#endif // TREE_ITEM_ROOT_H
