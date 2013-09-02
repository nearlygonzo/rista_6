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

void WidgetPatient::setData(TMU::ItemData &data)
{
    ui->lineEditSurname->setText(data[TMU::SURNAME].toString());
    ui->lineEditFirstName->setText(data[TMU::FIRST_NAME].toString());
    ui->lineEditSecondName->setText(data[TMU::SECOND_NAME].toString());
}

void WidgetPatient::getData(TMU::ItemData &data)
{
    data[TMU::SURNAME] = ui->lineEditSurname->text();
    data[TMU::FIRST_NAME] = ui->lineEditFirstName->text();
    data[TMU::SECOND_NAME] = ui->lineEditSecondName->text();
}
