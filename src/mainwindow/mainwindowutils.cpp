#include <QAction>
#include <QLabel>
#include <QMainWindow>
#include <QMenuBar>
#include <QPixmap>

#include "mainwindow/mainwindow.h"

namespace mainwindow {

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
}

void MainWindow::drawBackGround() {
    QPixmap pixmap("res/pics/opening.png");
    QLabel *label = new QLabel(this);
    label->setPixmap(
        pixmap.scaled(this->size(),
                      Qt::IgnoreAspectRatio,
                      Qt::SmoothTransformation));
    label->resize(this->size());
    label->setScaledContents(true);
    label->lower();
}

}  // namespace mainwindow
