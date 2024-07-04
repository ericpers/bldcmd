
// Generated from /home/eric/persNteam/pers/work/self_work_1/set01/prjs01/prj1/pj1/bld/cpp/bld-lib/src/gram/Bldcmd.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace gram {


class  BldcmdParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, CMD = 2, Exp = 3, WS = 4
  };

  enum {
    RuleCmdLine = 0, RuleCommnd = 1, RuleExpr = 2, RuleWord = 3, RuleCmd = 4
  };

  explicit BldcmdParser(antlr4::TokenStream *input);

  BldcmdParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BldcmdParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CmdLineContext;
  class CommndContext;
  class ExprContext;
  class WordContext;
  class CmdContext; 

  class  CmdLineContext : public antlr4::ParserRuleContext {
  public:
    CmdLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CmdLineContext() = default;
    void copyFrom(CmdLineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComdLineContext : public CmdLineContext {
  public:
    ComdLineContext(CmdLineContext *ctx);

    antlr4::tree::TerminalNode *EOF();
    std::vector<CommndContext *> commnd();
    CommndContext* commnd(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CmdLineContext* cmdLine();

  class  CommndContext : public antlr4::ParserRuleContext {
  public:
    CommndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CommndContext() = default;
    void copyFrom(CommndContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CmdWargContext : public CommndContext {
  public:
    CmdWargContext(CommndContext *ctx);

    CmdContext *cmd();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SingCmdContext : public CommndContext {
  public:
    SingCmdContext(CommndContext *ctx);

    CmdContext *cmd();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CommndContext* commnd();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArgsContext : public ExprContext {
  public:
    ArgsContext(ExprContext *ctx);

    std::vector<WordContext *> word();
    WordContext* word(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  WordContext : public antlr4::ParserRuleContext {
  public:
    WordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WordContext() = default;
    void copyFrom(WordContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpContext : public WordContext {
  public:
    ExpContext(WordContext *ctx);

    antlr4::tree::TerminalNode *Exp();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WordContext* word();

  class  CmdContext : public antlr4::ParserRuleContext {
  public:
    CmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CmdContext() = default;
    void copyFrom(CmdContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CommandContext : public CmdContext {
  public:
    CommandContext(CmdContext *ctx);

    antlr4::tree::TerminalNode *CMD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CmdContext* cmd();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace gram
