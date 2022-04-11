
// Generated from /usr/src/app/src/PascalSParser.g4 by ANTLR 4.9.3


#include "PascalSParserVisitor.h"

#include "PascalSParser.h"


using namespace antlrcpp;
using namespace antlr4;

PascalSParser::PascalSParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PascalSParser::~PascalSParser() {
  delete _interpreter;
}

std::string PascalSParser::getGrammarFileName() const {
  return "PascalSParser.g4";
}

const std::vector<std::string>& PascalSParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PascalSParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

PascalSParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ProgramHeadingContext* PascalSParser::ProgramContext::programHeading() {
  return getRuleContext<PascalSParser::ProgramHeadingContext>(0);
}

PascalSParser::BlockContext* PascalSParser::ProgramContext::block() {
  return getRuleContext<PascalSParser::BlockContext>(0);
}

tree::TerminalNode* PascalSParser::ProgramContext::DOT() {
  return getToken(PascalSParser::DOT, 0);
}


size_t PascalSParser::ProgramContext::getRuleIndex() const {
  return PascalSParser::RuleProgram;
}


antlrcpp::Any PascalSParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProgramContext* PascalSParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PascalSParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    programHeading();
    setState(139);
    block();
    setState(140);
    match(PascalSParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramHeadingContext ------------------------------------------------------------------

PascalSParser::ProgramHeadingContext::ProgramHeadingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ProgramHeadingContext::PROGRAM() {
  return getToken(PascalSParser::PROGRAM, 0);
}

PascalSParser::IdentifierContext* PascalSParser::ProgramHeadingContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::ProgramHeadingContext::SEMI() {
  return getToken(PascalSParser::SEMI, 0);
}

tree::TerminalNode* PascalSParser::ProgramHeadingContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::IdentifierListContext* PascalSParser::ProgramHeadingContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::ProgramHeadingContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}


size_t PascalSParser::ProgramHeadingContext::getRuleIndex() const {
  return PascalSParser::RuleProgramHeading;
}


