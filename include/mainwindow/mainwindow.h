#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace mainwindow {
    class MainWindow : public QMainWindow
    {
        Q_OBJECT

        QMenuBar * mbar;



        // draw_menus
        void drawMenuBar();


    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
    };
#endif // MAINWINDOW_H
}