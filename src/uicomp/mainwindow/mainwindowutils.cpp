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

void MainWindow::drawBackGround() {
    QPixmap pixmap("res/pics/opening.png");
    QLabel *label = new QLabel(this);
    label->setPixmap(pixmap.scaled(
        this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    label->resize(this->size());
    label->setScaledContents(true);
    label->lower();
}
void MainWindow::startGameSlot() {
    qDebug() << "startGame";
    this->close();
    this->show();
}

}  // namespace uicomp::mainwindow
