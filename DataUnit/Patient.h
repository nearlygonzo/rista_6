#ifndef PATIENT_H
#define PATIENT_H

#include <QObject>
#include <DataUnit/DataUnitNamespace.h>

typedef QList<Patient> ListPatients;

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
    explicit Patient(const TMU::RecordData &data);

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
