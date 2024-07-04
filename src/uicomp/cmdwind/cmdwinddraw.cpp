#include "uicomp/cmdwind/cmdwind.h"

namespace uicomp::cmdwind {

void CmdWind::drawBgColor(QPalette::ColorRole acr,QWidget* target, int r, int g, int b, int a) {
    QWidget* bgwid = new QWidget(target);
    bgwid->setGeometry(0, 0, target->size().width(), target->size().height());
    QPalette pall(bgwid->palette());

    pall.setColor(acr, QColor{r, g, b, a});
    bgwid->setAutoFillBackground(true);
    bgwid->setPalette(pall);
    bgwid->lower();
    bgwid->show();

}

void CmdWind::drawLabelBgColor(QWidget * target, int r, int g, int b, int a){
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(r, g, b, a));
    target->setAutoFillBackground(true);
    target->setPalette(palette);
}

}  // namespace uicomp::cmdwind
