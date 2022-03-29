
// Generated from /usr/src/app/s1mple-compiler/src/Pascal.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  PascalLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, ARRAY = 2, BEGIN = 3, BOOLEAN = 4, CASE = 5, CHAR = 6, CHR = 7, 
    CONST = 8, DIV = 9, DO = 10, DOWNTO = 11, ELSE = 12, END = 13, FILE = 14, 
    FOR = 15, FUNCTION = 16, IF = 17, IN = 18, INTEGER = 19, MOD = 20, NIL = 21, 
    NOT = 22, OF = 23, OR = 24, PACKED = 25, PROCEDURE = 26, PROGRAM = 27, 
    REAL = 28, RECORD = 29, REPEAT = 30, SET = 31, THEN = 32, TO = 33, TYPE = 34, 
    UNTIL = 35, VAR = 36, WHILE = 37, WITH = 38, PLUS = 39, MINUS = 40, 
    STAR = 41, SLASH = 42, ASSIGN = 43, COMMA = 44, SEMI = 45, COLON = 46, 
    EQUAL = 47, NOT_EQUAL = 48, LT = 49, LE = 50, GE = 51, GT = 52, LPAREN = 53, 
    RPAREN = 54, LBRACK = 55, LBRACK2 = 56, RBRACK = 57, RBRACK2 = 58, POINTER = 59, 
    AT = 60, DOT = 61, DOTDOT = 62, LCURLY = 63, RCURLY = 64, UNIT = 65, 
    INTERFACE = 66, USES = 67, STRING = 68, IMPLEMENTATION = 69, TRUE = 70, 
    FALSE = 71, WS = 72, COMMENT_1 = 73, COMMENT_2 = 74, IDENT = 75, STRING_LITERAL = 76, 
    NUM_INT = 77, NUM_REAL = 78
  };

  explicit PascalLexer(antlr4::CharStream *input);
  ~PascalLexer();

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

