
// Generated from /usr/src/app/src/Pascal.g4 by ANTLR 4.9.3


#include "PascalVisitor.h"

#include "PascalParser.h"


using namespace antlrcpp;
using namespace antlr4;

PascalParser::PascalParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PascalParser::~PascalParser() {
  delete _interpreter;
}

std::string PascalParser::getGrammarFileName() const {
  return "Pascal.g4";
}

const std::vector<std::string>& PascalParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PascalParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

PascalParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProgramContext::getRuleIndex() const {
  return PascalParser::RuleProgram;
}

void PascalParser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgramWholeContext ------------------------------------------------------------------

PascalParser::ProgramHeadingContext* PascalParser::ProgramWholeContext::programHeading() {
  return getRuleContext<PascalParser::ProgramHeadingContext>(0);
}

PascalParser::BlockContext* PascalParser::ProgramWholeContext::block() {
  return getRuleContext<PascalParser::BlockContext>(0);
}

tree::TerminalNode* PascalParser::ProgramWholeContext::DOT() {
  return getToken(PascalParser::DOT, 0);
}

tree::TerminalNode* PascalParser::ProgramWholeContext::INTERFACE() {
  return getToken(PascalParser::INTERFACE, 0);
}

PascalParser::ProgramWholeContext::ProgramWholeContext(ProgramContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ProgramWholeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgramWhole(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProgramContext* PascalParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PascalParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ProgramWholeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(184);
    programHeading();
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::INTERFACE) {
      setState(185);
      match(PascalParser::INTERFACE);
    }
    setState(188);
    block();
    setState(189);
    match(PascalParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramHeadingContext ------------------------------------------------------------------

PascalParser::ProgramHeadingContext::ProgramHeadingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProgramHeadingContext::getRuleIndex() const {
  return PascalParser::RuleProgramHeading;
}

void PascalParser::ProgramHeadingContext::copyFrom(ProgramHeadingContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgramHeadContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::ProgramHeadContext::PROGRAM() {
  return getToken(PascalParser::PROGRAM, 0);
}

PascalParser::IdentifierContext* PascalParser::ProgramHeadContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::ProgramHeadContext::SEMI() {
  return getToken(PascalParser::SEMI, 0);
}

tree::TerminalNode* PascalParser::ProgramHeadContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::IdentifierListContext* PascalParser::ProgramHeadContext::identifierList() {
  return getRuleContext<PascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalParser::ProgramHeadContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::ProgramHeadContext::ProgramHeadContext(ProgramHeadingContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ProgramHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgramHead(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProgramHeadingContext* PascalParser::programHeading() {
  ProgramHeadingContext *_localctx = _tracker.createInstance<ProgramHeadingContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalParser::RuleProgramHeading);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ProgramHeadContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(PascalParser::PROGRAM);
    setState(192);
    identifier();
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::LPAREN) {
      setState(193);
      match(PascalParser::LPAREN);
      setState(194);
      identifierList();
      setState(195);
      match(PascalParser::RPAREN);
    }
    setState(199);
    match(PascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

PascalParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::IdentifierContext::getRuleIndex() const {
  return PascalParser::RuleIdentifier;
}

void PascalParser::IdentifierContext::copyFrom(IdentifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::IdContext::IDENT() {
  return getToken(PascalParser::IDENT, 0);
}

PascalParser::IdContext::IdContext(IdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::IdentifierContext* PascalParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::IdContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(PascalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PascalParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::BlockContext::getRuleIndex() const {
  return PascalParser::RuleBlock;
}

void PascalParser::BlockContext::copyFrom(BlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgramBodyContext ------------------------------------------------------------------

PascalParser::CompoundStatementContext* PascalParser::ProgramBodyContext::compoundStatement() {
  return getRuleContext<PascalParser::CompoundStatementContext>(0);
}

std::vector<PascalParser::ConstantDefinitionPartContext *> PascalParser::ProgramBodyContext::constantDefinitionPart() {
  return getRuleContexts<PascalParser::ConstantDefinitionPartContext>();
}

PascalParser::ConstantDefinitionPartContext* PascalParser::ProgramBodyContext::constantDefinitionPart(size_t i) {
  return getRuleContext<PascalParser::ConstantDefinitionPartContext>(i);
}

std::vector<PascalParser::TypeDefinitionPartContext *> PascalParser::ProgramBodyContext::typeDefinitionPart() {
  return getRuleContexts<PascalParser::TypeDefinitionPartContext>();
}

PascalParser::TypeDefinitionPartContext* PascalParser::ProgramBodyContext::typeDefinitionPart(size_t i) {
  return getRuleContext<PascalParser::TypeDefinitionPartContext>(i);
}

std::vector<PascalParser::VariableDeclarationPartContext *> PascalParser::ProgramBodyContext::variableDeclarationPart() {
  return getRuleContexts<PascalParser::VariableDeclarationPartContext>();
}

PascalParser::VariableDeclarationPartContext* PascalParser::ProgramBodyContext::variableDeclarationPart(size_t i) {
  return getRuleContext<PascalParser::VariableDeclarationPartContext>(i);
}

std::vector<PascalParser::ProcedureAndFunctionDeclarationPartContext *> PascalParser::ProgramBodyContext::procedureAndFunctionDeclarationPart() {
  return getRuleContexts<PascalParser::ProcedureAndFunctionDeclarationPartContext>();
}

PascalParser::ProcedureAndFunctionDeclarationPartContext* PascalParser::ProgramBodyContext::procedureAndFunctionDeclarationPart(size_t i) {
  return getRuleContext<PascalParser::ProcedureAndFunctionDeclarationPartContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::ProgramBodyContext::IMPLEMENTATION() {
  return getTokens(PascalParser::IMPLEMENTATION);
}

tree::TerminalNode* PascalParser::ProgramBodyContext::IMPLEMENTATION(size_t i) {
  return getToken(PascalParser::IMPLEMENTATION, i);
}

PascalParser::ProgramBodyContext::ProgramBodyContext(BlockContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ProgramBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgramBody(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::BlockContext* PascalParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, PascalParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ProgramBodyContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 8) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 8)) & ((1ULL << (PascalParser::CONST - 8))
      | (1ULL << (PascalParser::FUNCTION - 8))
      | (1ULL << (PascalParser::PROCEDURE - 8))
      | (1ULL << (PascalParser::TYPE - 8))
      | (1ULL << (PascalParser::VAR - 8))
      | (1ULL << (PascalParser::IMPLEMENTATION - 8)))) != 0)) {
      setState(208);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PascalParser::CONST: {
          setState(203);
          constantDefinitionPart();
          break;
        }

        case PascalParser::TYPE: {
          setState(204);
          typeDefinitionPart();
          break;
        }

        case PascalParser::VAR: {
          setState(205);
          variableDeclarationPart();
          break;
        }

        case PascalParser::FUNCTION:
        case PascalParser::PROCEDURE: {
          setState(206);
          procedureAndFunctionDeclarationPart();
          break;
        }

        case PascalParser::IMPLEMENTATION: {
          setState(207);
          match(PascalParser::IMPLEMENTATION);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionPartContext ------------------------------------------------------------------

PascalParser::ConstantDefinitionPartContext::ConstantDefinitionPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ConstantDefinitionPartContext::getRuleIndex() const {
  return PascalParser::RuleConstantDefinitionPart;
}

void PascalParser::ConstantDefinitionPartContext::copyFrom(ConstantDefinitionPartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstPartContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::ConstPartContext::CONST() {
  return getToken(PascalParser::CONST, 0);
}

std::vector<PascalParser::ConstantDefinitionContext *> PascalParser::ConstPartContext::constantDefinition() {
  return getRuleContexts<PascalParser::ConstantDefinitionContext>();
}

PascalParser::ConstantDefinitionContext* PascalParser::ConstPartContext::constantDefinition(size_t i) {
  return getRuleContext<PascalParser::ConstantDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::ConstPartContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::ConstPartContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::ConstPartContext::ConstPartContext(ConstantDefinitionPartContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConstPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstPart(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ConstantDefinitionPartContext* PascalParser::constantDefinitionPart() {
  ConstantDefinitionPartContext *_localctx = _tracker.createInstance<ConstantDefinitionPartContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalParser::RuleConstantDefinitionPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ConstPartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(PascalParser::CONST);
    setState(219); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(216);
      constantDefinition();
      setState(217);
      match(PascalParser::SEMI);
      setState(221); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PascalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

PascalParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ConstantDefinitionContext::getRuleIndex() const {
  return PascalParser::RuleConstantDefinition;
}

void PascalParser::ConstantDefinitionContext::copyFrom(ConstantDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::ConstContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::ConstContext::EQUAL() {
  return getToken(PascalParser::EQUAL, 0);
}

PascalParser::ConstantContext* PascalParser::ConstContext::constant() {
  return getRuleContext<PascalParser::ConstantContext>(0);
}

PascalParser::ConstContext::ConstContext(ConstantDefinitionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ConstantDefinitionContext* PascalParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, PascalParser::RuleConstantDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ConstContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(223);
    identifier();
    setState(224);
    match(PascalParser::EQUAL);
    setState(225);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantChrContext ------------------------------------------------------------------

PascalParser::ConstantChrContext::ConstantChrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ConstantChrContext::getRuleIndex() const {
  return PascalParser::RuleConstantChr;
}

void PascalParser::ConstantChrContext::copyFrom(ConstantChrContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstChrContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::ConstChrContext::CHR() {
  return getToken(PascalParser::CHR, 0);
}

tree::TerminalNode* PascalParser::ConstChrContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::UnsignedIntegerContext* PascalParser::ConstChrContext::unsignedInteger() {
  return getRuleContext<PascalParser::UnsignedIntegerContext>(0);
}

tree::TerminalNode* PascalParser::ConstChrContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::ConstChrContext::ConstChrContext(ConstantChrContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConstChrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstChr(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ConstantChrContext* PascalParser::constantChr() {
  ConstantChrContext *_localctx = _tracker.createInstance<ConstantChrContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalParser::RuleConstantChr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ConstChrContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(PascalParser::CHR);
    setState(228);
    match(PascalParser::LPAREN);
    setState(229);
    unsignedInteger();
    setState(230);
    match(PascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

PascalParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ConstantContext::getRuleIndex() const {
  return PascalParser::RuleConstant;
}

void PascalParser::ConstantContext::copyFrom(ConstantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Const_signedNumberContext ------------------------------------------------------------------

PascalParser::SignContext* PascalParser::Const_signedNumberContext::sign() {
  return getRuleContext<PascalParser::SignContext>(0);
}

PascalParser::UnsignedNumberContext* PascalParser::Const_signedNumberContext::unsignedNumber() {
  return getRuleContext<PascalParser::UnsignedNumberContext>(0);
}

PascalParser::Const_signedNumberContext::Const_signedNumberContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Const_signedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst_signedNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_constantChrContext ------------------------------------------------------------------

PascalParser::ConstantChrContext* PascalParser::Const_constantChrContext::constantChr() {
  return getRuleContext<PascalParser::ConstantChrContext>(0);
}

PascalParser::Const_constantChrContext::Const_constantChrContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Const_constantChrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst_constantChr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_signedIdentifierContext ------------------------------------------------------------------

PascalParser::SignContext* PascalParser::Const_signedIdentifierContext::sign() {
  return getRuleContext<PascalParser::SignContext>(0);
}

PascalParser::IdentifierContext* PascalParser::Const_signedIdentifierContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

PascalParser::Const_signedIdentifierContext::Const_signedIdentifierContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Const_signedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst_signedIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_stringContext ------------------------------------------------------------------

PascalParser::StringContext* PascalParser::Const_stringContext::string() {
  return getRuleContext<PascalParser::StringContext>(0);
}

PascalParser::Const_stringContext::Const_stringContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Const_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst_string(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_unsignedNumberContext ------------------------------------------------------------------

PascalParser::UnsignedNumberContext* PascalParser::Const_unsignedNumberContext::unsignedNumber() {
  return getRuleContext<PascalParser::UnsignedNumberContext>(0);
}

PascalParser::Const_unsignedNumberContext::Const_unsignedNumberContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Const_unsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst_unsignedNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Const_identifierContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::Const_identifierContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

PascalParser::Const_identifierContext::Const_identifierContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Const_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConst_identifier(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ConstantContext* PascalParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 14, PascalParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Const_unsignedNumberContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(232);
      unsignedNumber();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Const_signedNumberContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(233);
      sign();
      setState(234);
      unsignedNumber();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalParser::Const_identifierContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(236);
      identifier();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalParser::Const_signedIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(237);
      sign();
      setState(238);
      identifier();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PascalParser::Const_stringContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(240);
      string();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PascalParser::Const_constantChrContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(241);
      constantChr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext ------------------------------------------------------------------

PascalParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::UnsignedNumberContext::getRuleIndex() const {
  return PascalParser::RuleUnsignedNumber;
}

void PascalParser::UnsignedNumberContext::copyFrom(UnsignedNumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnsignedNumber_realContext ------------------------------------------------------------------

PascalParser::UnsignedRealContext* PascalParser::UnsignedNumber_realContext::unsignedReal() {
  return getRuleContext<PascalParser::UnsignedRealContext>(0);
}

PascalParser::UnsignedNumber_realContext::UnsignedNumber_realContext(UnsignedNumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::UnsignedNumber_realContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber_real(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumber_intContext ------------------------------------------------------------------

PascalParser::UnsignedIntegerContext* PascalParser::UnsignedNumber_intContext::unsignedInteger() {
  return getRuleContext<PascalParser::UnsignedIntegerContext>(0);
}

PascalParser::UnsignedNumber_intContext::UnsignedNumber_intContext(UnsignedNumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::UnsignedNumber_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber_int(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::UnsignedNumberContext* PascalParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 16, PascalParser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::NUM_INT: {
        _localctx = _tracker.createInstance<PascalParser::UnsignedNumber_intContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(244);
        unsignedInteger();
        break;
      }

      case PascalParser::NUM_REAL: {
        _localctx = _tracker.createInstance<PascalParser::UnsignedNumber_realContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(245);
        unsignedReal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedIntegerContext ------------------------------------------------------------------

PascalParser::UnsignedIntegerContext::UnsignedIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::UnsignedIntegerContext::getRuleIndex() const {
  return PascalParser::RuleUnsignedInteger;
}

void PascalParser::UnsignedIntegerContext::copyFrom(UnsignedIntegerContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_unsigned_intContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_unsigned_intContext::NUM_INT() {
  return getToken(PascalParser::NUM_INT, 0);
}

PascalParser::Type_unsigned_intContext::Type_unsigned_intContext(UnsignedIntegerContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_unsigned_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_unsigned_int(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::UnsignedIntegerContext* PascalParser::unsignedInteger() {
  UnsignedIntegerContext *_localctx = _tracker.createInstance<UnsignedIntegerContext>(_ctx, getState());
  enterRule(_localctx, 18, PascalParser::RuleUnsignedInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_unsigned_intContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(PascalParser::NUM_INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedRealContext ------------------------------------------------------------------

PascalParser::UnsignedRealContext::UnsignedRealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::UnsignedRealContext::getRuleIndex() const {
  return PascalParser::RuleUnsignedReal;
}

void PascalParser::UnsignedRealContext::copyFrom(UnsignedRealContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_unsigned_realContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_unsigned_realContext::NUM_REAL() {
  return getToken(PascalParser::NUM_REAL, 0);
}

PascalParser::Type_unsigned_realContext::Type_unsigned_realContext(UnsignedRealContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_unsigned_realContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_unsigned_real(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::UnsignedRealContext* PascalParser::unsignedReal() {
  UnsignedRealContext *_localctx = _tracker.createInstance<UnsignedRealContext>(_ctx, getState());
  enterRule(_localctx, 20, PascalParser::RuleUnsignedReal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_unsigned_realContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(PascalParser::NUM_REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

PascalParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SignContext::getRuleIndex() const {
  return PascalParser::RuleSign;
}

void PascalParser::SignContext::copyFrom(SignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_signed_minusContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_signed_minusContext::MINUS() {
  return getToken(PascalParser::MINUS, 0);
}

PascalParser::Type_signed_minusContext::Type_signed_minusContext(SignContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_signed_minusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_signed_minus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_signed_plusContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_signed_plusContext::PLUS() {
  return getToken(PascalParser::PLUS, 0);
}

PascalParser::Type_signed_plusContext::Type_signed_plusContext(SignContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_signed_plusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_signed_plus(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SignContext* PascalParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 22, PascalParser::RuleSign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::PLUS: {
        _localctx = _tracker.createInstance<PascalParser::Type_signed_plusContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(252);
        match(PascalParser::PLUS);
        break;
      }

      case PascalParser::MINUS: {
        _localctx = _tracker.createInstance<PascalParser::Type_signed_minusContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(253);
        match(PascalParser::MINUS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_Context ------------------------------------------------------------------

PascalParser::Bool_Context::Bool_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::Bool_Context::getRuleIndex() const {
  return PascalParser::RuleBool_;
}

void PascalParser::Bool_Context::copyFrom(Bool_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_bool_trueContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_bool_trueContext::TRUE() {
  return getToken(PascalParser::TRUE, 0);
}

PascalParser::Type_bool_trueContext::Type_bool_trueContext(Bool_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_bool_trueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_bool_true(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_bool_falseContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_bool_falseContext::FALSE() {
  return getToken(PascalParser::FALSE, 0);
}

PascalParser::Type_bool_falseContext::Type_bool_falseContext(Bool_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_bool_falseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_bool_false(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::Bool_Context* PascalParser::bool_() {
  Bool_Context *_localctx = _tracker.createInstance<Bool_Context>(_ctx, getState());
  enterRule(_localctx, 24, PascalParser::RuleBool_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::TRUE: {
        _localctx = _tracker.createInstance<PascalParser::Type_bool_trueContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(256);
        match(PascalParser::TRUE);
        break;
      }

      case PascalParser::FALSE: {
        _localctx = _tracker.createInstance<PascalParser::Type_bool_falseContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(257);
        match(PascalParser::FALSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

PascalParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::StringContext::getRuleIndex() const {
  return PascalParser::RuleString;
}

void PascalParser::StringContext::copyFrom(StringContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_stringContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_stringContext::STRING_LITERAL() {
  return getToken(PascalParser::STRING_LITERAL, 0);
}

PascalParser::Type_stringContext::Type_stringContext(StringContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_string(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::StringContext* PascalParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 26, PascalParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_stringContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(PascalParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionPartContext ------------------------------------------------------------------

PascalParser::TypeDefinitionPartContext::TypeDefinitionPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TypeDefinitionPartContext::getRuleIndex() const {
  return PascalParser::RuleTypeDefinitionPart;
}

void PascalParser::TypeDefinitionPartContext::copyFrom(TypeDefinitionPartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypePartContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::TypePartContext::TYPE() {
  return getToken(PascalParser::TYPE, 0);
}

std::vector<PascalParser::TypeDefinitionContext *> PascalParser::TypePartContext::typeDefinition() {
  return getRuleContexts<PascalParser::TypeDefinitionContext>();
}

PascalParser::TypeDefinitionContext* PascalParser::TypePartContext::typeDefinition(size_t i) {
  return getRuleContext<PascalParser::TypeDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::TypePartContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::TypePartContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::TypePartContext::TypePartContext(TypeDefinitionPartContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::TypePartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTypePart(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TypeDefinitionPartContext* PascalParser::typeDefinitionPart() {
  TypeDefinitionPartContext *_localctx = _tracker.createInstance<TypeDefinitionPartContext>(_ctx, getState());
  enterRule(_localctx, 28, PascalParser::RuleTypeDefinitionPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::TypePartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(262);
    match(PascalParser::TYPE);
    setState(266); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(263);
      typeDefinition();
      setState(264);
      match(PascalParser::SEMI);
      setState(268); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PascalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

PascalParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TypeDefinitionContext::getRuleIndex() const {
  return PascalParser::RuleTypeDefinition;
}

void PascalParser::TypeDefinitionContext::copyFrom(TypeDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::TypeContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::TypeContext::EQUAL() {
  return getToken(PascalParser::EQUAL, 0);
}

PascalParser::Type_Context* PascalParser::TypeContext::type_() {
  return getRuleContext<PascalParser::Type_Context>(0);
}

PascalParser::ProcedureTypeContext* PascalParser::TypeContext::procedureType() {
  return getRuleContext<PascalParser::ProcedureTypeContext>(0);
}

PascalParser::TypeContext::TypeContext(TypeDefinitionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TypeDefinitionContext* PascalParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, PascalParser::RuleTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::TypeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(270);
    identifier();
    setState(271);
    match(PascalParser::EQUAL);
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::ARRAY:
      case PascalParser::BOOLEAN:
      case PascalParser::CHAR:
      case PascalParser::CHR:
      case PascalParser::FILE:
      case PascalParser::INTEGER:
      case PascalParser::PACKED:
      case PascalParser::REAL:
      case PascalParser::RECORD:
      case PascalParser::SET:
      case PascalParser::PLUS:
      case PascalParser::MINUS:
      case PascalParser::LPAREN:
      case PascalParser::POINTER:
      case PascalParser::STRING:
      case PascalParser::IDENT:
      case PascalParser::STRING_LITERAL:
      case PascalParser::NUM_INT:
      case PascalParser::NUM_REAL: {
        setState(272);
        type_();
        break;
      }

      case PascalParser::PROCEDURE: {
        setState(273);
        procedureType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureTypeContext ------------------------------------------------------------------

PascalParser::ProcedureTypeContext::ProcedureTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProcedureTypeContext::getRuleIndex() const {
  return PascalParser::RuleProcedureType;
}

void PascalParser::ProcedureTypeContext::copyFrom(ProcedureTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_procedureTypeContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_procedureTypeContext::PROCEDURE() {
  return getToken(PascalParser::PROCEDURE, 0);
}

PascalParser::FormalParameterListContext* PascalParser::Type_procedureTypeContext::formalParameterList() {
  return getRuleContext<PascalParser::FormalParameterListContext>(0);
}

PascalParser::Type_procedureTypeContext::Type_procedureTypeContext(ProcedureTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_procedureTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_procedureType(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProcedureTypeContext* PascalParser::procedureType() {
  ProcedureTypeContext *_localctx = _tracker.createInstance<ProcedureTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, PascalParser::RuleProcedureType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_procedureTypeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(PascalParser::PROCEDURE);
    setState(278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::LPAREN) {
      setState(277);
      formalParameterList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

PascalParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::Type_Context::getRuleIndex() const {
  return PascalParser::RuleType_;
}

void PascalParser::Type_Context::copyFrom(Type_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_simpleTypeContext ------------------------------------------------------------------

PascalParser::SimpleTypeContext* PascalParser::Type_simpleTypeContext::simpleType() {
  return getRuleContext<PascalParser::SimpleTypeContext>(0);
}

PascalParser::Type_simpleTypeContext::Type_simpleTypeContext(Type_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_pointerTypeContext ------------------------------------------------------------------

PascalParser::PointerTypeContext* PascalParser::Type_pointerTypeContext::pointerType() {
  return getRuleContext<PascalParser::PointerTypeContext>(0);
}

PascalParser::Type_pointerTypeContext::Type_pointerTypeContext(Type_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_pointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_pointerType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredTypeContext ------------------------------------------------------------------

PascalParser::StructuredTypeContext* PascalParser::Type_structuredTypeContext::structuredType() {
  return getRuleContext<PascalParser::StructuredTypeContext>(0);
}

PascalParser::Type_structuredTypeContext::Type_structuredTypeContext(Type_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::Type_Context* PascalParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 34, PascalParser::RuleType_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::BOOLEAN:
      case PascalParser::CHAR:
      case PascalParser::CHR:
      case PascalParser::INTEGER:
      case PascalParser::REAL:
      case PascalParser::PLUS:
      case PascalParser::MINUS:
      case PascalParser::LPAREN:
      case PascalParser::STRING:
      case PascalParser::IDENT:
      case PascalParser::STRING_LITERAL:
      case PascalParser::NUM_INT:
      case PascalParser::NUM_REAL: {
        _localctx = _tracker.createInstance<PascalParser::Type_simpleTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(280);
        simpleType();
        break;
      }

      case PascalParser::ARRAY:
      case PascalParser::FILE:
      case PascalParser::PACKED:
      case PascalParser::RECORD:
      case PascalParser::SET: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredTypeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(281);
        structuredType();
        break;
      }

      case PascalParser::POINTER: {
        _localctx = _tracker.createInstance<PascalParser::Type_pointerTypeContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(282);
        pointerType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeContext ------------------------------------------------------------------

PascalParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SimpleTypeContext::getRuleIndex() const {
  return PascalParser::RuleSimpleType;
}

void PascalParser::SimpleTypeContext::copyFrom(SimpleTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_simpleType_scalarTypeContext ------------------------------------------------------------------

PascalParser::ScalarTypeContext* PascalParser::Type_simpleType_scalarTypeContext::scalarType() {
  return getRuleContext<PascalParser::ScalarTypeContext>(0);
}

PascalParser::Type_simpleType_scalarTypeContext::Type_simpleType_scalarTypeContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_scalarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_scalarType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_simpleType_stringtypeContext ------------------------------------------------------------------

PascalParser::StringtypeContext* PascalParser::Type_simpleType_stringtypeContext::stringtype() {
  return getRuleContext<PascalParser::StringtypeContext>(0);
}

PascalParser::Type_simpleType_stringtypeContext::Type_simpleType_stringtypeContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_stringtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_stringtype(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_simpleType_subrangeTypeContext ------------------------------------------------------------------

PascalParser::SubrangeTypeContext* PascalParser::Type_simpleType_subrangeTypeContext::subrangeType() {
  return getRuleContext<PascalParser::SubrangeTypeContext>(0);
}

PascalParser::Type_simpleType_subrangeTypeContext::Type_simpleType_subrangeTypeContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_subrangeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_subrangeType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_simpleType_typeIdentifierContext ------------------------------------------------------------------

PascalParser::TypeIdentifierContext* PascalParser::Type_simpleType_typeIdentifierContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::Type_simpleType_typeIdentifierContext::Type_simpleType_typeIdentifierContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_typeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_typeIdentifier(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SimpleTypeContext* PascalParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 36, PascalParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(289);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Type_simpleType_scalarTypeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(285);
      scalarType();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Type_simpleType_subrangeTypeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(286);
      subrangeType();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalParser::Type_simpleType_typeIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(287);
      typeIdentifier();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalParser::Type_simpleType_stringtypeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(288);
      stringtype();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarTypeContext ------------------------------------------------------------------

PascalParser::ScalarTypeContext::ScalarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ScalarTypeContext::getRuleIndex() const {
  return PascalParser::RuleScalarType;
}

void PascalParser::ScalarTypeContext::copyFrom(ScalarTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_simpleType_scalarType_scalarContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_simpleType_scalarType_scalarContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::IdentifierListContext* PascalParser::Type_simpleType_scalarType_scalarContext::identifierList() {
  return getRuleContext<PascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalParser::Type_simpleType_scalarType_scalarContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::Type_simpleType_scalarType_scalarContext::Type_simpleType_scalarType_scalarContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_scalarType_scalarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_scalarType_scalar(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ScalarTypeContext* PascalParser::scalarType() {
  ScalarTypeContext *_localctx = _tracker.createInstance<ScalarTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, PascalParser::RuleScalarType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_simpleType_scalarType_scalarContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(PascalParser::LPAREN);
    setState(292);
    identifierList();
    setState(293);
    match(PascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrangeTypeContext ------------------------------------------------------------------

PascalParser::SubrangeTypeContext::SubrangeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SubrangeTypeContext::getRuleIndex() const {
  return PascalParser::RuleSubrangeType;
}

void PascalParser::SubrangeTypeContext::copyFrom(SubrangeTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_simpleType_subrangeType_subrangeContext ------------------------------------------------------------------

std::vector<PascalParser::ConstantContext *> PascalParser::Type_simpleType_subrangeType_subrangeContext::constant() {
  return getRuleContexts<PascalParser::ConstantContext>();
}

PascalParser::ConstantContext* PascalParser::Type_simpleType_subrangeType_subrangeContext::constant(size_t i) {
  return getRuleContext<PascalParser::ConstantContext>(i);
}

tree::TerminalNode* PascalParser::Type_simpleType_subrangeType_subrangeContext::DOTDOT() {
  return getToken(PascalParser::DOTDOT, 0);
}

PascalParser::Type_simpleType_subrangeType_subrangeContext::Type_simpleType_subrangeType_subrangeContext(SubrangeTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_subrangeType_subrangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_subrangeType_subrange(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SubrangeTypeContext* PascalParser::subrangeType() {
  SubrangeTypeContext *_localctx = _tracker.createInstance<SubrangeTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, PascalParser::RuleSubrangeType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_simpleType_subrangeType_subrangeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(295);
    constant();
    setState(296);
    match(PascalParser::DOTDOT);
    setState(297);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

PascalParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TypeIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleTypeIdentifier;
}

void PascalParser::TypeIdentifierContext::copyFrom(TypeIdentifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_simpleType_typeIdentifier_idContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::Type_simpleType_typeIdentifier_idContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

PascalParser::Type_simpleType_typeIdentifier_idContext::Type_simpleType_typeIdentifier_idContext(TypeIdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_typeIdentifier_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_typeIdentifier_id(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_simpleType_typeIdentifier_typeContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_simpleType_typeIdentifier_typeContext::CHAR() {
  return getToken(PascalParser::CHAR, 0);
}

tree::TerminalNode* PascalParser::Type_simpleType_typeIdentifier_typeContext::BOOLEAN() {
  return getToken(PascalParser::BOOLEAN, 0);
}

tree::TerminalNode* PascalParser::Type_simpleType_typeIdentifier_typeContext::INTEGER() {
  return getToken(PascalParser::INTEGER, 0);
}

tree::TerminalNode* PascalParser::Type_simpleType_typeIdentifier_typeContext::REAL() {
  return getToken(PascalParser::REAL, 0);
}

tree::TerminalNode* PascalParser::Type_simpleType_typeIdentifier_typeContext::STRING() {
  return getToken(PascalParser::STRING, 0);
}

PascalParser::Type_simpleType_typeIdentifier_typeContext::Type_simpleType_typeIdentifier_typeContext(TypeIdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_typeIdentifier_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_typeIdentifier_type(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TypeIdentifierContext* PascalParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 42, PascalParser::RuleTypeIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::IDENT: {
        _localctx = _tracker.createInstance<PascalParser::Type_simpleType_typeIdentifier_idContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(299);
        identifier();
        break;
      }

      case PascalParser::BOOLEAN:
      case PascalParser::CHAR:
      case PascalParser::INTEGER:
      case PascalParser::REAL:
      case PascalParser::STRING: {
        _localctx = _tracker.createInstance<PascalParser::Type_simpleType_typeIdentifier_typeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(300);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << PascalParser::BOOLEAN)
          | (1ULL << PascalParser::CHAR)
          | (1ULL << PascalParser::INTEGER)
          | (1ULL << PascalParser::REAL))) != 0) || _la == PascalParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredTypeContext ------------------------------------------------------------------

PascalParser::StructuredTypeContext::StructuredTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::StructuredTypeContext::getRuleIndex() const {
  return PascalParser::RuleStructuredType;
}

void PascalParser::StructuredTypeContext::copyFrom(StructuredTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpackedContext ------------------------------------------------------------------

PascalParser::UnpackedStructuredTypeContext* PascalParser::Type_structuredType_unpackedContext::unpackedStructuredType() {
  return getRuleContext<PascalParser::UnpackedStructuredTypeContext>(0);
}

PascalParser::Type_structuredType_unpackedContext::Type_structuredType_unpackedContext(StructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpackedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_pacakedContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_pacakedContext::PACKED() {
  return getToken(PascalParser::PACKED, 0);
}

PascalParser::UnpackedStructuredTypeContext* PascalParser::Type_structuredType_pacakedContext::unpackedStructuredType() {
  return getRuleContext<PascalParser::UnpackedStructuredTypeContext>(0);
}

PascalParser::Type_structuredType_pacakedContext::Type_structuredType_pacakedContext(StructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_pacakedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_pacaked(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::StructuredTypeContext* PascalParser::structuredType() {
  StructuredTypeContext *_localctx = _tracker.createInstance<StructuredTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, PascalParser::RuleStructuredType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::PACKED: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_pacakedContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(303);
        match(PascalParser::PACKED);
        setState(304);
        unpackedStructuredType();
        break;
      }

      case PascalParser::ARRAY:
      case PascalParser::FILE:
      case PascalParser::RECORD:
      case PascalParser::SET: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpackedContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(305);
        unpackedStructuredType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnpackedStructuredTypeContext ------------------------------------------------------------------

PascalParser::UnpackedStructuredTypeContext::UnpackedStructuredTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::UnpackedStructuredTypeContext::getRuleIndex() const {
  return PascalParser::RuleUnpackedStructuredType;
}

void PascalParser::UnpackedStructuredTypeContext::copyFrom(UnpackedStructuredTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordTypeContext ------------------------------------------------------------------

PascalParser::RecordTypeContext* PascalParser::Type_structuredType_unpacked_recordTypeContext::recordType() {
  return getRuleContext<PascalParser::RecordTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_recordTypeContext::Type_structuredType_unpacked_recordTypeContext(UnpackedStructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_arrayTypeContext ------------------------------------------------------------------

PascalParser::ArrayTypeContext* PascalParser::Type_structuredType_unpacked_arrayTypeContext::arrayType() {
  return getRuleContext<PascalParser::ArrayTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_arrayTypeContext::Type_structuredType_unpacked_arrayTypeContext(UnpackedStructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_arrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_arrayType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_setTypeContext ------------------------------------------------------------------

PascalParser::SetTypeContext* PascalParser::Type_structuredType_unpacked_setTypeContext::setType() {
  return getRuleContext<PascalParser::SetTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_setTypeContext::Type_structuredType_unpacked_setTypeContext(UnpackedStructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_setTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_setType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_fileTypeContext ------------------------------------------------------------------

PascalParser::FileTypeContext* PascalParser::Type_structuredType_unpacked_fileTypeContext::fileType() {
  return getRuleContext<PascalParser::FileTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_fileTypeContext::Type_structuredType_unpacked_fileTypeContext(UnpackedStructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_fileTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_fileType(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::UnpackedStructuredTypeContext* PascalParser::unpackedStructuredType() {
  UnpackedStructuredTypeContext *_localctx = _tracker.createInstance<UnpackedStructuredTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, PascalParser::RuleUnpackedStructuredType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::ARRAY: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_arrayTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(308);
        arrayType();
        break;
      }

      case PascalParser::RECORD: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordTypeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(309);
        recordType();
        break;
      }

      case PascalParser::SET: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_setTypeContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(310);
        setType();
        break;
      }

      case PascalParser::FILE: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_fileTypeContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(311);
        fileType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringtypeContext ------------------------------------------------------------------

PascalParser::StringtypeContext::StringtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::StringtypeContext::getRuleIndex() const {
  return PascalParser::RuleStringtype;
}

void PascalParser::StringtypeContext::copyFrom(StringtypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_simpleType_stringtype_strContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_simpleType_stringtype_strContext::STRING() {
  return getToken(PascalParser::STRING, 0);
}

tree::TerminalNode* PascalParser::Type_simpleType_stringtype_strContext::LBRACK() {
  return getToken(PascalParser::LBRACK, 0);
}

tree::TerminalNode* PascalParser::Type_simpleType_stringtype_strContext::RBRACK() {
  return getToken(PascalParser::RBRACK, 0);
}

PascalParser::IdentifierContext* PascalParser::Type_simpleType_stringtype_strContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

PascalParser::UnsignedNumberContext* PascalParser::Type_simpleType_stringtype_strContext::unsignedNumber() {
  return getRuleContext<PascalParser::UnsignedNumberContext>(0);
}

PascalParser::Type_simpleType_stringtype_strContext::Type_simpleType_stringtype_strContext(StringtypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_simpleType_stringtype_strContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_simpleType_stringtype_str(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::StringtypeContext* PascalParser::stringtype() {
  StringtypeContext *_localctx = _tracker.createInstance<StringtypeContext>(_ctx, getState());
  enterRule(_localctx, 48, PascalParser::RuleStringtype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_simpleType_stringtype_strContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(PascalParser::STRING);
    setState(315);
    match(PascalParser::LBRACK);
    setState(318);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::IDENT: {
        setState(316);
        identifier();
        break;
      }

      case PascalParser::NUM_INT:
      case PascalParser::NUM_REAL: {
        setState(317);
        unsignedNumber();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(320);
    match(PascalParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

PascalParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ArrayTypeContext::getRuleIndex() const {
  return PascalParser::RuleArrayType;
}

void PascalParser::ArrayTypeContext::copyFrom(ArrayTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_arrayType_array1Context ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array1Context::ARRAY() {
  return getToken(PascalParser::ARRAY, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array1Context::LBRACK() {
  return getToken(PascalParser::LBRACK, 0);
}

PascalParser::TypeListContext* PascalParser::Type_structuredType_unpacked_arrayType_array1Context::typeList() {
  return getRuleContext<PascalParser::TypeListContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array1Context::RBRACK() {
  return getToken(PascalParser::RBRACK, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array1Context::OF() {
  return getToken(PascalParser::OF, 0);
}

PascalParser::ComponentTypeContext* PascalParser::Type_structuredType_unpacked_arrayType_array1Context::componentType() {
  return getRuleContext<PascalParser::ComponentTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_arrayType_array1Context::Type_structuredType_unpacked_arrayType_array1Context(ArrayTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_arrayType_array1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_arrayType_array1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_arrayType_array2Context ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array2Context::ARRAY() {
  return getToken(PascalParser::ARRAY, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array2Context::LBRACK2() {
  return getToken(PascalParser::LBRACK2, 0);
}

PascalParser::TypeListContext* PascalParser::Type_structuredType_unpacked_arrayType_array2Context::typeList() {
  return getRuleContext<PascalParser::TypeListContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array2Context::RBRACK2() {
  return getToken(PascalParser::RBRACK2, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array2Context::OF() {
  return getToken(PascalParser::OF, 0);
}

PascalParser::ComponentTypeContext* PascalParser::Type_structuredType_unpacked_arrayType_array2Context::componentType() {
  return getRuleContext<PascalParser::ComponentTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_arrayType_array2Context::Type_structuredType_unpacked_arrayType_array2Context(ArrayTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_arrayType_array2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_arrayType_array2(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ArrayTypeContext* PascalParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, PascalParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_arrayType_array1Context>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(322);
      match(PascalParser::ARRAY);
      setState(323);
      match(PascalParser::LBRACK);
      setState(324);
      typeList();
      setState(325);
      match(PascalParser::RBRACK);
      setState(326);
      match(PascalParser::OF);
      setState(327);
      componentType();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_arrayType_array2Context>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(329);
      match(PascalParser::ARRAY);
      setState(330);
      match(PascalParser::LBRACK2);
      setState(331);
      typeList();
      setState(332);
      match(PascalParser::RBRACK2);
      setState(333);
      match(PascalParser::OF);
      setState(334);
      componentType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

PascalParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TypeListContext::getRuleIndex() const {
  return PascalParser::RuleTypeList;
}

void PascalParser::TypeListContext::copyFrom(TypeListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_arrayType_array_typeListContext ------------------------------------------------------------------

std::vector<PascalParser::IndexTypeContext *> PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext::indexType() {
  return getRuleContexts<PascalParser::IndexTypeContext>();
}

PascalParser::IndexTypeContext* PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext::indexType(size_t i) {
  return getRuleContext<PascalParser::IndexTypeContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext::Type_structuredType_unpacked_arrayType_array_typeListContext(TypeListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_arrayType_array_typeList(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TypeListContext* PascalParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 52, PascalParser::RuleTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(338);
    indexType();
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::COMMA) {
      setState(339);
      match(PascalParser::COMMA);
      setState(340);
      indexType();
      setState(345);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexTypeContext ------------------------------------------------------------------

PascalParser::IndexTypeContext::IndexTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::IndexTypeContext::getRuleIndex() const {
  return PascalParser::RuleIndexType;
}

void PascalParser::IndexTypeContext::copyFrom(IndexTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_arrayType_array_typeList_indexContext ------------------------------------------------------------------

PascalParser::SimpleTypeContext* PascalParser::Type_structuredType_unpacked_arrayType_array_typeList_indexContext::simpleType() {
  return getRuleContext<PascalParser::SimpleTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_arrayType_array_typeList_indexContext::Type_structuredType_unpacked_arrayType_array_typeList_indexContext(IndexTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_arrayType_array_typeList_indexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_arrayType_array_typeList_index(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::IndexTypeContext* PascalParser::indexType() {
  IndexTypeContext *_localctx = _tracker.createInstance<IndexTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, PascalParser::RuleIndexType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_arrayType_array_typeList_indexContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(346);
    simpleType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentTypeContext ------------------------------------------------------------------

PascalParser::ComponentTypeContext::ComponentTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ComponentTypeContext::getRuleIndex() const {
  return PascalParser::RuleComponentType;
}

void PascalParser::ComponentTypeContext::copyFrom(ComponentTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_arrayType_array_componentContext ------------------------------------------------------------------

PascalParser::Type_Context* PascalParser::Type_structuredType_unpacked_arrayType_array_componentContext::type_() {
  return getRuleContext<PascalParser::Type_Context>(0);
}

PascalParser::Type_structuredType_unpacked_arrayType_array_componentContext::Type_structuredType_unpacked_arrayType_array_componentContext(ComponentTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_arrayType_array_componentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_arrayType_array_component(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ComponentTypeContext* PascalParser::componentType() {
  ComponentTypeContext *_localctx = _tracker.createInstance<ComponentTypeContext>(_ctx, getState());
  enterRule(_localctx, 56, PascalParser::RuleComponentType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_arrayType_array_componentContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(348);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordTypeContext ------------------------------------------------------------------

PascalParser::RecordTypeContext::RecordTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RecordTypeContext::getRuleIndex() const {
  return PascalParser::RuleRecordType;
}

void PascalParser::RecordTypeContext::copyFrom(RecordTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_recordContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_recordContext::RECORD() {
  return getToken(PascalParser::RECORD, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_recordContext::END() {
  return getToken(PascalParser::END, 0);
}

PascalParser::FieldListContext* PascalParser::Type_structuredType_unpacked_recordType_recordContext::fieldList() {
  return getRuleContext<PascalParser::FieldListContext>(0);
}

PascalParser::Type_structuredType_unpacked_recordType_recordContext::Type_structuredType_unpacked_recordType_recordContext(RecordTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_recordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::RecordTypeContext* PascalParser::recordType() {
  RecordTypeContext *_localctx = _tracker.createInstance<RecordTypeContext>(_ctx, getState());
  enterRule(_localctx, 58, PascalParser::RuleRecordType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_recordContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(PascalParser::RECORD);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::CASE || _la == PascalParser::IDENT) {
      setState(351);
      fieldList();
    }
    setState(354);
    match(PascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldListContext ------------------------------------------------------------------

PascalParser::FieldListContext::FieldListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FieldListContext::getRuleIndex() const {
  return PascalParser::RuleFieldList;
}

void PascalParser::FieldListContext::copyFrom(FieldListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_record_fixedContext ------------------------------------------------------------------

PascalParser::FixedPartContext* PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext::fixedPart() {
  return getRuleContext<PascalParser::FixedPartContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext::SEMI() {
  return getToken(PascalParser::SEMI, 0);
}

PascalParser::VariantPartContext* PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext::variantPart() {
  return getRuleContext<PascalParser::VariantPartContext>(0);
}

PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext::Type_structuredType_unpacked_recordType_record_fixedContext(FieldListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_fixed(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_recordType_record_variableContext ------------------------------------------------------------------

PascalParser::VariantPartContext* PascalParser::Type_structuredType_unpacked_recordType_record_variableContext::variantPart() {
  return getRuleContext<PascalParser::VariantPartContext>(0);
}

PascalParser::Type_structuredType_unpacked_recordType_record_variableContext::Type_structuredType_unpacked_recordType_record_variableContext(FieldListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_variable(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FieldListContext* PascalParser::fieldList() {
  FieldListContext *_localctx = _tracker.createInstance<FieldListContext>(_ctx, getState());
  enterRule(_localctx, 60, PascalParser::RuleFieldList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(362);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::IDENT: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(356);
        fixedPart();
        setState(359);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PascalParser::SEMI) {
          setState(357);
          match(PascalParser::SEMI);
          setState(358);
          variantPart();
        }
        break;
      }

      case PascalParser::CASE: {
        _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_variableContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(361);
        variantPart();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedPartContext ------------------------------------------------------------------

PascalParser::FixedPartContext::FixedPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FixedPartContext::getRuleIndex() const {
  return PascalParser::RuleFixedPart;
}

void PascalParser::FixedPartContext::copyFrom(FixedPartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_record_fixed_fixContext ------------------------------------------------------------------

std::vector<PascalParser::RecordSectionContext *> PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext::recordSection() {
  return getRuleContexts<PascalParser::RecordSectionContext>();
}

PascalParser::RecordSectionContext* PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext::recordSection(size_t i) {
  return getRuleContext<PascalParser::RecordSectionContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext::Type_structuredType_unpacked_recordType_record_fixed_fixContext(FixedPartContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_fixed_fix(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FixedPartContext* PascalParser::fixedPart() {
  FixedPartContext *_localctx = _tracker.createInstance<FixedPartContext>(_ctx, getState());
  enterRule(_localctx, 62, PascalParser::RuleFixedPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(364);
    recordSection();
    setState(369);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(365);
        match(PascalParser::SEMI);
        setState(366);
        recordSection(); 
      }
      setState(371);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordSectionContext ------------------------------------------------------------------

PascalParser::RecordSectionContext::RecordSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RecordSectionContext::getRuleIndex() const {
  return PascalParser::RuleRecordSection;
}

void PascalParser::RecordSectionContext::copyFrom(RecordSectionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext ------------------------------------------------------------------

PascalParser::IdentifierListContext* PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext::identifierList() {
  return getRuleContext<PascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::Type_Context* PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext::type_() {
  return getRuleContext<PascalParser::Type_Context>(0);
}

PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext(RecordSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_fixed_fix_recordSection(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::RecordSectionContext* PascalParser::recordSection() {
  RecordSectionContext *_localctx = _tracker.createInstance<RecordSectionContext>(_ctx, getState());
  enterRule(_localctx, 64, PascalParser::RuleRecordSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(372);
    identifierList();
    setState(373);
    match(PascalParser::COLON);
    setState(374);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariantPartContext ------------------------------------------------------------------

PascalParser::VariantPartContext::VariantPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::VariantPartContext::getRuleIndex() const {
  return PascalParser::RuleVariantPart;
}

void PascalParser::VariantPartContext::copyFrom(VariantPartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_record_variable_varContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::CASE() {
  return getToken(PascalParser::CASE, 0);
}

PascalParser::TagContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::tag() {
  return getRuleContext<PascalParser::TagContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::OF() {
  return getToken(PascalParser::OF, 0);
}

std::vector<PascalParser::VariantContext *> PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::variant() {
  return getRuleContexts<PascalParser::VariantContext>();
}

PascalParser::VariantContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::variant(size_t i) {
  return getRuleContext<PascalParser::VariantContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::Type_structuredType_unpacked_recordType_record_variable_varContext(VariantPartContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_variable_var(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::VariantPartContext* PascalParser::variantPart() {
  VariantPartContext *_localctx = _tracker.createInstance<VariantPartContext>(_ctx, getState());
  enterRule(_localctx, 66, PascalParser::RuleVariantPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(PascalParser::CASE);
    setState(377);
    tag();
    setState(378);
    match(PascalParser::OF);
    setState(379);
    variant();
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::SEMI) {
      setState(380);
      match(PascalParser::SEMI);
      setState(381);
      variant();
      setState(386);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagContext ------------------------------------------------------------------

PascalParser::TagContext::TagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TagContext::getRuleIndex() const {
  return PascalParser::RuleTag;
}

void PascalParser::TagContext::copyFrom(TagContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext ------------------------------------------------------------------

PascalParser::TypeIdentifierContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext(TagContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_variable_var_typeId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_recordType_record_variable_var_idContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::TypeIdentifierContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext::Type_structuredType_unpacked_recordType_record_variable_var_idContext(TagContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_variable_var_id(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TagContext* PascalParser::tag() {
  TagContext *_localctx = _tracker.createInstance<TagContext>(_ctx, getState());
  enterRule(_localctx, 68, PascalParser::RuleTag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(392);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(387);
      identifier();
      setState(388);
      match(PascalParser::COLON);
      setState(389);
      typeIdentifier();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(391);
      typeIdentifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariantContext ------------------------------------------------------------------

PascalParser::VariantContext::VariantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::VariantContext::getRuleIndex() const {
  return PascalParser::RuleVariant;
}

void PascalParser::VariantContext::copyFrom(VariantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_recordType_record_variable_var_valueContext ------------------------------------------------------------------

PascalParser::ConstListContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::constList() {
  return getRuleContext<PascalParser::ConstListContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::FieldListContext* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::fieldList() {
  return getRuleContext<PascalParser::FieldListContext>(0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::Type_structuredType_unpacked_recordType_record_variable_var_valueContext(VariantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_recordType_record_variable_var_value(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::VariantContext* PascalParser::variant() {
  VariantContext *_localctx = _tracker.createInstance<VariantContext>(_ctx, getState());
  enterRule(_localctx, 70, PascalParser::RuleVariant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(394);
    constList();
    setState(395);
    match(PascalParser::COLON);
    setState(396);
    match(PascalParser::LPAREN);
    setState(397);
    fieldList();
    setState(398);
    match(PascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetTypeContext ------------------------------------------------------------------

PascalParser::SetTypeContext::SetTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SetTypeContext::getRuleIndex() const {
  return PascalParser::RuleSetType;
}

void PascalParser::SetTypeContext::copyFrom(SetTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_setType_setContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_setType_setContext::SET() {
  return getToken(PascalParser::SET, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_setType_setContext::OF() {
  return getToken(PascalParser::OF, 0);
}

PascalParser::BaseTypeContext* PascalParser::Type_structuredType_unpacked_setType_setContext::baseType() {
  return getRuleContext<PascalParser::BaseTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_setType_setContext::Type_structuredType_unpacked_setType_setContext(SetTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_setType_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_setType_set(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SetTypeContext* PascalParser::setType() {
  SetTypeContext *_localctx = _tracker.createInstance<SetTypeContext>(_ctx, getState());
  enterRule(_localctx, 72, PascalParser::RuleSetType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_setType_setContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(400);
    match(PascalParser::SET);
    setState(401);
    match(PascalParser::OF);
    setState(402);
    baseType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

PascalParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::BaseTypeContext::getRuleIndex() const {
  return PascalParser::RuleBaseType;
}

void PascalParser::BaseTypeContext::copyFrom(BaseTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_setType_set_baseContext ------------------------------------------------------------------

PascalParser::SimpleTypeContext* PascalParser::Type_structuredType_unpacked_setType_set_baseContext::simpleType() {
  return getRuleContext<PascalParser::SimpleTypeContext>(0);
}

PascalParser::Type_structuredType_unpacked_setType_set_baseContext::Type_structuredType_unpacked_setType_set_baseContext(BaseTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_setType_set_baseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_setType_set_base(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::BaseTypeContext* PascalParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 74, PascalParser::RuleBaseType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_setType_set_baseContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(404);
    simpleType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileTypeContext ------------------------------------------------------------------

PascalParser::FileTypeContext::FileTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FileTypeContext::getRuleIndex() const {
  return PascalParser::RuleFileType;
}

void PascalParser::FileTypeContext::copyFrom(FileTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_structuredType_unpacked_fileType_file1Context ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_fileType_file1Context::FILE() {
  return getToken(PascalParser::FILE, 0);
}

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_fileType_file1Context::OF() {
  return getToken(PascalParser::OF, 0);
}

PascalParser::Type_Context* PascalParser::Type_structuredType_unpacked_fileType_file1Context::type_() {
  return getRuleContext<PascalParser::Type_Context>(0);
}

PascalParser::Type_structuredType_unpacked_fileType_file1Context::Type_structuredType_unpacked_fileType_file1Context(FileTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_fileType_file1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_fileType_file1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_structuredType_unpacked_fileType_file2Context ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_structuredType_unpacked_fileType_file2Context::FILE() {
  return getToken(PascalParser::FILE, 0);
}

PascalParser::Type_structuredType_unpacked_fileType_file2Context::Type_structuredType_unpacked_fileType_file2Context(FileTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_structuredType_unpacked_fileType_file2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_structuredType_unpacked_fileType_file2(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FileTypeContext* PascalParser::fileType() {
  FileTypeContext *_localctx = _tracker.createInstance<FileTypeContext>(_ctx, getState());
  enterRule(_localctx, 76, PascalParser::RuleFileType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_fileType_file1Context>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(406);
      match(PascalParser::FILE);
      setState(407);
      match(PascalParser::OF);
      setState(408);
      type_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Type_structuredType_unpacked_fileType_file2Context>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(409);
      match(PascalParser::FILE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerTypeContext ------------------------------------------------------------------

PascalParser::PointerTypeContext::PointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::PointerTypeContext::getRuleIndex() const {
  return PascalParser::RulePointerType;
}

void PascalParser::PointerTypeContext::copyFrom(PointerTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_pointerType_pointerContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Type_pointerType_pointerContext::POINTER() {
  return getToken(PascalParser::POINTER, 0);
}

PascalParser::TypeIdentifierContext* PascalParser::Type_pointerType_pointerContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::Type_pointerType_pointerContext::Type_pointerType_pointerContext(PointerTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Type_pointerType_pointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitType_pointerType_pointer(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::PointerTypeContext* PascalParser::pointerType() {
  PointerTypeContext *_localctx = _tracker.createInstance<PointerTypeContext>(_ctx, getState());
  enterRule(_localctx, 78, PascalParser::RulePointerType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Type_pointerType_pointerContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(PascalParser::POINTER);
    setState(413);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationPartContext ------------------------------------------------------------------

PascalParser::VariableDeclarationPartContext::VariableDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::VariableDeclarationPartContext::getRuleIndex() const {
  return PascalParser::RuleVariableDeclarationPart;
}

void PascalParser::VariableDeclarationPartContext::copyFrom(VariableDeclarationPartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariablePartContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::VariablePartContext::VAR() {
  return getToken(PascalParser::VAR, 0);
}

std::vector<PascalParser::VariableDeclarationContext *> PascalParser::VariablePartContext::variableDeclaration() {
  return getRuleContexts<PascalParser::VariableDeclarationContext>();
}

PascalParser::VariableDeclarationContext* PascalParser::VariablePartContext::variableDeclaration(size_t i) {
  return getRuleContext<PascalParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::VariablePartContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::VariablePartContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::VariablePartContext::VariablePartContext(VariableDeclarationPartContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::VariablePartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariablePart(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::VariableDeclarationPartContext* PascalParser::variableDeclarationPart() {
  VariableDeclarationPartContext *_localctx = _tracker.createInstance<VariableDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 80, PascalParser::RuleVariableDeclarationPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    _localctx = _tracker.createInstance<PascalParser::VariablePartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(415);
    match(PascalParser::VAR);
    setState(416);
    variableDeclaration();
    setState(421);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(417);
        match(PascalParser::SEMI);
        setState(418);
        variableDeclaration(); 
      }
      setState(423);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
    setState(424);
    match(PascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

PascalParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::VariableDeclarationContext::getRuleIndex() const {
  return PascalParser::RuleVariableDeclaration;
}

void PascalParser::VariableDeclarationContext::copyFrom(VariableDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

PascalParser::IdentifierListContext* PascalParser::VarDeclarationContext::identifierList() {
  return getRuleContext<PascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalParser::VarDeclarationContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::Type_Context* PascalParser::VarDeclarationContext::type_() {
  return getRuleContext<PascalParser::Type_Context>(0);
}

PascalParser::VarDeclarationContext::VarDeclarationContext(VariableDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::VariableDeclarationContext* PascalParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 82, PascalParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::VarDeclarationContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(426);
    identifierList();
    setState(427);
    match(PascalParser::COLON);
    setState(428);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureAndFunctionDeclarationPartContext ------------------------------------------------------------------

PascalParser::ProcedureAndFunctionDeclarationPartContext::ProcedureAndFunctionDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProcedureAndFunctionDeclarationPartContext::getRuleIndex() const {
  return PascalParser::RuleProcedureAndFunctionDeclarationPart;
}

void PascalParser::ProcedureAndFunctionDeclarationPartContext::copyFrom(ProcedureAndFunctionDeclarationPartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProcedurePartContext ------------------------------------------------------------------

PascalParser::ProcedureOrFunctionDeclarationContext* PascalParser::ProcedurePartContext::procedureOrFunctionDeclaration() {
  return getRuleContext<PascalParser::ProcedureOrFunctionDeclarationContext>(0);
}

tree::TerminalNode* PascalParser::ProcedurePartContext::SEMI() {
  return getToken(PascalParser::SEMI, 0);
}

PascalParser::ProcedurePartContext::ProcedurePartContext(ProcedureAndFunctionDeclarationPartContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ProcedurePartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedurePart(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProcedureAndFunctionDeclarationPartContext* PascalParser::procedureAndFunctionDeclarationPart() {
  ProcedureAndFunctionDeclarationPartContext *_localctx = _tracker.createInstance<ProcedureAndFunctionDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 84, PascalParser::RuleProcedureAndFunctionDeclarationPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ProcedurePartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(430);
    procedureOrFunctionDeclaration();
    setState(431);
    match(PascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureOrFunctionDeclarationContext ------------------------------------------------------------------

PascalParser::ProcedureOrFunctionDeclarationContext::ProcedureOrFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProcedureOrFunctionDeclarationContext::getRuleIndex() const {
  return PascalParser::RuleProcedureOrFunctionDeclaration;
}

void PascalParser::ProcedureOrFunctionDeclarationContext::copyFrom(ProcedureOrFunctionDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_proContext ------------------------------------------------------------------

PascalParser::ProcedureDeclarationContext* PascalParser::Procedure_proContext::procedureDeclaration() {
  return getRuleContext<PascalParser::ProcedureDeclarationContext>(0);
}

PascalParser::Procedure_proContext::Procedure_proContext(ProcedureOrFunctionDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_proContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Procedure_funcContext ------------------------------------------------------------------

PascalParser::FunctionDeclarationContext* PascalParser::Procedure_funcContext::functionDeclaration() {
  return getRuleContext<PascalParser::FunctionDeclarationContext>(0);
}

PascalParser::Procedure_funcContext::Procedure_funcContext(ProcedureOrFunctionDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_func(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProcedureOrFunctionDeclarationContext* PascalParser::procedureOrFunctionDeclaration() {
  ProcedureOrFunctionDeclarationContext *_localctx = _tracker.createInstance<ProcedureOrFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 86, PascalParser::RuleProcedureOrFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(435);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::PROCEDURE: {
        _localctx = _tracker.createInstance<PascalParser::Procedure_proContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(433);
        procedureDeclaration();
        break;
      }

      case PascalParser::FUNCTION: {
        _localctx = _tracker.createInstance<PascalParser::Procedure_funcContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(434);
        functionDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureDeclarationContext ------------------------------------------------------------------

PascalParser::ProcedureDeclarationContext::ProcedureDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProcedureDeclarationContext::getRuleIndex() const {
  return PascalParser::RuleProcedureDeclaration;
}

void PascalParser::ProcedureDeclarationContext::copyFrom(ProcedureDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_pro_decContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Procedure_pro_decContext::PROCEDURE() {
  return getToken(PascalParser::PROCEDURE, 0);
}

PascalParser::IdentifierContext* PascalParser::Procedure_pro_decContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::Procedure_pro_decContext::SEMI() {
  return getToken(PascalParser::SEMI, 0);
}

PascalParser::BlockContext* PascalParser::Procedure_pro_decContext::block() {
  return getRuleContext<PascalParser::BlockContext>(0);
}

PascalParser::FormalParameterListContext* PascalParser::Procedure_pro_decContext::formalParameterList() {
  return getRuleContext<PascalParser::FormalParameterListContext>(0);
}

PascalParser::Procedure_pro_decContext::Procedure_pro_decContext(ProcedureDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_decContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_dec(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProcedureDeclarationContext* PascalParser::procedureDeclaration() {
  ProcedureDeclarationContext *_localctx = _tracker.createInstance<ProcedureDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 88, PascalParser::RuleProcedureDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Procedure_pro_decContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(PascalParser::PROCEDURE);
    setState(438);
    identifier();
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::LPAREN) {
      setState(439);
      formalParameterList();
    }
    setState(442);
    match(PascalParser::SEMI);
    setState(443);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

PascalParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FormalParameterListContext::getRuleIndex() const {
  return PascalParser::RuleFormalParameterList;
}

void PascalParser::FormalParameterListContext::copyFrom(FormalParameterListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_pro_parameterListContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Procedure_pro_parameterListContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

std::vector<PascalParser::FormalParameterSectionContext *> PascalParser::Procedure_pro_parameterListContext::formalParameterSection() {
  return getRuleContexts<PascalParser::FormalParameterSectionContext>();
}

PascalParser::FormalParameterSectionContext* PascalParser::Procedure_pro_parameterListContext::formalParameterSection(size_t i) {
  return getRuleContext<PascalParser::FormalParameterSectionContext>(i);
}

tree::TerminalNode* PascalParser::Procedure_pro_parameterListContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> PascalParser::Procedure_pro_parameterListContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::Procedure_pro_parameterListContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::Procedure_pro_parameterListContext::Procedure_pro_parameterListContext(FormalParameterListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_parameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_parameterList(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FormalParameterListContext* PascalParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 90, PascalParser::RuleFormalParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Procedure_pro_parameterListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(PascalParser::LPAREN);
    setState(446);
    formalParameterSection();
    setState(451);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::SEMI) {
      setState(447);
      match(PascalParser::SEMI);
      setState(448);
      formalParameterSection();
      setState(453);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(454);
    match(PascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterSectionContext ------------------------------------------------------------------

PascalParser::FormalParameterSectionContext::FormalParameterSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FormalParameterSectionContext::getRuleIndex() const {
  return PascalParser::RuleFormalParameterSection;
}

void PascalParser::FormalParameterSectionContext::copyFrom(FormalParameterSectionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_pro_parameterList_varGroupContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Procedure_pro_parameterList_varGroupContext::VAR() {
  return getToken(PascalParser::VAR, 0);
}

PascalParser::ParameterGroupContext* PascalParser::Procedure_pro_parameterList_varGroupContext::parameterGroup() {
  return getRuleContext<PascalParser::ParameterGroupContext>(0);
}

PascalParser::Procedure_pro_parameterList_varGroupContext::Procedure_pro_parameterList_varGroupContext(FormalParameterSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_parameterList_varGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_parameterList_varGroup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Procedure_pro_parameterList_funcGroupContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Procedure_pro_parameterList_funcGroupContext::FUNCTION() {
  return getToken(PascalParser::FUNCTION, 0);
}

PascalParser::ParameterGroupContext* PascalParser::Procedure_pro_parameterList_funcGroupContext::parameterGroup() {
  return getRuleContext<PascalParser::ParameterGroupContext>(0);
}

PascalParser::Procedure_pro_parameterList_funcGroupContext::Procedure_pro_parameterList_funcGroupContext(FormalParameterSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_parameterList_funcGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_parameterList_funcGroup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Procedure_pro_parameterList_groupContext ------------------------------------------------------------------

PascalParser::ParameterGroupContext* PascalParser::Procedure_pro_parameterList_groupContext::parameterGroup() {
  return getRuleContext<PascalParser::ParameterGroupContext>(0);
}

PascalParser::Procedure_pro_parameterList_groupContext::Procedure_pro_parameterList_groupContext(FormalParameterSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_parameterList_groupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_parameterList_group(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Procedure_pro_parameterList_proGroupContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Procedure_pro_parameterList_proGroupContext::PROCEDURE() {
  return getToken(PascalParser::PROCEDURE, 0);
}

PascalParser::ParameterGroupContext* PascalParser::Procedure_pro_parameterList_proGroupContext::parameterGroup() {
  return getRuleContext<PascalParser::ParameterGroupContext>(0);
}

PascalParser::Procedure_pro_parameterList_proGroupContext::Procedure_pro_parameterList_proGroupContext(FormalParameterSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_parameterList_proGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_parameterList_proGroup(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FormalParameterSectionContext* PascalParser::formalParameterSection() {
  FormalParameterSectionContext *_localctx = _tracker.createInstance<FormalParameterSectionContext>(_ctx, getState());
  enterRule(_localctx, 92, PascalParser::RuleFormalParameterSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::IDENT: {
        _localctx = _tracker.createInstance<PascalParser::Procedure_pro_parameterList_groupContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(456);
        parameterGroup();
        break;
      }

      case PascalParser::VAR: {
        _localctx = _tracker.createInstance<PascalParser::Procedure_pro_parameterList_varGroupContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(457);
        match(PascalParser::VAR);
        setState(458);
        parameterGroup();
        break;
      }

      case PascalParser::FUNCTION: {
        _localctx = _tracker.createInstance<PascalParser::Procedure_pro_parameterList_funcGroupContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(459);
        match(PascalParser::FUNCTION);
        setState(460);
        parameterGroup();
        break;
      }

      case PascalParser::PROCEDURE: {
        _localctx = _tracker.createInstance<PascalParser::Procedure_pro_parameterList_proGroupContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(461);
        match(PascalParser::PROCEDURE);
        setState(462);
        parameterGroup();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterGroupContext ------------------------------------------------------------------

PascalParser::ParameterGroupContext::ParameterGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ParameterGroupContext::getRuleIndex() const {
  return PascalParser::RuleParameterGroup;
}

void PascalParser::ParameterGroupContext::copyFrom(ParameterGroupContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_pro_parameterList_group_idContext ------------------------------------------------------------------

PascalParser::IdentifierListContext* PascalParser::Procedure_pro_parameterList_group_idContext::identifierList() {
  return getRuleContext<PascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalParser::Procedure_pro_parameterList_group_idContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::TypeIdentifierContext* PascalParser::Procedure_pro_parameterList_group_idContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::Procedure_pro_parameterList_group_idContext::Procedure_pro_parameterList_group_idContext(ParameterGroupContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_pro_parameterList_group_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_pro_parameterList_group_id(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ParameterGroupContext* PascalParser::parameterGroup() {
  ParameterGroupContext *_localctx = _tracker.createInstance<ParameterGroupContext>(_ctx, getState());
  enterRule(_localctx, 94, PascalParser::RuleParameterGroup);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Procedure_pro_parameterList_group_idContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(465);
    identifierList();
    setState(466);
    match(PascalParser::COLON);
    setState(467);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

PascalParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::IdentifierListContext::getRuleIndex() const {
  return PascalParser::RuleIdentifierList;
}

void PascalParser::IdentifierListContext::copyFrom(IdentifierListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdListContext ------------------------------------------------------------------

std::vector<PascalParser::IdentifierContext *> PascalParser::IdListContext::identifier() {
  return getRuleContexts<PascalParser::IdentifierContext>();
}

PascalParser::IdentifierContext* PascalParser::IdListContext::identifier(size_t i) {
  return getRuleContext<PascalParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::IdListContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::IdListContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::IdListContext::IdListContext(IdentifierListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::IdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitIdList(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::IdentifierListContext* PascalParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 96, PascalParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::IdListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(469);
    identifier();
    setState(474);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::COMMA) {
      setState(470);
      match(PascalParser::COMMA);
      setState(471);
      identifier();
      setState(476);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstListContext ------------------------------------------------------------------

PascalParser::ConstListContext::ConstListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ConstListContext::getRuleIndex() const {
  return PascalParser::RuleConstList;
}

void PascalParser::ConstListContext::copyFrom(ConstListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstantListContext ------------------------------------------------------------------

std::vector<PascalParser::ConstantContext *> PascalParser::ConstantListContext::constant() {
  return getRuleContexts<PascalParser::ConstantContext>();
}

PascalParser::ConstantContext* PascalParser::ConstantListContext::constant(size_t i) {
  return getRuleContext<PascalParser::ConstantContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::ConstantListContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::ConstantListContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::ConstantListContext::ConstantListContext(ConstListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConstantListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstantList(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ConstListContext* PascalParser::constList() {
  ConstListContext *_localctx = _tracker.createInstance<ConstListContext>(_ctx, getState());
  enterRule(_localctx, 98, PascalParser::RuleConstList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ConstantListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(477);
    constant();
    setState(482);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::COMMA) {
      setState(478);
      match(PascalParser::COMMA);
      setState(479);
      constant();
      setState(484);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

PascalParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FunctionDeclarationContext::getRuleIndex() const {
  return PascalParser::RuleFunctionDeclaration;
}

void PascalParser::FunctionDeclarationContext::copyFrom(FunctionDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_func_decContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Procedure_func_decContext::FUNCTION() {
  return getToken(PascalParser::FUNCTION, 0);
}

PascalParser::IdentifierContext* PascalParser::Procedure_func_decContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::Procedure_func_decContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::ResultTypeContext* PascalParser::Procedure_func_decContext::resultType() {
  return getRuleContext<PascalParser::ResultTypeContext>(0);
}

tree::TerminalNode* PascalParser::Procedure_func_decContext::SEMI() {
  return getToken(PascalParser::SEMI, 0);
}

PascalParser::BlockContext* PascalParser::Procedure_func_decContext::block() {
  return getRuleContext<PascalParser::BlockContext>(0);
}

PascalParser::FormalParameterListContext* PascalParser::Procedure_func_decContext::formalParameterList() {
  return getRuleContext<PascalParser::FormalParameterListContext>(0);
}

PascalParser::Procedure_func_decContext::Procedure_func_decContext(FunctionDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_func_decContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_func_dec(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FunctionDeclarationContext* PascalParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 100, PascalParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Procedure_func_decContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(PascalParser::FUNCTION);
    setState(486);
    identifier();
    setState(488);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::LPAREN) {
      setState(487);
      formalParameterList();
    }
    setState(490);
    match(PascalParser::COLON);
    setState(491);
    resultType();
    setState(492);
    match(PascalParser::SEMI);
    setState(493);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultTypeContext ------------------------------------------------------------------

PascalParser::ResultTypeContext::ResultTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ResultTypeContext::getRuleIndex() const {
  return PascalParser::RuleResultType;
}

void PascalParser::ResultTypeContext::copyFrom(ResultTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Procedure_func_resultContext ------------------------------------------------------------------

PascalParser::TypeIdentifierContext* PascalParser::Procedure_func_resultContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::Procedure_func_resultContext::Procedure_func_resultContext(ResultTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Procedure_func_resultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedure_func_result(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ResultTypeContext* PascalParser::resultType() {
  ResultTypeContext *_localctx = _tracker.createInstance<ResultTypeContext>(_ctx, getState());
  enterRule(_localctx, 102, PascalParser::RuleResultType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Procedure_func_resultContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(495);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PascalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::StatementContext::getRuleIndex() const {
  return PascalParser::RuleStatement;
}

void PascalParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementPartContext ------------------------------------------------------------------

PascalParser::UnlabelledStatementContext* PascalParser::StatementPartContext::unlabelledStatement() {
  return getRuleContext<PascalParser::UnlabelledStatementContext>(0);
}

PascalParser::StatementPartContext::StatementPartContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::StatementPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatementPart(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::StatementContext* PascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 104, PascalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::StatementPartContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(497);
    unlabelledStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnlabelledStatementContext ------------------------------------------------------------------

PascalParser::UnlabelledStatementContext::UnlabelledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::UnlabelledStatementContext::getRuleIndex() const {
  return PascalParser::RuleUnlabelledStatement;
}

void PascalParser::UnlabelledStatementContext::copyFrom(UnlabelledStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_simpleContext ------------------------------------------------------------------

PascalParser::SimpleStatementContext* PascalParser::Statement_simpleContext::simpleStatement() {
  return getRuleContext<PascalParser::SimpleStatementContext>(0);
}

PascalParser::Statement_simpleContext::Statement_simpleContext(UnlabelledStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_simpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_simple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_structuredContext ------------------------------------------------------------------

PascalParser::StructuredStatementContext* PascalParser::Statement_structuredContext::structuredStatement() {
  return getRuleContext<PascalParser::StructuredStatementContext>(0);
}

PascalParser::Statement_structuredContext::Statement_structuredContext(UnlabelledStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_structuredContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_structured(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::UnlabelledStatementContext* PascalParser::unlabelledStatement() {
  UnlabelledStatementContext *_localctx = _tracker.createInstance<UnlabelledStatementContext>(_ctx, getState());
  enterRule(_localctx, 106, PascalParser::RuleUnlabelledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(501);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::ELSE:
      case PascalParser::END:
      case PascalParser::UNTIL:
      case PascalParser::SEMI:
      case PascalParser::AT:
      case PascalParser::IDENT: {
        _localctx = _tracker.createInstance<PascalParser::Statement_simpleContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(499);
        simpleStatement();
        break;
      }

      case PascalParser::BEGIN:
      case PascalParser::CASE:
      case PascalParser::FOR:
      case PascalParser::IF:
      case PascalParser::REPEAT:
      case PascalParser::WHILE:
      case PascalParser::WITH: {
        _localctx = _tracker.createInstance<PascalParser::Statement_structuredContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(500);
        structuredStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStatementContext ------------------------------------------------------------------

PascalParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SimpleStatementContext::getRuleIndex() const {
  return PascalParser::RuleSimpleStatement;
}

void PascalParser::SimpleStatementContext::copyFrom(SimpleStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_simple_emptyContext ------------------------------------------------------------------

PascalParser::EmptyStatement_Context* PascalParser::Statement_simple_emptyContext::emptyStatement_() {
  return getRuleContext<PascalParser::EmptyStatement_Context>(0);
}

PascalParser::Statement_simple_emptyContext::Statement_simple_emptyContext(SimpleStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_simple_emptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_simple_empty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_simple_procedureContext ------------------------------------------------------------------

PascalParser::ProcedureStatementContext* PascalParser::Statement_simple_procedureContext::procedureStatement() {
  return getRuleContext<PascalParser::ProcedureStatementContext>(0);
}

PascalParser::Statement_simple_procedureContext::Statement_simple_procedureContext(SimpleStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_simple_procedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_simple_procedure(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_simple_assignmentContext ------------------------------------------------------------------

PascalParser::AssignmentStatementContext* PascalParser::Statement_simple_assignmentContext::assignmentStatement() {
  return getRuleContext<PascalParser::AssignmentStatementContext>(0);
}

PascalParser::Statement_simple_assignmentContext::Statement_simple_assignmentContext(SimpleStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_simple_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_simple_assignment(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SimpleStatementContext* PascalParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, PascalParser::RuleSimpleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(506);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Statement_simple_assignmentContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(503);
      assignmentStatement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Statement_simple_procedureContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(504);
      procedureStatement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalParser::Statement_simple_emptyContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(505);
      emptyStatement_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

PascalParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::AssignmentStatementContext::getRuleIndex() const {
  return PascalParser::RuleAssignmentStatement;
}

void PascalParser::AssignmentStatementContext::copyFrom(AssignmentStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_simple_assignment_assignContext ------------------------------------------------------------------

PascalParser::VariableContext* PascalParser::Statement_simple_assignment_assignContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

tree::TerminalNode* PascalParser::Statement_simple_assignment_assignContext::ASSIGN() {
  return getToken(PascalParser::ASSIGN, 0);
}

PascalParser::ExpressionContext* PascalParser::Statement_simple_assignment_assignContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::Statement_simple_assignment_assignContext::Statement_simple_assignment_assignContext(AssignmentStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_simple_assignment_assignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_simple_assignment_assign(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::AssignmentStatementContext* PascalParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, PascalParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Statement_simple_assignment_assignContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(508);
    variable();
    setState(509);
    match(PascalParser::ASSIGN);
    setState(510);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

PascalParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::VariableContext::getRuleIndex() const {
  return PascalParser::RuleVariable;
}

void PascalParser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::VarContext::AT() {
  return getToken(PascalParser::AT, 0);
}

std::vector<PascalParser::IdentifierContext *> PascalParser::VarContext::identifier() {
  return getRuleContexts<PascalParser::IdentifierContext>();
}

PascalParser::IdentifierContext* PascalParser::VarContext::identifier(size_t i) {
  return getRuleContext<PascalParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::LBRACK() {
  return getTokens(PascalParser::LBRACK);
}

tree::TerminalNode* PascalParser::VarContext::LBRACK(size_t i) {
  return getToken(PascalParser::LBRACK, i);
}

std::vector<PascalParser::ExpressionContext *> PascalParser::VarContext::expression() {
  return getRuleContexts<PascalParser::ExpressionContext>();
}

PascalParser::ExpressionContext* PascalParser::VarContext::expression(size_t i) {
  return getRuleContext<PascalParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::RBRACK() {
  return getTokens(PascalParser::RBRACK);
}

tree::TerminalNode* PascalParser::VarContext::RBRACK(size_t i) {
  return getToken(PascalParser::RBRACK, i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::LBRACK2() {
  return getTokens(PascalParser::LBRACK2);
}

tree::TerminalNode* PascalParser::VarContext::LBRACK2(size_t i) {
  return getToken(PascalParser::LBRACK2, i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::RBRACK2() {
  return getTokens(PascalParser::RBRACK2);
}

tree::TerminalNode* PascalParser::VarContext::RBRACK2(size_t i) {
  return getToken(PascalParser::RBRACK2, i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::DOT() {
  return getTokens(PascalParser::DOT);
}

tree::TerminalNode* PascalParser::VarContext::DOT(size_t i) {
  return getToken(PascalParser::DOT, i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::POINTER() {
  return getTokens(PascalParser::POINTER);
}

tree::TerminalNode* PascalParser::VarContext::POINTER(size_t i) {
  return getToken(PascalParser::POINTER, i);
}

std::vector<tree::TerminalNode *> PascalParser::VarContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::VarContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::VarContext::VarContext(VariableContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::VariableContext* PascalParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 112, PascalParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::VarContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(515);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::AT: {
        setState(512);
        match(PascalParser::AT);
        setState(513);
        identifier();
        break;
      }

      case PascalParser::IDENT: {
        setState(514);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::LBRACK)
      | (1ULL << PascalParser::LBRACK2)
      | (1ULL << PascalParser::POINTER)
      | (1ULL << PascalParser::DOT))) != 0)) {
      setState(542);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PascalParser::LBRACK: {
          setState(517);
          match(PascalParser::LBRACK);
          setState(518);
          expression();
          setState(523);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == PascalParser::COMMA) {
            setState(519);
            match(PascalParser::COMMA);
            setState(520);
            expression();
            setState(525);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(526);
          match(PascalParser::RBRACK);
          break;
        }

        case PascalParser::LBRACK2: {
          setState(528);
          match(PascalParser::LBRACK2);
          setState(529);
          expression();
          setState(534);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == PascalParser::COMMA) {
            setState(530);
            match(PascalParser::COMMA);
            setState(531);
            expression();
            setState(536);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(537);
          match(PascalParser::RBRACK2);
          break;
        }

        case PascalParser::DOT: {
          setState(539);
          match(PascalParser::DOT);
          setState(540);
          identifier();
          break;
        }

        case PascalParser::POINTER: {
          setState(541);
          match(PascalParser::POINTER);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PascalParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ExpressionContext::getRuleIndex() const {
  return PascalParser::RuleExpression;
}

void PascalParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprContext ------------------------------------------------------------------

PascalParser::SimpleExpressionContext* PascalParser::ExprContext::simpleExpression() {
  return getRuleContext<PascalParser::SimpleExpressionContext>(0);
}

PascalParser::RelationaloperatorContext* PascalParser::ExprContext::relationaloperator() {
  return getRuleContext<PascalParser::RelationaloperatorContext>(0);
}

PascalParser::ExpressionContext* PascalParser::ExprContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::ExprContext::ExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ExpressionContext* PascalParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 114, PascalParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(547);
    simpleExpression();
    setState(551);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::IN)
      | (1ULL << PascalParser::EQUAL)
      | (1ULL << PascalParser::NOT_EQUAL)
      | (1ULL << PascalParser::LT)
      | (1ULL << PascalParser::LE)
      | (1ULL << PascalParser::GE)
      | (1ULL << PascalParser::GT))) != 0)) {
      setState(548);
      relationaloperator();
      setState(549);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationaloperatorContext ------------------------------------------------------------------

PascalParser::RelationaloperatorContext::RelationaloperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RelationaloperatorContext::getRuleIndex() const {
  return PascalParser::RuleRelationaloperator;
}

void PascalParser::RelationaloperatorContext::copyFrom(RelationaloperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Operator_INContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_INContext::IN() {
  return getToken(PascalParser::IN, 0);
}

PascalParser::Operator_INContext::Operator_INContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_INContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_IN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_notEqualContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_notEqualContext::NOT_EQUAL() {
  return getToken(PascalParser::NOT_EQUAL, 0);
}

PascalParser::Operator_notEqualContext::Operator_notEqualContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_notEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_notEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_equalContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_equalContext::EQUAL() {
  return getToken(PascalParser::EQUAL, 0);
}

PascalParser::Operator_equalContext::Operator_equalContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_equalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_equal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_LTContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_LTContext::LT() {
  return getToken(PascalParser::LT, 0);
}

PascalParser::Operator_LTContext::Operator_LTContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_LTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_LT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_LEContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_LEContext::LE() {
  return getToken(PascalParser::LE, 0);
}

PascalParser::Operator_LEContext::Operator_LEContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_LEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_LE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_GTContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_GTContext::GT() {
  return getToken(PascalParser::GT, 0);
}

PascalParser::Operator_GTContext::Operator_GTContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_GTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_GT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_GEContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_GEContext::GE() {
  return getToken(PascalParser::GE, 0);
}

PascalParser::Operator_GEContext::Operator_GEContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_GEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_GE(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::RelationaloperatorContext* PascalParser::relationaloperator() {
  RelationaloperatorContext *_localctx = _tracker.createInstance<RelationaloperatorContext>(_ctx, getState());
  enterRule(_localctx, 116, PascalParser::RuleRelationaloperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(560);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::EQUAL: {
        _localctx = _tracker.createInstance<PascalParser::Operator_equalContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(553);
        match(PascalParser::EQUAL);
        break;
      }

      case PascalParser::NOT_EQUAL: {
        _localctx = _tracker.createInstance<PascalParser::Operator_notEqualContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(554);
        match(PascalParser::NOT_EQUAL);
        break;
      }

      case PascalParser::LT: {
        _localctx = _tracker.createInstance<PascalParser::Operator_LTContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(555);
        match(PascalParser::LT);
        break;
      }

      case PascalParser::LE: {
        _localctx = _tracker.createInstance<PascalParser::Operator_LEContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(556);
        match(PascalParser::LE);
        break;
      }

      case PascalParser::GE: {
        _localctx = _tracker.createInstance<PascalParser::Operator_GEContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(557);
        match(PascalParser::GE);
        break;
      }

      case PascalParser::GT: {
        _localctx = _tracker.createInstance<PascalParser::Operator_GTContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(558);
        match(PascalParser::GT);
        break;
      }

      case PascalParser::IN: {
        _localctx = _tracker.createInstance<PascalParser::Operator_INContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(559);
        match(PascalParser::IN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

PascalParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SimpleExpressionContext::getRuleIndex() const {
  return PascalParser::RuleSimpleExpression;
}

void PascalParser::SimpleExpressionContext::copyFrom(SimpleExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simpleContext ------------------------------------------------------------------

PascalParser::TermContext* PascalParser::Expr_simpleContext::term() {
  return getRuleContext<PascalParser::TermContext>(0);
}

PascalParser::AdditiveoperatorContext* PascalParser::Expr_simpleContext::additiveoperator() {
  return getRuleContext<PascalParser::AdditiveoperatorContext>(0);
}

PascalParser::SimpleExpressionContext* PascalParser::Expr_simpleContext::simpleExpression() {
  return getRuleContext<PascalParser::SimpleExpressionContext>(0);
}

PascalParser::Expr_simpleContext::Expr_simpleContext(SimpleExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SimpleExpressionContext* PascalParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 118, PascalParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Expr_simpleContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(562);
    term();
    setState(566);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::OR)
      | (1ULL << PascalParser::PLUS)
      | (1ULL << PascalParser::MINUS))) != 0)) {
      setState(563);
      additiveoperator();
      setState(564);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveoperatorContext ------------------------------------------------------------------

PascalParser::AdditiveoperatorContext::AdditiveoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::AdditiveoperatorContext::getRuleIndex() const {
  return PascalParser::RuleAdditiveoperator;
}

void PascalParser::AdditiveoperatorContext::copyFrom(AdditiveoperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Operator_minusContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_minusContext::MINUS() {
  return getToken(PascalParser::MINUS, 0);
}

PascalParser::Operator_minusContext::Operator_minusContext(AdditiveoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_minusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_minus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_plusContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_plusContext::PLUS() {
  return getToken(PascalParser::PLUS, 0);
}

PascalParser::Operator_plusContext::Operator_plusContext(AdditiveoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_plusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_plus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_orContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_orContext::OR() {
  return getToken(PascalParser::OR, 0);
}

PascalParser::Operator_orContext::Operator_orContext(AdditiveoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_orContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_or(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::AdditiveoperatorContext* PascalParser::additiveoperator() {
  AdditiveoperatorContext *_localctx = _tracker.createInstance<AdditiveoperatorContext>(_ctx, getState());
  enterRule(_localctx, 120, PascalParser::RuleAdditiveoperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(571);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::PLUS: {
        _localctx = _tracker.createInstance<PascalParser::Operator_plusContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(568);
        match(PascalParser::PLUS);
        break;
      }

      case PascalParser::MINUS: {
        _localctx = _tracker.createInstance<PascalParser::Operator_minusContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(569);
        match(PascalParser::MINUS);
        break;
      }

      case PascalParser::OR: {
        _localctx = _tracker.createInstance<PascalParser::Operator_orContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(570);
        match(PascalParser::OR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

PascalParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TermContext::getRuleIndex() const {
  return PascalParser::RuleTerm;
}

void PascalParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simple_termContext ------------------------------------------------------------------

PascalParser::SignedFactorContext* PascalParser::Expr_simple_termContext::signedFactor() {
  return getRuleContext<PascalParser::SignedFactorContext>(0);
}

PascalParser::MultiplicativeoperatorContext* PascalParser::Expr_simple_termContext::multiplicativeoperator() {
  return getRuleContext<PascalParser::MultiplicativeoperatorContext>(0);
}

PascalParser::TermContext* PascalParser::Expr_simple_termContext::term() {
  return getRuleContext<PascalParser::TermContext>(0);
}

PascalParser::Expr_simple_termContext::Expr_simple_termContext(TermContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_termContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TermContext* PascalParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 122, PascalParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Expr_simple_termContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(573);
    signedFactor();
    setState(577);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::AND)
      | (1ULL << PascalParser::DIV)
      | (1ULL << PascalParser::MOD)
      | (1ULL << PascalParser::STAR)
      | (1ULL << PascalParser::SLASH))) != 0)) {
      setState(574);
      multiplicativeoperator();
      setState(575);
      term();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeoperatorContext ------------------------------------------------------------------

PascalParser::MultiplicativeoperatorContext::MultiplicativeoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::MultiplicativeoperatorContext::getRuleIndex() const {
  return PascalParser::RuleMultiplicativeoperator;
}

void PascalParser::MultiplicativeoperatorContext::copyFrom(MultiplicativeoperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Operator_andContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_andContext::AND() {
  return getToken(PascalParser::AND, 0);
}

PascalParser::Operator_andContext::Operator_andContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_andContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_and(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_starContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_starContext::STAR() {
  return getToken(PascalParser::STAR, 0);
}

PascalParser::Operator_starContext::Operator_starContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_starContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_star(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_modContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_modContext::MOD() {
  return getToken(PascalParser::MOD, 0);
}

PascalParser::Operator_modContext::Operator_modContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_modContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_mod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_slashContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_slashContext::SLASH() {
  return getToken(PascalParser::SLASH, 0);
}

PascalParser::Operator_slashContext::Operator_slashContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_slashContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_slash(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operator_divContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Operator_divContext::DIV() {
  return getToken(PascalParser::DIV, 0);
}

PascalParser::Operator_divContext::Operator_divContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Operator_divContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitOperator_div(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::MultiplicativeoperatorContext* PascalParser::multiplicativeoperator() {
  MultiplicativeoperatorContext *_localctx = _tracker.createInstance<MultiplicativeoperatorContext>(_ctx, getState());
  enterRule(_localctx, 124, PascalParser::RuleMultiplicativeoperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(584);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::STAR: {
        _localctx = _tracker.createInstance<PascalParser::Operator_starContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(579);
        match(PascalParser::STAR);
        break;
      }

      case PascalParser::SLASH: {
        _localctx = _tracker.createInstance<PascalParser::Operator_slashContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(580);
        match(PascalParser::SLASH);
        break;
      }

      case PascalParser::DIV: {
        _localctx = _tracker.createInstance<PascalParser::Operator_divContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(581);
        match(PascalParser::DIV);
        break;
      }

      case PascalParser::MOD: {
        _localctx = _tracker.createInstance<PascalParser::Operator_modContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(582);
        match(PascalParser::MOD);
        break;
      }

      case PascalParser::AND: {
        _localctx = _tracker.createInstance<PascalParser::Operator_andContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(583);
        match(PascalParser::AND);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedFactorContext ------------------------------------------------------------------

PascalParser::SignedFactorContext::SignedFactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SignedFactorContext::getRuleIndex() const {
  return PascalParser::RuleSignedFactor;
}

void PascalParser::SignedFactorContext::copyFrom(SignedFactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simple_term_signedFactorContext ------------------------------------------------------------------

PascalParser::FactorContext* PascalParser::Expr_simple_term_signedFactorContext::factor() {
  return getRuleContext<PascalParser::FactorContext>(0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactorContext::PLUS() {
  return getToken(PascalParser::PLUS, 0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactorContext::MINUS() {
  return getToken(PascalParser::MINUS, 0);
}

PascalParser::Expr_simple_term_signedFactorContext::Expr_simple_term_signedFactorContext(SignedFactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SignedFactorContext* PascalParser::signedFactor() {
  SignedFactorContext *_localctx = _tracker.createInstance<SignedFactorContext>(_ctx, getState());
  enterRule(_localctx, 126, PascalParser::RuleSignedFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactorContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(587);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::PLUS

    || _la == PascalParser::MINUS) {
      setState(586);
      _la = _input->LA(1);
      if (!(_la == PascalParser::PLUS

      || _la == PascalParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(589);
    factor();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

PascalParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FactorContext::getRuleIndex() const {
  return PascalParser::RuleFactor;
}

void PascalParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simple_term_signedFactor_constContext ------------------------------------------------------------------

PascalParser::UnsignedConstantContext* PascalParser::Expr_simple_term_signedFactor_constContext::unsignedConstant() {
  return getRuleContext<PascalParser::UnsignedConstantContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_constContext::Expr_simple_term_signedFactor_constContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_const(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_boolContext ------------------------------------------------------------------

PascalParser::Bool_Context* PascalParser::Expr_simple_term_signedFactor_boolContext::bool_() {
  return getRuleContext<PascalParser::Bool_Context>(0);
}

PascalParser::Expr_simple_term_signedFactor_boolContext::Expr_simple_term_signedFactor_boolContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_boolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_bool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_varContext ------------------------------------------------------------------

PascalParser::VariableContext* PascalParser::Expr_simple_term_signedFactor_varContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_varContext::Expr_simple_term_signedFactor_varContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_var(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_funcContext ------------------------------------------------------------------

PascalParser::FunctionDesignatorContext* PascalParser::Expr_simple_term_signedFactor_funcContext::functionDesignator() {
  return getRuleContext<PascalParser::FunctionDesignatorContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_funcContext::Expr_simple_term_signedFactor_funcContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_func(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_notContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_notContext::NOT() {
  return getToken(PascalParser::NOT, 0);
}

PascalParser::FactorContext* PascalParser::Expr_simple_term_signedFactor_notContext::factor() {
  return getRuleContext<PascalParser::FactorContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_notContext::Expr_simple_term_signedFactor_notContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_notContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_not(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_exprContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_exprContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::ExpressionContext* PascalParser::Expr_simple_term_signedFactor_exprContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_exprContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::Expr_simple_term_signedFactor_exprContext::Expr_simple_term_signedFactor_exprContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_setContext ------------------------------------------------------------------

PascalParser::Set_Context* PascalParser::Expr_simple_term_signedFactor_setContext::set_() {
  return getRuleContext<PascalParser::Set_Context>(0);
}

PascalParser::Expr_simple_term_signedFactor_setContext::Expr_simple_term_signedFactor_setContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_set(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FactorContext* PascalParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 128, PascalParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(602);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_varContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(591);
      variable();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_exprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(592);
      match(PascalParser::LPAREN);
      setState(593);
      expression();
      setState(594);
      match(PascalParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_funcContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(596);
      functionDesignator();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_constContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(597);
      unsignedConstant();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_setContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(598);
      set_();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_notContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(599);
      match(PascalParser::NOT);
      setState(600);
      factor();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_boolContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(601);
      bool_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedConstantContext ------------------------------------------------------------------

PascalParser::UnsignedConstantContext::UnsignedConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::UnsignedConstantContext::getRuleIndex() const {
  return PascalParser::RuleUnsignedConstant;
}

void PascalParser::UnsignedConstantContext::copyFrom(UnsignedConstantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simple_term_signedFactor_const_unsignedNumberContext ------------------------------------------------------------------

PascalParser::UnsignedNumberContext* PascalParser::Expr_simple_term_signedFactor_const_unsignedNumberContext::unsignedNumber() {
  return getRuleContext<PascalParser::UnsignedNumberContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_const_unsignedNumberContext::Expr_simple_term_signedFactor_const_unsignedNumberContext(UnsignedConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_const_unsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_const_unsignedNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_const_constChrContext ------------------------------------------------------------------

PascalParser::ConstantChrContext* PascalParser::Expr_simple_term_signedFactor_const_constChrContext::constantChr() {
  return getRuleContext<PascalParser::ConstantChrContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_const_constChrContext::Expr_simple_term_signedFactor_const_constChrContext(UnsignedConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_const_constChrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_const_constChr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_const_strContext ------------------------------------------------------------------

PascalParser::StringContext* PascalParser::Expr_simple_term_signedFactor_const_strContext::string() {
  return getRuleContext<PascalParser::StringContext>(0);
}

PascalParser::Expr_simple_term_signedFactor_const_strContext::Expr_simple_term_signedFactor_const_strContext(UnsignedConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_const_strContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_const_str(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_const_nilContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_const_nilContext::NIL() {
  return getToken(PascalParser::NIL, 0);
}

PascalParser::Expr_simple_term_signedFactor_const_nilContext::Expr_simple_term_signedFactor_const_nilContext(UnsignedConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_const_nilContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_const_nil(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::UnsignedConstantContext* PascalParser::unsignedConstant() {
  UnsignedConstantContext *_localctx = _tracker.createInstance<UnsignedConstantContext>(_ctx, getState());
  enterRule(_localctx, 130, PascalParser::RuleUnsignedConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(608);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::NUM_INT:
      case PascalParser::NUM_REAL: {
        _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_const_unsignedNumberContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(604);
        unsignedNumber();
        break;
      }

      case PascalParser::CHR: {
        _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_const_constChrContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(605);
        constantChr();
        break;
      }

      case PascalParser::STRING_LITERAL: {
        _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_const_strContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(606);
        string();
        break;
      }

      case PascalParser::NIL: {
        _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_const_nilContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(607);
        match(PascalParser::NIL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDesignatorContext ------------------------------------------------------------------

PascalParser::FunctionDesignatorContext::FunctionDesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FunctionDesignatorContext::getRuleIndex() const {
  return PascalParser::RuleFunctionDesignator;
}

void PascalParser::FunctionDesignatorContext::copyFrom(FunctionDesignatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simple_term_signedFactor_func_idContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::Expr_simple_term_signedFactor_func_idContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_func_idContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::ParameterListContext* PascalParser::Expr_simple_term_signedFactor_func_idContext::parameterList() {
  return getRuleContext<PascalParser::ParameterListContext>(0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_func_idContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::Expr_simple_term_signedFactor_func_idContext::Expr_simple_term_signedFactor_func_idContext(FunctionDesignatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_func_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_func_id(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FunctionDesignatorContext* PascalParser::functionDesignator() {
  FunctionDesignatorContext *_localctx = _tracker.createInstance<FunctionDesignatorContext>(_ctx, getState());
  enterRule(_localctx, 132, PascalParser::RuleFunctionDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_func_idContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(610);
    identifier();
    setState(611);
    match(PascalParser::LPAREN);
    setState(612);
    parameterList();
    setState(613);
    match(PascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

PascalParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ParameterListContext::getRuleIndex() const {
  return PascalParser::RuleParameterList;
}

void PascalParser::ParameterListContext::copyFrom(ParameterListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParaListContext ------------------------------------------------------------------

std::vector<PascalParser::ActualParameterContext *> PascalParser::ParaListContext::actualParameter() {
  return getRuleContexts<PascalParser::ActualParameterContext>();
}

PascalParser::ActualParameterContext* PascalParser::ParaListContext::actualParameter(size_t i) {
  return getRuleContext<PascalParser::ActualParameterContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::ParaListContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::ParaListContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::ParaListContext::ParaListContext(ParameterListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ParaListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParaList(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ParameterListContext* PascalParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 134, PascalParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ParaListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(615);
    actualParameter();
    setState(620);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::COMMA) {
      setState(616);
      match(PascalParser::COMMA);
      setState(617);
      actualParameter();
      setState(622);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_Context ------------------------------------------------------------------

PascalParser::Set_Context::Set_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::Set_Context::getRuleIndex() const {
  return PascalParser::RuleSet_;
}

void PascalParser::Set_Context::copyFrom(Set_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_simple_term_signedFactor_set_1Context ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_set_1Context::LBRACK() {
  return getToken(PascalParser::LBRACK, 0);
}

PascalParser::ElementListContext* PascalParser::Expr_simple_term_signedFactor_set_1Context::elementList() {
  return getRuleContext<PascalParser::ElementListContext>(0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_set_1Context::RBRACK() {
  return getToken(PascalParser::RBRACK, 0);
}

PascalParser::Expr_simple_term_signedFactor_set_1Context::Expr_simple_term_signedFactor_set_1Context(Set_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_set_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_set_1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_simple_term_signedFactor_set_2Context ------------------------------------------------------------------

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_set_2Context::LBRACK2() {
  return getToken(PascalParser::LBRACK2, 0);
}

PascalParser::ElementListContext* PascalParser::Expr_simple_term_signedFactor_set_2Context::elementList() {
  return getRuleContext<PascalParser::ElementListContext>(0);
}

tree::TerminalNode* PascalParser::Expr_simple_term_signedFactor_set_2Context::RBRACK2() {
  return getToken(PascalParser::RBRACK2, 0);
}

PascalParser::Expr_simple_term_signedFactor_set_2Context::Expr_simple_term_signedFactor_set_2Context(Set_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Expr_simple_term_signedFactor_set_2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpr_simple_term_signedFactor_set_2(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::Set_Context* PascalParser::set_() {
  Set_Context *_localctx = _tracker.createInstance<Set_Context>(_ctx, getState());
  enterRule(_localctx, 136, PascalParser::RuleSet_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(631);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::LBRACK: {
        _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_set_1Context>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(623);
        match(PascalParser::LBRACK);
        setState(624);
        elementList();
        setState(625);
        match(PascalParser::RBRACK);
        break;
      }

      case PascalParser::LBRACK2: {
        _localctx = _tracker.createInstance<PascalParser::Expr_simple_term_signedFactor_set_2Context>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(627);
        match(PascalParser::LBRACK2);
        setState(628);
        elementList();
        setState(629);
        match(PascalParser::RBRACK2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementListContext ------------------------------------------------------------------

PascalParser::ElementListContext::ElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ElementListContext::getRuleIndex() const {
  return PascalParser::RuleElementList;
}

void PascalParser::ElementListContext::copyFrom(ElementListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EleListContext ------------------------------------------------------------------

std::vector<PascalParser::ElementContext *> PascalParser::EleListContext::element() {
  return getRuleContexts<PascalParser::ElementContext>();
}

PascalParser::ElementContext* PascalParser::EleListContext::element(size_t i) {
  return getRuleContext<PascalParser::ElementContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::EleListContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::EleListContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::EleListContext::EleListContext(ElementListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::EleListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEleList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EleList_emptyContext ------------------------------------------------------------------

PascalParser::EleList_emptyContext::EleList_emptyContext(ElementListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::EleList_emptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEleList_empty(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ElementListContext* PascalParser::elementList() {
  ElementListContext *_localctx = _tracker.createInstance<ElementListContext>(_ctx, getState());
  enterRule(_localctx, 138, PascalParser::RuleElementList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(642);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::CHR:
      case PascalParser::NIL:
      case PascalParser::NOT:
      case PascalParser::PLUS:
      case PascalParser::MINUS:
      case PascalParser::LPAREN:
      case PascalParser::LBRACK:
      case PascalParser::LBRACK2:
      case PascalParser::AT:
      case PascalParser::TRUE:
      case PascalParser::FALSE:
      case PascalParser::IDENT:
      case PascalParser::STRING_LITERAL:
      case PascalParser::NUM_INT:
      case PascalParser::NUM_REAL: {
        _localctx = _tracker.createInstance<PascalParser::EleListContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(633);
        element();
        setState(638);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PascalParser::COMMA) {
          setState(634);
          match(PascalParser::COMMA);
          setState(635);
          element();
          setState(640);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case PascalParser::RBRACK:
      case PascalParser::RBRACK2: {
        _localctx = _tracker.createInstance<PascalParser::EleList_emptyContext>(_localctx);
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

PascalParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ElementContext::getRuleIndex() const {
  return PascalParser::RuleElement;
}

void PascalParser::ElementContext::copyFrom(ElementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EleContext ------------------------------------------------------------------

std::vector<PascalParser::ExpressionContext *> PascalParser::EleContext::expression() {
  return getRuleContexts<PascalParser::ExpressionContext>();
}

PascalParser::ExpressionContext* PascalParser::EleContext::expression(size_t i) {
  return getRuleContext<PascalParser::ExpressionContext>(i);
}

tree::TerminalNode* PascalParser::EleContext::DOTDOT() {
  return getToken(PascalParser::DOTDOT, 0);
}

PascalParser::EleContext::EleContext(ElementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::EleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEle(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ElementContext* PascalParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 140, PascalParser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::EleContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(644);
    expression();
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::DOTDOT) {
      setState(645);
      match(PascalParser::DOTDOT);
      setState(646);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureStatementContext ------------------------------------------------------------------

PascalParser::ProcedureStatementContext::ProcedureStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ProcedureStatementContext::getRuleIndex() const {
  return PascalParser::RuleProcedureStatement;
}

void PascalParser::ProcedureStatementContext::copyFrom(ProcedureStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_simple_procedure_proContext ------------------------------------------------------------------

PascalParser::IdentifierContext* PascalParser::Statement_simple_procedure_proContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::Statement_simple_procedure_proContext::LPAREN() {
  return getToken(PascalParser::LPAREN, 0);
}

PascalParser::ParameterListContext* PascalParser::Statement_simple_procedure_proContext::parameterList() {
  return getRuleContext<PascalParser::ParameterListContext>(0);
}

tree::TerminalNode* PascalParser::Statement_simple_procedure_proContext::RPAREN() {
  return getToken(PascalParser::RPAREN, 0);
}

PascalParser::Statement_simple_procedure_proContext::Statement_simple_procedure_proContext(ProcedureStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_simple_procedure_proContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_simple_procedure_pro(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ProcedureStatementContext* PascalParser::procedureStatement() {
  ProcedureStatementContext *_localctx = _tracker.createInstance<ProcedureStatementContext>(_ctx, getState());
  enterRule(_localctx, 142, PascalParser::RuleProcedureStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::Statement_simple_procedure_proContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(649);
    identifier();
    setState(654);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::LPAREN) {
      setState(650);
      match(PascalParser::LPAREN);
      setState(651);
      parameterList();
      setState(652);
      match(PascalParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualParameterContext ------------------------------------------------------------------

PascalParser::ActualParameterContext::ActualParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ActualParameterContext::getRuleIndex() const {
  return PascalParser::RuleActualParameter;
}

void PascalParser::ActualParameterContext::copyFrom(ActualParameterContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParaList_actualContext ------------------------------------------------------------------

PascalParser::ExpressionContext* PascalParser::ParaList_actualContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

std::vector<PascalParser::ParameterwidthContext *> PascalParser::ParaList_actualContext::parameterwidth() {
  return getRuleContexts<PascalParser::ParameterwidthContext>();
}

PascalParser::ParameterwidthContext* PascalParser::ParaList_actualContext::parameterwidth(size_t i) {
  return getRuleContext<PascalParser::ParameterwidthContext>(i);
}

PascalParser::ParaList_actualContext::ParaList_actualContext(ActualParameterContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ParaList_actualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParaList_actual(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ActualParameterContext* PascalParser::actualParameter() {
  ActualParameterContext *_localctx = _tracker.createInstance<ActualParameterContext>(_ctx, getState());
  enterRule(_localctx, 144, PascalParser::RuleActualParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ParaList_actualContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(656);
    expression();
    setState(660);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::COLON) {
      setState(657);
      parameterwidth();
      setState(662);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterwidthContext ------------------------------------------------------------------

PascalParser::ParameterwidthContext::ParameterwidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ParameterwidthContext::getRuleIndex() const {
  return PascalParser::RuleParameterwidth;
}

void PascalParser::ParameterwidthContext::copyFrom(ParameterwidthContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParaList_actual_widthContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::ParaList_actual_widthContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::ExpressionContext* PascalParser::ParaList_actual_widthContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::ParaList_actual_widthContext::ParaList_actual_widthContext(ParameterwidthContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ParaList_actual_widthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParaList_actual_width(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ParameterwidthContext* PascalParser::parameterwidth() {
  ParameterwidthContext *_localctx = _tracker.createInstance<ParameterwidthContext>(_ctx, getState());
  enterRule(_localctx, 146, PascalParser::RuleParameterwidth);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ParaList_actual_widthContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(PascalParser::COLON);
    setState(664);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatement_Context ------------------------------------------------------------------

PascalParser::EmptyStatement_Context::EmptyStatement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::EmptyStatement_Context::getRuleIndex() const {
  return PascalParser::RuleEmptyStatement_;
}

void PascalParser::EmptyStatement_Context::copyFrom(EmptyStatement_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyStateContext ------------------------------------------------------------------

PascalParser::EmptyStateContext::EmptyStateContext(EmptyStatement_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::EmptyStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEmptyState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::EmptyStatement_Context* PascalParser::emptyStatement_() {
  EmptyStatement_Context *_localctx = _tracker.createInstance<EmptyStatement_Context>(_ctx, getState());
  enterRule(_localctx, 148, PascalParser::RuleEmptyStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::EmptyStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_Context ------------------------------------------------------------------

PascalParser::Empty_Context::Empty_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::Empty_Context::getRuleIndex() const {
  return PascalParser::RuleEmpty_;
}

void PascalParser::Empty_Context::copyFrom(Empty_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EmptyContext ------------------------------------------------------------------

PascalParser::EmptyContext::EmptyContext(Empty_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::EmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEmpty(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::Empty_Context* PascalParser::empty_() {
  Empty_Context *_localctx = _tracker.createInstance<Empty_Context>(_ctx, getState());
  enterRule(_localctx, 150, PascalParser::RuleEmpty_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::EmptyContext>(_localctx);
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredStatementContext ------------------------------------------------------------------

PascalParser::StructuredStatementContext::StructuredStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::StructuredStatementContext::getRuleIndex() const {
  return PascalParser::RuleStructuredStatement;
}

void PascalParser::StructuredStatementContext::copyFrom(StructuredStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_structured_conditionContext ------------------------------------------------------------------

PascalParser::ConditionalStatementContext* PascalParser::Statement_structured_conditionContext::conditionalStatement() {
  return getRuleContext<PascalParser::ConditionalStatementContext>(0);
}

PascalParser::Statement_structured_conditionContext::Statement_structured_conditionContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_structured_conditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_structured_condition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_structured_compoundContext ------------------------------------------------------------------

PascalParser::CompoundStatementContext* PascalParser::Statement_structured_compoundContext::compoundStatement() {
  return getRuleContext<PascalParser::CompoundStatementContext>(0);
}

PascalParser::Statement_structured_compoundContext::Statement_structured_compoundContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_structured_compoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_structured_compound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_structured_repetetiveContext ------------------------------------------------------------------

PascalParser::RepetetiveStatementContext* PascalParser::Statement_structured_repetetiveContext::repetetiveStatement() {
  return getRuleContext<PascalParser::RepetetiveStatementContext>(0);
}

PascalParser::Statement_structured_repetetiveContext::Statement_structured_repetetiveContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_structured_repetetiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_structured_repetetive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_structured_withContext ------------------------------------------------------------------

PascalParser::WithStatementContext* PascalParser::Statement_structured_withContext::withStatement() {
  return getRuleContext<PascalParser::WithStatementContext>(0);
}

PascalParser::Statement_structured_withContext::Statement_structured_withContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::Statement_structured_withContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement_structured_with(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::StructuredStatementContext* PascalParser::structuredStatement() {
  StructuredStatementContext *_localctx = _tracker.createInstance<StructuredStatementContext>(_ctx, getState());
  enterRule(_localctx, 152, PascalParser::RuleStructuredStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(674);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::BEGIN: {
        _localctx = _tracker.createInstance<PascalParser::Statement_structured_compoundContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(670);
        compoundStatement();
        break;
      }

      case PascalParser::CASE:
      case PascalParser::IF: {
        _localctx = _tracker.createInstance<PascalParser::Statement_structured_conditionContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(671);
        conditionalStatement();
        break;
      }

      case PascalParser::FOR:
      case PascalParser::REPEAT:
      case PascalParser::WHILE: {
        _localctx = _tracker.createInstance<PascalParser::Statement_structured_repetetiveContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(672);
        repetetiveStatement();
        break;
      }

      case PascalParser::WITH: {
        _localctx = _tracker.createInstance<PascalParser::Statement_structured_withContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(673);
        withStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

PascalParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::CompoundStatementContext::getRuleIndex() const {
  return PascalParser::RuleCompoundStatement;
}

void PascalParser::CompoundStatementContext::copyFrom(CompoundStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompoundStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::CompoundStateContext::BEGIN() {
  return getToken(PascalParser::BEGIN, 0);
}

PascalParser::StatementsContext* PascalParser::CompoundStateContext::statements() {
  return getRuleContext<PascalParser::StatementsContext>(0);
}

tree::TerminalNode* PascalParser::CompoundStateContext::END() {
  return getToken(PascalParser::END, 0);
}

PascalParser::CompoundStateContext::CompoundStateContext(CompoundStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::CompoundStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitCompoundState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::CompoundStatementContext* PascalParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, PascalParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::CompoundStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(676);
    match(PascalParser::BEGIN);
    setState(677);
    statements();
    setState(678);
    match(PascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

PascalParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::StatementsContext::getRuleIndex() const {
  return PascalParser::RuleStatements;
}

void PascalParser::StatementsContext::copyFrom(StatementsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatesContext ------------------------------------------------------------------

std::vector<PascalParser::StatementContext *> PascalParser::StatesContext::statement() {
  return getRuleContexts<PascalParser::StatementContext>();
}

PascalParser::StatementContext* PascalParser::StatesContext::statement(size_t i) {
  return getRuleContext<PascalParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::StatesContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::StatesContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

PascalParser::StatesContext::StatesContext(StatementsContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::StatesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStates(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::StatementsContext* PascalParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 156, PascalParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::StatesContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(680);
    statement();
    setState(685);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::SEMI) {
      setState(681);
      match(PascalParser::SEMI);
      setState(682);
      statement();
      setState(687);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalStatementContext ------------------------------------------------------------------

PascalParser::ConditionalStatementContext::ConditionalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ConditionalStatementContext::getRuleIndex() const {
  return PascalParser::RuleConditionalStatement;
}

void PascalParser::ConditionalStatementContext::copyFrom(ConditionalStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalState_caseContext ------------------------------------------------------------------

PascalParser::CaseStatementContext* PascalParser::ConditionalState_caseContext::caseStatement() {
  return getRuleContext<PascalParser::CaseStatementContext>(0);
}

PascalParser::ConditionalState_caseContext::ConditionalState_caseContext(ConditionalStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConditionalState_caseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConditionalState_case(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConditionalState_ifContext ------------------------------------------------------------------

PascalParser::IfStatementContext* PascalParser::ConditionalState_ifContext::ifStatement() {
  return getRuleContext<PascalParser::IfStatementContext>(0);
}

PascalParser::ConditionalState_ifContext::ConditionalState_ifContext(ConditionalStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConditionalState_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConditionalState_if(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ConditionalStatementContext* PascalParser::conditionalStatement() {
  ConditionalStatementContext *_localctx = _tracker.createInstance<ConditionalStatementContext>(_ctx, getState());
  enterRule(_localctx, 158, PascalParser::RuleConditionalStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(690);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::IF: {
        _localctx = _tracker.createInstance<PascalParser::ConditionalState_ifContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(688);
        ifStatement();
        break;
      }

      case PascalParser::CASE: {
        _localctx = _tracker.createInstance<PascalParser::ConditionalState_caseContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(689);
        caseStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

PascalParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::IfStatementContext::getRuleIndex() const {
  return PascalParser::RuleIfStatement;
}

void PascalParser::IfStatementContext::copyFrom(IfStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalState_ifStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::ConditionalState_ifStateContext::IF() {
  return getToken(PascalParser::IF, 0);
}

PascalParser::ExpressionContext* PascalParser::ConditionalState_ifStateContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalParser::ConditionalState_ifStateContext::THEN() {
  return getToken(PascalParser::THEN, 0);
}

std::vector<PascalParser::StatementContext *> PascalParser::ConditionalState_ifStateContext::statement() {
  return getRuleContexts<PascalParser::StatementContext>();
}

PascalParser::StatementContext* PascalParser::ConditionalState_ifStateContext::statement(size_t i) {
  return getRuleContext<PascalParser::StatementContext>(i);
}

tree::TerminalNode* PascalParser::ConditionalState_ifStateContext::ELSE() {
  return getToken(PascalParser::ELSE, 0);
}

PascalParser::ConditionalState_ifStateContext::ConditionalState_ifStateContext(IfStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConditionalState_ifStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConditionalState_ifState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::IfStatementContext* PascalParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 160, PascalParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ConditionalState_ifStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(692);
    match(PascalParser::IF);
    setState(693);
    expression();
    setState(694);
    match(PascalParser::THEN);
    setState(695);
    statement();
    setState(698);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      setState(696);
      match(PascalParser::ELSE);
      setState(697);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

PascalParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::CaseStatementContext::getRuleIndex() const {
  return PascalParser::RuleCaseStatement;
}

void PascalParser::CaseStatementContext::copyFrom(CaseStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalState_caseStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::ConditionalState_caseStateContext::CASE() {
  return getToken(PascalParser::CASE, 0);
}

PascalParser::ExpressionContext* PascalParser::ConditionalState_caseStateContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalParser::ConditionalState_caseStateContext::OF() {
  return getToken(PascalParser::OF, 0);
}

std::vector<PascalParser::CaseListElementContext *> PascalParser::ConditionalState_caseStateContext::caseListElement() {
  return getRuleContexts<PascalParser::CaseListElementContext>();
}

PascalParser::CaseListElementContext* PascalParser::ConditionalState_caseStateContext::caseListElement(size_t i) {
  return getRuleContext<PascalParser::CaseListElementContext>(i);
}

tree::TerminalNode* PascalParser::ConditionalState_caseStateContext::END() {
  return getToken(PascalParser::END, 0);
}

std::vector<tree::TerminalNode *> PascalParser::ConditionalState_caseStateContext::SEMI() {
  return getTokens(PascalParser::SEMI);
}

tree::TerminalNode* PascalParser::ConditionalState_caseStateContext::SEMI(size_t i) {
  return getToken(PascalParser::SEMI, i);
}

tree::TerminalNode* PascalParser::ConditionalState_caseStateContext::ELSE() {
  return getToken(PascalParser::ELSE, 0);
}

PascalParser::StatementsContext* PascalParser::ConditionalState_caseStateContext::statements() {
  return getRuleContext<PascalParser::StatementsContext>(0);
}

PascalParser::ConditionalState_caseStateContext::ConditionalState_caseStateContext(CaseStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ConditionalState_caseStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConditionalState_caseState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::CaseStatementContext* PascalParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 162, PascalParser::RuleCaseStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    _localctx = _tracker.createInstance<PascalParser::ConditionalState_caseStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(700);
    match(PascalParser::CASE);
    setState(701);
    expression();
    setState(702);
    match(PascalParser::OF);
    setState(703);
    caseListElement();
    setState(708);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(704);
        match(PascalParser::SEMI);
        setState(705);
        caseListElement(); 
      }
      setState(710);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
    setState(714);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::SEMI) {
      setState(711);
      match(PascalParser::SEMI);
      setState(712);
      match(PascalParser::ELSE);
      setState(713);
      statements();
    }
    setState(716);
    match(PascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseListElementContext ------------------------------------------------------------------

PascalParser::CaseListElementContext::CaseListElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::CaseListElementContext::getRuleIndex() const {
  return PascalParser::RuleCaseListElement;
}

void PascalParser::CaseListElementContext::copyFrom(CaseListElementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CaseState_listContext ------------------------------------------------------------------

PascalParser::ConstListContext* PascalParser::CaseState_listContext::constList() {
  return getRuleContext<PascalParser::ConstListContext>(0);
}

tree::TerminalNode* PascalParser::CaseState_listContext::COLON() {
  return getToken(PascalParser::COLON, 0);
}

PascalParser::StatementContext* PascalParser::CaseState_listContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}

PascalParser::CaseState_listContext::CaseState_listContext(CaseListElementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::CaseState_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitCaseState_list(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::CaseListElementContext* PascalParser::caseListElement() {
  CaseListElementContext *_localctx = _tracker.createInstance<CaseListElementContext>(_ctx, getState());
  enterRule(_localctx, 164, PascalParser::RuleCaseListElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::CaseState_listContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(718);
    constList();
    setState(719);
    match(PascalParser::COLON);
    setState(720);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepetetiveStatementContext ------------------------------------------------------------------

PascalParser::RepetetiveStatementContext::RepetetiveStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RepetetiveStatementContext::getRuleIndex() const {
  return PascalParser::RuleRepetetiveStatement;
}

void PascalParser::RepetetiveStatementContext::copyFrom(RepetetiveStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RepetetiveState_whileContext ------------------------------------------------------------------

PascalParser::WhileStatementContext* PascalParser::RepetetiveState_whileContext::whileStatement() {
  return getRuleContext<PascalParser::WhileStatementContext>(0);
}

PascalParser::RepetetiveState_whileContext::RepetetiveState_whileContext(RepetetiveStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RepetetiveState_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRepetetiveState_while(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetetivetState_repeatContext ------------------------------------------------------------------

PascalParser::RepeatStatementContext* PascalParser::RepetetivetState_repeatContext::repeatStatement() {
  return getRuleContext<PascalParser::RepeatStatementContext>(0);
}

PascalParser::RepetetivetState_repeatContext::RepetetivetState_repeatContext(RepetetiveStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RepetetivetState_repeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRepetetivetState_repeat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetetivetState_forContext ------------------------------------------------------------------

PascalParser::ForStatementContext* PascalParser::RepetetivetState_forContext::forStatement() {
  return getRuleContext<PascalParser::ForStatementContext>(0);
}

PascalParser::RepetetivetState_forContext::RepetetivetState_forContext(RepetetiveStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RepetetivetState_forContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRepetetivetState_for(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::RepetetiveStatementContext* PascalParser::repetetiveStatement() {
  RepetetiveStatementContext *_localctx = _tracker.createInstance<RepetetiveStatementContext>(_ctx, getState());
  enterRule(_localctx, 166, PascalParser::RuleRepetetiveStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(725);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::WHILE: {
        _localctx = _tracker.createInstance<PascalParser::RepetetiveState_whileContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(722);
        whileStatement();
        break;
      }

      case PascalParser::REPEAT: {
        _localctx = _tracker.createInstance<PascalParser::RepetetivetState_repeatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(723);
        repeatStatement();
        break;
      }

      case PascalParser::FOR: {
        _localctx = _tracker.createInstance<PascalParser::RepetetivetState_forContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(724);
        forStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

PascalParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::WhileStatementContext::getRuleIndex() const {
  return PascalParser::RuleWhileStatement;
}

void PascalParser::WhileStatementContext::copyFrom(WhileStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RepetetiveState_whileStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::RepetetiveState_whileStateContext::WHILE() {
  return getToken(PascalParser::WHILE, 0);
}

PascalParser::ExpressionContext* PascalParser::RepetetiveState_whileStateContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalParser::RepetetiveState_whileStateContext::DO() {
  return getToken(PascalParser::DO, 0);
}

PascalParser::StatementContext* PascalParser::RepetetiveState_whileStateContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}

PascalParser::RepetetiveState_whileStateContext::RepetetiveState_whileStateContext(WhileStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RepetetiveState_whileStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRepetetiveState_whileState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::WhileStatementContext* PascalParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 168, PascalParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::RepetetiveState_whileStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(727);
    match(PascalParser::WHILE);
    setState(728);
    expression();
    setState(729);
    match(PascalParser::DO);
    setState(730);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatementContext ------------------------------------------------------------------

PascalParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RepeatStatementContext::getRuleIndex() const {
  return PascalParser::RuleRepeatStatement;
}

void PascalParser::RepeatStatementContext::copyFrom(RepeatStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RepetetiveState_repeatStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::RepetetiveState_repeatStateContext::REPEAT() {
  return getToken(PascalParser::REPEAT, 0);
}

PascalParser::StatementsContext* PascalParser::RepetetiveState_repeatStateContext::statements() {
  return getRuleContext<PascalParser::StatementsContext>(0);
}

tree::TerminalNode* PascalParser::RepetetiveState_repeatStateContext::UNTIL() {
  return getToken(PascalParser::UNTIL, 0);
}

PascalParser::ExpressionContext* PascalParser::RepetetiveState_repeatStateContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::RepetetiveState_repeatStateContext::RepetetiveState_repeatStateContext(RepeatStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RepetetiveState_repeatStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRepetetiveState_repeatState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::RepeatStatementContext* PascalParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 170, PascalParser::RuleRepeatStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::RepetetiveState_repeatStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(732);
    match(PascalParser::REPEAT);
    setState(733);
    statements();
    setState(734);
    match(PascalParser::UNTIL);
    setState(735);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

PascalParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ForStatementContext::getRuleIndex() const {
  return PascalParser::RuleForStatement;
}

void PascalParser::ForStatementContext::copyFrom(ForStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RepetetiveState_forStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::RepetetiveState_forStateContext::FOR() {
  return getToken(PascalParser::FOR, 0);
}

PascalParser::IdentifierContext* PascalParser::RepetetiveState_forStateContext::identifier() {
  return getRuleContext<PascalParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalParser::RepetetiveState_forStateContext::ASSIGN() {
  return getToken(PascalParser::ASSIGN, 0);
}

PascalParser::ForListContext* PascalParser::RepetetiveState_forStateContext::forList() {
  return getRuleContext<PascalParser::ForListContext>(0);
}

tree::TerminalNode* PascalParser::RepetetiveState_forStateContext::DO() {
  return getToken(PascalParser::DO, 0);
}

PascalParser::StatementContext* PascalParser::RepetetiveState_forStateContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}

PascalParser::RepetetiveState_forStateContext::RepetetiveState_forStateContext(ForStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RepetetiveState_forStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRepetetiveState_forState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ForStatementContext* PascalParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 172, PascalParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::RepetetiveState_forStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(737);
    match(PascalParser::FOR);
    setState(738);
    identifier();
    setState(739);
    match(PascalParser::ASSIGN);
    setState(740);
    forList();
    setState(741);
    match(PascalParser::DO);
    setState(742);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForListContext ------------------------------------------------------------------

PascalParser::ForListContext::ForListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::ForListContext::getRuleIndex() const {
  return PascalParser::RuleForList;
}

void PascalParser::ForListContext::copyFrom(ForListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ForState_listContext ------------------------------------------------------------------

PascalParser::InitialValueContext* PascalParser::ForState_listContext::initialValue() {
  return getRuleContext<PascalParser::InitialValueContext>(0);
}

PascalParser::FinalValueContext* PascalParser::ForState_listContext::finalValue() {
  return getRuleContext<PascalParser::FinalValueContext>(0);
}

tree::TerminalNode* PascalParser::ForState_listContext::TO() {
  return getToken(PascalParser::TO, 0);
}

tree::TerminalNode* PascalParser::ForState_listContext::DOWNTO() {
  return getToken(PascalParser::DOWNTO, 0);
}

PascalParser::ForState_listContext::ForState_listContext(ForListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ForState_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitForState_list(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::ForListContext* PascalParser::forList() {
  ForListContext *_localctx = _tracker.createInstance<ForListContext>(_ctx, getState());
  enterRule(_localctx, 174, PascalParser::RuleForList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ForState_listContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(744);
    initialValue();
    setState(745);
    _la = _input->LA(1);
    if (!(_la == PascalParser::DOWNTO

    || _la == PascalParser::TO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(746);
    finalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitialValueContext ------------------------------------------------------------------

PascalParser::InitialValueContext::InitialValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::InitialValueContext::getRuleIndex() const {
  return PascalParser::RuleInitialValue;
}

void PascalParser::InitialValueContext::copyFrom(InitialValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ForState_list_initContext ------------------------------------------------------------------

PascalParser::ExpressionContext* PascalParser::ForState_list_initContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::ForState_list_initContext::ForState_list_initContext(InitialValueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ForState_list_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitForState_list_init(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::InitialValueContext* PascalParser::initialValue() {
  InitialValueContext *_localctx = _tracker.createInstance<InitialValueContext>(_ctx, getState());
  enterRule(_localctx, 176, PascalParser::RuleInitialValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ForState_list_initContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(748);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinalValueContext ------------------------------------------------------------------

PascalParser::FinalValueContext::FinalValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FinalValueContext::getRuleIndex() const {
  return PascalParser::RuleFinalValue;
}

void PascalParser::FinalValueContext::copyFrom(FinalValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ForState_list_finalContext ------------------------------------------------------------------

PascalParser::ExpressionContext* PascalParser::ForState_list_finalContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::ForState_list_finalContext::ForState_list_finalContext(FinalValueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ForState_list_finalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitForState_list_final(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FinalValueContext* PascalParser::finalValue() {
  FinalValueContext *_localctx = _tracker.createInstance<FinalValueContext>(_ctx, getState());
  enterRule(_localctx, 178, PascalParser::RuleFinalValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::ForState_list_finalContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(750);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WithStatementContext ------------------------------------------------------------------

PascalParser::WithStatementContext::WithStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::WithStatementContext::getRuleIndex() const {
  return PascalParser::RuleWithStatement;
}

void PascalParser::WithStatementContext::copyFrom(WithStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WithStateContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::WithStateContext::WITH() {
  return getToken(PascalParser::WITH, 0);
}

PascalParser::RecordVariableListContext* PascalParser::WithStateContext::recordVariableList() {
  return getRuleContext<PascalParser::RecordVariableListContext>(0);
}

tree::TerminalNode* PascalParser::WithStateContext::DO() {
  return getToken(PascalParser::DO, 0);
}

PascalParser::StatementContext* PascalParser::WithStateContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}

PascalParser::WithStateContext::WithStateContext(WithStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::WithStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitWithState(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::WithStatementContext* PascalParser::withStatement() {
  WithStatementContext *_localctx = _tracker.createInstance<WithStatementContext>(_ctx, getState());
  enterRule(_localctx, 180, PascalParser::RuleWithStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::WithStateContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(752);
    match(PascalParser::WITH);
    setState(753);
    recordVariableList();
    setState(754);
    match(PascalParser::DO);
    setState(755);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordVariableListContext ------------------------------------------------------------------

PascalParser::RecordVariableListContext::RecordVariableListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RecordVariableListContext::getRuleIndex() const {
  return PascalParser::RuleRecordVariableList;
}

void PascalParser::RecordVariableListContext::copyFrom(RecordVariableListContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WithState_listContext ------------------------------------------------------------------

std::vector<PascalParser::VariableContext *> PascalParser::WithState_listContext::variable() {
  return getRuleContexts<PascalParser::VariableContext>();
}

PascalParser::VariableContext* PascalParser::WithState_listContext::variable(size_t i) {
  return getRuleContext<PascalParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> PascalParser::WithState_listContext::COMMA() {
  return getTokens(PascalParser::COMMA);
}

tree::TerminalNode* PascalParser::WithState_listContext::COMMA(size_t i) {
  return getToken(PascalParser::COMMA, i);
}

PascalParser::WithState_listContext::WithState_listContext(RecordVariableListContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::WithState_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitWithState_list(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::RecordVariableListContext* PascalParser::recordVariableList() {
  RecordVariableListContext *_localctx = _tracker.createInstance<RecordVariableListContext>(_ctx, getState());
  enterRule(_localctx, 182, PascalParser::RuleRecordVariableList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<PascalParser::WithState_listContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(757);
    variable();
    setState(762);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::COMMA) {
      setState(758);
      match(PascalParser::COMMA);
      setState(759);
      variable();
      setState(764);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PascalParser::_decisionToDFA;
atn::PredictionContextCache PascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PascalParser::_atn;
std::vector<uint16_t> PascalParser::_serializedATN;

std::vector<std::string> PascalParser::_ruleNames = {
  "program", "programHeading", "identifier", "block", "constantDefinitionPart", 
  "constantDefinition", "constantChr", "constant", "unsignedNumber", "unsignedInteger", 
  "unsignedReal", "sign", "bool_", "string", "typeDefinitionPart", "typeDefinition", 
  "procedureType", "type_", "simpleType", "scalarType", "subrangeType", 
  "typeIdentifier", "structuredType", "unpackedStructuredType", "stringtype", 
  "arrayType", "typeList", "indexType", "componentType", "recordType", "fieldList", 
  "fixedPart", "recordSection", "variantPart", "tag", "variant", "setType", 
  "baseType", "fileType", "pointerType", "variableDeclarationPart", "variableDeclaration", 
  "procedureAndFunctionDeclarationPart", "procedureOrFunctionDeclaration", 
  "procedureDeclaration", "formalParameterList", "formalParameterSection", 
  "parameterGroup", "identifierList", "constList", "functionDeclaration", 
  "resultType", "statement", "unlabelledStatement", "simpleStatement", "assignmentStatement", 
  "variable", "expression", "relationaloperator", "simpleExpression", "additiveoperator", 
  "term", "multiplicativeoperator", "signedFactor", "factor", "unsignedConstant", 
  "functionDesignator", "parameterList", "set_", "elementList", "element", 
  "procedureStatement", "actualParameter", "parameterwidth", "emptyStatement_", 
  "empty_", "structuredStatement", "compoundStatement", "statements", "conditionalStatement", 
  "ifStatement", "caseStatement", "caseListElement", "repetetiveStatement", 
  "whileStatement", "repeatStatement", "forStatement", "forList", "initialValue", 
  "finalValue", "withStatement", "recordVariableList"
};

std::vector<std::string> PascalParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "'+'", "'-'", "'*'", "'/'", "':='", "','", "';'", "':'", "'='", 
  "'<>'", "'<'", "'<='", "'>='", "'>'", "'('", "')'", "'['", "'(.'", "']'", 
  "'.)'", "'^'", "'@'", "'.'", "'..'", "'{'", "'}'"
};

std::vector<std::string> PascalParser::_symbolicNames = {
  "", "AND", "ARRAY", "BEGIN", "BOOLEAN", "CASE", "CHAR", "CHR", "CONST", 
  "DIV", "DO", "DOWNTO", "ELSE", "END", "FILE", "FOR", "FUNCTION", "IF", 
  "IN", "INTEGER", "MOD", "NIL", "NOT", "OF", "OR", "PACKED", "PROCEDURE", 
  "PROGRAM", "REAL", "RECORD", "REPEAT", "SET", "THEN", "TO", "TYPE", "UNTIL", 
  "VAR", "WHILE", "WITH", "PLUS", "MINUS", "STAR", "SLASH", "ASSIGN", "COMMA", 
  "SEMI", "COLON", "EQUAL", "NOT_EQUAL", "LT", "LE", "GE", "GT", "LPAREN", 
  "RPAREN", "LBRACK", "LBRACK2", "RBRACK", "RBRACK2", "POINTER", "AT", "DOT", 
  "DOTDOT", "LCURLY", "RCURLY", "UNIT", "INTERFACE", "USES", "STRING", "IMPLEMENTATION", 
  "TRUE", "FALSE", "WS", "COMMENT_1", "COMMENT_2", "IDENT", "STRING_LITERAL", 
  "NUM_INT", "NUM_REAL"
};

dfa::Vocabulary PascalParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PascalParser::_tokenNames;

PascalParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x50, 0x300, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xbd, 
       0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xc8, 0xa, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xd3, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
       0xd6, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x6, 0x6, 0xde, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0xdf, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
       0xf5, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xf9, 0xa, 0xa, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
       0x101, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x105, 0xa, 0xe, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 
       0x10d, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x10e, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x115, 0xa, 0x11, 0x3, 0x12, 0x3, 
       0x12, 0x5, 0x12, 0x119, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x5, 0x13, 0x11e, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x5, 0x14, 0x124, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
       0x3, 0x17, 0x5, 0x17, 0x130, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x5, 0x18, 0x135, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x13b, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x141, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x153, 0xa, 0x1b, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x158, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
       0x15b, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x163, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x16a, 0xa, 0x20, 0x3, 
       0x20, 0x5, 0x20, 0x16d, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x7, 0x21, 0x172, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x175, 0xb, 0x21, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x181, 0xa, 
       0x23, 0xc, 0x23, 0xe, 0x23, 0x184, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x18b, 0xa, 0x24, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x19d, 0xa, 0x28, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x7, 0x2a, 0x1a6, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x1a9, 
       0xb, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
       0x5, 0x2d, 0x1b6, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 
       0x2e, 0x1bb, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x1c4, 0xa, 0x2f, 0xc, 
       0x2f, 0xe, 0x2f, 0x1c7, 0xb, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x5, 0x30, 0x1d2, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x1db, 0xa, 0x32, 
       0xc, 0x32, 0xe, 0x32, 0x1de, 0xb, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x7, 0x33, 0x1e3, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x1e6, 0xb, 
       0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x1eb, 0xa, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 
       0x1f8, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x1fd, 
       0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 
       0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x206, 0xa, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x20c, 0xa, 0x3a, 0xc, 0x3a, 
       0xe, 0x3a, 0x20f, 0xb, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x217, 0xa, 0x3a, 0xc, 0x3a, 
       0xe, 0x3a, 0x21a, 0xb, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x221, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 
       0x224, 0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 
       0x3b, 0x22a, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x233, 0xa, 0x3c, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x239, 0xa, 0x3d, 
       0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x23e, 0xa, 0x3e, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x244, 0xa, 0x3f, 
       0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
       0x24b, 0xa, 0x40, 0x3, 0x41, 0x5, 0x41, 0x24e, 0xa, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x5, 0x42, 0x25d, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x5, 0x43, 0x263, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 
       0x26d, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x270, 0xb, 0x45, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x5, 0x46, 0x27a, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x7, 0x47, 0x27f, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 0x282, 0xb, 
       0x47, 0x3, 0x47, 0x5, 0x47, 0x285, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 
       0x3, 0x48, 0x5, 0x48, 0x28a, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x291, 0xa, 0x49, 0x3, 0x4a, 
       0x3, 0x4a, 0x7, 0x4a, 0x295, 0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x298, 
       0xb, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
       0x5, 0x4e, 0x2a5, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x2ae, 0xa, 0x50, 
       0xc, 0x50, 0xe, 0x50, 0x2b1, 0xb, 0x50, 0x3, 0x51, 0x3, 0x51, 0x5, 
       0x51, 0x2b5, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x2bd, 0xa, 0x52, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x2c5, 
       0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x2c8, 0xb, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x5, 0x53, 0x2cd, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x5, 0x55, 0x2d8, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 
       0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x7, 0x5d, 0x2fb, 0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x2fe, 0xb, 
       0x5d, 0x3, 0x5d, 0x2, 0x2, 0x5e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
       0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
       0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
       0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
       0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
       0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 
       0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 
       0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
       0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0x2, 0x5, 0x7, 0x2, 
       0x6, 0x6, 0x8, 0x8, 0x15, 0x15, 0x1e, 0x1e, 0x46, 0x46, 0x3, 0x2, 
       0x29, 0x2a, 0x4, 0x2, 0xd, 0xd, 0x23, 0x23, 0x2, 0x309, 0x2, 0xba, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x6, 0xcb, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd9, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe, 0xe5, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf8, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x100, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x104, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x106, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x108, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x110, 0x3, 0x2, 0x2, 0x2, 0x22, 0x116, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x123, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x125, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x12f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x134, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x13a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x152, 0x3, 0x2, 0x2, 0x2, 0x36, 0x154, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x15c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x160, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x16e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x176, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x17a, 0x3, 0x2, 0x2, 0x2, 0x46, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x18c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x192, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x196, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x19e, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x1ac, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x1b5, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x1bf, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x1d3, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x1df, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x1f1, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x1f7, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x1fe, 0x3, 0x2, 0x2, 0x2, 0x72, 0x205, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x225, 0x3, 0x2, 0x2, 0x2, 0x76, 0x232, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x234, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x23f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x24d, 0x3, 0x2, 0x2, 0x2, 0x82, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x84, 
       0x262, 0x3, 0x2, 0x2, 0x2, 0x86, 0x264, 0x3, 0x2, 0x2, 0x2, 0x88, 
       0x269, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x284, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x286, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x28b, 0x3, 0x2, 0x2, 0x2, 0x92, 0x292, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x299, 0x3, 0x2, 0x2, 0x2, 0x96, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x29e, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x2a6, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x2b4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x2be, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x2d7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0xac, 
       0x2de, 0x3, 0x2, 0x2, 0x2, 0xae, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0x2ea, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0xb4, 
       0x2f0, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0xb8, 
       0x2f7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x5, 0x4, 0x3, 0x2, 0xbb, 
       0xbd, 0x7, 0x44, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
       0x5, 0x8, 0x5, 0x2, 0xbf, 0xc0, 0x7, 0x3f, 0x2, 0x2, 0xc0, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x1d, 0x2, 0x2, 0xc2, 0xc7, 0x5, 
       0x6, 0x4, 0x2, 0xc3, 0xc4, 0x7, 0x37, 0x2, 0x2, 0xc4, 0xc5, 0x5, 
       0x62, 0x32, 0x2, 0xc5, 0xc6, 0x7, 0x38, 0x2, 0x2, 0xc6, 0xc8, 0x3, 
       0x2, 0x2, 0x2, 0xc7, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 
       0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x2f, 
       0x2, 0x2, 0xca, 0x5, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x4d, 0x2, 
       0x2, 0xcc, 0x7, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd3, 0x5, 0xa, 0x6, 0x2, 
       0xce, 0xd3, 0x5, 0x1e, 0x10, 0x2, 0xcf, 0xd3, 0x5, 0x52, 0x2a, 0x2, 
       0xd0, 0xd3, 0x5, 0x56, 0x2c, 0x2, 0xd1, 0xd3, 0x7, 0x47, 0x2, 0x2, 
       0xd2, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd2, 
       0xcf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 
       0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 
       0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x9c, 
       0x4f, 0x2, 0xd8, 0x9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdd, 0x7, 0xa, 0x2, 
       0x2, 0xda, 0xdb, 0x5, 0xc, 0x7, 0x2, 0xdb, 0xdc, 0x7, 0x2f, 0x2, 
       0x2, 0xdc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xda, 0x3, 0x2, 0x2, 0x2, 
       0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 
       0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xb, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
       0x5, 0x6, 0x4, 0x2, 0xe2, 0xe3, 0x7, 0x31, 0x2, 0x2, 0xe3, 0xe4, 
       0x5, 0x10, 0x9, 0x2, 0xe4, 0xd, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 
       0x9, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x37, 0x2, 0x2, 0xe7, 0xe8, 0x5, 
       0x14, 0xb, 0x2, 0xe8, 0xe9, 0x7, 0x38, 0x2, 0x2, 0xe9, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0xea, 0xf5, 0x5, 0x12, 0xa, 0x2, 0xeb, 0xec, 0x5, 
       0x18, 0xd, 0x2, 0xec, 0xed, 0x5, 0x12, 0xa, 0x2, 0xed, 0xf5, 0x3, 
       0x2, 0x2, 0x2, 0xee, 0xf5, 0x5, 0x6, 0x4, 0x2, 0xef, 0xf0, 0x5, 0x18, 
       0xd, 0x2, 0xf0, 0xf1, 0x5, 0x6, 0x4, 0x2, 0xf1, 0xf5, 0x3, 0x2, 0x2, 
       0x2, 0xf2, 0xf5, 0x5, 0x1c, 0xf, 0x2, 0xf3, 0xf5, 0x5, 0xe, 0x8, 
       0x2, 0xf4, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xeb, 0x3, 0x2, 0x2, 0x2, 
       0xf4, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf4, 
       0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0xf6, 0xf9, 0x5, 0x14, 0xb, 0x2, 0xf7, 0xf9, 
       0x5, 0x16, 0xc, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf7, 
       0x3, 0x2, 0x2, 0x2, 0xf9, 0x13, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 
       0x4f, 0x2, 0x2, 0xfb, 0x15, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 
       0x50, 0x2, 0x2, 0xfd, 0x17, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x7, 
       0x29, 0x2, 0x2, 0xff, 0x101, 0x7, 0x2a, 0x2, 0x2, 0x100, 0xfe, 0x3, 
       0x2, 0x2, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x19, 0x3, 
       0x2, 0x2, 0x2, 0x102, 0x105, 0x7, 0x48, 0x2, 0x2, 0x103, 0x105, 0x7, 
       0x49, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x103, 0x3, 
       0x2, 0x2, 0x2, 0x105, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 
       0x4e, 0x2, 0x2, 0x107, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10c, 0x7, 
       0x24, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x20, 0x11, 0x2, 0x10a, 0x10b, 
       0x7, 0x2f, 0x2, 0x2, 0x10b, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 0x6, 0x4, 0x2, 0x111, 0x114, 
       0x7, 0x31, 0x2, 0x2, 0x112, 0x115, 0x5, 0x24, 0x13, 0x2, 0x113, 0x115, 
       0x5, 0x22, 0x12, 0x2, 0x114, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x115, 0x21, 0x3, 0x2, 0x2, 0x2, 0x116, 0x118, 
       0x7, 0x1c, 0x2, 0x2, 0x117, 0x119, 0x5, 0x5c, 0x2f, 0x2, 0x118, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x11a, 0x11e, 0x5, 0x26, 0x14, 0x2, 0x11b, 0x11e, 
       0x5, 0x2e, 0x18, 0x2, 0x11c, 0x11e, 0x5, 0x50, 0x29, 0x2, 0x11d, 
       0x11a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 
       0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11f, 
       0x124, 0x5, 0x28, 0x15, 0x2, 0x120, 0x124, 0x5, 0x2a, 0x16, 0x2, 
       0x121, 0x124, 0x5, 0x2c, 0x17, 0x2, 0x122, 0x124, 0x5, 0x32, 0x1a, 
       0x2, 0x123, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x123, 0x120, 0x3, 0x2, 0x2, 
       0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 
       0x2, 0x124, 0x27, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x37, 0x2, 
       0x2, 0x126, 0x127, 0x5, 0x62, 0x32, 0x2, 0x127, 0x128, 0x7, 0x38, 
       0x2, 0x2, 0x128, 0x29, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x10, 
       0x9, 0x2, 0x12a, 0x12b, 0x7, 0x40, 0x2, 0x2, 0x12b, 0x12c, 0x5, 0x10, 
       0x9, 0x2, 0x12c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 0x5, 0x6, 
       0x4, 0x2, 0x12e, 0x130, 0x9, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 
       0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0x131, 0x132, 0x7, 0x1b, 0x2, 0x2, 0x132, 0x135, 0x5, 0x30, 
       0x19, 0x2, 0x133, 0x135, 0x5, 0x30, 0x19, 0x2, 0x134, 0x131, 0x3, 
       0x2, 0x2, 0x2, 0x134, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x2f, 0x3, 
       0x2, 0x2, 0x2, 0x136, 0x13b, 0x5, 0x34, 0x1b, 0x2, 0x137, 0x13b, 
       0x5, 0x3c, 0x1f, 0x2, 0x138, 0x13b, 0x5, 0x4a, 0x26, 0x2, 0x139, 
       0x13b, 0x5, 0x4e, 0x28, 0x2, 0x13a, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13a, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 
       0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x13c, 
       0x13d, 0x7, 0x46, 0x2, 0x2, 0x13d, 0x140, 0x7, 0x39, 0x2, 0x2, 0x13e, 
       0x141, 0x5, 0x6, 0x4, 0x2, 0x13f, 0x141, 0x5, 0x12, 0xa, 0x2, 0x140, 
       0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 
       0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x7, 0x3b, 0x2, 0x2, 0x143, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 0x4, 0x2, 0x2, 0x145, 
       0x146, 0x7, 0x39, 0x2, 0x2, 0x146, 0x147, 0x5, 0x36, 0x1c, 0x2, 0x147, 
       0x148, 0x7, 0x3b, 0x2, 0x2, 0x148, 0x149, 0x7, 0x19, 0x2, 0x2, 0x149, 
       0x14a, 0x5, 0x3a, 0x1e, 0x2, 0x14a, 0x153, 0x3, 0x2, 0x2, 0x2, 0x14b, 
       0x14c, 0x7, 0x4, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x3a, 0x2, 0x2, 0x14d, 
       0x14e, 0x5, 0x36, 0x1c, 0x2, 0x14e, 0x14f, 0x7, 0x3c, 0x2, 0x2, 0x14f, 
       0x150, 0x7, 0x19, 0x2, 0x2, 0x150, 0x151, 0x5, 0x3a, 0x1e, 0x2, 0x151, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x152, 0x144, 0x3, 0x2, 0x2, 0x2, 0x152, 
       0x14b, 0x3, 0x2, 0x2, 0x2, 0x153, 0x35, 0x3, 0x2, 0x2, 0x2, 0x154, 
       0x159, 0x5, 0x38, 0x1d, 0x2, 0x155, 0x156, 0x7, 0x2e, 0x2, 0x2, 0x156, 
       0x158, 0x5, 0x38, 0x1d, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x158, 
       0x15b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 
       0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x15b, 
       0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x5, 0x26, 0x14, 0x2, 0x15d, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x5, 0x24, 0x13, 0x2, 0x15f, 
       0x3b, 0x3, 0x2, 0x2, 0x2, 0x160, 0x162, 0x7, 0x1f, 0x2, 0x2, 0x161, 
       0x163, 0x5, 0x3e, 0x20, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x162, 
       0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 
       0x165, 0x7, 0xf, 0x2, 0x2, 0x165, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x166, 
       0x169, 0x5, 0x40, 0x21, 0x2, 0x167, 0x168, 0x7, 0x2f, 0x2, 0x2, 0x168, 
       0x16a, 0x5, 0x44, 0x23, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 
       0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16b, 
       0x16d, 0x5, 0x44, 0x23, 0x2, 0x16c, 0x166, 0x3, 0x2, 0x2, 0x2, 0x16c, 
       0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x16e, 
       0x173, 0x5, 0x42, 0x22, 0x2, 0x16f, 0x170, 0x7, 0x2f, 0x2, 0x2, 0x170, 
       0x172, 0x5, 0x42, 0x22, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 
       0x175, 0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 
       0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x41, 0x3, 0x2, 0x2, 0x2, 0x175, 
       0x173, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x5, 0x62, 0x32, 0x2, 0x177, 
       0x178, 0x7, 0x30, 0x2, 0x2, 0x178, 0x179, 0x5, 0x24, 0x13, 0x2, 0x179, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x7, 0x2, 0x2, 0x17b, 
       0x17c, 0x5, 0x46, 0x24, 0x2, 0x17c, 0x17d, 0x7, 0x19, 0x2, 0x2, 0x17d, 
       0x182, 0x5, 0x48, 0x25, 0x2, 0x17e, 0x17f, 0x7, 0x2f, 0x2, 0x2, 0x17f, 
       0x181, 0x5, 0x48, 0x25, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x181, 
       0x184, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 
       0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x45, 0x3, 0x2, 0x2, 0x2, 0x184, 
       0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x5, 0x6, 0x4, 0x2, 0x186, 
       0x187, 0x7, 0x30, 0x2, 0x2, 0x187, 0x188, 0x5, 0x2c, 0x17, 0x2, 0x188, 
       0x18b, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 0x5, 0x2c, 0x17, 0x2, 0x18a, 
       0x185, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0x64, 0x33, 0x2, 0x18d, 
       0x18e, 0x7, 0x30, 0x2, 0x2, 0x18e, 0x18f, 0x7, 0x37, 0x2, 0x2, 0x18f, 
       0x190, 0x5, 0x3e, 0x20, 0x2, 0x190, 0x191, 0x7, 0x38, 0x2, 0x2, 0x191, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x7, 0x21, 0x2, 0x2, 0x193, 
       0x194, 0x7, 0x19, 0x2, 0x2, 0x194, 0x195, 0x5, 0x4c, 0x27, 0x2, 0x195, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x5, 0x26, 0x14, 0x2, 0x197, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x7, 0x10, 0x2, 0x2, 0x199, 
       0x19a, 0x7, 0x19, 0x2, 0x2, 0x19a, 0x19d, 0x5, 0x24, 0x13, 0x2, 0x19b, 
       0x19d, 0x7, 0x10, 0x2, 0x2, 0x19c, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19c, 
       0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x19e, 
       0x19f, 0x7, 0x3d, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x2c, 0x17, 0x2, 0x1a0, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x7, 0x26, 0x2, 0x2, 0x1a2, 
       0x1a7, 0x5, 0x54, 0x2b, 0x2, 0x1a3, 0x1a4, 0x7, 0x2f, 0x2, 0x2, 0x1a4, 
       0x1a6, 0x5, 0x54, 0x2b, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a6, 
       0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
       0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
       0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0x2f, 0x2, 0x2, 0x1ab, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x5, 0x62, 0x32, 0x2, 0x1ad, 
       0x1ae, 0x7, 0x30, 0x2, 0x2, 0x1ae, 0x1af, 0x5, 0x24, 0x13, 0x2, 0x1af, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x58, 0x2d, 0x2, 0x1b1, 
       0x1b2, 0x7, 0x2f, 0x2, 0x2, 0x1b2, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
       0x1b6, 0x5, 0x5a, 0x2e, 0x2, 0x1b4, 0x1b6, 0x5, 0x66, 0x34, 0x2, 
       0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
       0x1b6, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x7, 0x1c, 0x2, 0x2, 
       0x1b8, 0x1ba, 0x5, 0x6, 0x4, 0x2, 0x1b9, 0x1bb, 0x5, 0x5c, 0x2f, 
       0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 
       0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x2f, 0x2, 
       0x2, 0x1bd, 0x1be, 0x5, 0x8, 0x5, 0x2, 0x1be, 0x5b, 0x3, 0x2, 0x2, 
       0x2, 0x1bf, 0x1c0, 0x7, 0x37, 0x2, 0x2, 0x1c0, 0x1c5, 0x5, 0x5e, 
       0x30, 0x2, 0x1c1, 0x1c2, 0x7, 0x2f, 0x2, 0x2, 0x1c2, 0x1c4, 0x5, 
       0x5e, 0x30, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c7, 
       0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c5, 
       0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0x38, 0x2, 0x2, 0x1c9, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1d2, 0x5, 0x60, 0x31, 0x2, 0x1cb, 0x1cc, 
       0x7, 0x26, 0x2, 0x2, 0x1cc, 0x1d2, 0x5, 0x60, 0x31, 0x2, 0x1cd, 0x1ce, 
       0x7, 0x12, 0x2, 0x2, 0x1ce, 0x1d2, 0x5, 0x60, 0x31, 0x2, 0x1cf, 0x1d0, 
       0x7, 0x1c, 0x2, 0x2, 0x1d0, 0x1d2, 0x5, 0x60, 0x31, 0x2, 0x1d1, 0x1ca, 
       0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cd, 
       0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x5, 0x62, 0x32, 0x2, 0x1d4, 0x1d5, 
       0x7, 0x30, 0x2, 0x2, 0x1d5, 0x1d6, 0x5, 0x2c, 0x17, 0x2, 0x1d6, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1dc, 0x5, 0x6, 0x4, 0x2, 0x1d8, 0x1d9, 
       0x7, 0x2e, 0x2, 0x2, 0x1d9, 0x1db, 0x5, 0x6, 0x4, 0x2, 0x1da, 0x1d8, 
       0x3, 0x2, 0x2, 0x2, 0x1db, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1da, 
       0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e4, 
       0x5, 0x10, 0x9, 0x2, 0x1e0, 0x1e1, 0x7, 0x2e, 0x2, 0x2, 0x1e1, 0x1e3, 
       0x5, 0x10, 0x9, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e6, 
       0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 
       0x3, 0x2, 0x2, 0x2, 0x1e5, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e4, 
       0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x12, 0x2, 0x2, 0x1e8, 0x1ea, 
       0x5, 0x6, 0x4, 0x2, 0x1e9, 0x1eb, 0x5, 0x5c, 0x2f, 0x2, 0x1ea, 0x1e9, 
       0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 
       0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x30, 0x2, 0x2, 0x1ed, 0x1ee, 
       0x5, 0x68, 0x35, 0x2, 0x1ee, 0x1ef, 0x7, 0x2f, 0x2, 0x2, 0x1ef, 0x1f0, 
       0x5, 0x8, 0x5, 0x2, 0x1f0, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 
       0x5, 0x2c, 0x17, 0x2, 0x1f2, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 
       0x5, 0x6c, 0x37, 0x2, 0x1f4, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f8, 
       0x5, 0x6e, 0x38, 0x2, 0x1f6, 0x1f8, 0x5, 0x9a, 0x4e, 0x2, 0x1f7, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fd, 0x5, 0x70, 0x39, 0x2, 0x1fa, 
       0x1fd, 0x5, 0x90, 0x49, 0x2, 0x1fb, 0x1fd, 0x5, 0x96, 0x4c, 0x2, 
       0x1fc, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
       0x1fc, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x6f, 0x3, 0x2, 0x2, 0x2, 
       0x1fe, 0x1ff, 0x5, 0x72, 0x3a, 0x2, 0x1ff, 0x200, 0x7, 0x2d, 0x2, 
       0x2, 0x200, 0x201, 0x5, 0x74, 0x3b, 0x2, 0x201, 0x71, 0x3, 0x2, 0x2, 
       0x2, 0x202, 0x203, 0x7, 0x3e, 0x2, 0x2, 0x203, 0x206, 0x5, 0x6, 0x4, 
       0x2, 0x204, 0x206, 0x5, 0x6, 0x4, 0x2, 0x205, 0x202, 0x3, 0x2, 0x2, 
       0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x222, 0x3, 0x2, 0x2, 
       0x2, 0x207, 0x208, 0x7, 0x39, 0x2, 0x2, 0x208, 0x20d, 0x5, 0x74, 
       0x3b, 0x2, 0x209, 0x20a, 0x7, 0x2e, 0x2, 0x2, 0x20a, 0x20c, 0x5, 
       0x74, 0x3b, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20f, 
       0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 
       0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x7, 0x3b, 0x2, 0x2, 0x211, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x7, 0x3a, 0x2, 0x2, 0x213, 0x218, 
       0x5, 0x74, 0x3b, 0x2, 0x214, 0x215, 0x7, 0x2e, 0x2, 0x2, 0x215, 0x217, 
       0x5, 0x74, 0x3b, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x3c, 0x2, 0x2, 0x21c, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x7, 0x3f, 0x2, 0x2, 0x21e, 0x221, 
       0x5, 0x6, 0x4, 0x2, 0x21f, 0x221, 0x7, 0x3d, 0x2, 0x2, 0x220, 0x207, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x212, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21d, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x223, 0x73, 0x3, 0x2, 0x2, 0x2, 0x224, 0x222, 
       0x3, 0x2, 0x2, 0x2, 0x225, 0x229, 0x5, 0x78, 0x3d, 0x2, 0x226, 0x227, 
       0x5, 0x76, 0x3c, 0x2, 0x227, 0x228, 0x5, 0x74, 0x3b, 0x2, 0x228, 
       0x22a, 0x3, 0x2, 0x2, 0x2, 0x229, 0x226, 0x3, 0x2, 0x2, 0x2, 0x229, 
       0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x22b, 
       0x233, 0x7, 0x31, 0x2, 0x2, 0x22c, 0x233, 0x7, 0x32, 0x2, 0x2, 0x22d, 
       0x233, 0x7, 0x33, 0x2, 0x2, 0x22e, 0x233, 0x7, 0x34, 0x2, 0x2, 0x22f, 
       0x233, 0x7, 0x35, 0x2, 0x2, 0x230, 0x233, 0x7, 0x36, 0x2, 0x2, 0x231, 
       0x233, 0x7, 0x14, 0x2, 0x2, 0x232, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x232, 
       0x22c, 0x3, 0x2, 0x2, 0x2, 0x232, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x232, 
       0x22e, 0x3, 0x2, 0x2, 0x2, 0x232, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x232, 
       0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0x234, 0x238, 0x5, 0x7c, 0x3f, 0x2, 0x235, 
       0x236, 0x5, 0x7a, 0x3e, 0x2, 0x236, 0x237, 0x5, 0x78, 0x3d, 0x2, 
       0x237, 0x239, 0x3, 0x2, 0x2, 0x2, 0x238, 0x235, 0x3, 0x2, 0x2, 0x2, 
       0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x79, 0x3, 0x2, 0x2, 0x2, 
       0x23a, 0x23e, 0x7, 0x29, 0x2, 0x2, 0x23b, 0x23e, 0x7, 0x2a, 0x2, 
       0x2, 0x23c, 0x23e, 0x7, 0x1a, 0x2, 0x2, 0x23d, 0x23a, 0x3, 0x2, 0x2, 
       0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23c, 0x3, 0x2, 0x2, 
       0x2, 0x23e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x243, 0x5, 0x80, 0x41, 
       0x2, 0x240, 0x241, 0x5, 0x7e, 0x40, 0x2, 0x241, 0x242, 0x5, 0x7c, 
       0x3f, 0x2, 0x242, 0x244, 0x3, 0x2, 0x2, 0x2, 0x243, 0x240, 0x3, 0x2, 
       0x2, 0x2, 0x243, 0x244, 0x3, 0x2, 0x2, 0x2, 0x244, 0x7d, 0x3, 0x2, 
       0x2, 0x2, 0x245, 0x24b, 0x7, 0x2b, 0x2, 0x2, 0x246, 0x24b, 0x7, 0x2c, 
       0x2, 0x2, 0x247, 0x24b, 0x7, 0xb, 0x2, 0x2, 0x248, 0x24b, 0x7, 0x16, 
       0x2, 0x2, 0x249, 0x24b, 0x7, 0x3, 0x2, 0x2, 0x24a, 0x245, 0x3, 0x2, 
       0x2, 0x2, 0x24a, 0x246, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x247, 0x3, 0x2, 
       0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x249, 0x3, 0x2, 
       0x2, 0x2, 0x24b, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24e, 0x9, 0x3, 
       0x2, 0x2, 0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 
       0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x5, 0x82, 
       0x42, 0x2, 0x250, 0x81, 0x3, 0x2, 0x2, 0x2, 0x251, 0x25d, 0x5, 0x72, 
       0x3a, 0x2, 0x252, 0x253, 0x7, 0x37, 0x2, 0x2, 0x253, 0x254, 0x5, 
       0x74, 0x3b, 0x2, 0x254, 0x255, 0x7, 0x38, 0x2, 0x2, 0x255, 0x25d, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x25d, 0x5, 0x86, 0x44, 0x2, 0x257, 0x25d, 
       0x5, 0x84, 0x43, 0x2, 0x258, 0x25d, 0x5, 0x8a, 0x46, 0x2, 0x259, 
       0x25a, 0x7, 0x18, 0x2, 0x2, 0x25a, 0x25d, 0x5, 0x82, 0x42, 0x2, 0x25b, 
       0x25d, 0x5, 0x1a, 0xe, 0x2, 0x25c, 0x251, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x252, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x256, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x257, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 
       0x83, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x263, 0x5, 0x12, 0xa, 0x2, 0x25f, 
       0x263, 0x5, 0xe, 0x8, 0x2, 0x260, 0x263, 0x5, 0x1c, 0xf, 0x2, 0x261, 
       0x263, 0x7, 0x17, 0x2, 0x2, 0x262, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x25f, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x85, 0x3, 0x2, 0x2, 0x2, 0x264, 
       0x265, 0x5, 0x6, 0x4, 0x2, 0x265, 0x266, 0x7, 0x37, 0x2, 0x2, 0x266, 
       0x267, 0x5, 0x88, 0x45, 0x2, 0x267, 0x268, 0x7, 0x38, 0x2, 0x2, 0x268, 
       0x87, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26e, 0x5, 0x92, 0x4a, 0x2, 0x26a, 
       0x26b, 0x7, 0x2e, 0x2, 0x2, 0x26b, 0x26d, 0x5, 0x92, 0x4a, 0x2, 0x26c, 
       0x26a, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x270, 0x3, 0x2, 0x2, 0x2, 0x26e, 
       0x26c, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 
       0x89, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x271, 
       0x272, 0x7, 0x39, 0x2, 0x2, 0x272, 0x273, 0x5, 0x8c, 0x47, 0x2, 0x273, 
       0x274, 0x7, 0x3b, 0x2, 0x2, 0x274, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x275, 
       0x276, 0x7, 0x3a, 0x2, 0x2, 0x276, 0x277, 0x5, 0x8c, 0x47, 0x2, 0x277, 
       0x278, 0x7, 0x3c, 0x2, 0x2, 0x278, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x279, 
       0x271, 0x3, 0x2, 0x2, 0x2, 0x279, 0x275, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x8b, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x280, 0x5, 0x8e, 0x48, 0x2, 0x27c, 
       0x27d, 0x7, 0x2e, 0x2, 0x2, 0x27d, 0x27f, 0x5, 0x8e, 0x48, 0x2, 0x27e, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x282, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 
       0x285, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x283, 
       0x285, 0x3, 0x2, 0x2, 0x2, 0x284, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x284, 
       0x283, 0x3, 0x2, 0x2, 0x2, 0x285, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x286, 
       0x289, 0x5, 0x74, 0x3b, 0x2, 0x287, 0x288, 0x7, 0x40, 0x2, 0x2, 0x288, 
       0x28a, 0x5, 0x74, 0x3b, 0x2, 0x289, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 
       0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x28b, 
       0x290, 0x5, 0x6, 0x4, 0x2, 0x28c, 0x28d, 0x7, 0x37, 0x2, 0x2, 0x28d, 
       0x28e, 0x5, 0x88, 0x45, 0x2, 0x28e, 0x28f, 0x7, 0x38, 0x2, 0x2, 0x28f, 
       0x291, 0x3, 0x2, 0x2, 0x2, 0x290, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x290, 
       0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x91, 0x3, 0x2, 0x2, 0x2, 0x292, 
       0x296, 0x5, 0x74, 0x3b, 0x2, 0x293, 0x295, 0x5, 0x94, 0x4b, 0x2, 
       0x294, 0x293, 0x3, 0x2, 0x2, 0x2, 0x295, 0x298, 0x3, 0x2, 0x2, 0x2, 
       0x296, 0x294, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 
       0x297, 0x93, 0x3, 0x2, 0x2, 0x2, 0x298, 0x296, 0x3, 0x2, 0x2, 0x2, 
       0x299, 0x29a, 0x7, 0x30, 0x2, 0x2, 0x29a, 0x29b, 0x5, 0x74, 0x3b, 
       0x2, 0x29b, 0x95, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 
       0x2, 0x29d, 0x97, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 
       0x2, 0x29f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a5, 0x5, 0x9c, 0x4f, 
       0x2, 0x2a1, 0x2a5, 0x5, 0xa0, 0x51, 0x2, 0x2a2, 0x2a5, 0x5, 0xa8, 
       0x55, 0x2, 0x2a3, 0x2a5, 0x5, 0xb6, 0x5c, 0x2, 0x2a4, 0x2a0, 0x3, 
       0x2, 0x2, 0x2, 0x2a4, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a2, 0x3, 
       0x2, 0x2, 0x2, 0x2a4, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x5, 0x2, 0x2, 0x2a7, 0x2a8, 0x5, 
       0x9e, 0x50, 0x2, 0x2a8, 0x2a9, 0x7, 0xf, 0x2, 0x2, 0x2a9, 0x9d, 0x3, 
       0x2, 0x2, 0x2, 0x2aa, 0x2af, 0x5, 0x6a, 0x36, 0x2, 0x2ab, 0x2ac, 
       0x7, 0x2f, 0x2, 0x2, 0x2ac, 0x2ae, 0x5, 0x6a, 0x36, 0x2, 0x2ad, 0x2ab, 
       0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ad, 
       0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b5, 
       0x5, 0xa2, 0x52, 0x2, 0x2b3, 0x2b5, 0x5, 0xa4, 0x53, 0x2, 0x2b4, 
       0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x13, 0x2, 0x2, 0x2b7, 
       0x2b8, 0x5, 0x74, 0x3b, 0x2, 0x2b8, 0x2b9, 0x7, 0x22, 0x2, 0x2, 0x2b9, 
       0x2bc, 0x5, 0x6a, 0x36, 0x2, 0x2ba, 0x2bb, 0x7, 0xe, 0x2, 0x2, 0x2bb, 
       0x2bd, 0x5, 0x6a, 0x36, 0x2, 0x2bc, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
       0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x2be, 
       0x2bf, 0x7, 0x7, 0x2, 0x2, 0x2bf, 0x2c0, 0x5, 0x74, 0x3b, 0x2, 0x2c0, 
       0x2c1, 0x7, 0x19, 0x2, 0x2, 0x2c1, 0x2c6, 0x5, 0xa6, 0x54, 0x2, 0x2c2, 
       0x2c3, 0x7, 0x2f, 0x2, 0x2, 0x2c3, 0x2c5, 0x5, 0xa6, 0x54, 0x2, 0x2c4, 
       0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c6, 
       0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
       0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c9, 
       0x2ca, 0x7, 0x2f, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0xe, 0x2, 0x2, 0x2cb, 
       0x2cd, 0x5, 0x9e, 0x50, 0x2, 0x2cc, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
       0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2cf, 0x7, 0xf, 0x2, 0x2, 0x2cf, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
       0x2d1, 0x5, 0x64, 0x33, 0x2, 0x2d1, 0x2d2, 0x7, 0x30, 0x2, 0x2, 0x2d2, 
       0x2d3, 0x5, 0x6a, 0x36, 0x2, 0x2d3, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x2d4, 
       0x2d8, 0x5, 0xaa, 0x56, 0x2, 0x2d5, 0x2d8, 0x5, 0xac, 0x57, 0x2, 
       0x2d6, 0x2d8, 0x5, 0xae, 0x58, 0x2, 0x2d7, 0x2d4, 0x3, 0x2, 0x2, 
       0x2, 0x2d7, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d6, 0x3, 0x2, 0x2, 
       0x2, 0x2d8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x27, 0x2, 
       0x2, 0x2da, 0x2db, 0x5, 0x74, 0x3b, 0x2, 0x2db, 0x2dc, 0x7, 0xc, 
       0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x6a, 0x36, 0x2, 0x2dd, 0xab, 0x3, 0x2, 
       0x2, 0x2, 0x2de, 0x2df, 0x7, 0x20, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 0x9e, 
       0x50, 0x2, 0x2e0, 0x2e1, 0x7, 0x25, 0x2, 0x2, 0x2e1, 0x2e2, 0x5, 
       0x74, 0x3b, 0x2, 0x2e2, 0xad, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 
       0x11, 0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0x6, 0x4, 0x2, 0x2e5, 0x2e6, 0x7, 
       0x2d, 0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0xb0, 0x59, 0x2, 0x2e7, 0x2e8, 
       0x7, 0xc, 0x2, 0x2, 0x2e8, 0x2e9, 0x5, 0x6a, 0x36, 0x2, 0x2e9, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0xb2, 0x5a, 0x2, 0x2eb, 0x2ec, 
       0x9, 0x4, 0x2, 0x2, 0x2ec, 0x2ed, 0x5, 0xb4, 0x5b, 0x2, 0x2ed, 0xb1, 
       0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0x74, 0x3b, 0x2, 0x2ef, 0xb3, 
       0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x5, 0x74, 0x3b, 0x2, 0x2f1, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 0x7, 0x28, 0x2, 0x2, 0x2f3, 0x2f4, 
       0x5, 0xb8, 0x5d, 0x2, 0x2f4, 0x2f5, 0x7, 0xc, 0x2, 0x2, 0x2f5, 0x2f6, 
       0x5, 0x6a, 0x36, 0x2, 0x2f6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2fc, 
       0x5, 0x72, 0x3a, 0x2, 0x2f8, 0x2f9, 0x7, 0x2e, 0x2, 0x2, 0x2f9, 0x2fb, 
       0x5, 0x72, 0x3a, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fe, 
       0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2fc, 
       0x3, 0x2, 0x2, 0x2, 0x44, 0xbc, 0xc7, 0xd2, 0xd4, 0xdf, 0xf4, 0xf8, 
       0x100, 0x104, 0x10e, 0x114, 0x118, 0x11d, 0x123, 0x12f, 0x134, 0x13a, 
       0x140, 0x152, 0x159, 0x162, 0x169, 0x16c, 0x173, 0x182, 0x18a, 0x19c, 
       0x1a7, 0x1b5, 0x1ba, 0x1c5, 0x1d1, 0x1dc, 0x1e4, 0x1ea, 0x1f7, 0x1fc, 
       0x205, 0x20d, 0x218, 0x220, 0x222, 0x229, 0x232, 0x238, 0x23d, 0x243, 
       0x24a, 0x24d, 0x25c, 0x262, 0x26e, 0x279, 0x280, 0x284, 0x289, 0x290, 
       0x296, 0x2a4, 0x2af, 0x2b4, 0x2bc, 0x2c6, 0x2cc, 0x2d7, 0x2fc, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PascalParser::Initializer PascalParser::_init;
