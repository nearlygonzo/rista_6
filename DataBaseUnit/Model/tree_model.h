#ifndef TREE_MODEL_H
#define TREE_MODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <boost/shared_ptr.hpp>
#include <DataBaseUnit/database.h>
#include <DataBaseUnit/Model/tree_item_patient.h>
#include <DataBaseUnit/Model/Factory/item_creator.h>

class TreeModel : public QAbstractItemModel
{
typedef QList<QVariant> RecordData;

private:
    boost::shared_ptr<ItemCreator> creator;
    TreeItem *rootItem;


public:
    TreeModel(const QList<RecordData> &data, QObject *parent = 0);
    ~TreeModel();

    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant headerData(int section, Qt::Orientation orientation,
                     int role = Qt::DisplayRole) const;
    QModelIndex index(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;

private:
    void setupModelData(const QList<RecordData> &data, TreeItem *parent = 0);

};

#endif // TREE_MODEL_H
