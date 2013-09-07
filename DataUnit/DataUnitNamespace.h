#ifndef TREE_MODEL_UNIT_H
#define TREE_MODEL_UNIT_H

#include <QObject>
#include <boost/shared_ptr.hpp>

namespace DataUnit {
    const int ITEM_TYPE_ROOT         = 9;
    const int ITEM_TYPE_PATIENT_DIR  = 0;
    const int ITEM_TYPE_FOLDER       = 1;
    const int ITEM_TYPE_RECORD       = 2;

    const int TITLE         = 0;
    const int ID            = 1;
    const int ELEMENT_OBJ   = 2;

    const int PATIENT_OBJ   = 0;
    const int FOLDER_OBJ    = 1;
    const int RECORD_OBJ    = 2;
}

#endif // TREE_MODEL_UNIT_H
