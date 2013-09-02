#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Core::get_mutable_instance().fillTreeView(ui->patientsCatalogTreeView);
    ui->patientsCatalogTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->patientsCatalogTreeView->setDragEnabled(true);
    ui->patientsCatalogTreeView->setAcceptDrops(true);
    ui->patientsCatalogTreeView->setDropIndicatorShown(true);
    DelegateFramePatient *del = new DelegateFramePatient(this);
    ui->patientsCatalogTreeView->setItemDelegate(del);
}

MainWindow::~MainWindow()
{
    delete ui;
}
