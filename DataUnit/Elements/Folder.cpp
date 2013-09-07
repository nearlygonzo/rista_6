#include "Folder.h"

Folder::Folder(const QSqlRecord &data)
    : Element(data.field("id")),
      name(data.field("name"))
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
