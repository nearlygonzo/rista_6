#ifndef TREEITEMSIMPLEDIR_H
#define TREEITEMSIMPLEDIR_H

#include <DataUnit/TreeModel/TreeItems/TreeItem.h>

class TreeItemSimpleDir : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 2;
    QString name;

public:
    TreeItemSimpleDir(const TMU::RecordData &data, TreeItem *parent = 0);
    int columnCount() const;
    QString title();
    QVariant getData(const int param);
    bool setData(const int param, const QVariant &value);
    TMU::ItemData getInfo();
    bool setInfo(const TMU::ItemData &info);
};

#endif // TREEITEMSIMPLEDIR_H
