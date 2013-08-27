#ifndef TREE_ITEM_H
#define TREE_ITEM_H

#include <QString>
#include <QVariant>

class TreeItem         // abstract class for specialy tree items
{
typedef QList<QVariant> RecordData;
private:
    QList<TreeItem*> childItems;
    TreeItem *parentItem;
protected:
    int id;
    QString title;

public:
    TreeItem(const RecordData &data, TreeItem *parent = 0);
    virtual ~TreeItem();
    void appendChild(TreeItem *child);
    TreeItem *child(int row);
    int childCount() const;
    virtual int columnCount() const = 0;
    int row() const;
    TreeItem *parent();

    const int getId() const;

};

#endif // TREE_ITEM_H
