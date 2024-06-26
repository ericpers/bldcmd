# include "uicomp/cmdwind/cmdwind.h"

namespace uicomp::cmdwind {

// text line enter
void CmdWind::commandInputSlot() {
    auto commandStr = this->commndInput->text();
    qDebug() << commandStr;
    this->commndInput->clear();
}

void CmdWind::connectsig() {
    connect(this->commndInput, &QLineEdit::returnPressed, this, &CmdWind::commandInputSlot);
}












}