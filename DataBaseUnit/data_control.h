#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H

#include <DataBaseUnit/Model/tree_model.h>
#include <DataBaseUnit/database.h>

class DataControl
{
typedef QList<QVariant> RecordData;
private:
    const boost::shared_ptr<TreeModel> _treeModel;
    boost::shared_ptr<Database> _db;
    void fillTreeModel();
    RecordData convertToRecordData(const QSqlRecord& record);

public:
    DataControl();
    TreeModel* getTreeModel();
};

#endif // DATA_CONTROL_H
