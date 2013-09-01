#include "frame_patient.h"
#include "ui_frame_patient.h"

FramePatient::FramePatient(QModelIndex &index, QWidget *parent) :
    QFrame(parent),
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
