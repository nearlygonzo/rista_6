#include "patient.h"

Patient::Patient(const quint32 _id, const QString _surname,
                   const QString _first_name, const QString _second_name)
    : id(_id),
      surname(_surname),
      first_name(_first_name),
      second_name(_second_name)
{
}
