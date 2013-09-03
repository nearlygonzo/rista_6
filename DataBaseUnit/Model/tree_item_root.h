#ifndef TREE_ITEM_ROOT_H
#define TREE_ITEM_ROOT_H

#include <DataBaseUnit/Model/tree_item.h>

class TreeItemRoot : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 1;

public:
    TreeItemRoot(const TMU::RecordData &data);
    int columnCount() const;
    QString title();
    QVariant getData(const int param);
    bool setData(const int param, const QVariant &value);
    TMU::ItemData getInfo();
    bool setInfo(const TMU::ItemData &info);
};

#endif // TREE_ITEM_ROOT_H
