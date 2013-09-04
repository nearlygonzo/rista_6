#ifndef TREE_MODEL_UNIT_H
#define TREE_MODEL_UNIT_H

#include <QVariant>

namespace TMU {
    const int ITEM_TYPE_ROOT         = 9;
    const int ITEM_TYPE_PATIENT_DIR  = 0;
    const int ITEM_TYPE_SIMPLE_DIR   = 1;
    const int ITEM_TYPE_DEF_RECORD   = 2;
    const int ITEM_TYPE_UNDEF_RECORD = 3;

// FOR ALL TABLES
    const int TITLE       = 0;
    const int ID          = 1;
// TABLE PATIENTS
    const int SURNAME     = 2;
    const int FIRST_NAME  = 3;
    const int SECOND_NAME = 4;
    const int SEX         = 5;
    const int GENERAL_INFO= 6;
// TABLES CATALOG
    const int POSITION    = 2;
    const int POINTER     = 3;
    const int TYPE        = 4;
    const int PARENT_ID   = 5;

    typedef QMap<int, QVariant>     ItemData;
    typedef QMap<QString, QVariant> RecordData;
}

#endif // TREE_MODEL_UNIT_H
