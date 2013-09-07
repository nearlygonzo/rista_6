#include "Folder.h"

Folder::Folder(DataUnit::RecordData &data)
    : Element(data["id"].toInt()),
      name(data["name"].toString())
{
}

QString Folder::getName() {
    return name;
}

bool Folder::setName(QString val) {
    name = val;
    return true;
}

QString Folder::formTitle() {
    return name;
}
