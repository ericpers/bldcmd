
// Generated from /home/eric/persNteam/pers/work/self_work_1/set01/prjs01/prj1/pj1/bld/cpp/bld-lib/src/gram/Bldcmd.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace gram {


class  BldcmdLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, CMD = 2, Exp = 3, WS = 4
  };

  explicit BldcmdLexer(antlr4::CharStream *input);

  ~BldcmdLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace gram
