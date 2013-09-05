#ifndef TREEITEMSIMPLEDIR_H
#define TREEITEMSIMPLEDIR_H

#include <DataUnit/TreeModel/TreeItems/TreeItem.h>

class TreeItemFolder : public TreeItem
{
private:
    static const int PROPERTES_COUNT = 2;
    QString name;

public:
    TreeItemFolder(const DataUnit::RecordData &data, TreeItem *parent = 0);
    int columnCount() const;
    QString title();
    QVariant getData(const int param);
    bool setData(const int param, const QVariant &value);
    DataUnit::ItemData getInfo();
    bool setInfo(const DataUnit::ItemData &info);
};

#endif // TREEITEMSIMPLEDIR_H
