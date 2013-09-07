#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H

#include <QTreeView>
#include <DataUnit/Database/Database.h>
#include <DataUnit/TreeModel/TreeModel.h>
#include <DataUnit/Widgets/WidgetPatient.h>
#include <DataUnit/Elements/FactoryElements.h>

typedef QMap<QString, QList<QSqlRecord> > MapTablesData;

class DataControl : public QObject
{
    Q_OBJECT
public:

private:
    const boost::shared_ptr<Database> db;
    const boost::shared_ptr<TreeModel> tmCatalogMain;
    const boost::shared_ptr<TreeModel> tmCatalogTemp;
    const boost::shared_ptr<TreeModel> tmCatalogImport;
    boost::shared_ptr<FactoryElements> factory;
    boost::shared_ptr<MapTablesData> tables;
    boost::shared_ptr<WidgetPatient> widgetPatient;

    void readDatabase();
    Element &findElement(int type, int id);
    DataUnit::RecordData convertToRecordData(const QSqlRecord& record);
    void fillModel(QString tableName, TreeModel *tm);

public:
    DataControl();
    void setModelForView(QTreeView *view);

public slots:
    void showWidgetPatient(QModelIndex index, QWidget *parent);

signals:
    void changedContent(QWidget *widget);

};

#endif // DATA_CONTROL_H
