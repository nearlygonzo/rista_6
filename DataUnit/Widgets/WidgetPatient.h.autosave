#ifndef WIDGETPATIENT_H
#define WIDGETPATIENT_H

#include <QWidget>
#include <QModelIndex>
#include <DataUnit/DataUnitNamespace.h>

namespace Ui {
class WidgetPatient;
}

class WidgetPatient : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetPatient(QModelIndex &index, QWidget *parent = 0);
    ~WidgetPatient();
    void setData(DataUnit::ItemData &data);
    void getData(DataUnit::ItemData &data);
    bool operator !=(WidgetPatient *widget);
private:
    Ui::WidgetPatient *ui;
    QModelIndex indexSource;
};

#endif // WIDGETPATIENT_H
