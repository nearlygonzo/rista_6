#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H

#include <QTreeView>
#include <DataBaseUnit/Model/tree_model.h>
#include <DataBaseUnit/database.h>
#include <DataBaseUnit/Widgets/WidgetPatient.h>

class DataControl : public QObject
{
    Q_OBJECT
private:
    const boost::shared_ptr<TreeModel> tmPatients;
    const boost::shared_ptr<Database> db;
    boost::shared_ptr<WidgetPatient> widgetPatient;
    void fillModelPatient();
    TMU::RecordData convertToRecordData(const QSqlRecord& record);

public:
    DataControl();
    void setModelForView(QTreeView *view);

public slots:
    void showWidgetPatient(QModelIndex index, QWidget *parent);

signals:
    void changedContent(QWidget *widget);

};

#endif // DATA_CONTROL_H
