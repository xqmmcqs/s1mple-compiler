
// Generated from /usr/src/app/src/PascalSParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  PascalSParser : public antlr4::Parser {
public:
  enum {
    AND = 1, ARRAY = 2, BEGIN = 3, BOOLEAN = 4, CASE = 5, CHAR = 6, CONST = 7, 
    DIV = 8, DO = 9, DOWNTO = 10, ELSE = 11, END = 12, FOR = 13, FUNCTION = 14, 
    IF = 15, INTEGER = 16, MOD = 17, NOT = 18, OF = 19, OR = 20, PROCEDURE = 21, 
    PROGRAM = 22, REAL = 23, RECORD = 24, REPEAT = 25, THEN = 26, TO = 27, 
    TYPE = 28, UNTIL = 29, VAR = 30, WHILE = 31, PLUS = 32, MINUS = 33, 
    STAR = 34, SLASH = 35, ASSIGN = 36, COMMA = 37, SEMI = 38, COLON = 39, 
    EQUAL = 40, NOT_EQUAL = 41, LT = 42, LE = 43, GE = 44, GT = 45, LPAREN = 46, 
    RPAREN = 47, LBRACK = 48, LBRACK2 = 49, RBRACK = 50, RBRACK2 = 51, POINTER = 52, 
    AT = 53, DOT = 54, DOTDOT = 55, LCURLY = 56, RCURLY = 57, TRUE = 58, 
    FALSE = 59, WS = 60, COMMENT_1 = 61, COMMENT_2 = 62, IDENT = 63, STRING_LITERAL = 64, 
    NUM_INT = 65, NUM_REAL = 66
  };

  enum {
    RuleProgram = 0, RuleProgramHeading = 1, RuleIdentifier = 2, RuleBlock = 3, 
    RuleConstantDefinitionPart = 4, RuleConstantDefinition = 5, RuleConstant = 6, 
    RuleUnsignedNumber = 7, RuleUnsignedInteger = 8, RuleUnsignedReal = 9, 
    RuleSign = 10, RuleBool_ = 11, RuleString = 12, RuleTypeDefinitionPart = 13, 
    RuleTypeDefinition = 14, RuleType_ = 15, RuleSimpleType = 16, RuleStructuredType = 17, 
    RuleArrayType = 18, RulePeriods = 19, RulePeriod = 20, RuleRecordType = 21, 
    RuleRecordField = 22, RuleVariableDeclarationPart = 23, RuleVariableDeclaration = 24, 
    RuleProcedureAndFunctionDeclarationPart = 25, RuleProcedureOrFunctionDeclaration = 26, 
    RuleProcedureDeclaration = 27, RuleFormalParameterList = 28, RuleFormalParameterSection = 29, 
    RuleParameterGroup = 30, RuleIdentifierList = 31, RuleConstList = 32, 
    RuleFunctionDeclaration = 33, RuleStatement = 34, RuleUnlabelledStatement = 35, 
    RuleSimpleStatement = 36, RuleAssignmentStatement = 37, RuleVariable = 38, 
    RuleExpression = 39, RuleRelationaloperator = 40, RuleSimpleExpression = 41, 
    RuleAdditiveoperator = 42, RuleTerm = 43, RuleMultiplicativeoperator = 44, 
    RuleSignedFactor = 45, RuleFactor = 46, RuleUnsignedConstant = 47, RuleFunctionDesignator = 48, 
    RuleParameterList = 49, RuleSet_ = 50, RuleElementList = 51, RuleElement = 52, 
    RuleProcedureStatement = 53, RuleActualParameter = 54, RuleParameterwidth = 55, 
    RuleEmptyStatement_ = 56, RuleEmpty_ = 57, RuleStructuredStatement = 58, 
    RuleCompoundStatement = 59, RuleStatements = 60, RuleConditionalStatement = 61, 
    RuleIfStatement = 62, RuleCaseStatement = 63, RuleCaseListElement = 64, 
    RuleRepetetiveStatement = 65, RuleWhileStatement = 66, RuleRepeatStatement = 67, 
    RuleForStatement = 68, RuleForList = 69, RuleInitialValue = 70, RuleFinalValue = 71, 
    RuleRecordVariableList = 72
  };

  explicit PascalSParser(antlr4::TokenStream *input);
  ~PascalSParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class ProgramHeadingContext;
  class IdentifierContext;
  class BlockContext;
  class ConstantDefinitionPartContext;
  class ConstantDefinitionContext;
  class ConstantContext;
  class UnsignedNumberContext;
  class UnsignedIntegerContext;
  class UnsignedRealContext;
  class SignContext;
  class Bool_Context;
  class StringContext;
  class TypeDefinitionPartContext;
  class TypeDefinitionContext;
  class Type_Context;
  class SimpleTypeContext;
  class StructuredTypeContext;
  class ArrayTypeContext;
  class PeriodsContext;
  class PeriodContext;
  class RecordTypeContext;
  class RecordFieldContext;
  class VariableDeclarationPartContext;
  class VariableDeclarationContext;
  class ProcedureAndFunctionDeclarationPartContext;
  class ProcedureOrFunctionDeclarationContext;
  class ProcedureDeclarationContext;
  class FormalParameterListContext;
  class FormalParameterSectionContext;
  class ParameterGroupContext;
  class IdentifierListContext;
  class ConstListContext;
  class FunctionDeclarationContext;
  class StatementContext;
  class UnlabelledStatementContext;
  class SimpleStatementContext;
  class AssignmentStatementContext;
  class VariableContext;
  class ExpressionContext;
  class RelationaloperatorContext;
  class SimpleExpressionContext;
  class AdditiveoperatorContext;
  class TermContext;
  class MultiplicativeoperatorContext;
  class SignedFactorContext;
  class FactorContext;
  class UnsignedConstantContext;
  class FunctionDesignatorContext;
  class ParameterListContext;
  class Set_Context;
  class ElementListContext;
  class ElementContext;
  class ProcedureStatementContext;
  class ActualParameterContext;
  class ParameterwidthContext;
  class EmptyStatement_Context;
  class Empty_Context;
  class StructuredStatementContext;
  class CompoundStatementContext;
  class StatementsContext;
  class ConditionalStatementContext;
  class IfStatementContext;
  class CaseStatementContext;
  class CaseListElementContext;
  class RepetetiveStatementContext;
  class WhileStatementContext;
  class RepeatStatementContext;
  class ForStatementContext;
  class ForListContext;
  class InitialValueContext;
  class FinalValueContext;
  class RecordVariableListContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramHeadingContext *programHeading();
    BlockContext *block();
    antlr4::tree::TerminalNode *DOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ProgramHeadingContext : public antlr4::ParserRuleContext {
  public:
    ProgramHeadingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LPAREN();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramHeadingContext* programHeading();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    std::vector<ConstantDefinitionPartContext *> constantDefinitionPart();
    ConstantDefinitionPartContext* constantDefinitionPart(size_t i);
    std::vector<TypeDefinitionPartContext *> typeDefinitionPart();
    TypeDefinitionPartContext* typeDefinitionPart(size_t i);
    std::vector<VariableDeclarationPartContext *> variableDeclarationPart();
    VariableDeclarationPartContext* variableDeclarationPart(size_t i);
    std::vector<ProcedureAndFunctionDeclarationPartContext *> procedureAndFunctionDeclarationPart();
    ProcedureAndFunctionDeclarationPartContext* procedureAndFunctionDeclarationPart(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  ConstantDefinitionPartContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    std::vector<ConstantDefinitionContext *> constantDefinition();
    ConstantDefinitionContext* constantDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDefinitionPartContext* constantDefinitionPart();

  class  ConstantDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDefinitionContext* constantDefinition();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantContext() = default;
    void copyFrom(ConstantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstIdentifierContext : public ConstantContext {
  public:
    ConstIdentifierContext(ConstantContext *ctx);

    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstSignedNumberContext : public ConstantContext {
  public:
    ConstSignedNumberContext(ConstantContext *ctx);

    SignContext *sign();
    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstStringContext : public ConstantContext {
  public:
    ConstStringContext(ConstantContext *ctx);

    StringContext *string();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstUnsignedNumberContext : public ConstantContext {
  public:
    ConstUnsignedNumberContext(ConstantContext *ctx);

    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstSignIdentifierContext : public ConstantContext {
  public:
    ConstSignIdentifierContext(ConstantContext *ctx);

    SignContext *sign();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstantContext* constant();

  class  UnsignedNumberContext : public antlr4::ParserRuleContext {
  public:
    UnsignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnsignedNumberContext() = default;
    void copyFrom(UnsignedNumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnsignedNumberRealContext : public UnsignedNumberContext {
  public:
    UnsignedNumberRealContext(UnsignedNumberContext *ctx);

    UnsignedRealContext *unsignedReal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsignedNumberIntegerContext : public UnsignedNumberContext {
  public:
    UnsignedNumberIntegerContext(UnsignedNumberContext *ctx);

    UnsignedIntegerContext *unsignedInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnsignedNumberContext* unsignedNumber();

  class  UnsignedIntegerContext : public antlr4::ParserRuleContext {
  public:
    UnsignedIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_INT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnsignedIntegerContext* unsignedInteger();

  class  UnsignedRealContext : public antlr4::ParserRuleContext {
  public:
    UnsignedRealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM_REAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnsignedRealContext* unsignedReal();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SignContext() = default;
    void copyFrom(SignContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SignPlusContext : public SignContext {
  public:
    SignPlusContext(SignContext *ctx);

    antlr4::tree::TerminalNode *PLUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SignMinusContext : public SignContext {
  public:
    SignMinusContext(SignContext *ctx);

    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SignContext* sign();

  class  Bool_Context : public antlr4::ParserRuleContext {
  public:
    Bool_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Bool_Context() = default;
    void copyFrom(Bool_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BoolFalseContext : public Bool_Context {
  public:
    BoolFalseContext(Bool_Context *ctx);

    antlr4::tree::TerminalNode *FALSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolTrueContext : public Bool_Context {
  public:
    BoolTrueContext(Bool_Context *ctx);

    antlr4::tree::TerminalNode *TRUE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Bool_Context* bool_();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  TypeDefinitionPartContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    std::vector<TypeDefinitionContext *> typeDefinition();
    TypeDefinitionContext* typeDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefinitionPartContext* typeDefinitionPart();

  class  TypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL();
    Type_Context *type_();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefinitionContext* typeDefinition();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Type_Context() = default;
    void copyFrom(Type_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeSimpleTypeContext : public Type_Context {
  public:
    TypeSimpleTypeContext(Type_Context *ctx);

    SimpleTypeContext *simpleType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeStructuredTypeContext : public Type_Context {
  public:
    TypeStructuredTypeContext(Type_Context *ctx);

    StructuredTypeContext *structuredType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Type_Context* type_();

  class  SimpleTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeContext* simpleType();

  class  StructuredTypeContext : public antlr4::ParserRuleContext {
  public:
    StructuredTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StructuredTypeContext() = default;
    void copyFrom(StructuredTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StructuredTypeArrayContext : public StructuredTypeContext {
  public:
    StructuredTypeArrayContext(StructuredTypeContext *ctx);

    ArrayTypeContext *arrayType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StructuredTypeRecordContext : public StructuredTypeContext {
  public:
    StructuredTypeRecordContext(StructuredTypeContext *ctx);

    RecordTypeContext *recordType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructuredTypeContext* structuredType();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrayTypeContext() = default;
    void copyFrom(ArrayTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayType1Context : public ArrayTypeContext {
  public:
    ArrayType1Context(ArrayTypeContext *ctx);

    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACK();
    PeriodsContext *periods();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *OF();
    Type_Context *type_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayType2Context : public ArrayTypeContext {
  public:
    ArrayType2Context(ArrayTypeContext *ctx);

    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACK2();
    PeriodsContext *periods();
    antlr4::tree::TerminalNode *RBRACK2();
    antlr4::tree::TerminalNode *OF();
    Type_Context *type_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrayTypeContext* arrayType();

  class  PeriodsContext : public antlr4::ParserRuleContext {
  public:
    PeriodsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PeriodContext *> period();
    PeriodContext* period(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodsContext* periods();

  class  PeriodContext : public antlr4::ParserRuleContext {
  public:
    PeriodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodContext* period();

  class  RecordTypeContext : public antlr4::ParserRuleContext {
  public:
    RecordTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *END();
    RecordFieldContext *recordField();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordTypeContext* recordType();

  class  RecordFieldContext : public antlr4::ParserRuleContext {
  public:
    RecordFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordFieldContext* recordField();

  class  VariableDeclarationPartContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationPartContext* variableDeclarationPart();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    Type_Context *type_();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  ProcedureAndFunctionDeclarationPartContext : public antlr4::ParserRuleContext {
  public:
    ProcedureAndFunctionDeclarationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcedureOrFunctionDeclarationContext *procedureOrFunctionDeclaration();
    antlr4::tree::TerminalNode *SEMI();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureAndFunctionDeclarationPartContext* procedureAndFunctionDeclarationPart();

  class  ProcedureOrFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProcedureOrFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProcedureOrFunctionDeclarationContext() = default;
    void copyFrom(ProcedureOrFunctionDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProOrFuncDecProContext : public ProcedureOrFunctionDeclarationContext {
  public:
    ProOrFuncDecProContext(ProcedureOrFunctionDeclarationContext *ctx);

    ProcedureDeclarationContext *procedureDeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ProOrFuncDecFuncContext : public ProcedureOrFunctionDeclarationContext {
  public:
    ProOrFuncDecFuncContext(ProcedureOrFunctionDeclarationContext *ctx);

    FunctionDeclarationContext *functionDeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProcedureOrFunctionDeclarationContext* procedureOrFunctionDeclaration();

  class  ProcedureDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProcedureDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    BlockContext *block();
    FormalParameterListContext *formalParameterList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureDeclarationContext* procedureDeclaration();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<FormalParameterSectionContext *> formalParameterSection();
    FormalParameterSectionContext* formalParameterSection(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterSectionContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FormalParameterSectionContext() = default;
    void copyFrom(FormalParameterSectionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FormalParaSecProcGroupContext : public FormalParameterSectionContext {
  public:
    FormalParaSecProcGroupContext(FormalParameterSectionContext *ctx);

    antlr4::tree::TerminalNode *PROCEDURE();
    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormalParaSecGroupContext : public FormalParameterSectionContext {
  public:
    FormalParaSecGroupContext(FormalParameterSectionContext *ctx);

    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormalParaSecVarGroupContext : public FormalParameterSectionContext {
  public:
    FormalParaSecVarGroupContext(FormalParameterSectionContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FormalParaSecFuncGroupContext : public FormalParameterSectionContext {
  public:
    FormalParaSecFuncGroupContext(FormalParameterSectionContext *ctx);

    antlr4::tree::TerminalNode *FUNCTION();
    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FormalParameterSectionContext* formalParameterSection();

  class  ParameterGroupContext : public antlr4::ParserRuleContext {
  public:
    ParameterGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    SimpleTypeContext *simpleType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterGroupContext* parameterGroup();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  ConstListContext : public antlr4::ParserRuleContext {
  public:
    ConstListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstListContext* constList();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    SimpleTypeContext *simpleType();
    antlr4::tree::TerminalNode *SEMI();
    BlockContext *block();
    FormalParameterListContext *formalParameterList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnlabelledStatementContext *unlabelledStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  UnlabelledStatementContext : public antlr4::ParserRuleContext {
  public:
    UnlabelledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnlabelledStatementContext() = default;
    void copyFrom(UnlabelledStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnlabelledStateSimpleContext : public UnlabelledStatementContext {
  public:
    UnlabelledStateSimpleContext(UnlabelledStatementContext *ctx);

    SimpleStatementContext *simpleStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnlabelledStateStructuredContext : public UnlabelledStatementContext {
  public:
    UnlabelledStateStructuredContext(UnlabelledStatementContext *ctx);

    StructuredStatementContext *structuredStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnlabelledStatementContext* unlabelledStatement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleStatementContext() = default;
    void copyFrom(SimpleStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleStateAssignContext : public SimpleStatementContext {
  public:
    SimpleStateAssignContext(SimpleStatementContext *ctx);

    AssignmentStatementContext *assignmentStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleStateEmptyContext : public SimpleStatementContext {
  public:
    SimpleStateEmptyContext(SimpleStatementContext *ctx);

    EmptyStatement_Context *emptyStatement_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleStateProcContext : public SimpleStatementContext {
  public:
    SimpleStateProcContext(SimpleStatementContext *ctx);

    ProcedureStatementContext *procedureStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SimpleStatementContext* simpleStatement();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACK2();
    antlr4::tree::TerminalNode* LBRACK2(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK2();
    antlr4::tree::TerminalNode* RBRACK2(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POINTER();
    antlr4::tree::TerminalNode* POINTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExpressionContext *simpleExpression();
    RelationaloperatorContext *relationaloperator();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  RelationaloperatorContext : public antlr4::ParserRuleContext {
  public:
    RelationaloperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RelationaloperatorContext() = default;
    void copyFrom(RelationaloperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OpGeContext : public RelationaloperatorContext {
  public:
    OpGeContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *GE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpGtContext : public RelationaloperatorContext {
  public:
    OpGtContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *GT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpLtContext : public RelationaloperatorContext {
  public:
    OpLtContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *LT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpEqualContext : public RelationaloperatorContext {
  public:
    OpEqualContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *EQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpNotEqualContext : public RelationaloperatorContext {
  public:
    OpNotEqualContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *NOT_EQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpLeContext : public RelationaloperatorContext {
  public:
    OpLeContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *LE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RelationaloperatorContext* relationaloperator();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    AdditiveoperatorContext *additiveoperator();
    SimpleExpressionContext *simpleExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  AdditiveoperatorContext : public antlr4::ParserRuleContext {
  public:
    AdditiveoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AdditiveoperatorContext() = default;
    void copyFrom(AdditiveoperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OpOrContext : public AdditiveoperatorContext {
  public:
    OpOrContext(AdditiveoperatorContext *ctx);

    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpPlusContext : public AdditiveoperatorContext {
  public:
    OpPlusContext(AdditiveoperatorContext *ctx);

    antlr4::tree::TerminalNode *PLUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpMinusContext : public AdditiveoperatorContext {
  public:
    OpMinusContext(AdditiveoperatorContext *ctx);

    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AdditiveoperatorContext* additiveoperator();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignedFactorContext *signedFactor();
    MultiplicativeoperatorContext *multiplicativeoperator();
    TermContext *term();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  MultiplicativeoperatorContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MultiplicativeoperatorContext() = default;
    void copyFrom(MultiplicativeoperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OpStarContext : public MultiplicativeoperatorContext {
  public:
    OpStarContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *STAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpSlashContext : public MultiplicativeoperatorContext {
  public:
    OpSlashContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *SLASH();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpAndContext : public MultiplicativeoperatorContext {
  public:
    OpAndContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *AND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpModContext : public MultiplicativeoperatorContext {
  public:
    OpModContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *MOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpDivContext : public MultiplicativeoperatorContext {
  public:
    OpDivContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *DIV();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MultiplicativeoperatorContext* multiplicativeoperator();

  class  SignedFactorContext : public antlr4::ParserRuleContext {
  public:
    SignedFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedFactorContext* signedFactor();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FactorNotFactContext : public FactorContext {
  public:
    FactorNotFactContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorBoolContext : public FactorContext {
  public:
    FactorBoolContext(FactorContext *ctx);

    Bool_Context *bool_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorSetContext : public FactorContext {
  public:
    FactorSetContext(FactorContext *ctx);

    Set_Context *set_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorUnsConstContext : public FactorContext {
  public:
    FactorUnsConstContext(FactorContext *ctx);

    UnsignedConstantContext *unsignedConstant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorVarContext : public FactorContext {
  public:
    FactorVarContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorExprContext : public FactorContext {
  public:
    FactorExprContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorFuncContext : public FactorContext {
  public:
    FactorFuncContext(FactorContext *ctx);

    FunctionDesignatorContext *functionDesignator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  UnsignedConstantContext : public antlr4::ParserRuleContext {
  public:
    UnsignedConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnsignedConstantContext() = default;
    void copyFrom(UnsignedConstantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnsignedConstUnsignedNumContext : public UnsignedConstantContext {
  public:
    UnsignedConstUnsignedNumContext(UnsignedConstantContext *ctx);

    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsignedConstStrContext : public UnsignedConstantContext {
  public:
    UnsignedConstStrContext(UnsignedConstantContext *ctx);

    StringContext *string();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnsignedConstantContext* unsignedConstant();

  class  FunctionDesignatorContext : public antlr4::ParserRuleContext {
  public:
    FunctionDesignatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDesignatorContext* functionDesignator();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ActualParameterContext *> actualParameter();
    ActualParameterContext* actualParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  Set_Context : public antlr4::ParserRuleContext {
  public:
    Set_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Set_Context() = default;
    void copyFrom(Set_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Set2Context : public Set_Context {
  public:
    Set2Context(Set_Context *ctx);

    antlr4::tree::TerminalNode *LBRACK2();
    ElementListContext *elementList();
    antlr4::tree::TerminalNode *RBRACK2();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Set1Context : public Set_Context {
  public:
    Set1Context(Set_Context *ctx);

    antlr4::tree::TerminalNode *LBRACK();
    ElementListContext *elementList();
    antlr4::tree::TerminalNode *RBRACK();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Set_Context* set_();

  class  ElementListContext : public antlr4::ParserRuleContext {
  public:
    ElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ElementListContext() = default;
    void copyFrom(ElementListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EleListContext : public ElementListContext {
  public:
    EleListContext(ElementListContext *ctx);

    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EleList2Context : public ElementListContext {
  public:
    EleList2Context(ElementListContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ElementListContext* elementList();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementContext* element();

  class  ProcedureStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureStatementContext* procedureStatement();

  class  ActualParameterContext : public antlr4::ParserRuleContext {
  public:
    ActualParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<ParameterwidthContext *> parameterwidth();
    ParameterwidthContext* parameterwidth(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActualParameterContext* actualParameter();

  class  ParameterwidthContext : public antlr4::ParserRuleContext {
  public:
    ParameterwidthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterwidthContext* parameterwidth();

  class  EmptyStatement_Context : public antlr4::ParserRuleContext {
  public:
    EmptyStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatement_Context* emptyStatement_();

  class  Empty_Context : public antlr4::ParserRuleContext {
  public:
    Empty_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_Context* empty_();

  class  StructuredStatementContext : public antlr4::ParserRuleContext {
  public:
    StructuredStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StructuredStatementContext() = default;
    void copyFrom(StructuredStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StructuredStateRepetetiveContext : public StructuredStatementContext {
  public:
    StructuredStateRepetetiveContext(StructuredStatementContext *ctx);

    RepetetiveStatementContext *repetetiveStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StructuredStateConditionalContext : public StructuredStatementContext {
  public:
    StructuredStateConditionalContext(StructuredStatementContext *ctx);

    ConditionalStatementContext *conditionalStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StructuredStateCompoundContext : public StructuredStatementContext {
  public:
    StructuredStateCompoundContext(StructuredStatementContext *ctx);

    CompoundStatementContext *compoundStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructuredStatementContext* structuredStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *END();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  ConditionalStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionalStatementContext() = default;
    void copyFrom(ConditionalStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionalStateCaseContext : public ConditionalStatementContext {
  public:
    ConditionalStateCaseContext(ConditionalStatementContext *ctx);

    CaseStatementContext *caseStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConditionalStateIfContext : public ConditionalStatementContext {
  public:
    ConditionalStateIfContext(ConditionalStatementContext *ctx);

    IfStatementContext *ifStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalStatementContext* conditionalStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OF();
    std::vector<CaseListElementContext *> caseListElement();
    CaseListElementContext* caseListElement(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    StatementsContext *statements();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseStatementContext* caseStatement();

  class  CaseListElementContext : public antlr4::ParserRuleContext {
  public:
    CaseListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstListContext *constList();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseListElementContext* caseListElement();

  class  RepetetiveStatementContext : public antlr4::ParserRuleContext {
  public:
    RepetetiveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RepetetiveStatementContext() = default;
    void copyFrom(RepetetiveStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RepetetiveStateRepeatContext : public RepetetiveStatementContext {
  public:
    RepetetiveStateRepeatContext(RepetetiveStatementContext *ctx);

    RepeatStatementContext *repeatStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetetiveStateForContext : public RepetetiveStatementContext {
  public:
    RepetetiveStateForContext(RepetetiveStatementContext *ctx);

    ForStatementContext *forStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetetiveStateWhileContext : public RepetetiveStatementContext {
  public:
    RepetetiveStateWhileContext(RepetetiveStatementContext *ctx);

    WhileStatementContext *whileStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RepetetiveStatementContext* repetetiveStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatStatementContext* repeatStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    ForListContext *forList();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  ForListContext : public antlr4::ParserRuleContext {
  public:
    ForListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitialValueContext *initialValue();
    FinalValueContext *finalValue();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForListContext* forList();

  class  InitialValueContext : public antlr4::ParserRuleContext {
  public:
    InitialValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitialValueContext* initialValue();

  class  FinalValueContext : public antlr4::ParserRuleContext {
  public:
    FinalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinalValueContext* finalValue();

  class  RecordVariableListContext : public antlr4::ParserRuleContext {
  public:
    RecordVariableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordVariableListContext* recordVariableList();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

