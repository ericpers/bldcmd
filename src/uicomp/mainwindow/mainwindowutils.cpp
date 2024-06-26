#include <QAction>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPixmap>

#include "uicomp/mainwindow/mainwindow.h"

namespace uicomp::mainwindow {

bool MainWindow::start_game() const {
    return startGame;
}
bool MainWindow::exit_game() const {
    return exitGame;
}
void MainWindow::drawMenuBar() {
    mbar = menuBar();
    QPalette         palette;
    QList<QAction *> startActionList;

    // start Action List
    QAction *startGame, *exitGame;
    startGame = new QAction("start");
    exitGame  = new QAction("exit");

    startActionList.append(startGame);
    startActionList.append(exitGame);

    auto startMenu = mbar->addMenu("start");
    startMenu->addActions(startActionList);

    palette.setColor(mbar->backgroundRole(), Qt::white);
    mbar->setPalette(palette);
    connect(startGame, &QAction::triggered, this, &MainWindow::startGameSlot);
    connect(exitGame, &QAction::triggered, this, &MainWindow::close);
}

void MainWindow::drawBackGround(QPixmap * pixmap) {
    this->background->close();
    this->background = new QLabel(this);
    background->setScaledContents(true);
    background->resize(this->size());
    background->setPixmap(* pixmap);
    background->lower();
    background->show();

}


}  // namespace uicomp::mainwindow
