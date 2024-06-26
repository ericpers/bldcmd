#include "uicomp/mainwindow/mainwindow.h"

#include <QMenuBar>
#include <QtCore>

namespace uicomp::mainwindow {
MainWindow::MainWindow(cmdwind::CmdWind *cmdWind, exhibwind::ExhibWind *exhibWind, QWidget *parent )
    : QMainWindow(parent), cmdWind(cmdWind), exhibwind(exhibWind) {
    // setWindowModality(Qt::ApplicationModal);
    // setAttribute(Qt::WA_DeleteOnClose);

    this->background = new QLabel(this);
    this->startGame = false;
    this->resize(800, 600);
    this->drawMenuBar();
}

MainWindow::~MainWindow() {}

void MainWindow::startGameSlot() {

    this->close();
    this->cmdWind->show();
    this->exhibwind->show();
}

void MainWindow::resizeEvent(QResizeEvent *event) {
    QPixmap pixmap("res/pics/opening.png");

    this->drawBackGround(&pixmap);


}




}  // namespace uicomp::mainwindow