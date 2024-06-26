#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "uicomp/cmdwind/cmdwind.h"
# include "uicomp/exhibwind/exhibwind.h"

namespace uicomp::exhibwind {
class ExhibWind;
}

class uicomp::cmdwind::CmdWind;


namespace uicomp::mainwindow {
class MainWindow : public QMainWindow {
    Q_OBJECT

    QMenuBar *mbar{};
    bool      startGame, exitGame{};
    cmdwind::CmdWind *cmdWind;
    exhibwind::ExhibWind *exhibwind;
    QLabel * background;

    public:
    [[nodiscard]] bool start_game() const;
    [[nodiscard]] bool exit_game() const;

    private:
    // draw_menus
    void drawMenuBar();
    void drawBackGround(QPixmap * pixmap);

    private slots:
    void startGameSlot();


    public:
    MainWindow(cmdwind::CmdWind* cmdWind, exhibwind::ExhibWind* exhibWind, QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent* event) override;



    ~MainWindow();

};
#endif  // MAINWINDOW_H
}