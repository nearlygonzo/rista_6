#include "core.h"

Core::Core()
    : _dataControl(new DataControl())
{
}

void Core::fillTreeView(QTreeView* treeView) {
    treeView->setModel(_dataControl->getTreeModelPatients());
    //treeView->setHeaderHidden(true);
}

