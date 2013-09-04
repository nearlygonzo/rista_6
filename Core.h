#ifndef CORE_H
#define CORE_H

#include "mainwindow.h"
#include <boost/serialization/singleton.hpp>
#include <DataUnit/DataControl.h>

class Core : public boost::serialization::singleton<Core>
{
private:
    DataControl* const dataControl;

private:
protected:
    Core();
public:
    void initialMainWindow(MainWindow &window);

};

#endif // CORE_H
