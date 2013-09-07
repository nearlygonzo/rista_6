#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H

#include <QTreeView>
#include <DataUnit/Database/Database.h>
#include <DataUnit/TreeModel/TreeModel.h>
#include <DataUnit/Widgets/WidgetPatient.h>
#include <DataUnit/Elements/FactoryElements.h>

class DataControl : public QObject
{
    Q_OBJECT
public:

private:
    const boost::shared_ptr<Database> db;
    boost::shared_ptr<FactoryElements> factory;
    boost::shared_ptr<WidgetPatient> widgetPatient;
    TreeModel *fillModel(const QString tableName);
    void fillList(const QString tableName, QList<DataUnit::RecordData> &list);

public:
    DataControl();
    void setModelForView(QTreeView *view);

public slots:
    void showWidgetPatient(QModelIndex index, QWidget *parent);

signals:
    void changedContent(QWidget *widget);

};

#endif // DATA_CONTROL_H
