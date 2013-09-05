#ifndef FOLDER_H
#define FOLDER_H

#include <DataUnit/DataUnitNamespace.h>

typedef QMap<int, Folder>  MapFolders;

class Folder
{
private:
    int     id;
    QString name;

public:
    explicit Folder(const DataUnit::RecordData &data);
    int getId();
    QString getName();
    bool setName(QString val);
};

#endif // FOLDER_H