antlrcpp::Any PascalSParser::ProgramHeadingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProgramHeading(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProgramHeadingContext* PascalSParser::programHeading() {
  ProgramHeadingContext *_localctx = _tracker.createInstance<ProgramHeadingContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalSParser::RuleProgramHeading);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(PascalSParser::PROGRAM);
    setState(143);
    identifier();
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::LPAREN) {
      setState(144);
      match(PascalSParser::LPAREN);
      setState(145);
      identifierList();
      setState(146);
      match(PascalSParser::RPAREN);
    }
    setState(150);
    match(PascalSParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

PascalSParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::IdentifierContext::IDENT() {
  return getToken(PascalSParser::IDENT, 0);
}


size_t PascalSParser::IdentifierContext::getRuleIndex() const {
  return PascalSParser::RuleIdentifier;
}


antlrcpp::Any PascalSParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::IdentifierContext* PascalSParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalSParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(PascalSParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PascalSParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::CompoundStatementContext* PascalSParser::BlockContext::compoundStatement() {
  return getRuleContext<PascalSParser::CompoundStatementContext>(0);
}

std::vector<PascalSParser::ConstantDefinitionPartContext *> PascalSParser::BlockContext::constantDefinitionPart() {
  return getRuleContexts<PascalSParser::ConstantDefinitionPartContext>();
}

PascalSParser::ConstantDefinitionPartContext* PascalSParser::BlockContext::constantDefinitionPart(size_t i) {
  return getRuleContext<PascalSParser::ConstantDefinitionPartContext>(i);
}

std::vector<PascalSParser::TypeDefinitionPartContext *> PascalSParser::BlockContext::typeDefinitionPart() {
  return getRuleContexts<PascalSParser::TypeDefinitionPartContext>();
}

PascalSParser::TypeDefinitionPartContext* PascalSParser::BlockContext::typeDefinitionPart(size_t i) {
  return getRuleContext<PascalSParser::TypeDefinitionPartContext>(i);
}

std::vector<PascalSParser::VariableDeclarationPartContext *> PascalSParser::BlockContext::variableDeclarationPart() {
  return getRuleContexts<PascalSParser::VariableDeclarationPartContext>();
}

PascalSParser::VariableDeclarationPartContext* PascalSParser::BlockContext::variableDeclarationPart(size_t i) {
  return getRuleContext<PascalSParser::VariableDeclarationPartContext>(i);
}

std::vector<PascalSParser::ProcedureAndFunctionDeclarationPartContext *> PascalSParser::BlockContext::procedureAndFunctionDeclarationPart() {
  return getRuleContexts<PascalSParser::ProcedureAndFunctionDeclarationPartContext>();
}

PascalSParser::ProcedureAndFunctionDeclarationPartContext* PascalSParser::BlockContext::procedureAndFunctionDeclarationPart(size_t i) {
  return getRuleContext<PascalSParser::ProcedureAndFunctionDeclarationPartContext>(i);
}


size_t PascalSParser::BlockContext::getRuleIndex() const {
  return PascalSParser::RuleBlock;
}


antlrcpp::Any PascalSParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::BlockContext* PascalSParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, PascalSParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalSParser::CONST)
      | (1ULL << PascalSParser::FUNCTION)
      | (1ULL << PascalSParser::PROCEDURE)
      | (1ULL << PascalSParser::TYPE)
      | (1ULL << PascalSParser::VAR))) != 0)) {
      setState(158);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PascalSParser::CONST: {
          setState(154);
          constantDefinitionPart();
          break;
        }

        case PascalSParser::TYPE: {
          setState(155);
          typeDefinitionPart();
          break;
        }

        case PascalSParser::VAR: {
          setState(156);
          variableDeclarationPart();
          break;
        }

        case PascalSParser::FUNCTION:
        case PascalSParser::PROCEDURE: {
          setState(157);
          procedureAndFunctionDeclarationPart();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
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

PascalSParser::ConstantDefinitionPartContext::ConstantDefinitionPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ConstantDefinitionPartContext::CONST() {
  return getToken(PascalSParser::CONST, 0);
}

std::vector<PascalSParser::ConstantDefinitionContext *> PascalSParser::ConstantDefinitionPartContext::constantDefinition() {
  return getRuleContexts<PascalSParser::ConstantDefinitionContext>();
}

PascalSParser::ConstantDefinitionContext* PascalSParser::ConstantDefinitionPartContext::constantDefinition(size_t i) {
  return getRuleContext<PascalSParser::ConstantDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::ConstantDefinitionPartContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::ConstantDefinitionPartContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}


size_t PascalSParser::ConstantDefinitionPartContext::getRuleIndex() const {
  return PascalSParser::RuleConstantDefinitionPart;
}


antlrcpp::Any PascalSParser::ConstantDefinitionPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstantDefinitionPart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ConstantDefinitionPartContext* PascalSParser::constantDefinitionPart() {
  ConstantDefinitionPartContext *_localctx = _tracker.createInstance<ConstantDefinitionPartContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalSParser::RuleConstantDefinitionPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(PascalSParser::CONST);
    setState(169); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(166);
      constantDefinition();
      setState(167);
      match(PascalSParser::SEMI);
      setState(171); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PascalSParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

PascalSParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierContext* PascalSParser::ConstantDefinitionContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::ConstantDefinitionContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::ConstantContext* PascalSParser::ConstantDefinitionContext::constant() {
  return getRuleContext<PascalSParser::ConstantContext>(0);
}


size_t PascalSParser::ConstantDefinitionContext::getRuleIndex() const {
  return PascalSParser::RuleConstantDefinition;
}


antlrcpp::Any PascalSParser::ConstantDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstantDefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ConstantDefinitionContext* PascalSParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, PascalSParser::RuleConstantDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    identifier();
    setState(174);
    match(PascalSParser::EQUAL);
    setState(175);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

PascalSParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::ConstantContext::getRuleIndex() const {
  return PascalSParser::RuleConstant;
}

void PascalSParser::ConstantContext::copyFrom(ConstantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstIdentifierContext ------------------------------------------------------------------

PascalSParser::IdentifierContext* PascalSParser::ConstIdentifierContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

PascalSParser::ConstIdentifierContext::ConstIdentifierContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConstIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstSignedNumberContext ------------------------------------------------------------------

PascalSParser::SignContext* PascalSParser::ConstSignedNumberContext::sign() {
  return getRuleContext<PascalSParser::SignContext>(0);
}

PascalSParser::UnsignedNumberContext* PascalSParser::ConstSignedNumberContext::unsignedNumber() {
  return getRuleContext<PascalSParser::UnsignedNumberContext>(0);
}

PascalSParser::ConstSignedNumberContext::ConstSignedNumberContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConstSignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstSignedNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstStringContext ------------------------------------------------------------------

PascalSParser::StringContext* PascalSParser::ConstStringContext::string() {
  return getRuleContext<PascalSParser::StringContext>(0);
}

PascalSParser::ConstStringContext::ConstStringContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConstStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstUnsignedNumberContext ------------------------------------------------------------------

PascalSParser::UnsignedNumberContext* PascalSParser::ConstUnsignedNumberContext::unsignedNumber() {
  return getRuleContext<PascalSParser::UnsignedNumberContext>(0);
}

PascalSParser::ConstUnsignedNumberContext::ConstUnsignedNumberContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConstUnsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstUnsignedNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstSignIdentifierContext ------------------------------------------------------------------

PascalSParser::SignContext* PascalSParser::ConstSignIdentifierContext::sign() {
  return getRuleContext<PascalSParser::SignContext>(0);
}

PascalSParser::IdentifierContext* PascalSParser::ConstSignIdentifierContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

PascalSParser::ConstSignIdentifierContext::ConstSignIdentifierContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConstSignIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstSignIdentifier(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::ConstantContext* PascalSParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalSParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalSParser::ConstUnsignedNumberContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(177);
      unsignedNumber();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalSParser::ConstSignedNumberContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(178);
      sign();
      setState(179);
      unsignedNumber();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalSParser::ConstIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(181);
      identifier();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalSParser::ConstSignIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(182);
      sign();
      setState(183);
      identifier();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PascalSParser::ConstStringContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(185);
      string();
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

PascalSParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::UnsignedNumberContext::getRuleIndex() const {
  return PascalSParser::RuleUnsignedNumber;
}

void PascalSParser::UnsignedNumberContext::copyFrom(UnsignedNumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnsignedNumberRealContext ------------------------------------------------------------------

PascalSParser::UnsignedRealContext* PascalSParser::UnsignedNumberRealContext::unsignedReal() {
  return getRuleContext<PascalSParser::UnsignedRealContext>(0);
}

PascalSParser::UnsignedNumberRealContext::UnsignedNumberRealContext(UnsignedNumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::UnsignedNumberRealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumberReal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumberIntegerContext ------------------------------------------------------------------

PascalSParser::UnsignedIntegerContext* PascalSParser::UnsignedNumberIntegerContext::unsignedInteger() {
  return getRuleContext<PascalSParser::UnsignedIntegerContext>(0);
}

PascalSParser::UnsignedNumberIntegerContext::UnsignedNumberIntegerContext(UnsignedNumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::UnsignedNumberIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumberInteger(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::UnsignedNumberContext* PascalSParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 14, PascalSParser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::NUM_INT: {
        _localctx = _tracker.createInstance<PascalSParser::UnsignedNumberIntegerContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(188);
        unsignedInteger();
        break;
      }

      case PascalSParser::NUM_REAL: {
        _localctx = _tracker.createInstance<PascalSParser::UnsignedNumberRealContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(189);
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

PascalSParser::UnsignedIntegerContext::UnsignedIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::UnsignedIntegerContext::NUM_INT() {
  return getToken(PascalSParser::NUM_INT, 0);
}


size_t PascalSParser::UnsignedIntegerContext::getRuleIndex() const {
  return PascalSParser::RuleUnsignedInteger;
}


antlrcpp::Any PascalSParser::UnsignedIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitUnsignedInteger(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::UnsignedIntegerContext* PascalSParser::unsignedInteger() {
  UnsignedIntegerContext *_localctx = _tracker.createInstance<UnsignedIntegerContext>(_ctx, getState());
  enterRule(_localctx, 16, PascalSParser::RuleUnsignedInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(PascalSParser::NUM_INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedRealContext ------------------------------------------------------------------

PascalSParser::UnsignedRealContext::UnsignedRealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::UnsignedRealContext::NUM_REAL() {
  return getToken(PascalSParser::NUM_REAL, 0);
}


size_t PascalSParser::UnsignedRealContext::getRuleIndex() const {
  return PascalSParser::RuleUnsignedReal;
}


antlrcpp::Any PascalSParser::UnsignedRealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitUnsignedReal(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::UnsignedRealContext* PascalSParser::unsignedReal() {
  UnsignedRealContext *_localctx = _tracker.createInstance<UnsignedRealContext>(_ctx, getState());
  enterRule(_localctx, 18, PascalSParser::RuleUnsignedReal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(PascalSParser::NUM_REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

PascalSParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::SignContext::getRuleIndex() const {
  return PascalSParser::RuleSign;
}

void PascalSParser::SignContext::copyFrom(SignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SignPlusContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::SignPlusContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

PascalSParser::SignPlusContext::SignPlusContext(SignContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::SignPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSignPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SignMinusContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::SignMinusContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

PascalSParser::SignMinusContext::SignMinusContext(SignContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::SignMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSignMinus(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::SignContext* PascalSParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 20, PascalSParser::RuleSign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::PLUS: {
        _localctx = _tracker.createInstance<PascalSParser::SignPlusContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(196);
        match(PascalSParser::PLUS);
        break;
      }

      case PascalSParser::MINUS: {
        _localctx = _tracker.createInstance<PascalSParser::SignMinusContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(197);
        match(PascalSParser::MINUS);
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

PascalSParser::Bool_Context::Bool_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::Bool_Context::getRuleIndex() const {
  return PascalSParser::RuleBool_;
}

void PascalSParser::Bool_Context::copyFrom(Bool_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BoolFalseContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::BoolFalseContext::FALSE() {
  return getToken(PascalSParser::FALSE, 0);
}

PascalSParser::BoolFalseContext::BoolFalseContext(Bool_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::BoolFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitBoolFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolTrueContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::BoolTrueContext::TRUE() {
  return getToken(PascalSParser::TRUE, 0);
}

PascalSParser::BoolTrueContext::BoolTrueContext(Bool_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::BoolTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitBoolTrue(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::Bool_Context* PascalSParser::bool_() {
  Bool_Context *_localctx = _tracker.createInstance<Bool_Context>(_ctx, getState());
  enterRule(_localctx, 22, PascalSParser::RuleBool_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::TRUE: {
        _localctx = _tracker.createInstance<PascalSParser::BoolTrueContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(200);
        match(PascalSParser::TRUE);
        break;
      }

      case PascalSParser::FALSE: {
        _localctx = _tracker.createInstance<PascalSParser::BoolFalseContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(201);
        match(PascalSParser::FALSE);
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

PascalSParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::StringContext::STRING_LITERAL() {
  return getToken(PascalSParser::STRING_LITERAL, 0);
}


size_t PascalSParser::StringContext::getRuleIndex() const {
  return PascalSParser::RuleString;
}


antlrcpp::Any PascalSParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::StringContext* PascalSParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 24, PascalSParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(PascalSParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionPartContext ------------------------------------------------------------------

PascalSParser::TypeDefinitionPartContext::TypeDefinitionPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::TypeDefinitionPartContext::TYPE() {
  return getToken(PascalSParser::TYPE, 0);
}

std::vector<PascalSParser::TypeDefinitionContext *> PascalSParser::TypeDefinitionPartContext::typeDefinition() {
  return getRuleContexts<PascalSParser::TypeDefinitionContext>();
}

PascalSParser::TypeDefinitionContext* PascalSParser::TypeDefinitionPartContext::typeDefinition(size_t i) {
  return getRuleContext<PascalSParser::TypeDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::TypeDefinitionPartContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::TypeDefinitionPartContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}


size_t PascalSParser::TypeDefinitionPartContext::getRuleIndex() const {
  return PascalSParser::RuleTypeDefinitionPart;
}


antlrcpp::Any PascalSParser::TypeDefinitionPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitTypeDefinitionPart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::TypeDefinitionPartContext* PascalSParser::typeDefinitionPart() {
  TypeDefinitionPartContext *_localctx = _tracker.createInstance<TypeDefinitionPartContext>(_ctx, getState());
  enterRule(_localctx, 26, PascalSParser::RuleTypeDefinitionPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(PascalSParser::TYPE);
    setState(210); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(207);
      typeDefinition();
      setState(208);
      match(PascalSParser::SEMI);
      setState(212); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == PascalSParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

PascalSParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierContext* PascalSParser::TypeDefinitionContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::TypeDefinitionContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::Type_Context* PascalSParser::TypeDefinitionContext::type_() {
  return getRuleContext<PascalSParser::Type_Context>(0);
}


size_t PascalSParser::TypeDefinitionContext::getRuleIndex() const {
  return PascalSParser::RuleTypeDefinition;
}


antlrcpp::Any PascalSParser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::TypeDefinitionContext* PascalSParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 28, PascalSParser::RuleTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    identifier();
    setState(215);
    match(PascalSParser::EQUAL);
    setState(216);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

PascalSParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::Type_Context::getRuleIndex() const {
  return PascalSParser::RuleType_;
}

void PascalSParser::Type_Context::copyFrom(Type_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeSimpleTypeContext ------------------------------------------------------------------

PascalSParser::SimpleTypeContext* PascalSParser::TypeSimpleTypeContext::simpleType() {
  return getRuleContext<PascalSParser::SimpleTypeContext>(0);
}

PascalSParser::TypeSimpleTypeContext::TypeSimpleTypeContext(Type_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::TypeSimpleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitTypeSimpleType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeStructuredTypeContext ------------------------------------------------------------------

PascalSParser::StructuredTypeContext* PascalSParser::TypeStructuredTypeContext::structuredType() {
  return getRuleContext<PascalSParser::StructuredTypeContext>(0);
}

PascalSParser::TypeStructuredTypeContext::TypeStructuredTypeContext(Type_Context *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::TypeStructuredTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitTypeStructuredType(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::Type_Context* PascalSParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 30, PascalSParser::RuleType_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::BOOLEAN:
      case PascalSParser::CHAR:
      case PascalSParser::INTEGER:
      case PascalSParser::REAL: {
        _localctx = _tracker.createInstance<PascalSParser::TypeSimpleTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(218);
        simpleType();
        break;
      }

      case PascalSParser::ARRAY:
      case PascalSParser::RECORD: {
        _localctx = _tracker.createInstance<PascalSParser::TypeStructuredTypeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(219);
        structuredType();
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

PascalSParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::SimpleTypeContext::CHAR() {
  return getToken(PascalSParser::CHAR, 0);
}

tree::TerminalNode* PascalSParser::SimpleTypeContext::BOOLEAN() {
  return getToken(PascalSParser::BOOLEAN, 0);
}

tree::TerminalNode* PascalSParser::SimpleTypeContext::INTEGER() {
  return getToken(PascalSParser::INTEGER, 0);
}

tree::TerminalNode* PascalSParser::SimpleTypeContext::REAL() {
  return getToken(PascalSParser::REAL, 0);
}


size_t PascalSParser::SimpleTypeContext::getRuleIndex() const {
  return PascalSParser::RuleSimpleType;
}


antlrcpp::Any PascalSParser::SimpleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSimpleType(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::SimpleTypeContext* PascalSParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, PascalSParser::RuleSimpleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalSParser::BOOLEAN)
      | (1ULL << PascalSParser::CHAR)
      | (1ULL << PascalSParser::INTEGER)
      | (1ULL << PascalSParser::REAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
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

PascalSParser::StructuredTypeContext::StructuredTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::StructuredTypeContext::getRuleIndex() const {
  return PascalSParser::RuleStructuredType;
}

void PascalSParser::StructuredTypeContext::copyFrom(StructuredTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StructuredTypeArrayContext ------------------------------------------------------------------

PascalSParser::ArrayTypeContext* PascalSParser::StructuredTypeArrayContext::arrayType() {
  return getRuleContext<PascalSParser::ArrayTypeContext>(0);
}

PascalSParser::StructuredTypeArrayContext::StructuredTypeArrayContext(StructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::StructuredTypeArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStructuredTypeArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StructuredTypeRecordContext ------------------------------------------------------------------

PascalSParser::RecordTypeContext* PascalSParser::StructuredTypeRecordContext::recordType() {
  return getRuleContext<PascalSParser::RecordTypeContext>(0);
}

PascalSParser::StructuredTypeRecordContext::StructuredTypeRecordContext(StructuredTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::StructuredTypeRecordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStructuredTypeRecord(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::StructuredTypeContext* PascalSParser::structuredType() {
  StructuredTypeContext *_localctx = _tracker.createInstance<StructuredTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, PascalSParser::RuleStructuredType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(226);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ARRAY: {
        _localctx = _tracker.createInstance<PascalSParser::StructuredTypeArrayContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(224);
        arrayType();
        break;
      }

      case PascalSParser::RECORD: {
        _localctx = _tracker.createInstance<PascalSParser::StructuredTypeRecordContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(225);
        recordType();
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

//----------------- ArrayTypeContext ------------------------------------------------------------------

PascalSParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::ArrayTypeContext::getRuleIndex() const {
  return PascalSParser::RuleArrayType;
}

void PascalSParser::ArrayTypeContext::copyFrom(ArrayTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayType1Context ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::ArrayType1Context::ARRAY() {
  return getToken(PascalSParser::ARRAY, 0);
}

tree::TerminalNode* PascalSParser::ArrayType1Context::LBRACK() {
  return getToken(PascalSParser::LBRACK, 0);
}

PascalSParser::PeriodsContext* PascalSParser::ArrayType1Context::periods() {
  return getRuleContext<PascalSParser::PeriodsContext>(0);
}

tree::TerminalNode* PascalSParser::ArrayType1Context::RBRACK() {
  return getToken(PascalSParser::RBRACK, 0);
}

tree::TerminalNode* PascalSParser::ArrayType1Context::OF() {
  return getToken(PascalSParser::OF, 0);
}

PascalSParser::Type_Context* PascalSParser::ArrayType1Context::type_() {
  return getRuleContext<PascalSParser::Type_Context>(0);
}

PascalSParser::ArrayType1Context::ArrayType1Context(ArrayTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ArrayType1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitArrayType1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayType2Context ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::ArrayType2Context::ARRAY() {
  return getToken(PascalSParser::ARRAY, 0);
}

tree::TerminalNode* PascalSParser::ArrayType2Context::LBRACK2() {
  return getToken(PascalSParser::LBRACK2, 0);
}

PascalSParser::PeriodsContext* PascalSParser::ArrayType2Context::periods() {
  return getRuleContext<PascalSParser::PeriodsContext>(0);
}

tree::TerminalNode* PascalSParser::ArrayType2Context::RBRACK2() {
  return getToken(PascalSParser::RBRACK2, 0);
}

tree::TerminalNode* PascalSParser::ArrayType2Context::OF() {
  return getToken(PascalSParser::OF, 0);
}

PascalSParser::Type_Context* PascalSParser::ArrayType2Context::type_() {
  return getRuleContext<PascalSParser::Type_Context>(0);
}

PascalSParser::ArrayType2Context::ArrayType2Context(ArrayTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ArrayType2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitArrayType2(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::ArrayTypeContext* PascalSParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 36, PascalSParser::RuleArrayType);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalSParser::ArrayType1Context>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(228);
      match(PascalSParser::ARRAY);
      setState(229);
      match(PascalSParser::LBRACK);
      setState(230);
      periods();
      setState(231);
      match(PascalSParser::RBRACK);
      setState(232);
      match(PascalSParser::OF);
      setState(233);
      type_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalSParser::ArrayType2Context>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(235);
      match(PascalSParser::ARRAY);
      setState(236);
      match(PascalSParser::LBRACK2);
      setState(237);
      periods();
      setState(238);
      match(PascalSParser::RBRACK2);
      setState(239);
      match(PascalSParser::OF);
      setState(240);
      type_();
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

//----------------- PeriodsContext ------------------------------------------------------------------

PascalSParser::PeriodsContext::PeriodsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::PeriodContext *> PascalSParser::PeriodsContext::period() {
  return getRuleContexts<PascalSParser::PeriodContext>();
}

PascalSParser::PeriodContext* PascalSParser::PeriodsContext::period(size_t i) {
  return getRuleContext<PascalSParser::PeriodContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::PeriodsContext::COMMA() {
  return getTokens(PascalSParser::COMMA);
}

tree::TerminalNode* PascalSParser::PeriodsContext::COMMA(size_t i) {
  return getToken(PascalSParser::COMMA, i);
}


size_t PascalSParser::PeriodsContext::getRuleIndex() const {
  return PascalSParser::RulePeriods;
}


antlrcpp::Any PascalSParser::PeriodsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitPeriods(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::PeriodsContext* PascalSParser::periods() {
  PeriodsContext *_localctx = _tracker.createInstance<PeriodsContext>(_ctx, getState());
  enterRule(_localctx, 38, PascalSParser::RulePeriods);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    period();
    setState(249);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::COMMA) {
      setState(245);
      match(PascalSParser::COMMA);
      setState(246);
      period();
      setState(251);
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

//----------------- PeriodContext ------------------------------------------------------------------

PascalSParser::PeriodContext::PeriodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::ConstantContext *> PascalSParser::PeriodContext::constant() {
  return getRuleContexts<PascalSParser::ConstantContext>();
}

PascalSParser::ConstantContext* PascalSParser::PeriodContext::constant(size_t i) {
  return getRuleContext<PascalSParser::ConstantContext>(i);
}

tree::TerminalNode* PascalSParser::PeriodContext::DOTDOT() {
  return getToken(PascalSParser::DOTDOT, 0);
}


size_t PascalSParser::PeriodContext::getRuleIndex() const {
  return PascalSParser::RulePeriod;
}


antlrcpp::Any PascalSParser::PeriodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitPeriod(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::PeriodContext* PascalSParser::period() {
  PeriodContext *_localctx = _tracker.createInstance<PeriodContext>(_ctx, getState());
  enterRule(_localctx, 40, PascalSParser::RulePeriod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    constant();
    setState(253);
    match(PascalSParser::DOTDOT);
    setState(254);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordTypeContext ------------------------------------------------------------------

PascalSParser::RecordTypeContext::RecordTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::RecordTypeContext::RECORD() {
  return getToken(PascalSParser::RECORD, 0);
}

tree::TerminalNode* PascalSParser::RecordTypeContext::END() {
  return getToken(PascalSParser::END, 0);
}

PascalSParser::RecordFieldContext* PascalSParser::RecordTypeContext::recordField() {
  return getRuleContext<PascalSParser::RecordFieldContext>(0);
}


size_t PascalSParser::RecordTypeContext::getRuleIndex() const {
  return PascalSParser::RuleRecordType;
}


antlrcpp::Any PascalSParser::RecordTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRecordType(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::RecordTypeContext* PascalSParser::recordType() {
  RecordTypeContext *_localctx = _tracker.createInstance<RecordTypeContext>(_ctx, getState());
  enterRule(_localctx, 42, PascalSParser::RuleRecordType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(PascalSParser::RECORD);
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::IDENT) {
      setState(257);
      recordField();
    }
    setState(260);
    match(PascalSParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordFieldContext ------------------------------------------------------------------

PascalSParser::RecordFieldContext::RecordFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::VariableDeclarationContext *> PascalSParser::RecordFieldContext::variableDeclaration() {
  return getRuleContexts<PascalSParser::VariableDeclarationContext>();
}

PascalSParser::VariableDeclarationContext* PascalSParser::RecordFieldContext::variableDeclaration(size_t i) {
  return getRuleContext<PascalSParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::RecordFieldContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::RecordFieldContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}


size_t PascalSParser::RecordFieldContext::getRuleIndex() const {
  return PascalSParser::RuleRecordField;
}


antlrcpp::Any PascalSParser::RecordFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRecordField(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::RecordFieldContext* PascalSParser::recordField() {
  RecordFieldContext *_localctx = _tracker.createInstance<RecordFieldContext>(_ctx, getState());
  enterRule(_localctx, 44, PascalSParser::RuleRecordField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(262);
    variableDeclaration();
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(263);
        match(PascalSParser::SEMI);
        setState(264);
        variableDeclaration(); 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(270);
    match(PascalSParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationPartContext ------------------------------------------------------------------

PascalSParser::VariableDeclarationPartContext::VariableDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::VariableDeclarationPartContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

std::vector<PascalSParser::VariableDeclarationContext *> PascalSParser::VariableDeclarationPartContext::variableDeclaration() {
  return getRuleContexts<PascalSParser::VariableDeclarationContext>();
}

PascalSParser::VariableDeclarationContext* PascalSParser::VariableDeclarationPartContext::variableDeclaration(size_t i) {
  return getRuleContext<PascalSParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableDeclarationPartContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::VariableDeclarationPartContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}


size_t PascalSParser::VariableDeclarationPartContext::getRuleIndex() const {
  return PascalSParser::RuleVariableDeclarationPart;
}


antlrcpp::Any PascalSParser::VariableDeclarationPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationPart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::VariableDeclarationPartContext* PascalSParser::variableDeclarationPart() {
  VariableDeclarationPartContext *_localctx = _tracker.createInstance<VariableDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 46, PascalSParser::RuleVariableDeclarationPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(PascalSParser::VAR);
    setState(273);
    variableDeclaration();
    setState(278);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(274);
        match(PascalSParser::SEMI);
        setState(275);
        variableDeclaration(); 
      }
      setState(280);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
    setState(281);
    match(PascalSParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

PascalSParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierListContext* PascalSParser::VariableDeclarationContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::VariableDeclarationContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::Type_Context* PascalSParser::VariableDeclarationContext::type_() {
  return getRuleContext<PascalSParser::Type_Context>(0);
}


size_t PascalSParser::VariableDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleVariableDeclaration;
}


antlrcpp::Any PascalSParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::VariableDeclarationContext* PascalSParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, PascalSParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    identifierList();
    setState(284);
    match(PascalSParser::COLON);
    setState(285);
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

PascalSParser::ProcedureAndFunctionDeclarationPartContext::ProcedureAndFunctionDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ProcedureOrFunctionDeclarationContext* PascalSParser::ProcedureAndFunctionDeclarationPartContext::procedureOrFunctionDeclaration() {
  return getRuleContext<PascalSParser::ProcedureOrFunctionDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::ProcedureAndFunctionDeclarationPartContext::SEMI() {
  return getToken(PascalSParser::SEMI, 0);
}


size_t PascalSParser::ProcedureAndFunctionDeclarationPartContext::getRuleIndex() const {
  return PascalSParser::RuleProcedureAndFunctionDeclarationPart;
}


antlrcpp::Any PascalSParser::ProcedureAndFunctionDeclarationPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProcedureAndFunctionDeclarationPart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProcedureAndFunctionDeclarationPartContext* PascalSParser::procedureAndFunctionDeclarationPart() {
  ProcedureAndFunctionDeclarationPartContext *_localctx = _tracker.createInstance<ProcedureAndFunctionDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 50, PascalSParser::RuleProcedureAndFunctionDeclarationPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    procedureOrFunctionDeclaration();
    setState(288);
    match(PascalSParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureOrFunctionDeclarationContext ------------------------------------------------------------------

PascalSParser::ProcedureOrFunctionDeclarationContext::ProcedureOrFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::ProcedureOrFunctionDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleProcedureOrFunctionDeclaration;
}

void PascalSParser::ProcedureOrFunctionDeclarationContext::copyFrom(ProcedureOrFunctionDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProOrFuncDecProContext ------------------------------------------------------------------

PascalSParser::ProcedureDeclarationContext* PascalSParser::ProOrFuncDecProContext::procedureDeclaration() {
  return getRuleContext<PascalSParser::ProcedureDeclarationContext>(0);
}

PascalSParser::ProOrFuncDecProContext::ProOrFuncDecProContext(ProcedureOrFunctionDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ProOrFuncDecProContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProOrFuncDecPro(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProOrFuncDecFuncContext ------------------------------------------------------------------

PascalSParser::FunctionDeclarationContext* PascalSParser::ProOrFuncDecFuncContext::functionDeclaration() {
  return getRuleContext<PascalSParser::FunctionDeclarationContext>(0);
}

PascalSParser::ProOrFuncDecFuncContext::ProOrFuncDecFuncContext(ProcedureOrFunctionDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ProOrFuncDecFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProOrFuncDecFunc(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::ProcedureOrFunctionDeclarationContext* PascalSParser::procedureOrFunctionDeclaration() {
  ProcedureOrFunctionDeclarationContext *_localctx = _tracker.createInstance<ProcedureOrFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 52, PascalSParser::RuleProcedureOrFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(292);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::PROCEDURE: {
        _localctx = _tracker.createInstance<PascalSParser::ProOrFuncDecProContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(290);
        procedureDeclaration();
        break;
      }

      case PascalSParser::FUNCTION: {
        _localctx = _tracker.createInstance<PascalSParser::ProOrFuncDecFuncContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(291);
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

PascalSParser::ProcedureDeclarationContext::ProcedureDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ProcedureDeclarationContext::PROCEDURE() {
  return getToken(PascalSParser::PROCEDURE, 0);
}

PascalSParser::IdentifierContext* PascalSParser::ProcedureDeclarationContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::ProcedureDeclarationContext::SEMI() {
  return getToken(PascalSParser::SEMI, 0);
}

PascalSParser::BlockContext* PascalSParser::ProcedureDeclarationContext::block() {
  return getRuleContext<PascalSParser::BlockContext>(0);
}

PascalSParser::FormalParameterListContext* PascalSParser::ProcedureDeclarationContext::formalParameterList() {
  return getRuleContext<PascalSParser::FormalParameterListContext>(0);
}


size_t PascalSParser::ProcedureDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleProcedureDeclaration;
}


antlrcpp::Any PascalSParser::ProcedureDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProcedureDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProcedureDeclarationContext* PascalSParser::procedureDeclaration() {
  ProcedureDeclarationContext *_localctx = _tracker.createInstance<ProcedureDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 54, PascalSParser::RuleProcedureDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(PascalSParser::PROCEDURE);
    setState(295);
    identifier();
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::LPAREN) {
      setState(296);
      formalParameterList();
    }
    setState(299);
    match(PascalSParser::SEMI);
    setState(300);
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

PascalSParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::FormalParameterListContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

std::vector<PascalSParser::FormalParameterSectionContext *> PascalSParser::FormalParameterListContext::formalParameterSection() {
  return getRuleContexts<PascalSParser::FormalParameterSectionContext>();
}

PascalSParser::FormalParameterSectionContext* PascalSParser::FormalParameterListContext::formalParameterSection(size_t i) {
  return getRuleContext<PascalSParser::FormalParameterSectionContext>(i);
}

tree::TerminalNode* PascalSParser::FormalParameterListContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> PascalSParser::FormalParameterListContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::FormalParameterListContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}


size_t PascalSParser::FormalParameterListContext::getRuleIndex() const {
  return PascalSParser::RuleFormalParameterList;
}


antlrcpp::Any PascalSParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::FormalParameterListContext* PascalSParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 56, PascalSParser::RuleFormalParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(PascalSParser::LPAREN);
    setState(303);
    formalParameterSection();
    setState(308);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::SEMI) {
      setState(304);
      match(PascalSParser::SEMI);
      setState(305);
      formalParameterSection();
      setState(310);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(311);
    match(PascalSParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterSectionContext ------------------------------------------------------------------

PascalSParser::FormalParameterSectionContext::FormalParameterSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::FormalParameterSectionContext::getRuleIndex() const {
  return PascalSParser::RuleFormalParameterSection;
}

void PascalSParser::FormalParameterSectionContext::copyFrom(FormalParameterSectionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FormalParaSecGroupContext ------------------------------------------------------------------

PascalSParser::ParameterGroupContext* PascalSParser::FormalParaSecGroupContext::parameterGroup() {
  return getRuleContext<PascalSParser::ParameterGroupContext>(0);
}

PascalSParser::FormalParaSecGroupContext::FormalParaSecGroupContext(FormalParameterSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FormalParaSecGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFormalParaSecGroup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FormalParaSecVarGroupContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::FormalParaSecVarGroupContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

PascalSParser::ParameterGroupContext* PascalSParser::FormalParaSecVarGroupContext::parameterGroup() {
  return getRuleContext<PascalSParser::ParameterGroupContext>(0);
}

PascalSParser::FormalParaSecVarGroupContext::FormalParaSecVarGroupContext(FormalParameterSectionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FormalParaSecVarGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFormalParaSecVarGroup(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::FormalParameterSectionContext* PascalSParser::formalParameterSection() {
  FormalParameterSectionContext *_localctx = _tracker.createInstance<FormalParameterSectionContext>(_ctx, getState());
  enterRule(_localctx, 58, PascalSParser::RuleFormalParameterSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(316);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::IDENT: {
        _localctx = _tracker.createInstance<PascalSParser::FormalParaSecGroupContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(313);
        parameterGroup();
        break;
      }

      case PascalSParser::VAR: {
        _localctx = _tracker.createInstance<PascalSParser::FormalParaSecVarGroupContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(314);
        match(PascalSParser::VAR);
        setState(315);
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

PascalSParser::ParameterGroupContext::ParameterGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierListContext* PascalSParser::ParameterGroupContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::ParameterGroupContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::SimpleTypeContext* PascalSParser::ParameterGroupContext::simpleType() {
  return getRuleContext<PascalSParser::SimpleTypeContext>(0);
}


size_t PascalSParser::ParameterGroupContext::getRuleIndex() const {
  return PascalSParser::RuleParameterGroup;
}


antlrcpp::Any PascalSParser::ParameterGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitParameterGroup(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ParameterGroupContext* PascalSParser::parameterGroup() {
  ParameterGroupContext *_localctx = _tracker.createInstance<ParameterGroupContext>(_ctx, getState());
  enterRule(_localctx, 60, PascalSParser::RuleParameterGroup);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    identifierList();
    setState(319);
    match(PascalSParser::COLON);
    setState(320);
    simpleType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

PascalSParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::IdentifierContext *> PascalSParser::IdentifierListContext::identifier() {
  return getRuleContexts<PascalSParser::IdentifierContext>();
}

PascalSParser::IdentifierContext* PascalSParser::IdentifierListContext::identifier(size_t i) {
  return getRuleContext<PascalSParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::IdentifierListContext::COMMA() {
  return getTokens(PascalSParser::COMMA);
}

tree::TerminalNode* PascalSParser::IdentifierListContext::COMMA(size_t i) {
  return getToken(PascalSParser::COMMA, i);
}


size_t PascalSParser::IdentifierListContext::getRuleIndex() const {
  return PascalSParser::RuleIdentifierList;
}


antlrcpp::Any PascalSParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::IdentifierListContext* PascalSParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 62, PascalSParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    identifier();
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::COMMA) {
      setState(323);
      match(PascalSParser::COMMA);
      setState(324);
      identifier();
      setState(329);
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

PascalSParser::ConstListContext::ConstListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::ConstantContext *> PascalSParser::ConstListContext::constant() {
  return getRuleContexts<PascalSParser::ConstantContext>();
}

PascalSParser::ConstantContext* PascalSParser::ConstListContext::constant(size_t i) {
  return getRuleContext<PascalSParser::ConstantContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::ConstListContext::COMMA() {
  return getTokens(PascalSParser::COMMA);
}

tree::TerminalNode* PascalSParser::ConstListContext::COMMA(size_t i) {
  return getToken(PascalSParser::COMMA, i);
}


size_t PascalSParser::ConstListContext::getRuleIndex() const {
  return PascalSParser::RuleConstList;
}


antlrcpp::Any PascalSParser::ConstListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConstList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ConstListContext* PascalSParser::constList() {
  ConstListContext *_localctx = _tracker.createInstance<ConstListContext>(_ctx, getState());
  enterRule(_localctx, 64, PascalSParser::RuleConstList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    constant();
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::COMMA) {
      setState(331);
      match(PascalSParser::COMMA);
      setState(332);
      constant();
      setState(337);
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

PascalSParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(PascalSParser::FUNCTION, 0);
}

PascalSParser::IdentifierContext* PascalSParser::FunctionDeclarationContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::FunctionDeclarationContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::SimpleTypeContext* PascalSParser::FunctionDeclarationContext::simpleType() {
  return getRuleContext<PascalSParser::SimpleTypeContext>(0);
}

tree::TerminalNode* PascalSParser::FunctionDeclarationContext::SEMI() {
  return getToken(PascalSParser::SEMI, 0);
}

PascalSParser::BlockContext* PascalSParser::FunctionDeclarationContext::block() {
  return getRuleContext<PascalSParser::BlockContext>(0);
}

PascalSParser::FormalParameterListContext* PascalSParser::FunctionDeclarationContext::formalParameterList() {
  return getRuleContext<PascalSParser::FormalParameterListContext>(0);
}


size_t PascalSParser::FunctionDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleFunctionDeclaration;
}


antlrcpp::Any PascalSParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::FunctionDeclarationContext* PascalSParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, PascalSParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(PascalSParser::FUNCTION);
    setState(339);
    identifier();
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::LPAREN) {
      setState(340);
      formalParameterList();
    }
    setState(343);
    match(PascalSParser::COLON);
    setState(344);
    simpleType();
    setState(345);
    match(PascalSParser::SEMI);
    setState(346);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PascalSParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::StatementContext::getRuleIndex() const {
  return PascalSParser::RuleStatement;
}

void PascalSParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleStateContext ------------------------------------------------------------------

PascalSParser::SimpleStatementContext* PascalSParser::SimpleStateContext::simpleStatement() {
  return getRuleContext<PascalSParser::SimpleStatementContext>(0);
}

PascalSParser::SimpleStateContext::SimpleStateContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::SimpleStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSimpleState(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StructuredStateContext ------------------------------------------------------------------

PascalSParser::StructuredStatementContext* PascalSParser::StructuredStateContext::structuredStatement() {
  return getRuleContext<PascalSParser::StructuredStatementContext>(0);
}

PascalSParser::StructuredStateContext::StructuredStateContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::StructuredStateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStructuredState(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::StatementContext* PascalSParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 68, PascalSParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(350);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ELSE:
      case PascalSParser::END:
      case PascalSParser::UNTIL:
      case PascalSParser::SEMI:
      case PascalSParser::IDENT: {
        _localctx = _tracker.createInstance<PascalSParser::SimpleStateContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(348);
        simpleStatement();
        break;
      }

      case PascalSParser::BEGIN:
      case PascalSParser::CASE:
      case PascalSParser::FOR:
      case PascalSParser::IF:
      case PascalSParser::REPEAT:
      case PascalSParser::WHILE: {
        _localctx = _tracker.createInstance<PascalSParser::StructuredStateContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(349);
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

PascalSParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::SimpleStatementContext::getRuleIndex() const {
  return PascalSParser::RuleSimpleStatement;
}

void PascalSParser::SimpleStatementContext::copyFrom(SimpleStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleStateAssignContext ------------------------------------------------------------------

PascalSParser::AssignmentStatementContext* PascalSParser::SimpleStateAssignContext::assignmentStatement() {
  return getRuleContext<PascalSParser::AssignmentStatementContext>(0);
}

PascalSParser::SimpleStateAssignContext::SimpleStateAssignContext(SimpleStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::SimpleStateAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStateAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleStateEmptyContext ------------------------------------------------------------------

PascalSParser::EmptyStatement_Context* PascalSParser::SimpleStateEmptyContext::emptyStatement_() {
  return getRuleContext<PascalSParser::EmptyStatement_Context>(0);
}

PascalSParser::SimpleStateEmptyContext::SimpleStateEmptyContext(SimpleStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::SimpleStateEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStateEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleStateProcContext ------------------------------------------------------------------

PascalSParser::ProcedureStatementContext* PascalSParser::SimpleStateProcContext::procedureStatement() {
  return getRuleContext<PascalSParser::ProcedureStatementContext>(0);
}

PascalSParser::SimpleStateProcContext::SimpleStateProcContext(SimpleStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::SimpleStateProcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStateProc(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::SimpleStatementContext* PascalSParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, PascalSParser::RuleSimpleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(355);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalSParser::SimpleStateAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(352);
      assignmentStatement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalSParser::SimpleStateProcContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(353);
      procedureStatement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalSParser::SimpleStateEmptyContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(354);
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

PascalSParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::VariableContext* PascalSParser::AssignmentStatementContext::variable() {
  return getRuleContext<PascalSParser::VariableContext>(0);
}

tree::TerminalNode* PascalSParser::AssignmentStatementContext::ASSIGN() {
  return getToken(PascalSParser::ASSIGN, 0);
}

PascalSParser::ExpressionContext* PascalSParser::AssignmentStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}


size_t PascalSParser::AssignmentStatementContext::getRuleIndex() const {
  return PascalSParser::RuleAssignmentStatement;
}


antlrcpp::Any PascalSParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::AssignmentStatementContext* PascalSParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, PascalSParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    variable();
    setState(358);
    match(PascalSParser::ASSIGN);
    setState(359);
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

PascalSParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::IdentifierContext *> PascalSParser::VariableContext::identifier() {
  return getRuleContexts<PascalSParser::IdentifierContext>();
}

PascalSParser::IdentifierContext* PascalSParser::VariableContext::identifier(size_t i) {
  return getRuleContext<PascalSParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableContext::LBRACK() {
  return getTokens(PascalSParser::LBRACK);
}

tree::TerminalNode* PascalSParser::VariableContext::LBRACK(size_t i) {
  return getToken(PascalSParser::LBRACK, i);
}

std::vector<PascalSParser::ExpressionContext *> PascalSParser::VariableContext::expression() {
  return getRuleContexts<PascalSParser::ExpressionContext>();
}

PascalSParser::ExpressionContext* PascalSParser::VariableContext::expression(size_t i) {
  return getRuleContext<PascalSParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableContext::RBRACK() {
  return getTokens(PascalSParser::RBRACK);
}

tree::TerminalNode* PascalSParser::VariableContext::RBRACK(size_t i) {
  return getToken(PascalSParser::RBRACK, i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableContext::LBRACK2() {
  return getTokens(PascalSParser::LBRACK2);
}

tree::TerminalNode* PascalSParser::VariableContext::LBRACK2(size_t i) {
  return getToken(PascalSParser::LBRACK2, i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableContext::RBRACK2() {
  return getTokens(PascalSParser::RBRACK2);
}

tree::TerminalNode* PascalSParser::VariableContext::RBRACK2(size_t i) {
  return getToken(PascalSParser::RBRACK2, i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableContext::DOT() {
  return getTokens(PascalSParser::DOT);
}

tree::TerminalNode* PascalSParser::VariableContext::DOT(size_t i) {
  return getToken(PascalSParser::DOT, i);
}

std::vector<tree::TerminalNode *> PascalSParser::VariableContext::COMMA() {
  return getTokens(PascalSParser::COMMA);
}

tree::TerminalNode* PascalSParser::VariableContext::COMMA(size_t i) {
  return getToken(PascalSParser::COMMA, i);
}


size_t PascalSParser::VariableContext::getRuleIndex() const {
  return PascalSParser::RuleVariable;
}


antlrcpp::Any PascalSParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::VariableContext* PascalSParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 74, PascalSParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    identifier();
    setState(388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalSParser::LBRACK)
      | (1ULL << PascalSParser::LBRACK2)
      | (1ULL << PascalSParser::DOT))) != 0)) {
      setState(386);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PascalSParser::LBRACK: {
          setState(362);
          match(PascalSParser::LBRACK);
          setState(363);
          expression();
          setState(368);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == PascalSParser::COMMA) {
            setState(364);
            match(PascalSParser::COMMA);
            setState(365);
            expression();
            setState(370);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(371);
          match(PascalSParser::RBRACK);
          break;
        }

        case PascalSParser::LBRACK2: {
          setState(373);
          match(PascalSParser::LBRACK2);
          setState(374);
          expression();
          setState(379);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == PascalSParser::COMMA) {
            setState(375);
            match(PascalSParser::COMMA);
            setState(376);
            expression();
            setState(381);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(382);
          match(PascalSParser::RBRACK2);
          break;
        }

        case PascalSParser::DOT: {
          setState(384);
          match(PascalSParser::DOT);
          setState(385);
          identifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(390);
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

PascalSParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::SimpleExpressionContext *> PascalSParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<PascalSParser::SimpleExpressionContext>();
}

PascalSParser::SimpleExpressionContext* PascalSParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<PascalSParser::SimpleExpressionContext>(i);
}

PascalSParser::RelationaloperatorContext* PascalSParser::ExpressionContext::relationaloperator() {
  return getRuleContext<PascalSParser::RelationaloperatorContext>(0);
}


size_t PascalSParser::ExpressionContext::getRuleIndex() const {
  return PascalSParser::RuleExpression;
}


antlrcpp::Any PascalSParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ExpressionContext* PascalSParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, PascalSParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    simpleExpression();
    setState(395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalSParser::EQUAL)
      | (1ULL << PascalSParser::NOT_EQUAL)
      | (1ULL << PascalSParser::LT)
      | (1ULL << PascalSParser::LE)
      | (1ULL << PascalSParser::GE)
      | (1ULL << PascalSParser::GT))) != 0)) {
      setState(392);
      relationaloperator();
      setState(393);
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

//----------------- RelationaloperatorContext ------------------------------------------------------------------

PascalSParser::RelationaloperatorContext::RelationaloperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::RelationaloperatorContext::getRuleIndex() const {
  return PascalSParser::RuleRelationaloperator;
}

void PascalSParser::RelationaloperatorContext::copyFrom(RelationaloperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OpGeContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpGeContext::GE() {
  return getToken(PascalSParser::GE, 0);
}

PascalSParser::OpGeContext::OpGeContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpGeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpGe(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpGtContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpGtContext::GT() {
  return getToken(PascalSParser::GT, 0);
}

PascalSParser::OpGtContext::OpGtContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpGtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpGt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpLtContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpLtContext::LT() {
  return getToken(PascalSParser::LT, 0);
}

PascalSParser::OpLtContext::OpLtContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpLtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpLt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpEqualContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpEqualContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::OpEqualContext::OpEqualContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpNotEqualContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpNotEqualContext::NOT_EQUAL() {
  return getToken(PascalSParser::NOT_EQUAL, 0);
}

PascalSParser::OpNotEqualContext::OpNotEqualContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpNotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpNotEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpLeContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpLeContext::LE() {
  return getToken(PascalSParser::LE, 0);
}

PascalSParser::OpLeContext::OpLeContext(RelationaloperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpLeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpLe(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::RelationaloperatorContext* PascalSParser::relationaloperator() {
  RelationaloperatorContext *_localctx = _tracker.createInstance<RelationaloperatorContext>(_ctx, getState());
  enterRule(_localctx, 78, PascalSParser::RuleRelationaloperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(403);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::EQUAL: {
        _localctx = _tracker.createInstance<PascalSParser::OpEqualContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(397);
        match(PascalSParser::EQUAL);
        break;
      }

      case PascalSParser::NOT_EQUAL: {
        _localctx = _tracker.createInstance<PascalSParser::OpNotEqualContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(398);
        match(PascalSParser::NOT_EQUAL);
        break;
      }

      case PascalSParser::LT: {
        _localctx = _tracker.createInstance<PascalSParser::OpLtContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(399);
        match(PascalSParser::LT);
        break;
      }

      case PascalSParser::LE: {
        _localctx = _tracker.createInstance<PascalSParser::OpLeContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(400);
        match(PascalSParser::LE);
        break;
      }

      case PascalSParser::GE: {
        _localctx = _tracker.createInstance<PascalSParser::OpGeContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(401);
        match(PascalSParser::GE);
        break;
      }

      case PascalSParser::GT: {
        _localctx = _tracker.createInstance<PascalSParser::OpGtContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(402);
        match(PascalSParser::GT);
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

PascalSParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::TermContext *> PascalSParser::SimpleExpressionContext::term() {
  return getRuleContexts<PascalSParser::TermContext>();
}

PascalSParser::TermContext* PascalSParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<PascalSParser::TermContext>(i);
}

PascalSParser::AdditiveoperatorContext* PascalSParser::SimpleExpressionContext::additiveoperator() {
  return getRuleContext<PascalSParser::AdditiveoperatorContext>(0);
}


size_t PascalSParser::SimpleExpressionContext::getRuleIndex() const {
  return PascalSParser::RuleSimpleExpression;
}


antlrcpp::Any PascalSParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::SimpleExpressionContext* PascalSParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 80, PascalSParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    term();
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalSParser::OR)
      | (1ULL << PascalSParser::PLUS)
      | (1ULL << PascalSParser::MINUS))) != 0)) {
      setState(406);
      additiveoperator();
      setState(407);
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

//----------------- AdditiveoperatorContext ------------------------------------------------------------------

PascalSParser::AdditiveoperatorContext::AdditiveoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::AdditiveoperatorContext::getRuleIndex() const {
  return PascalSParser::RuleAdditiveoperator;
}

void PascalSParser::AdditiveoperatorContext::copyFrom(AdditiveoperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OpOrContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpOrContext::OR() {
  return getToken(PascalSParser::OR, 0);
}

PascalSParser::OpOrContext::OpOrContext(AdditiveoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpPlusContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpPlusContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

PascalSParser::OpPlusContext::OpPlusContext(AdditiveoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpMinusContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpMinusContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

PascalSParser::OpMinusContext::OpMinusContext(AdditiveoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpMinus(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::AdditiveoperatorContext* PascalSParser::additiveoperator() {
  AdditiveoperatorContext *_localctx = _tracker.createInstance<AdditiveoperatorContext>(_ctx, getState());
  enterRule(_localctx, 82, PascalSParser::RuleAdditiveoperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(414);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::PLUS: {
        _localctx = _tracker.createInstance<PascalSParser::OpPlusContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(411);
        match(PascalSParser::PLUS);
        break;
      }

      case PascalSParser::MINUS: {
        _localctx = _tracker.createInstance<PascalSParser::OpMinusContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(412);
        match(PascalSParser::MINUS);
        break;
      }

      case PascalSParser::OR: {
        _localctx = _tracker.createInstance<PascalSParser::OpOrContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(413);
        match(PascalSParser::OR);
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

PascalSParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::SignedFactorContext *> PascalSParser::TermContext::signedFactor() {
  return getRuleContexts<PascalSParser::SignedFactorContext>();
}

PascalSParser::SignedFactorContext* PascalSParser::TermContext::signedFactor(size_t i) {
  return getRuleContext<PascalSParser::SignedFactorContext>(i);
}

PascalSParser::MultiplicativeoperatorContext* PascalSParser::TermContext::multiplicativeoperator() {
  return getRuleContext<PascalSParser::MultiplicativeoperatorContext>(0);
}


size_t PascalSParser::TermContext::getRuleIndex() const {
  return PascalSParser::RuleTerm;
}


antlrcpp::Any PascalSParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::TermContext* PascalSParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 84, PascalSParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    signedFactor();
    setState(420);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalSParser::AND)
      | (1ULL << PascalSParser::DIV)
      | (1ULL << PascalSParser::MOD)
      | (1ULL << PascalSParser::STAR)
      | (1ULL << PascalSParser::SLASH))) != 0)) {
      setState(417);
      multiplicativeoperator();
      setState(418);
      signedFactor();
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

PascalSParser::MultiplicativeoperatorContext::MultiplicativeoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::MultiplicativeoperatorContext::getRuleIndex() const {
  return PascalSParser::RuleMultiplicativeoperator;
}

void PascalSParser::MultiplicativeoperatorContext::copyFrom(MultiplicativeoperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OpStarContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpStarContext::STAR() {
  return getToken(PascalSParser::STAR, 0);
}

PascalSParser::OpStarContext::OpStarContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpStarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpStar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpSlashContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpSlashContext::SLASH() {
  return getToken(PascalSParser::SLASH, 0);
}

PascalSParser::OpSlashContext::OpSlashContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpSlashContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpSlash(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpAndContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpAndContext::AND() {
  return getToken(PascalSParser::AND, 0);
}

PascalSParser::OpAndContext::OpAndContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpModContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpModContext::MOD() {
  return getToken(PascalSParser::MOD, 0);
}

PascalSParser::OpModContext::OpModContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpDivContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::OpDivContext::DIV() {
  return getToken(PascalSParser::DIV, 0);
}

PascalSParser::OpDivContext::OpDivContext(MultiplicativeoperatorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::OpDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitOpDiv(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::MultiplicativeoperatorContext* PascalSParser::multiplicativeoperator() {
  MultiplicativeoperatorContext *_localctx = _tracker.createInstance<MultiplicativeoperatorContext>(_ctx, getState());
  enterRule(_localctx, 86, PascalSParser::RuleMultiplicativeoperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(427);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::STAR: {
        _localctx = _tracker.createInstance<PascalSParser::OpStarContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(422);
        match(PascalSParser::STAR);
        break;
      }

      case PascalSParser::SLASH: {
        _localctx = _tracker.createInstance<PascalSParser::OpSlashContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(423);
        match(PascalSParser::SLASH);
        break;
      }

      case PascalSParser::DIV: {
        _localctx = _tracker.createInstance<PascalSParser::OpDivContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(424);
        match(PascalSParser::DIV);
        break;
      }

      case PascalSParser::MOD: {
        _localctx = _tracker.createInstance<PascalSParser::OpModContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(425);
        match(PascalSParser::MOD);
        break;
      }

      case PascalSParser::AND: {
        _localctx = _tracker.createInstance<PascalSParser::OpAndContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(426);
        match(PascalSParser::AND);
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

PascalSParser::SignedFactorContext::SignedFactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::FactorContext* PascalSParser::SignedFactorContext::factor() {
  return getRuleContext<PascalSParser::FactorContext>(0);
}

tree::TerminalNode* PascalSParser::SignedFactorContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

tree::TerminalNode* PascalSParser::SignedFactorContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}


size_t PascalSParser::SignedFactorContext::getRuleIndex() const {
  return PascalSParser::RuleSignedFactor;
}


antlrcpp::Any PascalSParser::SignedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitSignedFactor(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::SignedFactorContext* PascalSParser::signedFactor() {
  SignedFactorContext *_localctx = _tracker.createInstance<SignedFactorContext>(_ctx, getState());
  enterRule(_localctx, 88, PascalSParser::RuleSignedFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::PLUS

    || _la == PascalSParser::MINUS) {
      setState(429);
      _la = _input->LA(1);
      if (!(_la == PascalSParser::PLUS

      || _la == PascalSParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(432);
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

PascalSParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::FactorContext::getRuleIndex() const {
  return PascalSParser::RuleFactor;
}

void PascalSParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactorNotFactContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::FactorNotFactContext::NOT() {
  return getToken(PascalSParser::NOT, 0);
}

PascalSParser::FactorContext* PascalSParser::FactorNotFactContext::factor() {
  return getRuleContext<PascalSParser::FactorContext>(0);
}

PascalSParser::FactorNotFactContext::FactorNotFactContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FactorNotFactContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFactorNotFact(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorBoolContext ------------------------------------------------------------------

PascalSParser::Bool_Context* PascalSParser::FactorBoolContext::bool_() {
  return getRuleContext<PascalSParser::Bool_Context>(0);
}

PascalSParser::FactorBoolContext::FactorBoolContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FactorBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFactorBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorUnsConstContext ------------------------------------------------------------------

PascalSParser::UnsignedConstantContext* PascalSParser::FactorUnsConstContext::unsignedConstant() {
  return getRuleContext<PascalSParser::UnsignedConstantContext>(0);
}

PascalSParser::FactorUnsConstContext::FactorUnsConstContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FactorUnsConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFactorUnsConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorVarContext ------------------------------------------------------------------

PascalSParser::VariableContext* PascalSParser::FactorVarContext::variable() {
  return getRuleContext<PascalSParser::VariableContext>(0);
}

PascalSParser::FactorVarContext::FactorVarContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FactorVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFactorVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorExprContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::FactorExprContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::ExpressionContext* PascalSParser::FactorExprContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::FactorExprContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}

PascalSParser::FactorExprContext::FactorExprContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FactorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFactorExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorFuncContext ------------------------------------------------------------------

PascalSParser::FunctionDesignatorContext* PascalSParser::FactorFuncContext::functionDesignator() {
  return getRuleContext<PascalSParser::FunctionDesignatorContext>(0);
}

PascalSParser::FactorFuncContext::FactorFuncContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::FactorFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFactorFunc(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::FactorContext* PascalSParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 90, PascalSParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(444);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalSParser::FactorVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(434);
      variable();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalSParser::FactorExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(435);
      match(PascalSParser::LPAREN);
      setState(436);
      expression();
      setState(437);
      match(PascalSParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalSParser::FactorFuncContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(439);
      functionDesignator();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalSParser::FactorUnsConstContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(440);
      unsignedConstant();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PascalSParser::FactorNotFactContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(441);
      match(PascalSParser::NOT);
      setState(442);
      factor();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PascalSParser::FactorBoolContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(443);
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

PascalSParser::UnsignedConstantContext::UnsignedConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::UnsignedConstantContext::getRuleIndex() const {
  return PascalSParser::RuleUnsignedConstant;
}

void PascalSParser::UnsignedConstantContext::copyFrom(UnsignedConstantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnsignedConstUnsignedNumContext ------------------------------------------------------------------

PascalSParser::UnsignedNumberContext* PascalSParser::UnsignedConstUnsignedNumContext::unsignedNumber() {
  return getRuleContext<PascalSParser::UnsignedNumberContext>(0);
}

PascalSParser::UnsignedConstUnsignedNumContext::UnsignedConstUnsignedNumContext(UnsignedConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::UnsignedConstUnsignedNumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitUnsignedConstUnsignedNum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedConstStrContext ------------------------------------------------------------------

PascalSParser::StringContext* PascalSParser::UnsignedConstStrContext::string() {
  return getRuleContext<PascalSParser::StringContext>(0);
}

PascalSParser::UnsignedConstStrContext::UnsignedConstStrContext(UnsignedConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::UnsignedConstStrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitUnsignedConstStr(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::UnsignedConstantContext* PascalSParser::unsignedConstant() {
  UnsignedConstantContext *_localctx = _tracker.createInstance<UnsignedConstantContext>(_ctx, getState());
  enterRule(_localctx, 92, PascalSParser::RuleUnsignedConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(448);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::NUM_INT:
      case PascalSParser::NUM_REAL: {
        _localctx = _tracker.createInstance<PascalSParser::UnsignedConstUnsignedNumContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(446);
        unsignedNumber();
        break;
      }

      case PascalSParser::STRING_LITERAL: {
        _localctx = _tracker.createInstance<PascalSParser::UnsignedConstStrContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(447);
        string();
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

PascalSParser::FunctionDesignatorContext::FunctionDesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierContext* PascalSParser::FunctionDesignatorContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::FunctionDesignatorContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::ParameterListContext* PascalSParser::FunctionDesignatorContext::parameterList() {
  return getRuleContext<PascalSParser::ParameterListContext>(0);
}

tree::TerminalNode* PascalSParser::FunctionDesignatorContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}


size_t PascalSParser::FunctionDesignatorContext::getRuleIndex() const {
  return PascalSParser::RuleFunctionDesignator;
}


antlrcpp::Any PascalSParser::FunctionDesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDesignator(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::FunctionDesignatorContext* PascalSParser::functionDesignator() {
  FunctionDesignatorContext *_localctx = _tracker.createInstance<FunctionDesignatorContext>(_ctx, getState());
  enterRule(_localctx, 94, PascalSParser::RuleFunctionDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    identifier();
    setState(451);
    match(PascalSParser::LPAREN);
    setState(452);
    parameterList();
    setState(453);
    match(PascalSParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

PascalSParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::ActualParameterContext *> PascalSParser::ParameterListContext::actualParameter() {
  return getRuleContexts<PascalSParser::ActualParameterContext>();
}

PascalSParser::ActualParameterContext* PascalSParser::ParameterListContext::actualParameter(size_t i) {
  return getRuleContext<PascalSParser::ActualParameterContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::ParameterListContext::COMMA() {
  return getTokens(PascalSParser::COMMA);
}

tree::TerminalNode* PascalSParser::ParameterListContext::COMMA(size_t i) {
  return getToken(PascalSParser::COMMA, i);
}


size_t PascalSParser::ParameterListContext::getRuleIndex() const {
  return PascalSParser::RuleParameterList;
}


antlrcpp::Any PascalSParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ParameterListContext* PascalSParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 96, PascalSParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    actualParameter();
    setState(460);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::COMMA) {
      setState(456);
      match(PascalSParser::COMMA);
      setState(457);
      actualParameter();
      setState(462);
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

//----------------- ProcedureStatementContext ------------------------------------------------------------------

PascalSParser::ProcedureStatementContext::ProcedureStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierContext* PascalSParser::ProcedureStatementContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::ProcedureStatementContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::ParameterListContext* PascalSParser::ProcedureStatementContext::parameterList() {
  return getRuleContext<PascalSParser::ParameterListContext>(0);
}

tree::TerminalNode* PascalSParser::ProcedureStatementContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}


size_t PascalSParser::ProcedureStatementContext::getRuleIndex() const {
  return PascalSParser::RuleProcedureStatement;
}


antlrcpp::Any PascalSParser::ProcedureStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitProcedureStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProcedureStatementContext* PascalSParser::procedureStatement() {
  ProcedureStatementContext *_localctx = _tracker.createInstance<ProcedureStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, PascalSParser::RuleProcedureStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    identifier();
    setState(468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::LPAREN) {
      setState(464);
      match(PascalSParser::LPAREN);
      setState(465);
      parameterList();
      setState(466);
      match(PascalSParser::RPAREN);
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

PascalSParser::ActualParameterContext::ActualParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ExpressionContext* PascalSParser::ActualParameterContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

std::vector<PascalSParser::ParameterwidthContext *> PascalSParser::ActualParameterContext::parameterwidth() {
  return getRuleContexts<PascalSParser::ParameterwidthContext>();
}

PascalSParser::ParameterwidthContext* PascalSParser::ActualParameterContext::parameterwidth(size_t i) {
  return getRuleContext<PascalSParser::ParameterwidthContext>(i);
}


size_t PascalSParser::ActualParameterContext::getRuleIndex() const {
  return PascalSParser::RuleActualParameter;
}


antlrcpp::Any PascalSParser::ActualParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitActualParameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ActualParameterContext* PascalSParser::actualParameter() {
  ActualParameterContext *_localctx = _tracker.createInstance<ActualParameterContext>(_ctx, getState());
  enterRule(_localctx, 100, PascalSParser::RuleActualParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    expression();
    setState(474);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::COLON) {
      setState(471);
      parameterwidth();
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

//----------------- ParameterwidthContext ------------------------------------------------------------------

PascalSParser::ParameterwidthContext::ParameterwidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ParameterwidthContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::ExpressionContext* PascalSParser::ParameterwidthContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}


size_t PascalSParser::ParameterwidthContext::getRuleIndex() const {
  return PascalSParser::RuleParameterwidth;
}


antlrcpp::Any PascalSParser::ParameterwidthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitParameterwidth(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ParameterwidthContext* PascalSParser::parameterwidth() {
  ParameterwidthContext *_localctx = _tracker.createInstance<ParameterwidthContext>(_ctx, getState());
  enterRule(_localctx, 102, PascalSParser::RuleParameterwidth);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(PascalSParser::COLON);
    setState(478);
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

PascalSParser::EmptyStatement_Context::EmptyStatement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::EmptyStatement_Context::getRuleIndex() const {
  return PascalSParser::RuleEmptyStatement_;
}


antlrcpp::Any PascalSParser::EmptyStatement_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement_(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::EmptyStatement_Context* PascalSParser::emptyStatement_() {
  EmptyStatement_Context *_localctx = _tracker.createInstance<EmptyStatement_Context>(_ctx, getState());
  enterRule(_localctx, 104, PascalSParser::RuleEmptyStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
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

PascalSParser::Empty_Context::Empty_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::Empty_Context::getRuleIndex() const {
  return PascalSParser::RuleEmpty_;
}


antlrcpp::Any PascalSParser::Empty_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitEmpty_(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Empty_Context* PascalSParser::empty_() {
  Empty_Context *_localctx = _tracker.createInstance<Empty_Context>(_ctx, getState());
  enterRule(_localctx, 106, PascalSParser::RuleEmpty_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
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

PascalSParser::StructuredStatementContext::StructuredStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::StructuredStatementContext::getRuleIndex() const {
  return PascalSParser::RuleStructuredStatement;
}

void PascalSParser::StructuredStatementContext::copyFrom(StructuredStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StructuredStateRepetetiveContext ------------------------------------------------------------------

PascalSParser::RepetetiveStatementContext* PascalSParser::StructuredStateRepetetiveContext::repetetiveStatement() {
  return getRuleContext<PascalSParser::RepetetiveStatementContext>(0);
}

PascalSParser::StructuredStateRepetetiveContext::StructuredStateRepetetiveContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::StructuredStateRepetetiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStructuredStateRepetetive(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StructuredStateConditionalContext ------------------------------------------------------------------

PascalSParser::ConditionalStatementContext* PascalSParser::StructuredStateConditionalContext::conditionalStatement() {
  return getRuleContext<PascalSParser::ConditionalStatementContext>(0);
}

PascalSParser::StructuredStateConditionalContext::StructuredStateConditionalContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::StructuredStateConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStructuredStateConditional(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StructuredStateCompoundContext ------------------------------------------------------------------

PascalSParser::CompoundStatementContext* PascalSParser::StructuredStateCompoundContext::compoundStatement() {
  return getRuleContext<PascalSParser::CompoundStatementContext>(0);
}

PascalSParser::StructuredStateCompoundContext::StructuredStateCompoundContext(StructuredStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::StructuredStateCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStructuredStateCompound(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::StructuredStatementContext* PascalSParser::structuredStatement() {
  StructuredStatementContext *_localctx = _tracker.createInstance<StructuredStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, PascalSParser::RuleStructuredStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(487);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::BEGIN: {
        _localctx = _tracker.createInstance<PascalSParser::StructuredStateCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(484);
        compoundStatement();
        break;
      }

      case PascalSParser::CASE:
      case PascalSParser::IF: {
        _localctx = _tracker.createInstance<PascalSParser::StructuredStateConditionalContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(485);
        conditionalStatement();
        break;
      }

      case PascalSParser::FOR:
      case PascalSParser::REPEAT:
      case PascalSParser::WHILE: {
        _localctx = _tracker.createInstance<PascalSParser::StructuredStateRepetetiveContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(486);
        repetetiveStatement();
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

PascalSParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::CompoundStatementContext::BEGIN() {
  return getToken(PascalSParser::BEGIN, 0);
}

PascalSParser::StatementsContext* PascalSParser::CompoundStatementContext::statements() {
  return getRuleContext<PascalSParser::StatementsContext>(0);
}

tree::TerminalNode* PascalSParser::CompoundStatementContext::END() {
  return getToken(PascalSParser::END, 0);
}


size_t PascalSParser::CompoundStatementContext::getRuleIndex() const {
  return PascalSParser::RuleCompoundStatement;
}


antlrcpp::Any PascalSParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::CompoundStatementContext* PascalSParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, PascalSParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(PascalSParser::BEGIN);
    setState(490);
    statements();
    setState(491);
    match(PascalSParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

PascalSParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::StatementContext *> PascalSParser::StatementsContext::statement() {
  return getRuleContexts<PascalSParser::StatementContext>();
}

PascalSParser::StatementContext* PascalSParser::StatementsContext::statement(size_t i) {
  return getRuleContext<PascalSParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::StatementsContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::StatementsContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}


size_t PascalSParser::StatementsContext::getRuleIndex() const {
  return PascalSParser::RuleStatements;
}


antlrcpp::Any PascalSParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::StatementsContext* PascalSParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 112, PascalSParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    statement();
    setState(498);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::SEMI) {
      setState(494);
      match(PascalSParser::SEMI);
      setState(495);
      statement();
      setState(500);
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

PascalSParser::ConditionalStatementContext::ConditionalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::ConditionalStatementContext::getRuleIndex() const {
  return PascalSParser::RuleConditionalStatement;
}

void PascalSParser::ConditionalStatementContext::copyFrom(ConditionalStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalStateCaseContext ------------------------------------------------------------------

PascalSParser::CaseStatementContext* PascalSParser::ConditionalStateCaseContext::caseStatement() {
  return getRuleContext<PascalSParser::CaseStatementContext>(0);
}

PascalSParser::ConditionalStateCaseContext::ConditionalStateCaseContext(ConditionalStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConditionalStateCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConditionalStateCase(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConditionalStateIfContext ------------------------------------------------------------------

PascalSParser::IfStatementContext* PascalSParser::ConditionalStateIfContext::ifStatement() {
  return getRuleContext<PascalSParser::IfStatementContext>(0);
}

PascalSParser::ConditionalStateIfContext::ConditionalStateIfContext(ConditionalStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::ConditionalStateIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitConditionalStateIf(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::ConditionalStatementContext* PascalSParser::conditionalStatement() {
  ConditionalStatementContext *_localctx = _tracker.createInstance<ConditionalStatementContext>(_ctx, getState());
  enterRule(_localctx, 114, PascalSParser::RuleConditionalStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(503);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::IF: {
        _localctx = _tracker.createInstance<PascalSParser::ConditionalStateIfContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(501);
        ifStatement();
        break;
      }

      case PascalSParser::CASE: {
        _localctx = _tracker.createInstance<PascalSParser::ConditionalStateCaseContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(502);
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

PascalSParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::IfStatementContext::IF() {
  return getToken(PascalSParser::IF, 0);
}

PascalSParser::ExpressionContext* PascalSParser::IfStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::IfStatementContext::THEN() {
  return getToken(PascalSParser::THEN, 0);
}

std::vector<PascalSParser::StatementContext *> PascalSParser::IfStatementContext::statement() {
  return getRuleContexts<PascalSParser::StatementContext>();
}

PascalSParser::StatementContext* PascalSParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<PascalSParser::StatementContext>(i);
}

tree::TerminalNode* PascalSParser::IfStatementContext::ELSE() {
  return getToken(PascalSParser::ELSE, 0);
}


size_t PascalSParser::IfStatementContext::getRuleIndex() const {
  return PascalSParser::RuleIfStatement;
}


antlrcpp::Any PascalSParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::IfStatementContext* PascalSParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, PascalSParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(PascalSParser::IF);
    setState(506);
    expression();
    setState(507);
    match(PascalSParser::THEN);
    setState(508);
    statement();
    setState(511);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(509);
      match(PascalSParser::ELSE);
      setState(510);
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

PascalSParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::CaseStatementContext::CASE() {
  return getToken(PascalSParser::CASE, 0);
}

PascalSParser::ExpressionContext* PascalSParser::CaseStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::CaseStatementContext::OF() {
  return getToken(PascalSParser::OF, 0);
}

std::vector<PascalSParser::CaseListElementContext *> PascalSParser::CaseStatementContext::caseListElement() {
  return getRuleContexts<PascalSParser::CaseListElementContext>();
}

PascalSParser::CaseListElementContext* PascalSParser::CaseStatementContext::caseListElement(size_t i) {
  return getRuleContext<PascalSParser::CaseListElementContext>(i);
}

tree::TerminalNode* PascalSParser::CaseStatementContext::END() {
  return getToken(PascalSParser::END, 0);
}

std::vector<tree::TerminalNode *> PascalSParser::CaseStatementContext::SEMI() {
  return getTokens(PascalSParser::SEMI);
}

tree::TerminalNode* PascalSParser::CaseStatementContext::SEMI(size_t i) {
  return getToken(PascalSParser::SEMI, i);
}

tree::TerminalNode* PascalSParser::CaseStatementContext::ELSE() {
  return getToken(PascalSParser::ELSE, 0);
}

PascalSParser::StatementsContext* PascalSParser::CaseStatementContext::statements() {
  return getRuleContext<PascalSParser::StatementsContext>(0);
}


size_t PascalSParser::CaseStatementContext::getRuleIndex() const {
  return PascalSParser::RuleCaseStatement;
}


antlrcpp::Any PascalSParser::CaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitCaseStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::CaseStatementContext* PascalSParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, PascalSParser::RuleCaseStatement);
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
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(PascalSParser::CASE);
    setState(514);
    expression();
    setState(515);
    match(PascalSParser::OF);
    setState(516);
    caseListElement();
    setState(521);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(517);
        match(PascalSParser::SEMI);
        setState(518);
        caseListElement(); 
      }
      setState(523);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(527);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::SEMI) {
      setState(524);
      match(PascalSParser::SEMI);
      setState(525);
      match(PascalSParser::ELSE);
      setState(526);
      statements();
    }
    setState(529);
    match(PascalSParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseListElementContext ------------------------------------------------------------------

PascalSParser::CaseListElementContext::CaseListElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ConstListContext* PascalSParser::CaseListElementContext::constList() {
  return getRuleContext<PascalSParser::ConstListContext>(0);
}

tree::TerminalNode* PascalSParser::CaseListElementContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::StatementContext* PascalSParser::CaseListElementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}


size_t PascalSParser::CaseListElementContext::getRuleIndex() const {
  return PascalSParser::RuleCaseListElement;
}


antlrcpp::Any PascalSParser::CaseListElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitCaseListElement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::CaseListElementContext* PascalSParser::caseListElement() {
  CaseListElementContext *_localctx = _tracker.createInstance<CaseListElementContext>(_ctx, getState());
  enterRule(_localctx, 120, PascalSParser::RuleCaseListElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    constList();
    setState(532);
    match(PascalSParser::COLON);
    setState(533);
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

PascalSParser::RepetetiveStatementContext::RepetetiveStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::RepetetiveStatementContext::getRuleIndex() const {
  return PascalSParser::RuleRepetetiveStatement;
}

void PascalSParser::RepetetiveStatementContext::copyFrom(RepetetiveStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RepetetiveStateRepeatContext ------------------------------------------------------------------

PascalSParser::RepeatStatementContext* PascalSParser::RepetetiveStateRepeatContext::repeatStatement() {
  return getRuleContext<PascalSParser::RepeatStatementContext>(0);
}

PascalSParser::RepetetiveStateRepeatContext::RepetetiveStateRepeatContext(RepetetiveStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::RepetetiveStateRepeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRepetetiveStateRepeat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetetiveStateForContext ------------------------------------------------------------------

PascalSParser::ForStatementContext* PascalSParser::RepetetiveStateForContext::forStatement() {
  return getRuleContext<PascalSParser::ForStatementContext>(0);
}

PascalSParser::RepetetiveStateForContext::RepetetiveStateForContext(RepetetiveStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::RepetetiveStateForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRepetetiveStateFor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetetiveStateWhileContext ------------------------------------------------------------------

PascalSParser::WhileStatementContext* PascalSParser::RepetetiveStateWhileContext::whileStatement() {
  return getRuleContext<PascalSParser::WhileStatementContext>(0);
}

PascalSParser::RepetetiveStateWhileContext::RepetetiveStateWhileContext(RepetetiveStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalSParser::RepetetiveStateWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRepetetiveStateWhile(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::RepetetiveStatementContext* PascalSParser::repetetiveStatement() {
  RepetetiveStatementContext *_localctx = _tracker.createInstance<RepetetiveStatementContext>(_ctx, getState());
  enterRule(_localctx, 122, PascalSParser::RuleRepetetiveStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(538);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::WHILE: {
        _localctx = _tracker.createInstance<PascalSParser::RepetetiveStateWhileContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(535);
        whileStatement();
        break;
      }

      case PascalSParser::REPEAT: {
        _localctx = _tracker.createInstance<PascalSParser::RepetetiveStateRepeatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(536);
        repeatStatement();
        break;
      }

      case PascalSParser::FOR: {
        _localctx = _tracker.createInstance<PascalSParser::RepetetiveStateForContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(537);
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

PascalSParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::WhileStatementContext::WHILE() {
  return getToken(PascalSParser::WHILE, 0);
}

PascalSParser::ExpressionContext* PascalSParser::WhileStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::WhileStatementContext::DO() {
  return getToken(PascalSParser::DO, 0);
}

PascalSParser::StatementContext* PascalSParser::WhileStatementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}


size_t PascalSParser::WhileStatementContext::getRuleIndex() const {
  return PascalSParser::RuleWhileStatement;
}


antlrcpp::Any PascalSParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::WhileStatementContext* PascalSParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 124, PascalSParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    match(PascalSParser::WHILE);
    setState(541);
    expression();
    setState(542);
    match(PascalSParser::DO);
    setState(543);
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

PascalSParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::RepeatStatementContext::REPEAT() {
  return getToken(PascalSParser::REPEAT, 0);
}

PascalSParser::StatementsContext* PascalSParser::RepeatStatementContext::statements() {
  return getRuleContext<PascalSParser::StatementsContext>(0);
}

tree::TerminalNode* PascalSParser::RepeatStatementContext::UNTIL() {
  return getToken(PascalSParser::UNTIL, 0);
}

PascalSParser::ExpressionContext* PascalSParser::RepeatStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}


size_t PascalSParser::RepeatStatementContext::getRuleIndex() const {
  return PascalSParser::RuleRepeatStatement;
}


antlrcpp::Any PascalSParser::RepeatStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRepeatStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::RepeatStatementContext* PascalSParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 126, PascalSParser::RuleRepeatStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    match(PascalSParser::REPEAT);
    setState(546);
    statements();
    setState(547);
    match(PascalSParser::UNTIL);
    setState(548);
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

PascalSParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ForStatementContext::FOR() {
  return getToken(PascalSParser::FOR, 0);
}

PascalSParser::IdentifierContext* PascalSParser::ForStatementContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
}

tree::TerminalNode* PascalSParser::ForStatementContext::ASSIGN() {
  return getToken(PascalSParser::ASSIGN, 0);
}

PascalSParser::ForListContext* PascalSParser::ForStatementContext::forList() {
  return getRuleContext<PascalSParser::ForListContext>(0);
}

tree::TerminalNode* PascalSParser::ForStatementContext::DO() {
  return getToken(PascalSParser::DO, 0);
}

PascalSParser::StatementContext* PascalSParser::ForStatementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}


size_t PascalSParser::ForStatementContext::getRuleIndex() const {
  return PascalSParser::RuleForStatement;
}


antlrcpp::Any PascalSParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ForStatementContext* PascalSParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 128, PascalSParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    match(PascalSParser::FOR);
    setState(551);
    identifier();
    setState(552);
    match(PascalSParser::ASSIGN);
    setState(553);
    forList();
    setState(554);
    match(PascalSParser::DO);
    setState(555);
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

PascalSParser::ForListContext::ForListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::InitialValueContext* PascalSParser::ForListContext::initialValue() {
  return getRuleContext<PascalSParser::InitialValueContext>(0);
}

PascalSParser::FinalValueContext* PascalSParser::ForListContext::finalValue() {
  return getRuleContext<PascalSParser::FinalValueContext>(0);
}

tree::TerminalNode* PascalSParser::ForListContext::TO() {
  return getToken(PascalSParser::TO, 0);
}

tree::TerminalNode* PascalSParser::ForListContext::DOWNTO() {
  return getToken(PascalSParser::DOWNTO, 0);
}


size_t PascalSParser::ForListContext::getRuleIndex() const {
  return PascalSParser::RuleForList;
}


antlrcpp::Any PascalSParser::ForListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitForList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ForListContext* PascalSParser::forList() {
  ForListContext *_localctx = _tracker.createInstance<ForListContext>(_ctx, getState());
  enterRule(_localctx, 130, PascalSParser::RuleForList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    initialValue();
    setState(558);
    _la = _input->LA(1);
    if (!(_la == PascalSParser::DOWNTO

    || _la == PascalSParser::TO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(559);
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

PascalSParser::InitialValueContext::InitialValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ExpressionContext* PascalSParser::InitialValueContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}


size_t PascalSParser::InitialValueContext::getRuleIndex() const {
  return PascalSParser::RuleInitialValue;
}


antlrcpp::Any PascalSParser::InitialValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitInitialValue(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::InitialValueContext* PascalSParser::initialValue() {
  InitialValueContext *_localctx = _tracker.createInstance<InitialValueContext>(_ctx, getState());
  enterRule(_localctx, 132, PascalSParser::RuleInitialValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(561);
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

PascalSParser::FinalValueContext::FinalValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ExpressionContext* PascalSParser::FinalValueContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}


size_t PascalSParser::FinalValueContext::getRuleIndex() const {
  return PascalSParser::RuleFinalValue;
}


antlrcpp::Any PascalSParser::FinalValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitFinalValue(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::FinalValueContext* PascalSParser::finalValue() {
  FinalValueContext *_localctx = _tracker.createInstance<FinalValueContext>(_ctx, getState());
  enterRule(_localctx, 134, PascalSParser::RuleFinalValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordVariableListContext ------------------------------------------------------------------

PascalSParser::RecordVariableListContext::RecordVariableListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::VariableContext *> PascalSParser::RecordVariableListContext::variable() {
  return getRuleContexts<PascalSParser::VariableContext>();
}

PascalSParser::VariableContext* PascalSParser::RecordVariableListContext::variable(size_t i) {
  return getRuleContext<PascalSParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> PascalSParser::RecordVariableListContext::COMMA() {
  return getTokens(PascalSParser::COMMA);
}

tree::TerminalNode* PascalSParser::RecordVariableListContext::COMMA(size_t i) {
  return getToken(PascalSParser::COMMA, i);
}


size_t PascalSParser::RecordVariableListContext::getRuleIndex() const {
  return PascalSParser::RuleRecordVariableList;
}


antlrcpp::Any PascalSParser::RecordVariableListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSParserVisitor*>(visitor))
    return parserVisitor->visitRecordVariableList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::RecordVariableListContext* PascalSParser::recordVariableList() {
  RecordVariableListContext *_localctx = _tracker.createInstance<RecordVariableListContext>(_ctx, getState());
  enterRule(_localctx, 136, PascalSParser::RuleRecordVariableList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    variable();
    setState(570);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::COMMA) {
      setState(566);
      match(PascalSParser::COMMA);
      setState(567);
      variable();
      setState(572);
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
std::vector<dfa::DFA> PascalSParser::_decisionToDFA;
atn::PredictionContextCache PascalSParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PascalSParser::_atn;
std::vector<uint16_t> PascalSParser::_serializedATN;

std::vector<std::string> PascalSParser::_ruleNames = {
  "program", "programHeading", "identifier", "block", "constantDefinitionPart", 
  "constantDefinition", "constant", "unsignedNumber", "unsignedInteger", 
  "unsignedReal", "sign", "bool_", "string", "typeDefinitionPart", "typeDefinition", 
  "type_", "simpleType", "structuredType", "arrayType", "periods", "period", 
  "recordType", "recordField", "variableDeclarationPart", "variableDeclaration", 
  "procedureAndFunctionDeclarationPart", "procedureOrFunctionDeclaration", 
  "procedureDeclaration", "formalParameterList", "formalParameterSection", 
  "parameterGroup", "identifierList", "constList", "functionDeclaration", 
  "statement", "simpleStatement", "assignmentStatement", "variable", "expression", 
  "relationaloperator", "simpleExpression", "additiveoperator", "term", 
  "multiplicativeoperator", "signedFactor", "factor", "unsignedConstant", 
  "functionDesignator", "parameterList", "procedureStatement", "actualParameter", 
  "parameterwidth", "emptyStatement_", "empty_", "structuredStatement", 
  "compoundStatement", "statements", "conditionalStatement", "ifStatement", 
  "caseStatement", "caseListElement", "repetetiveStatement", "whileStatement", 
  "repeatStatement", "forStatement", "forList", "initialValue", "finalValue", 
  "recordVariableList"
};

std::vector<std::string> PascalSParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'+'", "'-'", 
  "'*'", "'/'", "':='", "','", "';'", "':'", "'='", "'<>'", "'<'", "'<='", 
  "'>='", "'>'", "'('", "')'", "'['", "'(.'", "']'", "'.)'", "'.'", "'..'", 
  "'{'", "'}'"
};

std::vector<std::string> PascalSParser::_symbolicNames = {
  "", "AND", "ARRAY", "BEGIN", "BOOLEAN", "CASE", "CHAR", "CONST", "DIV", 
  "DO", "DOWNTO", "ELSE", "END", "FOR", "FUNCTION", "IF", "INTEGER", "MOD", 
  "NOT", "OF", "OR", "PROCEDURE", "PROGRAM", "REAL", "RECORD", "REPEAT", 
  "THEN", "TO", "TYPE", "UNTIL", "VAR", "WHILE", "PLUS", "MINUS", "STAR", 
  "SLASH", "ASSIGN", "COMMA", "SEMI", "COLON", "EQUAL", "NOT_EQUAL", "LT", 
  "LE", "GE", "GT", "LPAREN", "RPAREN", "LBRACK", "LBRACK2", "RBRACK", "RBRACK2", 
  "DOT", "DOTDOT", "LCURLY", "RCURLY", "TRUE", "FALSE", "WS", "COMMENT_1", 
  "COMMENT_2", "IDENT", "STRING_LITERAL", "NUM_INT", "NUM_REAL"
};

dfa::Vocabulary PascalSParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PascalSParser::_tokenNames;

PascalSParser::Initializer::Initializer() {
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
       0x3, 0x42, 0x240, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x97, 0xa, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x7, 0x5, 0xa1, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xa4, 0xb, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 
       0xac, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0xad, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xbd, 0xa, 0x8, 
       0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xc1, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc9, 0xa, 0xc, 
       0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xcd, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0xd5, 0xa, 0xf, 
       0xd, 0xf, 0xe, 0xf, 0xd6, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xdf, 0xa, 0x11, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xe5, 0xa, 0x13, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x5, 0x14, 0xf5, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x7, 0x15, 0xfa, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xfd, 0xb, 
       0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
       0x17, 0x5, 0x17, 0x105, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x10c, 0xa, 0x18, 0xc, 0x18, 0xe, 
       0x18, 0x10f, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x117, 0xa, 0x19, 0xc, 0x19, 0xe, 
       0x19, 0x11a, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
       0x3, 0x1c, 0x5, 0x1c, 0x127, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x5, 0x1d, 0x12c, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x135, 0xa, 
       0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x138, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x13f, 0xa, 0x1f, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x7, 0x21, 0x148, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x14b, 0xb, 
       0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x150, 0xa, 0x22, 
       0xc, 0x22, 0xe, 0x22, 0x153, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x5, 0x23, 0x158, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x161, 0xa, 
       0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x166, 0xa, 0x25, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x171, 0xa, 0x27, 0xc, 
       0x27, 0xe, 0x27, 0x174, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x17c, 0xa, 0x27, 0xc, 
       0x27, 0xe, 0x27, 0x17f, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x7, 0x27, 0x185, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x188, 
       0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 
       0x18e, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x5, 0x29, 0x196, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x19c, 0xa, 0x2a, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1a1, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x1a7, 0xa, 0x2c, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1ae, 0xa, 0x2d, 
       0x3, 0x2e, 0x5, 0x2e, 0x1b1, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1bf, 0xa, 0x2f, 
       0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x1c3, 0xa, 0x30, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x7, 0x32, 0x1cd, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x1d0, 0xb, 
       0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 
       0x33, 0x1d7, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x1db, 0xa, 
       0x34, 0xc, 0x34, 0xe, 0x34, 0x1de, 0xb, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x1ea, 0xa, 0x38, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x7, 
       0x3a, 0x1f3, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x1f6, 0xb, 0x3a, 0x3, 
       0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x1fa, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x202, 0xa, 
       0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x7, 0x3d, 0x20a, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x20d, 0xb, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x212, 0xa, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
       0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x21d, 0xa, 0x3f, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 
       0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 
       0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x23b, 0xa, 0x46, 
       0xc, 0x46, 0xe, 0x46, 0x23e, 0xb, 0x46, 0x3, 0x46, 0x2, 0x2, 0x47, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
       0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
       0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
       0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 
       0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
       0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
       0x88, 0x8a, 0x2, 0x5, 0x6, 0x2, 0x6, 0x6, 0x8, 0x8, 0x12, 0x12, 0x19, 
       0x19, 0x3, 0x2, 0x22, 0x23, 0x4, 0x2, 0xc, 0xc, 0x1d, 0x1d, 0x2, 
       0x240, 0x2, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x90, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0xc, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xe, 0xbc, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc2, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc8, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xce, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd8, 0x3, 0x2, 0x2, 0x2, 
       0x20, 0xde, 0x3, 0x2, 0x2, 0x2, 0x22, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0xe4, 0x3, 0x2, 0x2, 0x2, 0x26, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf6, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x102, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x108, 0x3, 0x2, 0x2, 0x2, 0x30, 0x112, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x34, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x126, 0x3, 0x2, 0x2, 0x2, 0x38, 0x128, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x130, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x3e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x40, 0x144, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x44, 0x154, 
       0x3, 0x2, 0x2, 0x2, 0x46, 0x160, 0x3, 0x2, 0x2, 0x2, 0x48, 0x165, 
       0x3, 0x2, 0x2, 0x2, 0x4a, 0x167, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x16b, 
       0x3, 0x2, 0x2, 0x2, 0x4e, 0x189, 0x3, 0x2, 0x2, 0x2, 0x50, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x52, 0x197, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1a0, 
       0x3, 0x2, 0x2, 0x2, 0x56, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1ad, 
       0x3, 0x2, 0x2, 0x2, 0x5a, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1be, 
       0x3, 0x2, 0x2, 0x2, 0x5e, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1c4, 
       0x3, 0x2, 0x2, 0x2, 0x62, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1d1, 
       0x3, 0x2, 0x2, 0x2, 0x66, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x68, 0x1df, 
       0x3, 0x2, 0x2, 0x2, 0x6a, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1e4, 
       0x3, 0x2, 0x2, 0x2, 0x6e, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1eb, 
       0x3, 0x2, 0x2, 0x2, 0x72, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1f9, 
       0x3, 0x2, 0x2, 0x2, 0x76, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x78, 0x203, 
       0x3, 0x2, 0x2, 0x2, 0x7a, 0x215, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x7e, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x82, 0x228, 0x3, 0x2, 0x2, 0x2, 0x84, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x233, 0x3, 0x2, 0x2, 0x2, 0x88, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x8a, 0x237, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
       0x5, 0x4, 0x3, 0x2, 0x8d, 0x8e, 0x5, 0x8, 0x5, 0x2, 0x8e, 0x8f, 0x7, 
       0x36, 0x2, 0x2, 0x8f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x18, 
       0x2, 0x2, 0x91, 0x96, 0x5, 0x6, 0x4, 0x2, 0x92, 0x93, 0x7, 0x30, 
       0x2, 0x2, 0x93, 0x94, 0x5, 0x40, 0x21, 0x2, 0x94, 0x95, 0x7, 0x31, 
       0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x92, 0x3, 0x2, 0x2, 
       0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 
       0x98, 0x99, 0x7, 0x28, 0x2, 0x2, 0x99, 0x5, 0x3, 0x2, 0x2, 0x2, 0x9a, 
       0x9b, 0x7, 0x3f, 0x2, 0x2, 0x9b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x9c, 0xa1, 
       0x5, 0xa, 0x6, 0x2, 0x9d, 0xa1, 0x5, 0x1c, 0xf, 0x2, 0x9e, 0xa1, 
       0x5, 0x30, 0x19, 0x2, 0x9f, 0xa1, 0x5, 0x34, 0x1b, 0x2, 0xa0, 0x9c, 
       0x3, 0x2, 0x2, 0x2, 0xa0, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 
       0x2, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 
       0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 
       0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 
       0xa5, 0xa6, 0x5, 0x70, 0x39, 0x2, 0xa6, 0x9, 0x3, 0x2, 0x2, 0x2, 
       0xa7, 0xab, 0x7, 0x9, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0xc, 0x7, 0x2, 0xa9, 
       0xaa, 0x7, 0x28, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 
       0xa8, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 
       0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x6, 0x4, 0x2, 0xb0, 0xb1, 0x7, 0x2a, 
       0x2, 0x2, 0xb1, 0xb2, 0x5, 0xe, 0x8, 0x2, 0xb2, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0xb3, 0xbd, 0x5, 0x10, 0x9, 0x2, 0xb4, 0xb5, 0x5, 0x16, 0xc, 
       0x2, 0xb5, 0xb6, 0x5, 0x10, 0x9, 0x2, 0xb6, 0xbd, 0x3, 0x2, 0x2, 
       0x2, 0xb7, 0xbd, 0x5, 0x6, 0x4, 0x2, 0xb8, 0xb9, 0x5, 0x16, 0xc, 
       0x2, 0xb9, 0xba, 0x5, 0x6, 0x4, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 
       0xbb, 0xbd, 0x5, 0x1a, 0xe, 0x2, 0xbc, 0xb3, 0x3, 0x2, 0x2, 0x2, 
       0xbc, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0xb8, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x5, 0x12, 0xa, 0x2, 0xbf, 0xc1, 
       0x5, 0x14, 0xb, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xc1, 0x11, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 
       0x41, 0x2, 0x2, 0xc3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 
       0x42, 0x2, 0x2, 0xc5, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x7, 
       0x22, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x23, 0x2, 0x2, 0xc8, 0xc6, 0x3, 
       0x2, 0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0xca, 0xcd, 0x7, 0x3a, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x3b, 
       0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 
       0x2, 0xcd, 0x19, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x40, 0x2, 
       0x2, 0xcf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd4, 0x7, 0x1e, 0x2, 
       0x2, 0xd1, 0xd2, 0x5, 0x1e, 0x10, 0x2, 0xd2, 0xd3, 0x7, 0x28, 0x2, 
       0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd1, 0x3, 0x2, 0x2, 0x2, 
       0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
       0x5, 0x6, 0x4, 0x2, 0xd9, 0xda, 0x7, 0x2a, 0x2, 0x2, 0xda, 0xdb, 
       0x5, 0x20, 0x11, 0x2, 0xdb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 
       0x5, 0x22, 0x12, 0x2, 0xdd, 0xdf, 0x5, 0x24, 0x13, 0x2, 0xde, 0xdc, 
       0x3, 0x2, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x21, 0x3, 
       0x2, 0x2, 0x2, 0xe0, 0xe1, 0x9, 0x2, 0x2, 0x2, 0xe1, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0xe2, 0xe5, 0x5, 0x26, 0x14, 0x2, 0xe3, 0xe5, 0x5, 0x2c, 
       0x17, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe3, 0x3, 0x2, 
       0x2, 0x2, 0xe5, 0x25, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x4, 0x2, 
       0x2, 0xe7, 0xe8, 0x7, 0x32, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x28, 0x15, 
       0x2, 0xe9, 0xea, 0x7, 0x34, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x15, 0x2, 
       0x2, 0xeb, 0xec, 0x5, 0x20, 0x11, 0x2, 0xec, 0xf5, 0x3, 0x2, 0x2, 
       0x2, 0xed, 0xee, 0x7, 0x4, 0x2, 0x2, 0xee, 0xef, 0x7, 0x33, 0x2, 
       0x2, 0xef, 0xf0, 0x5, 0x28, 0x15, 0x2, 0xf0, 0xf1, 0x7, 0x35, 0x2, 
       0x2, 0xf1, 0xf2, 0x7, 0x15, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x20, 0x11, 
       0x2, 0xf3, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xe6, 0x3, 0x2, 0x2, 0x2, 
       0xf4, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf6, 
       0xfb, 0x5, 0x2a, 0x16, 0x2, 0xf7, 0xf8, 0x7, 0x27, 0x2, 0x2, 0xf8, 
       0xfa, 0x5, 0x2a, 0x16, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfa, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 
       0x3, 0x2, 0x2, 0x2, 0xfc, 0x29, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 
       0x2, 0x2, 0x2, 0xfe, 0xff, 0x5, 0xe, 0x8, 0x2, 0xff, 0x100, 0x7, 
       0x37, 0x2, 0x2, 0x100, 0x101, 0x5, 0xe, 0x8, 0x2, 0x101, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x102, 0x104, 0x7, 0x1a, 0x2, 0x2, 0x103, 0x105, 0x5, 
       0x2e, 0x18, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
       0x7, 0xe, 0x2, 0x2, 0x107, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10d, 
       0x5, 0x32, 0x1a, 0x2, 0x109, 0x10a, 0x7, 0x28, 0x2, 0x2, 0x10a, 0x10c, 
       0x5, 0x32, 0x1a, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x28, 0x2, 0x2, 0x111, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 0x20, 0x2, 0x2, 0x113, 0x118, 
       0x5, 0x32, 0x1a, 0x2, 0x114, 0x115, 0x7, 0x28, 0x2, 0x2, 0x115, 0x117, 
       0x5, 0x32, 0x1a, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 
       0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x28, 0x2, 0x2, 0x11c, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x40, 0x21, 0x2, 0x11e, 0x11f, 
       0x7, 0x29, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x20, 0x11, 0x2, 0x120, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x5, 0x36, 0x1c, 0x2, 0x122, 0x123, 
       0x7, 0x28, 0x2, 0x2, 0x123, 0x35, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 
       0x5, 0x38, 0x1d, 0x2, 0x125, 0x127, 0x5, 0x44, 0x23, 0x2, 0x126, 
       0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x17, 0x2, 0x2, 0x129, 
       0x12b, 0x5, 0x6, 0x4, 0x2, 0x12a, 0x12c, 0x5, 0x3a, 0x1e, 0x2, 0x12b, 
       0x12a, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 
       0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0x28, 0x2, 0x2, 0x12e, 
       0x12f, 0x5, 0x8, 0x5, 0x2, 0x12f, 0x39, 0x3, 0x2, 0x2, 0x2, 0x130, 
       0x131, 0x7, 0x30, 0x2, 0x2, 0x131, 0x136, 0x5, 0x3c, 0x1f, 0x2, 0x132, 
       0x133, 0x7, 0x28, 0x2, 0x2, 0x133, 0x135, 0x5, 0x3c, 0x1f, 0x2, 0x134, 
       0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x138, 0x3, 0x2, 0x2, 0x2, 0x136, 
       0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 
       0x139, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x139, 
       0x13a, 0x7, 0x31, 0x2, 0x2, 0x13a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x13b, 
       0x13f, 0x5, 0x3e, 0x20, 0x2, 0x13c, 0x13d, 0x7, 0x20, 0x2, 0x2, 0x13d, 
       0x13f, 0x5, 0x3e, 0x20, 0x2, 0x13e, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 
       0x13c, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x140, 
       0x141, 0x5, 0x40, 0x21, 0x2, 0x141, 0x142, 0x7, 0x29, 0x2, 0x2, 0x142, 
       0x143, 0x5, 0x22, 0x12, 0x2, 0x143, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x144, 
       0x149, 0x5, 0x6, 0x4, 0x2, 0x145, 0x146, 0x7, 0x27, 0x2, 0x2, 0x146, 
       0x148, 0x5, 0x6, 0x4, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x148, 
       0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 
       0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x14b, 
       0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x151, 0x5, 0xe, 0x8, 0x2, 0x14d, 
       0x14e, 0x7, 0x27, 0x2, 0x2, 0x14e, 0x150, 0x5, 0xe, 0x8, 0x2, 0x14f, 
       0x14d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 
       0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 
       0x155, 0x7, 0x10, 0x2, 0x2, 0x155, 0x157, 0x5, 0x6, 0x4, 0x2, 0x156, 
       0x158, 0x5, 0x3a, 0x1e, 0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x157, 
       0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 
       0x15a, 0x7, 0x29, 0x2, 0x2, 0x15a, 0x15b, 0x5, 0x22, 0x12, 0x2, 0x15b, 
       0x15c, 0x7, 0x28, 0x2, 0x2, 0x15c, 0x15d, 0x5, 0x8, 0x5, 0x2, 0x15d, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x161, 0x5, 0x48, 0x25, 0x2, 0x15f, 
       0x161, 0x5, 0x6e, 0x38, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 
       0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x47, 0x3, 0x2, 0x2, 0x2, 0x162, 
       0x166, 0x5, 0x4a, 0x26, 0x2, 0x163, 0x166, 0x5, 0x64, 0x33, 0x2, 
       0x164, 0x166, 0x5, 0x6a, 0x36, 0x2, 0x165, 0x162, 0x3, 0x2, 0x2, 
       0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x164, 0x3, 0x2, 0x2, 
       0x2, 0x166, 0x49, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x5, 0x4c, 0x27, 
       0x2, 0x168, 0x169, 0x7, 0x26, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x4e, 
       0x28, 0x2, 0x16a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x186, 0x5, 0x6, 
       0x4, 0x2, 0x16c, 0x16d, 0x7, 0x32, 0x2, 0x2, 0x16d, 0x172, 0x5, 0x4e, 
       0x28, 0x2, 0x16e, 0x16f, 0x7, 0x27, 0x2, 0x2, 0x16f, 0x171, 0x5, 
       0x4e, 0x28, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x171, 0x174, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x34, 0x2, 0x2, 0x176, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0x33, 0x2, 0x2, 0x178, 0x17d, 
       0x5, 0x4e, 0x28, 0x2, 0x179, 0x17a, 0x7, 0x27, 0x2, 0x2, 0x17a, 0x17c, 
       0x5, 0x4e, 0x28, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x17d, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x35, 0x2, 0x2, 0x181, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 0x36, 0x2, 0x2, 0x183, 0x185, 
       0x5, 0x6, 0x4, 0x2, 0x184, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x184, 0x177, 
       0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 
       0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 
       0x3, 0x2, 0x2, 0x2, 0x187, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x18d, 0x5, 0x52, 0x2a, 0x2, 0x18a, 0x18b, 
       0x5, 0x50, 0x29, 0x2, 0x18b, 0x18c, 0x5, 0x52, 0x2a, 0x2, 0x18c, 
       0x18e, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18d, 
       0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x18f, 
       0x196, 0x7, 0x2a, 0x2, 0x2, 0x190, 0x196, 0x7, 0x2b, 0x2, 0x2, 0x191, 
       0x196, 0x7, 0x2c, 0x2, 0x2, 0x192, 0x196, 0x7, 0x2d, 0x2, 0x2, 0x193, 
       0x196, 0x7, 0x2e, 0x2, 0x2, 0x194, 0x196, 0x7, 0x2f, 0x2, 0x2, 0x195, 
       0x18f, 0x3, 0x2, 0x2, 0x2, 0x195, 0x190, 0x3, 0x2, 0x2, 0x2, 0x195, 
       0x191, 0x3, 0x2, 0x2, 0x2, 0x195, 0x192, 0x3, 0x2, 0x2, 0x2, 0x195, 
       0x193, 0x3, 0x2, 0x2, 0x2, 0x195, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19b, 0x5, 0x56, 0x2c, 0x2, 0x198, 
       0x199, 0x5, 0x54, 0x2b, 0x2, 0x199, 0x19a, 0x5, 0x56, 0x2c, 0x2, 
       0x19a, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x198, 0x3, 0x2, 0x2, 0x2, 
       0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x53, 0x3, 0x2, 0x2, 0x2, 
       0x19d, 0x1a1, 0x7, 0x22, 0x2, 0x2, 0x19e, 0x1a1, 0x7, 0x23, 0x2, 
       0x2, 0x19f, 0x1a1, 0x7, 0x16, 0x2, 0x2, 0x1a0, 0x19d, 0x3, 0x2, 0x2, 
       0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19f, 0x3, 0x2, 0x2, 
       0x2, 0x1a1, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a6, 0x5, 0x5a, 0x2e, 
       0x2, 0x1a3, 0x1a4, 0x5, 0x58, 0x2d, 0x2, 0x1a4, 0x1a5, 0x5, 0x5a, 
       0x2e, 0x2, 0x1a5, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a3, 0x3, 0x2, 
       0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x57, 0x3, 0x2, 
       0x2, 0x2, 0x1a8, 0x1ae, 0x7, 0x24, 0x2, 0x2, 0x1a9, 0x1ae, 0x7, 0x25, 
       0x2, 0x2, 0x1aa, 0x1ae, 0x7, 0xa, 0x2, 0x2, 0x1ab, 0x1ae, 0x7, 0x13, 
       0x2, 0x2, 0x1ac, 0x1ae, 0x7, 0x3, 0x2, 0x2, 0x1ad, 0x1a8, 0x3, 0x2, 
       0x2, 0x2, 0x1ad, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1aa, 0x3, 0x2, 
       0x2, 0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b1, 0x9, 0x3, 
       0x2, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 
       0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x5c, 
       0x2f, 0x2, 0x1b3, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1bf, 0x5, 0x4c, 
       0x27, 0x2, 0x1b5, 0x1b6, 0x7, 0x30, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 
       0x4e, 0x28, 0x2, 0x1b7, 0x1b8, 0x7, 0x31, 0x2, 0x2, 0x1b8, 0x1bf, 
       0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bf, 0x5, 0x60, 0x31, 0x2, 0x1ba, 0x1bf, 
       0x5, 0x5e, 0x30, 0x2, 0x1bb, 0x1bc, 0x7, 0x14, 0x2, 0x2, 0x1bc, 0x1bf, 
       0x5, 0x5c, 0x2f, 0x2, 0x1bd, 0x1bf, 0x5, 0x18, 0xd, 0x2, 0x1be, 0x1b4, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1b9, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c3, 0x5, 0x10, 0x9, 0x2, 0x1c1, 0x1c3, 
       0x5, 0x1a, 0xe, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c1, 
       0x3, 0x2, 0x2, 0x2, 0x1c3, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
       0x5, 0x6, 0x4, 0x2, 0x1c5, 0x1c6, 0x7, 0x30, 0x2, 0x2, 0x1c6, 0x1c7, 
       0x5, 0x62, 0x32, 0x2, 0x1c7, 0x1c8, 0x7, 0x31, 0x2, 0x2, 0x1c8, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ce, 0x5, 0x66, 0x34, 0x2, 0x1ca, 0x1cb, 
       0x7, 0x27, 0x2, 0x2, 0x1cb, 0x1cd, 0x5, 0x66, 0x34, 0x2, 0x1cc, 0x1ca, 
       0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 
       0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d6, 
       0x5, 0x6, 0x4, 0x2, 0x1d2, 0x1d3, 0x7, 0x30, 0x2, 0x2, 0x1d3, 0x1d4, 
       0x5, 0x62, 0x32, 0x2, 0x1d4, 0x1d5, 0x7, 0x31, 0x2, 0x2, 0x1d5, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0x1d7, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1dc, 
       0x5, 0x4e, 0x28, 0x2, 0x1d9, 0x1db, 0x5, 0x68, 0x35, 0x2, 0x1da, 
       0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
       0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1df, 
       0x1e0, 0x7, 0x29, 0x2, 0x2, 0x1e0, 0x1e1, 0x5, 0x4e, 0x28, 0x2, 0x1e1, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1ea, 0x5, 0x70, 0x39, 0x2, 0x1e7, 
       0x1ea, 0x5, 0x74, 0x3b, 0x2, 0x1e8, 0x1ea, 0x5, 0x7c, 0x3f, 0x2, 
       0x1e9, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
       0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x6f, 0x3, 0x2, 0x2, 0x2, 
       0x1eb, 0x1ec, 0x7, 0x5, 0x2, 0x2, 0x1ec, 0x1ed, 0x5, 0x72, 0x3a, 
       0x2, 0x1ed, 0x1ee, 0x7, 0xe, 0x2, 0x2, 0x1ee, 0x71, 0x3, 0x2, 0x2, 
       0x2, 0x1ef, 0x1f4, 0x5, 0x46, 0x24, 0x2, 0x1f0, 0x1f1, 0x7, 0x28, 
       0x2, 0x2, 0x1f1, 0x1f3, 0x5, 0x46, 0x24, 0x2, 0x1f2, 0x1f0, 0x3, 
       0x2, 0x2, 0x2, 0x1f3, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 
       0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x73, 0x3, 
       0x2, 0x2, 0x2, 0x1f6, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1fa, 0x5, 
       0x76, 0x3c, 0x2, 0x1f8, 0x1fa, 0x5, 0x78, 0x3d, 0x2, 0x1f9, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x11, 0x2, 0x2, 0x1fc, 0x1fd, 
       0x5, 0x4e, 0x28, 0x2, 0x1fd, 0x1fe, 0x7, 0x1c, 0x2, 0x2, 0x1fe, 0x201, 
       0x5, 0x46, 0x24, 0x2, 0x1ff, 0x200, 0x7, 0xd, 0x2, 0x2, 0x200, 0x202, 
       0x5, 0x46, 0x24, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x202, 0x77, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 
       0x7, 0x7, 0x2, 0x2, 0x204, 0x205, 0x5, 0x4e, 0x28, 0x2, 0x205, 0x206, 
       0x7, 0x15, 0x2, 0x2, 0x206, 0x20b, 0x5, 0x7a, 0x3e, 0x2, 0x207, 0x208, 
       0x7, 0x28, 0x2, 0x2, 0x208, 0x20a, 0x5, 0x7a, 0x3e, 0x2, 0x209, 0x207, 
       0x3, 0x2, 0x2, 0x2, 0x20a, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 
       0x7, 0x28, 0x2, 0x2, 0x20f, 0x210, 0x7, 0xd, 0x2, 0x2, 0x210, 0x212, 
       0x5, 0x72, 0x3a, 0x2, 0x211, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
       0x7, 0xe, 0x2, 0x2, 0x214, 0x79, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 
       0x5, 0x42, 0x22, 0x2, 0x216, 0x217, 0x7, 0x29, 0x2, 0x2, 0x217, 0x218, 
       0x5, 0x46, 0x24, 0x2, 0x218, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21d, 
       0x5, 0x7e, 0x40, 0x2, 0x21a, 0x21d, 0x5, 0x80, 0x41, 0x2, 0x21b, 
       0x21d, 0x5, 0x82, 0x42, 0x2, 0x21c, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21c, 
       0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 
       0x7d, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x21, 0x2, 0x2, 0x21f, 
       0x220, 0x5, 0x4e, 0x28, 0x2, 0x220, 0x221, 0x7, 0xb, 0x2, 0x2, 0x221, 
       0x222, 0x5, 0x46, 0x24, 0x2, 0x222, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x223, 
       0x224, 0x7, 0x1b, 0x2, 0x2, 0x224, 0x225, 0x5, 0x72, 0x3a, 0x2, 0x225, 
       0x226, 0x7, 0x1f, 0x2, 0x2, 0x226, 0x227, 0x5, 0x4e, 0x28, 0x2, 0x227, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x7, 0xf, 0x2, 0x2, 0x229, 
       0x22a, 0x5, 0x6, 0x4, 0x2, 0x22a, 0x22b, 0x7, 0x26, 0x2, 0x2, 0x22b, 
       0x22c, 0x5, 0x84, 0x43, 0x2, 0x22c, 0x22d, 0x7, 0xb, 0x2, 0x2, 0x22d, 
       0x22e, 0x5, 0x46, 0x24, 0x2, 0x22e, 0x83, 0x3, 0x2, 0x2, 0x2, 0x22f, 
       0x230, 0x5, 0x86, 0x44, 0x2, 0x230, 0x231, 0x9, 0x4, 0x2, 0x2, 0x231, 
       0x232, 0x5, 0x88, 0x45, 0x2, 0x232, 0x85, 0x3, 0x2, 0x2, 0x2, 0x233, 
       0x234, 0x5, 0x4e, 0x28, 0x2, 0x234, 0x87, 0x3, 0x2, 0x2, 0x2, 0x235, 
       0x236, 0x5, 0x4e, 0x28, 0x2, 0x236, 0x89, 0x3, 0x2, 0x2, 0x2, 0x237, 
       0x23c, 0x5, 0x4c, 0x27, 0x2, 0x238, 0x239, 0x7, 0x27, 0x2, 0x2, 0x239, 
       0x23b, 0x5, 0x4c, 0x27, 0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23b, 
       0x23e, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 
       0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x23e, 
       0x23c, 0x3, 0x2, 0x2, 0x2, 0x33, 0x96, 0xa0, 0xa2, 0xad, 0xbc, 0xc0, 
       0xc8, 0xcc, 0xd6, 0xde, 0xe4, 0xf4, 0xfb, 0x104, 0x10d, 0x118, 0x126, 
       0x12b, 0x136, 0x13e, 0x149, 0x151, 0x157, 0x160, 0x165, 0x172, 0x17d, 
       0x184, 0x186, 0x18d, 0x195, 0x19b, 0x1a0, 0x1a6, 0x1ad, 0x1b0, 0x1be, 
       0x1c2, 0x1ce, 0x1d6, 0x1dc, 0x1e9, 0x1f4, 0x1f9, 0x201, 0x20b, 0x211, 
       0x21c, 0x23c, 
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

PascalSParser::Initializer PascalSParser::_init;
