#ifndef TREE_ITEM_H
#define TREE_ITEM_H

#include <QString>
#include <QVariant>
#include <QException>
#include <DataUnit/DataUnitNamespace.h>
#include <DataUnit/Elements/Element.h>

class TreeItem
{
    static const int COLUMN_COUNT = 3;
private:
    QList<TreeItem*> childItems;
    TreeItem *parentItem;

    int itemId;
    QString title;
    boost::shared_ptr<Element> element;
    int position;

public:
    TreeItem(const int id, const int pos, Element &elem = 0, TreeItem *parent = 0);
    ~TreeItem();
    void appendChild(TreeItem *child);
    TreeItem *child(int row);
    int childCount() const;
    int row() const;
    TreeItem *parent();
    int columnCount() const;
    int getId() const;
    QString getTitle();
    Element getElement();
};
