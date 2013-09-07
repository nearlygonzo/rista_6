#ifndef ELEMENT_H
#define ELEMENT_H

#include <DataUnit/DataUnitNamespace.h>
#include <QSqlRecord>

class Element
{
    int     id;
public:
    Element(const int id_);
    int getId() const;
    virtual QString formTitle() = 0;
};

#endif // ELEMENT_H
