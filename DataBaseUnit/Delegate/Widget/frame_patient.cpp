#include "frame_patient.h"
#include "ui_frame_patient.h"

FramePatient::FramePatient(QModelIndex &index, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FramePatient),
    indexSource(index)
{
    ui->setupUi(this);
}

FramePatient::~FramePatient()
{
    delete ui;
}

void FramePatient::setData(ElementInfo data)
{
    ui->lineEditSurname = data["surname"].toString();
    ui->lineEditFirstName = data["first_name"].toString();
    ui->lineEditSecondName = data["second_name"].toString();
}

ElementInfo &FramePatient::getData()
{
    ElementInfo &data;
    data["surname"] = ui->lineEditSurname;
    data["first_name"] = ui->lineEditFirstName;
    data["second_name"] = ui->lineEditSecondName;
    return data;
}
