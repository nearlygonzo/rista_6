#ifndef CORE_H
#define CORE_H

#include <QTreeView>
#include <boost/serialization/singleton.hpp>
#include <DataBaseUnit/data_control.h>

class Core : public boost::serialization::singleton<Core>
{
private:
    const boost::shared_ptr<DataControl> _dataControl;
protected:
public:

private:
protected:
    Core();
public:
    void fillTreeView(QTreeView *treeView);

};

#endif // CORE_H
