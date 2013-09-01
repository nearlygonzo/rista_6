#ifndef DELEGATE_FRAME_PATIENT_H
#define DELEGATE_FRAME_PATIENT_H

#include <QItemDelegate>

class DelegateFramePatient : public QItemDelegate
{
    Q_OBJECT


public:
    DelegateFramePatient(QObject *parent = 0);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const;
};

#endif // DELEGATE_FRAME_PATIENT_H