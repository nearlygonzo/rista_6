#ifndef TREE_ITEM_H
#define TREE_ITEM_H

#include <QString>
#include <QVariant>
#include <DataBaseUnit/Model/TMU_namespace.h>

class TreeItem         // abstract class for specialy tree items
{
public:

private:
    QList<TreeItem*> childItems;
    TreeItem *parentItem;
protected:
    int id;
    QString title;

public:
    TreeItem(const TMU::RecordData &data, TreeItem *parent = 0);
    virtual ~TreeItem();
    void appendChild(TreeItem *child);
    TreeItem *child(int row);
    int childCount() const;
    int row() const;
    TreeItem *parent();
    virtual int columnCount() const = 0;
    virtual QVariant data(const int param) = 0;
    virtual TMU::ItemData getInfo() = 0;
    virtual bool setInfo(const TMU::ItemData &info) = 0;
};

#endif // TREE_ITEM_H
