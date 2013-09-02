#include "core.h"

Core::Core()
    : _dataControl(new DataControl())
{
}

void Core::fillTreeView(QTreeView* treeView) {
    _dataControl->setView(treeView);
    treeView->setHeaderHidden(true);
    //treeView->setDragEnabled(true);
}

