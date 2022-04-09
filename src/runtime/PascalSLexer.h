
// Generated from /usr/src/app/src/PascalSLexer.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  PascalSLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, ARRAY = 2, BEGIN = 3, BOOLEAN = 4, CASE = 5, CHAR = 6, CONST = 7, 
    DIV = 8, DO = 9, DOWNTO = 10, ELSE = 11, END = 12, FOR = 13, FUNCTION = 14, 
    IF = 15, INTEGER = 16, MOD = 17, NOT = 18, OF = 19, OR = 20, PROCEDURE = 21, 
    PROGRAM = 22, REAL = 23, RECORD = 24, REPEAT = 25, THEN = 26, TO = 27, 
    TYPE = 28, UNTIL = 29, VAR = 30, WHILE = 31, PLUS = 32, MINUS = 33, 
    STAR = 34, SLASH = 35, ASSIGN = 36, COMMA = 37, SEMI = 38, COLON = 39, 
    EQUAL = 40, NOT_EQUAL = 41, LT = 42, LE = 43, GE = 44, GT = 45, LPAREN = 46, 
    RPAREN = 47, LBRACK = 48, LBRACK2 = 49, RBRACK = 50, RBRACK2 = 51, DOT = 52, 
    DOTDOT = 53, LCURLY = 54, RCURLY = 55, TRUE = 56, FALSE = 57, WS = 58, 
    COMMENT_1 = 59, COMMENT_2 = 60, IDENT = 61, STRING_LITERAL = 62, NUM_INT = 63, 
    NUM_REAL = 64
  };

  explicit PascalSLexer(antlr4::CharStream *input);
  ~PascalSLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

