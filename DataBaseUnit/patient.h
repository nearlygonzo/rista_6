#ifndef PATIENT_H
#define PATIENT_H

#include <QString>

class Patient
{

private:
    static quint32 Patients_Count;
    quint32 id;
    QString surname;
    QString first_name;
    QString second_name;

public:
    Patient(const quint32 _id, const QString _surname,
            const QString _first_name, const QString _second_name);

};

#endif
