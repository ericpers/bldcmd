#include "uicomp/cmdwind/cmdwind.h"

namespace uicomp::cmdwind {

void CmdWind::drawBgColor(QWidget* target, int r, int g, int b, int a) {
    QWidget* bgwid = new QWidget(target);
    bgwid->setGeometry(0, 0, target->size().width(), target->size().height());
    QPalette pall(bgwid->palette());

    pall.setColor(QPalette::Window, QColor{r, g, b, a});
    bgwid->setAutoFillBackground(true);
    bgwid->setPalette(pall);
    bgwid->show();
    bgwid->lower();
}

}  // namespace uicomp::cmdwind