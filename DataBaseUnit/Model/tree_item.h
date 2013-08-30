#ifndef TREE_ITEM_H
#define TREE_ITEM_H

#include <QString>
#include <QVariant>

typedef QMap<QString, QVariant> RecordData;

class TreeItem         // abstract class for specialy tree items
{
public:
    const static int ID          = 0;
    const static int SURNAME     = 1;
    const static int FIRST_NAME  = 2;
    const static int SECOND_NAME = 3;

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
    int row() const;
    TreeItem *parent();
    virtual int columnCount() const = 0;
    virtual QVariant data(const int param) = 0;

};

#endif // TREE_ITEM_H
