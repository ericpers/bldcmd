#include "uicomp/cmdwind/cmdwind.h"

namespace uicomp::cmdwind {

void CmdWind::resizeEvent(QResizeEvent *event) {
    histCommnd->setGeometry(0.05 * this->geometry().width(),
                            0.05 * this->geometry().height(),
                            this->geometry().width() * 0.9,
                            this->geometry().height() * 0.4);

    commndInput->setGeometry(0.05 * this->geometry().width(),
                             0.5 * this->geometry().height(),
                             this->geometry().width() * 0.9,
                             this->geometry().height() * 0.4);

    drawBgColor(QPalette::Window, this, 100, 100, 100, 255);
    // drawBgColor(histCommnd->backgroundRole(), histCommnd, 150, 150, 150, 255);
}

}  // namespace uicomp::cmdwind
