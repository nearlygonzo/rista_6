#include "WidgetPatient.h"
#include "ui_WidgetPatient.h"

WidgetPatient::WidgetPatient(QModelIndex &index, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetPatient),
    indexSource(index)
{
    ui->setupUi(this);
}

WidgetPatient::~WidgetPatient()
{
    delete ui;
}

/*void WidgetPatient::setData(DataUnit::ItemData &data)
{
    ui->lineEditSurname->setText(data[DataUnit::SURNAME].toString());
    ui->lineEditFirstName->setText(data[DataUnit::FIRST_NAME].toString());
    ui->lineEditSecondName->setText(data[DataUnit::SECOND_NAME].toString());
}

void WidgetPatient::getData(DataUnit::ItemData &data)
{
    data[DataUnit::SURNAME] = ui->lineEditSurname->text();
    data[DataUnit::FIRST_NAME] = ui->lineEditFirstName->text();
    data[DataUnit::SECOND_NAME] = ui->lineEditSecondName->text();
}*/

 bool WidgetPatient::operator !=(WidgetPatient *widget)
 {
     if (indexSource != widget->indexSource)
         return true;
     else
         return false;
 }
