#include "mainwindow/mainwindow.h"

#include <QMenuBar>

namespace mainwindow {
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->drawMenuBar();
}

MainWindow::~MainWindow() {}
}  // namespace mainwindow