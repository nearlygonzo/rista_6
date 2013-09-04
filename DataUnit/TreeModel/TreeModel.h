#ifndef TREE_MODEL_H
#define TREE_MODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <QSqlQueryModel>
#include <boost/shared_ptr.hpp>
#include <DataUnit/TreeModel/Factory/ItemCreator.h>
#include <DataUnit/Database/Database.h>


class TreeModel : public QAbstractItemModel
{
    Q_OBJECT
private:
    const QString tableName;
    const boost::shared_ptr<Database> db;
    const boost::shared_ptr<ItemCreator> creator;
    TreeItem *rootItem;
    TreeItem *findItem(const int id, TreeItem *parent);

public:
    TreeModel(QString name, Database *database, QObject *parent = 0);
    ~TreeModel();

    QVariant data(const QModelIndex &index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    DataUnit::ItemData itemData(const QModelIndex &index) const;
    bool setItemData(const QModelIndex &index, const QMap<int, QVariant> &roles);
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QModelIndex index(int row, int column,
                   const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;

    void fillModel();

};

#endif // TREE_MODEL_H
