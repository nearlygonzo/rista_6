#ifndef TREE_ITEM_H
#define TREE_ITEM_H

#include <QString>
#include <QVariant>
#include <QException>
#include <DataUnit/DataUnitNamespace.h>

class TreeItem         // abstract class for specialy tree items
{
public:

private:
    QList<TreeItem*> childItems;
    TreeItem *parentItem;
protected:
    int id;

public:
    TreeItem(const TMU::RecordData &data, TreeItem *parent = 0);
    virtual ~TreeItem();
    void appendChild(TreeItem *child);
    TreeItem *child(int row);
    int childCount() const;
    int row() const;
    TreeItem *parent();
    virtual int columnCount() const = 0;
    virtual QString title() = 0;
    virtual QVariant getData(const int param) = 0;
    virtual bool setData(const int param, const QVariant &value) = 0;
};

#endif // TREE_ITEM_H