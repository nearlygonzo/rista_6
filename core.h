#ifndef CORE_H
#define CORE_H

#include <boost/serialization/singleton.hpp>
#include <DataBaseUnit/Model/tree_model.h>

class Core : public boost::serialization::singleton<Core>
{
private:
    boost::shared_ptr<TreeModel> tree_model;
protected:
public:

private:
protected:
    Core();
public:

};

#endif // CORE_H
