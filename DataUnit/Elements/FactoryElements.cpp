#include "FactoryElements.h"

FactoryElements::FactoryElements()
{
}

Element *FactoryElements::factoryMethod(int type, int id) {
    DataUnit::RecordData &data;
    switch (type) {
    case DataUnit::PATIENT_OBJ:
        return new Patient(data);
    case DataUnit::FOLDER_OBJ:
        return new Folder(data);
    case DataUnit::RECORD_OBJ:
        return new Record(data);
    }
}
