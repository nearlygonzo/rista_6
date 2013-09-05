#include "TreeItemPatientDir.h"

TreeItemPatientDir::TreeItemPatientDir(const DataUnit::RecordData &data, TreeItem *parent)
    : TreeItem(data, parent)
{
}

int TreeItemPatientDir::columnCount() const
{
    return PROPERTES_COUNT;
}

QString TreeItemPatientDir::title()
{
    return QString(patient->getSurname() + "  " + patient->getFirstName());
}

QVariant TreeItemPatientDir::getData(const int param)
{
    switch (param) {
    case DataUnit::TITLE:       return title();
    case DataUnit::ID:          return QVariant(id);
    default:               return QVariant();
    }
}

bool TreeItemPatientDir::setData(const int param, const QVariant &value)
{
    switch (param) {
    default:
        return false;
    }
}




