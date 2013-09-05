#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H

#include <QTreeView>
#include <DataUnit/TreeModel/TreeModel.h>
#include <DataUnit/Widgets/WidgetPatient.h>
#include <DataUnit/Patient.h>
#include <DataUnit/Record.h>
#include <DataUnit/Folder.h>

class DataControl : public QObject
{
    Q_OBJECT
public:

private:
    const boost::shared_ptr<Database> db;
    const boost::shared_ptr<TreeModel> tmCatalogMain;
    const boost::shared_ptr<TreeModel> tmCatalogTemp;
    const boost::shared_ptr<TreeModel> tmCatalogImport;
    const boost::shared_ptr<MapPatients> mapPatients;
    const boost::shared_ptr<MapRecords> mapRecords;
    const boost::shared_ptr<MapFolders> mapFolders;
    boost::shared_ptr<WidgetPatient> widgetPatient;

    DataUnit::RecordData convertToRecordData(const QSqlRecord& record);
    void fillMapPatients();
    void fillMapRecords();
    void fillMapFolders();
    void fillModelMain();
    void fillModelTemp();
    void fillModelImport();

public:
    DataControl();
    void setModelForView(QTreeView *view);

public slots:
    void showWidgetPatient(QModelIndex index, QWidget *parent);

signals:
    void changedContent(QWidget *widget);

};

#endif // DATA_CONTROL_H
