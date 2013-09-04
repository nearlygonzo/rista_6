#include "Folder.h"

Folder::Folder(const DataUnit::RecordData &data)
    : id(data["id"].toInt()),
      name(data["name"].toInt())
{
}



