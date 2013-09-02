#ifndef TREE_MODEL_UNIT_H
#define TREE_MODEL_UNIT_H

#include <QVariant>

namespace TMU {
    const static int TITLE       = 0;
    const static int ID          = 1;
    const static int SURNAME     = 2;
    const static int FIRST_NAME  = 3;
    const static int SECOND_NAME = 4;
    const static int PATIENT_INFO = SURNAME + FIRST_NAME + SECOND_NAME;
    typedef QMap<int, QVariant> ItemData;
    typedef QMap<QString, QVariant> RecordData;
}

#endif // TREE_MODEL_UNIT_H
