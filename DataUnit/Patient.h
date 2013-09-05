#ifndef PATIENT_H
#define PATIENT_H

#include <DataUnit/DataUnitNamespace.h>

typedef QMap<int, Patient> MapPatients;

class Patient
{
private:
    static const int PROPERTES_COUNT = 6;
    int     id;
    QString surname;
    QString firstName;
    QString secondName;
    char    sex;
    QString generalInfo;

public:
    explicit Patient(const DataUnit::RecordData &data);

    int getId();
    QString getSurname();
    bool setSurname(QString val);
    QString getFirstName();
    bool setFirstName(QString val);
    QString getSecondName();
    bool setSecondName(QString val);
    char getSex();
    bool setSex(char val);
    QString getGeneralInfo();
    bool setGeneralInfo(QString val);

};

#endif // PATIENT_H
