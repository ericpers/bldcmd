
// Generated from /home/eric/persNteam/pers/work/self_work_1/set01/prjs01/prj1/pj1/bld/cpp/bld-lib/src/gram/Bldcmd.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "BldcmdVisitor.h"


namespace gram {

/**
 * This class provides an empty implementation of BldcmdVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BldcmdBaseVisitor : public BldcmdVisitor {
public:

  virtual std::any visitComdLine(BldcmdParser::ComdLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingCmd(BldcmdParser::SingCmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmdWarg(BldcmdParser::CmdWargContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(BldcmdParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(BldcmdParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommand(BldcmdParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace gram
