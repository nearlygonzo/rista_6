#include "Core.h"

Core::Core()
    : dataControl(new DataControl())
{
}

void Core::initialMainWindow(MainWindow &window)
{
    dataControl->setModelForView(window.getUi()->treeViewPatients);
    QObject::connect(&window, SIGNAL(changeWidgetContent(QModelIndex,QWidget*)),
                     dataControl, SLOT(showWidgetPatient(QModelIndex,QWidget*)));
}


