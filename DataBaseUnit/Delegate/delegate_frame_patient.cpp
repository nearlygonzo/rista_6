#include "delegate_frame_patient.h"
#include <QSpinBox>

DelegateFramePatient::DelegateFramePatient(QObject *parent)
    : QStyledItemDelegate(parent)
{
}

QWidget *DelegateFramePatient::createEditor(QWidget *parent,
         const QStyleOptionViewItem &option, QModelIndex &index) const
{
    WidgetPatient *widget = new WidgetPatient(index, parent);
    return widget;
}

void DelegateFramePatient::setEditorData(QWidget *editor,
                                         const QModelIndex &index) const
{
    TMU::ItemData data = index.model()->itemData(index);
    WidgetPatient *frame = static_cast<WidgetPatient*> (editor);
    frame->setData(data);
}

void DelegateFramePatient::setModelData(QWidget *editor,
                  QAbstractItemModel *model, const QModelIndex &index) const
{
    WidgetPatient *frame = static_cast<WidgetPatient*>(editor);
    TMU::ItemData data;
    frame->getData(data);
    if (!data.isEmpty())
        model->setItemData(index, data);
}

void DelegateFramePatient::updateEditorGeometry(QWidget *editor,
     const QStyleOptionViewItem &option, const QModelIndex &index) const
{

}

void DelegateFramePatient::paint(QPainter *painter,
           const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    int a = 0;
}
