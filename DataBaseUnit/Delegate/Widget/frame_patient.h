#ifndef FRAME_PATIENT_H
#define FRAME_PATIENT_H

#include <QWidget>

namespace Ui {
class FramePatient;
}
typedef QMap<QString, QVariant> ElementInfo;

class FramePatient : public QWidget
{
    Q_OBJECT
    
public:
    explicit FramePatient(QModelIndex &index, QWidget *parent = 0);
    ~FramePatient();
    void setData(ElementInfo data);
    ElementInfo &getData();
    
private:
    Ui::FramePatient *ui;
    QModelIndex indexSource;
};

#endif // FRAME_PATIENT_H
