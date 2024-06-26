#include <QApplication>
#include <QtCore>

#include "uicomp/cmdwind/cmdwind.h"
#include "uicomp/exhibwind/exhibwind.h"
#include "uicomp/mainwindow/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    uicomp::cmdwind::CmdWind  cmdWind;
    uicomp::exhibwind::ExhibWind exhibWind;

    uicomp::mainwindow::MainWindow w( &cmdWind, &exhibWind);


    w.show();



    return a.exec();
}
