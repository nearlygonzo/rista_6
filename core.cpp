#include "core.h"

Core::Core() {
    _dataControl = boost::shared_ptr<DataControl>(new DataControl());
}

void Core::fillTreeView(QTreeView* treeView) {
    TreeModel *tm = _dataControl->getTreeModel();
    treeView->setModel(tm);
}

