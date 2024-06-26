//
// Created by eric on 6/24/24.
//

#include "uicomp/cmdwind/cmdwind.h"
# include <QFontDatabase>

namespace uicomp::cmdwind {

CmdWind::CmdWind(QWidget* parent) {
    this->histCommnd  = new QLabel(this);
    this->commndInput = new QLineEdit(this);

    this->setWindowTitle("Command Window");
    histCommnd->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    histCommnd->setGeometry(0.05 * this->geometry().width(),
                            0.05 * this->geometry().height(),
                            this->geometry().width() * 0.9,
                            this->geometry().height() * 0.4);

    this->commndInput->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    this->commndInput->setGeometry(0.05 * this->geometry().width(),
                                   0.5 * this->geometry().height(),
                                   this->geometry().width() * 0.9,
                                   this->geometry().height() * 0.4);

    drawBgColor(this, 100, 100, 100, 255);
    drawBgColor(histCommnd, 150, 150, 150, 255);

    int fontId = QFontDatabase::addApplicationFont("res/font/hack.ttf");
    commndInput->setFont(QFont("Hack Nerd Font Mono", 20));

    commndInput->setStyleSheet("background-color:rgba(175, 175, 175, 255)");
    histCommnd->show();
    commndInput->show();



    // connectsig();
}


}  // namespace uicomp::cmdwind
