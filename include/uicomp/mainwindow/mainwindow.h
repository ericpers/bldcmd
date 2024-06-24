#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace uicomp::mainwindow {
class MainWindow : public QMainWindow {
    Q_OBJECT

    QMenuBar *mbar;
    bool      startGame, exitGame;

    public:
    [[nodiscard]] bool start_game() const;
    [[nodiscard]] bool exit_game() const;

    private:
    // draw_menus
    void drawMenuBar();
    void drawBackGround();

    private slots:
    void startGameSlot();


    public:
     MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

};
#endif  // MAINWINDOW_H
}