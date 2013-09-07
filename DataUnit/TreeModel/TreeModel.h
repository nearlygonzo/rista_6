#ifndef TREEMODEL_H
#define TREEMODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <QSqlQueryModel>
#include <DataUnit/TreeModel/TreeItem.h>
#include <DataUnit/Elements/Element.h>


class TreeModel : public QAbstractItemModel
{
    Q_OBJECT
private:
    TreeItem *rootItem;
    TreeItem *findItem(const int id, TreeItem *parent);

public:
    TreeModel(QObject *parent = 0);
    ~TreeModel();

    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QModelIndex index(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    void addElement(DataUnit::RecordData &data, Element *elem);

};

#endif // TREE_MODEL_H
