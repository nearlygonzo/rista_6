#ifndef DATA_CONTROL_H
#define DATA_CONTROL_H

#include <DataBaseUnit/Model/tree_model.h>
#include <DataBaseUnit/database.h>

class DataControl
{
private:
    typedef std::pair<boost::shared_ptr<TreeModel>, QString>  ModelPair;
    const boost::shared_ptr<TreeModel> _treeModelPatients;
    const boost::shared_ptr<Database> _db;
    void fillTreeModels();
    RecordData convertToRecordData(const QSqlRecord& record);

public:
    DataControl();
    TreeModel* getTreeModelPatients();
};

#endif // DATA_CONTROL_H
