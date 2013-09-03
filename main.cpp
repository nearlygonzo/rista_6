#include "core.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Core::get_mutable_instance().initialMainWindow(w);

    return a.exec();
}
