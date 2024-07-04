#include "comand-gram/comd.h"
#include "uicomp/cmdwind/cmdwind.h"
namespace uicomp::cmdwind {

// text line enter
void CmdWind::commandInputSlot() {
    // histCommnd->clear();
    static int lneCnt = 0;
    static QString commandStr = "";
    commandStr += this->commndInput->text() + "\n";
    if(lneCnt >= 5){
        lneCnt = 0;
        commandStr = this->commndInput->text() + "\n";
    }
    auto com        = comand_gram::analyze(commandStr.toStdString());
    auto cmdName    = com->command_name();
    auto cmdArgs    = com->  command_args();
    com->Clear();
    lneCnt+=1;
    QString histComm = commandStr;
    histCommnd->setText(histComm);

    this->commndInput->clear();
    // 产生执行命令类,
    CommandReact * cmdreac =



}

void CmdWind::connectsig() {
    connect(this->commndInput,
            &QLineEdit::returnPressed,
            this,
            &CmdWind::commandInputSlot);
}

}  // namespace uicomp::cmdwind
