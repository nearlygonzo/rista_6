#include "delegate_frame_patient.h"

DelegateFramePatient::DelegateFramePatient(QObject *parent)
    : QItemDelegate(parent)
{
}

QWidget *DelegateFramePatient::createEditor(QWidget *parent,
         const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    FramePatient *dlg = new FramePatient(index, parent);
    return dlg;
}

void DelegateFramePatient::setEditorData(QWidget *editor,
                                         const QModelIndex &index) const
{
    PatientInfo data = index.model()->getElementInfo(index);
    LineEdit *fileDialog = static_cast<LineEdit*> (editor); //преобразуем указатель
    fileDialog->setText(value); //устанавливаем текст
}
