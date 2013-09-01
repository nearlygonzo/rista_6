#ifndef TREE_MODEL_H
#define TREE_MODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <boost/shared_ptr.hpp>
#include <DataBaseUnit/Model/tree_item_patient.h>
#include <DataBaseUnit/Model/Factory/item_creator.h>


class TreeModel : public QAbstractItemModel
{
    Q_OBJECT
private:
    boost::shared_ptr<ItemCreator> creator;
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
    void fillModel(const QList<RecordData> &data);
    ElementInfo getElementInfo(QModelIndex &index);
    void setElementInfo(QModelIndex &index, const ElementInfo &info);

};

#endif // TREE_MODEL_H
