#ifndef FACTORYELEMENTS_H
#define FACTORYELEMENTS_H

#include <DataUnit/Elements/Patient.h>
#include <DataUnit/Elements/Record.h>
#include <DataUnit/Elements/Folder.h>

class FactoryElements
{
public:
    FactoryElements();
    Element *factoryMethod(int type, DataUnit::RecordData &data);
};

#endif // FACTORYELEMENTS_H
