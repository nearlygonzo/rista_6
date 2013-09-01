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
    ElementInfo data = index.model()->getElementInfo(index);
    FramePatient *frame = static_cast<FramePatient*> (editor);
    frame->setData(data); //устанавливаем текст
}

void DelegateFramePatient::setModelData(QWidget *editor,
                  QAbstractItemModel *model, const QModelIndex &index) const
{
    FramePatient *frame = static_cast<FramePatient*>(editor);
    ElementInfo &data = frame->getData();
    if (!data.isEmpty())
        model->setData(index, data);
}
