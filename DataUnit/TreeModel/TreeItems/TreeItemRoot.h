#ifndef TREE_ITEM_ROOT_H
#define TREE_ITEM_ROOT_H

#include <DataUnit/TreeModel/TreeItems/TreeItem.h>

class TreeItemRoot : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 1;

public:
    TreeItemRoot(const DataUnit::RecordData &data);
    int columnCount() const;
    QString title();
    QVariant getData(const int param);
    bool setData(const int param, const QVariant &value);
};

#endif // TREE_ITEM_ROOT_H
