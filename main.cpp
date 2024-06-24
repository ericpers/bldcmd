#include "uicomp/mainwindow/mainwindow.h"

#include <QApplication>
# include <QtCore>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    uicomp::mainwindow::MainWindow w;
    w.show();
    qDebug() << w.start_game();


    return a.exec();
}
