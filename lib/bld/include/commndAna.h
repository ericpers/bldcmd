//
// Created by eric on 6/28/24.
//

#ifndef COMMNDANA_H
#define COMMNDANA_H
#include "BldcmdBaseVisitor.h"
#include "comnd-comp/Command.h"

namespace gram {


class CommndAna: public BldcmdBaseVisitor {

    comnd_comp::Command * command ; 

public:

    CommndAna();

    std::any visitSingCmd(BldcmdParser::SingCmdContext* context) override;
    std::any visitCmdWarg(BldcmdParser::CmdWargContext *context) override;
    std::any visitCommand(BldcmdParser::CommandContext *context) override;
    std::any visitArgs(BldcmdParser::ArgsContext *context) override;
    std::any visitExp(BldcmdParser::ExpContext *context) override;

    // std::any visitSingCmd(BldcmdParser::SingCmdContext *context) override;

};

} // gram

#endif //COMMNDANA_H
