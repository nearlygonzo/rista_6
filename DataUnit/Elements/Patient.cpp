#include "Patient.h"

Patient::Patient(DataUnit::RecordData &data)
    : Element(data["id"].toInt()),
      surname(data["surname"].toString()),
      firstName(data["first_name"].toString()),
      secondName(data["second_name"].toString()),
      sex(data["sex"].toChar()),
      generalInfo(data["general_info"].toString())
{
}

QString Patient::getSurname() {
    return surname;
}

bool Patient::setSurname(QString val) {
    // todo: validate
    surname = val;
    return true;
}

QString Patient::getFirstName() {
    return firstName;
}

void Patient::setFirstName(QString val) {
    // todo: validate
    firstName = val;
    return true;
}

QString Patient::getSecondName() {
    return secondName;
}

bool Patient::setSecondName(QString val) {
    // todo: validate
    secondName = val;
    return true;
}

char Patient::getSex() {
    return sex;
}

bool Patient::setSex(char val) {
    // todo: validate
    sex = val;
    return true;
}

QString Patient::getGeneralInfo() {
    return generalInfo;
}

bool Patient::setGeneralInfo(QString val) {
    // todo: validate
    generalInfo = val;
    return true;
}

QString Patient::formTitle() {
    return (surname + "  " + firstName);
}


