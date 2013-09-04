#include "TreeItemPatientDir.h"

TreeItemPatientDir::TreeItemPatientDir(const TMU::RecordData &data, TreeItem *parent)
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
    case TMU::TITLE:       return title();
    case TMU::ID:          return QVariant(id);
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




