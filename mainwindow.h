#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    const Ui::MainWindow *getUi();
    
//public slots:
//    void editWidgetContent(QWidget *content);

private slots:
    void treeItemDoubleClick(QModelIndex index);

signals:
    void changeWidgetContent(QModelIndex index, QWidget* parent);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
