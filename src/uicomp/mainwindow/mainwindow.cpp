#include "uicomp/mainwindow/mainwindow.h"

#include <QMenuBar>
# include <QtCore>

namespace uicomp::mainwindow {
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // setWindowModality(Qt::ApplicationModal);
    // setAttribute(Qt::WA_DeleteOnClose);
    this->startGame = false;
    this->resize(800, 600);
    this->drawMenuBar();
    this->drawBackGround();




}

MainWindow::~MainWindow() {}
}  // namespace mainwindow