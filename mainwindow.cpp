#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Core::get_mutable_instance().fillTreeView(ui->patientsCatalogTreeView);

}

MainWindow::~MainWindow()
{
    delete ui;
}
