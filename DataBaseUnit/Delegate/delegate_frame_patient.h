#ifndef DELEGATE_FRAME_PATIENT_H
#define DELEGATE_FRAME_PATIENT_H

#include <QStyledItemDelegate>
#include <DataBaseUnit/Delegate/Widget/WidgetPatient.h>

class DelegateFramePatient : public QStyledItemDelegate
{
    Q_OBJECT

private:

public:
    DelegateFramePatient(QObject *parent = 0);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // DELEGATE_FRAME_PATIENT_H
