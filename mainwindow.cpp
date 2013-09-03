#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->treeViewPatients, SIGNAL(doubleClicked(QModelIndex)),
                     this, SLOT(treeItemDoubleClick(QModelIndex)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

const Ui::MainWindow *MainWindow::getUi()
{
    return const_cast<Ui::MainWindow*>(ui);
}


void MainWindow::treeItemDoubleClick(QModelIndex index)
{
    emit changeWidgetContent(index, ui->frameContent);
}

