#include "mainwindow/mainwindow.h"

#include <QMenuBar>

namespace mainwindow {
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {

    this->resize(800, 600);
    this->drawMenuBar();
    this->drawBackGround();



}

MainWindow::~MainWindow() {}
}  // namespace mainwindow