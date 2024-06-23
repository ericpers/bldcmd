#include "mainwindow/mainwindow.h"
# include <QMenuBar>
# include <QAction>

namespace mainwindow {

void MainWindow::drawMenuBar() {
    mbar = menuBar();
    QList<QAction *> startActionList;

    // start Action List
    QAction * startGame, * exitGame;
    startGame = new QAction("start");
    exitGame = new QAction("exit");

    startActionList.append(startGame);
    startActionList.append(exitGame);


    auto startMenu = mbar->addMenu("start");
    startMenu->addActions(startActionList);




}




}
