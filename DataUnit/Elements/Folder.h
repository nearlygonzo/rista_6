#ifndef FOLDER_H
#define FOLDER_H

#include <DataUnit/Elements/Element.h>

class Folder : public Element
{
private:
    QString name;

public:
    static const int PROPERTIES_COUNT = 2;
    explicit Folder(const QSqlRecord &data);
    QString getName();
    bool setName(QString val);
    QString formTitle();
};

#endif // FOLDER_H
