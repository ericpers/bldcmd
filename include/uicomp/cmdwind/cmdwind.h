// author : eric

#ifndef CMDWIND_H
#define CMDWIND_H
#include <QWidget>
# include <QLabel>
# include <QLineEdit>

namespace uicomp::cmdwind {

class CmdWind:public QWidget {

    Q_OBJECT

    QLabel * histCommnd;
    QLineEdit* commndInput;

    void drawBgColor(QWidget * target, int r, int g, int b, int a=255 );
    void connectsig();


    public:
    CmdWind(QWidget * parent = nullptr);
    void resizeEvent(QResizeEvent* event) override;




    private slots:
    void commandInputSlot() ;

};

}  // namespace uicomp::cmdwind

#endif
