
// Generated from /home/eric/persNteam/pers/work/self_work_1/set01/prjs01/prj1/pj1/bld/cpp/bld-lib/src/gram/Bldcmd.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "BldcmdParser.h"


namespace gram {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by BldcmdParser.
 */
class  BldcmdVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BldcmdParser.
   */
    virtual std::any visitComdLine(BldcmdParser::ComdLineContext *context) = 0;

    virtual std::any visitSingCmd(BldcmdParser::SingCmdContext *context) = 0;

    virtual std::any visitCmdWarg(BldcmdParser::CmdWargContext *context) = 0;

    virtual std::any visitArgs(BldcmdParser::ArgsContext *context) = 0;

    virtual std::any visitExp(BldcmdParser::ExpContext *context) = 0;

    virtual std::any visitCommand(BldcmdParser::CommandContext *context) = 0;


};

}  // namespace gram
