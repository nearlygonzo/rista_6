#ifndef PATIENT_H
#define PATIENT_H

#include <DataUnit/Elements/Element.h>

class Patient : public Element
{
private:
    QString surname;
    QString firstName;
    QString secondName;
    char    sex;
    QString generalInfo;

public:
    static const int PROPERTES_COUNT = 6;
    explicit Patient(DataUnit::RecordData &data);

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
    QString formTitle();

};

#endif // PATIENT_H
