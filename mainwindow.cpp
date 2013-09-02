#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Core::get_mutable_instance().fillTreeView(ui->patientsCatalogTreeView);
    ui->patientsCatalogTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    //DelegateFramePatient *del = (this);
    ui->patientsCatalogTreeView->setItemDelegate(new DelegateFramePatient);
}

MainWindow::~MainWindow()
{
    delete ui;
}
