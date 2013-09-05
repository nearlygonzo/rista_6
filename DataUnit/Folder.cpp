#include "Folder.h"

Folder::Folder(const DataUnit::RecordData &data)
    : id(data["id"].toInt()),
      name(data["name"].toInt())
{
}

int Folder::getId() {
    return id;
}

QString Folder::getName() {
    return name;
}

bool Folder::setName(QString val) {
    name = val;
    return true;
}

