
// Generated from /usr/src/app/s1mple-compiler/src/Pascal.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  PascalParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleProgramHeading = 1, RuleIdentifier = 2, RuleBlock = 3, 
    RuleConstantDefinitionPart = 4, RuleConstantDefinition = 5, RuleConstantChr = 6, 
    RuleConstant = 7, RuleUnsignedNumber = 8, RuleUnsignedInteger = 9, RuleUnsignedReal = 10, 
    RuleSign = 11, RuleBool_ = 12, RuleString = 13, RuleTypeDefinitionPart = 14, 
    RuleTypeDefinition = 15, RuleProcedureType = 16, RuleType_ = 17, RuleSimpleType = 18, 
    RuleScalarType = 19, RuleSubrangeType = 20, RuleTypeIdentifier = 21, 
    RuleStructuredType = 22, RuleUnpackedStructuredType = 23, RuleStringtype = 24, 
    RuleArrayType = 25, RuleTypeList = 26, RuleIndexType = 27, RuleComponentType = 28, 
    RuleRecordType = 29, RuleFieldList = 30, RuleFixedPart = 31, RuleRecordSection = 32, 
    RuleVariantPart = 33, RuleTag = 34, RuleVariant = 35, RuleSetType = 36, 
    RuleBaseType = 37, RuleFileType = 38, RulePointerType = 39, RuleVariableDeclarationPart = 40, 
    RuleVariableDeclaration = 41, RuleProcedureAndFunctionDeclarationPart = 42, 
    RuleProcedureOrFunctionDeclaration = 43, RuleProcedureDeclaration = 44, 
    RuleFormalParameterList = 45, RuleFormalParameterSection = 46, RuleParameterGroup = 47, 
    RuleIdentifierList = 48, RuleConstList = 49, RuleFunctionDeclaration = 50, 
    RuleResultType = 51, RuleStatement = 52, RuleUnlabelledStatement = 53, 
    RuleSimpleStatement = 54, RuleAssignmentStatement = 55, RuleVariable = 56, 
    RuleExpression = 57, RuleRelationaloperator = 58, RuleSimpleExpression = 59, 
    RuleAdditiveoperator = 60, RuleTerm = 61, RuleMultiplicativeoperator = 62, 
    RuleSignedFactor = 63, RuleFactor = 64, RuleUnsignedConstant = 65, RuleFunctionDesignator = 66, 
    RuleParameterList = 67, RuleSet_ = 68, RuleElementList = 69, RuleElement = 70, 
    RuleProcedureStatement = 71, RuleActualParameter = 72, RuleParameterwidth = 73, 
    RuleEmptyStatement_ = 74, RuleEmpty_ = 75, RuleStructuredStatement = 76, 
    RuleCompoundStatement = 77, RuleStatements = 78, RuleConditionalStatement = 79, 
    RuleIfStatement = 80, RuleCaseStatement = 81, RuleCaseListElement = 82, 
    RuleRepetetiveStatement = 83, RuleWhileStatement = 84, RuleRepeatStatement = 85, 
    RuleForStatement = 86, RuleForList = 87, RuleInitialValue = 88, RuleFinalValue = 89, 
    RuleWithStatement = 90, RuleRecordVariableList = 91
  };

  explicit PascalParser(antlr4::TokenStream *input);
  ~PascalParser();

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
  class ConstantChrContext;
  class ConstantContext;
  class UnsignedNumberContext;
  class UnsignedIntegerContext;
  class UnsignedRealContext;
  class SignContext;
  class Bool_Context;
  class StringContext;
  class TypeDefinitionPartContext;
  class TypeDefinitionContext;
  class ProcedureTypeContext;
  class Type_Context;
  class SimpleTypeContext;
  class ScalarTypeContext;
  class SubrangeTypeContext;
  class TypeIdentifierContext;
  class StructuredTypeContext;
  class UnpackedStructuredTypeContext;
  class StringtypeContext;
  class ArrayTypeContext;
  class TypeListContext;
  class IndexTypeContext;
  class ComponentTypeContext;
  class RecordTypeContext;
  class FieldListContext;
  class FixedPartContext;
  class RecordSectionContext;
  class VariantPartContext;
  class TagContext;
  class VariantContext;
  class SetTypeContext;
  class BaseTypeContext;
  class FileTypeContext;
  class PointerTypeContext;
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
  class ResultTypeContext;
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
  class WithStatementContext;
  class RecordVariableListContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgramContext() = default;
    void copyFrom(ProgramContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgramWholeContext : public ProgramContext {
  public:
    ProgramWholeContext(ProgramContext *ctx);

    ProgramHeadingContext *programHeading();
    BlockContext *block();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INTERFACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgramContext* program();

  class  ProgramHeadingContext : public antlr4::ParserRuleContext {
  public:
    ProgramHeadingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgramHeadingContext() = default;
    void copyFrom(ProgramHeadingContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgramHeadContext : public ProgramHeadingContext {
  public:
    ProgramHeadContext(ProgramHeadingContext *ctx);

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
   
    IdentifierContext() = default;
    void copyFrom(IdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdContext : public IdentifierContext {
  public:
    IdContext(IdentifierContext *ctx);

    antlr4::tree::TerminalNode *IDENT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IdentifierContext* identifier();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BlockContext() = default;
    void copyFrom(BlockContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgramBodyContext : public BlockContext {
  public:
    ProgramBodyContext(BlockContext *ctx);

    CompoundStatementContext *compoundStatement();
    std::vector<ConstantDefinitionPartContext *> constantDefinitionPart();
    ConstantDefinitionPartContext* constantDefinitionPart(size_t i);
    std::vector<TypeDefinitionPartContext *> typeDefinitionPart();
    TypeDefinitionPartContext* typeDefinitionPart(size_t i);
    std::vector<VariableDeclarationPartContext *> variableDeclarationPart();
    VariableDeclarationPartContext* variableDeclarationPart(size_t i);
    std::vector<ProcedureAndFunctionDeclarationPartContext *> procedureAndFunctionDeclarationPart();
    ProcedureAndFunctionDeclarationPartContext* procedureAndFunctionDeclarationPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IMPLEMENTATION();
    antlr4::tree::TerminalNode* IMPLEMENTATION(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BlockContext* block();

  class  ConstantDefinitionPartContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantDefinitionPartContext() = default;
    void copyFrom(ConstantDefinitionPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstPartContext : public ConstantDefinitionPartContext {
  public:
    ConstPartContext(ConstantDefinitionPartContext *ctx);

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
   
    ConstantDefinitionContext() = default;
    void copyFrom(ConstantDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstContext : public ConstantDefinitionContext {
  public:
    ConstContext(ConstantDefinitionContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantContext *constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstantDefinitionContext* constantDefinition();

  class  ConstantChrContext : public antlr4::ParserRuleContext {
  public:
    ConstantChrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantChrContext() = default;
    void copyFrom(ConstantChrContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstChrContext : public ConstantChrContext {
  public:
    ConstChrContext(ConstantChrContext *ctx);

    antlr4::tree::TerminalNode *CHR();
    antlr4::tree::TerminalNode *LPAREN();
    UnsignedIntegerContext *unsignedInteger();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstantChrContext* constantChr();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantContext() = default;
    void copyFrom(ConstantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Const_signedNumberContext : public ConstantContext {
  public:
    Const_signedNumberContext(ConstantContext *ctx);

    SignContext *sign();
    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_constantChrContext : public ConstantContext {
  public:
    Const_constantChrContext(ConstantContext *ctx);

    ConstantChrContext *constantChr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_signedIdentifierContext : public ConstantContext {
  public:
    Const_signedIdentifierContext(ConstantContext *ctx);

    SignContext *sign();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_stringContext : public ConstantContext {
  public:
    Const_stringContext(ConstantContext *ctx);

    StringContext *string();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_unsignedNumberContext : public ConstantContext {
  public:
    Const_unsignedNumberContext(ConstantContext *ctx);

    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Const_identifierContext : public ConstantContext {
  public:
    Const_identifierContext(ConstantContext *ctx);

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

  class  UnsignedNumber_realContext : public UnsignedNumberContext {
  public:
    UnsignedNumber_realContext(UnsignedNumberContext *ctx);

    UnsignedRealContext *unsignedReal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsignedNumber_intContext : public UnsignedNumberContext {
  public:
    UnsignedNumber_intContext(UnsignedNumberContext *ctx);

    UnsignedIntegerContext *unsignedInteger();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnsignedNumberContext* unsignedNumber();

  class  UnsignedIntegerContext : public antlr4::ParserRuleContext {
  public:
    UnsignedIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnsignedIntegerContext() = default;
    void copyFrom(UnsignedIntegerContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_unsigned_intContext : public UnsignedIntegerContext {
  public:
    Type_unsigned_intContext(UnsignedIntegerContext *ctx);

    antlr4::tree::TerminalNode *NUM_INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnsignedIntegerContext* unsignedInteger();

  class  UnsignedRealContext : public antlr4::ParserRuleContext {
  public:
    UnsignedRealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnsignedRealContext() = default;
    void copyFrom(UnsignedRealContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_unsigned_realContext : public UnsignedRealContext {
  public:
    Type_unsigned_realContext(UnsignedRealContext *ctx);

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

  class  Type_signed_minusContext : public SignContext {
  public:
    Type_signed_minusContext(SignContext *ctx);

    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_signed_plusContext : public SignContext {
  public:
    Type_signed_plusContext(SignContext *ctx);

    antlr4::tree::TerminalNode *PLUS();

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

  class  Type_bool_trueContext : public Bool_Context {
  public:
    Type_bool_trueContext(Bool_Context *ctx);

    antlr4::tree::TerminalNode *TRUE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_bool_falseContext : public Bool_Context {
  public:
    Type_bool_falseContext(Bool_Context *ctx);

    antlr4::tree::TerminalNode *FALSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Bool_Context* bool_();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StringContext() = default;
    void copyFrom(StringContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_stringContext : public StringContext {
  public:
    Type_stringContext(StringContext *ctx);

    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StringContext* string();

  class  TypeDefinitionPartContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeDefinitionPartContext() = default;
    void copyFrom(TypeDefinitionPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypePartContext : public TypeDefinitionPartContext {
  public:
    TypePartContext(TypeDefinitionPartContext *ctx);

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
   
    TypeDefinitionContext() = default;
    void copyFrom(TypeDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeContext : public TypeDefinitionContext {
  public:
    TypeContext(TypeDefinitionContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL();
    Type_Context *type_();
    ProcedureTypeContext *procedureType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeDefinitionContext* typeDefinition();

  class  ProcedureTypeContext : public antlr4::ParserRuleContext {
  public:
    ProcedureTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProcedureTypeContext() = default;
    void copyFrom(ProcedureTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_procedureTypeContext : public ProcedureTypeContext {
  public:
    Type_procedureTypeContext(ProcedureTypeContext *ctx);

    antlr4::tree::TerminalNode *PROCEDURE();
    FormalParameterListContext *formalParameterList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProcedureTypeContext* procedureType();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Type_Context() = default;
    void copyFrom(Type_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_simpleTypeContext : public Type_Context {
  public:
    Type_simpleTypeContext(Type_Context *ctx);

    SimpleTypeContext *simpleType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_pointerTypeContext : public Type_Context {
  public:
    Type_pointerTypeContext(Type_Context *ctx);

    PointerTypeContext *pointerType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredTypeContext : public Type_Context {
  public:
    Type_structuredTypeContext(Type_Context *ctx);

    StructuredTypeContext *structuredType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Type_Context* type_();

  class  SimpleTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleTypeContext() = default;
    void copyFrom(SimpleTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_simpleType_scalarTypeContext : public SimpleTypeContext {
  public:
    Type_simpleType_scalarTypeContext(SimpleTypeContext *ctx);

    ScalarTypeContext *scalarType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_simpleType_stringtypeContext : public SimpleTypeContext {
  public:
    Type_simpleType_stringtypeContext(SimpleTypeContext *ctx);

    StringtypeContext *stringtype();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_simpleType_subrangeTypeContext : public SimpleTypeContext {
  public:
    Type_simpleType_subrangeTypeContext(SimpleTypeContext *ctx);

    SubrangeTypeContext *subrangeType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_simpleType_typeIdentifierContext : public SimpleTypeContext {
  public:
    Type_simpleType_typeIdentifierContext(SimpleTypeContext *ctx);

    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SimpleTypeContext* simpleType();

  class  ScalarTypeContext : public antlr4::ParserRuleContext {
  public:
    ScalarTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ScalarTypeContext() = default;
    void copyFrom(ScalarTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_simpleType_scalarType_scalarContext : public ScalarTypeContext {
  public:
    Type_simpleType_scalarType_scalarContext(ScalarTypeContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ScalarTypeContext* scalarType();

  class  SubrangeTypeContext : public antlr4::ParserRuleContext {
  public:
    SubrangeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SubrangeTypeContext() = default;
    void copyFrom(SubrangeTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_simpleType_subrangeType_subrangeContext : public SubrangeTypeContext {
  public:
    Type_simpleType_subrangeType_subrangeContext(SubrangeTypeContext *ctx);

    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SubrangeTypeContext* subrangeType();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeIdentifierContext() = default;
    void copyFrom(TypeIdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_simpleType_typeIdentifier_idContext : public TypeIdentifierContext {
  public:
    Type_simpleType_typeIdentifier_idContext(TypeIdentifierContext *ctx);

    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_simpleType_typeIdentifier_typeContext : public TypeIdentifierContext {
  public:
    Type_simpleType_typeIdentifier_typeContext(TypeIdentifierContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeIdentifierContext* typeIdentifier();

  class  StructuredTypeContext : public antlr4::ParserRuleContext {
  public:
    StructuredTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StructuredTypeContext() = default;
    void copyFrom(StructuredTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpackedContext : public StructuredTypeContext {
  public:
    Type_structuredType_unpackedContext(StructuredTypeContext *ctx);

    UnpackedStructuredTypeContext *unpackedStructuredType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_pacakedContext : public StructuredTypeContext {
  public:
    Type_structuredType_pacakedContext(StructuredTypeContext *ctx);

    antlr4::tree::TerminalNode *PACKED();
    UnpackedStructuredTypeContext *unpackedStructuredType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructuredTypeContext* structuredType();

  class  UnpackedStructuredTypeContext : public antlr4::ParserRuleContext {
  public:
    UnpackedStructuredTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnpackedStructuredTypeContext() = default;
    void copyFrom(UnpackedStructuredTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordTypeContext : public UnpackedStructuredTypeContext {
  public:
    Type_structuredType_unpacked_recordTypeContext(UnpackedStructuredTypeContext *ctx);

    RecordTypeContext *recordType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_arrayTypeContext : public UnpackedStructuredTypeContext {
  public:
    Type_structuredType_unpacked_arrayTypeContext(UnpackedStructuredTypeContext *ctx);

    ArrayTypeContext *arrayType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_setTypeContext : public UnpackedStructuredTypeContext {
  public:
    Type_structuredType_unpacked_setTypeContext(UnpackedStructuredTypeContext *ctx);

    SetTypeContext *setType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_fileTypeContext : public UnpackedStructuredTypeContext {
  public:
    Type_structuredType_unpacked_fileTypeContext(UnpackedStructuredTypeContext *ctx);

    FileTypeContext *fileType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnpackedStructuredTypeContext* unpackedStructuredType();

  class  StringtypeContext : public antlr4::ParserRuleContext {
  public:
    StringtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StringtypeContext() = default;
    void copyFrom(StringtypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_simpleType_stringtype_strContext : public StringtypeContext {
  public:
    Type_simpleType_stringtype_strContext(StringtypeContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    IdentifierContext *identifier();
    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StringtypeContext* stringtype();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrayTypeContext() = default;
    void copyFrom(ArrayTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_arrayType_array1Context : public ArrayTypeContext {
  public:
    Type_structuredType_unpacked_arrayType_array1Context(ArrayTypeContext *ctx);

    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACK();
    TypeListContext *typeList();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *OF();
    ComponentTypeContext *componentType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_arrayType_array2Context : public ArrayTypeContext {
  public:
    Type_structuredType_unpacked_arrayType_array2Context(ArrayTypeContext *ctx);

    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACK2();
    TypeListContext *typeList();
    antlr4::tree::TerminalNode *RBRACK2();
    antlr4::tree::TerminalNode *OF();
    ComponentTypeContext *componentType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrayTypeContext* arrayType();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeListContext() = default;
    void copyFrom(TypeListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_arrayType_array_typeListContext : public TypeListContext {
  public:
    Type_structuredType_unpacked_arrayType_array_typeListContext(TypeListContext *ctx);

    std::vector<IndexTypeContext *> indexType();
    IndexTypeContext* indexType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeListContext* typeList();

  class  IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IndexTypeContext() = default;
    void copyFrom(IndexTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_arrayType_array_typeList_indexContext : public IndexTypeContext {
  public:
    Type_structuredType_unpacked_arrayType_array_typeList_indexContext(IndexTypeContext *ctx);

    SimpleTypeContext *simpleType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IndexTypeContext* indexType();

  class  ComponentTypeContext : public antlr4::ParserRuleContext {
  public:
    ComponentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ComponentTypeContext() = default;
    void copyFrom(ComponentTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_arrayType_array_componentContext : public ComponentTypeContext {
  public:
    Type_structuredType_unpacked_arrayType_array_componentContext(ComponentTypeContext *ctx);

    Type_Context *type_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ComponentTypeContext* componentType();

  class  RecordTypeContext : public antlr4::ParserRuleContext {
  public:
    RecordTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RecordTypeContext() = default;
    void copyFrom(RecordTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_recordContext : public RecordTypeContext {
  public:
    Type_structuredType_unpacked_recordType_recordContext(RecordTypeContext *ctx);

    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *END();
    FieldListContext *fieldList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RecordTypeContext* recordType();

  class  FieldListContext : public antlr4::ParserRuleContext {
  public:
    FieldListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FieldListContext() = default;
    void copyFrom(FieldListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_record_fixedContext : public FieldListContext {
  public:
    Type_structuredType_unpacked_recordType_record_fixedContext(FieldListContext *ctx);

    FixedPartContext *fixedPart();
    antlr4::tree::TerminalNode *SEMI();
    VariantPartContext *variantPart();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_recordType_record_variableContext : public FieldListContext {
  public:
    Type_structuredType_unpacked_recordType_record_variableContext(FieldListContext *ctx);

    VariantPartContext *variantPart();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FieldListContext* fieldList();

  class  FixedPartContext : public antlr4::ParserRuleContext {
  public:
    FixedPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FixedPartContext() = default;
    void copyFrom(FixedPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_record_fixed_fixContext : public FixedPartContext {
  public:
    Type_structuredType_unpacked_recordType_record_fixed_fixContext(FixedPartContext *ctx);

    std::vector<RecordSectionContext *> recordSection();
    RecordSectionContext* recordSection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FixedPartContext* fixedPart();

  class  RecordSectionContext : public antlr4::ParserRuleContext {
  public:
    RecordSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RecordSectionContext() = default;
    void copyFrom(RecordSectionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext : public RecordSectionContext {
  public:
    Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext(RecordSectionContext *ctx);

    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    Type_Context *type_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RecordSectionContext* recordSection();

  class  VariantPartContext : public antlr4::ParserRuleContext {
  public:
    VariantPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariantPartContext() = default;
    void copyFrom(VariantPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_record_variable_varContext : public VariantPartContext {
  public:
    Type_structuredType_unpacked_recordType_record_variable_varContext(VariantPartContext *ctx);

    antlr4::tree::TerminalNode *CASE();
    TagContext *tag();
    antlr4::tree::TerminalNode *OF();
    std::vector<VariantContext *> variant();
    VariantContext* variant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariantPartContext* variantPart();

  class  TagContext : public antlr4::ParserRuleContext {
  public:
    TagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TagContext() = default;
    void copyFrom(TagContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext : public TagContext {
  public:
    Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext(TagContext *ctx);

    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_recordType_record_variable_var_idContext : public TagContext {
  public:
    Type_structuredType_unpacked_recordType_record_variable_var_idContext(TagContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TagContext* tag();

  class  VariantContext : public antlr4::ParserRuleContext {
  public:
    VariantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariantContext() = default;
    void copyFrom(VariantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_recordType_record_variable_var_valueContext : public VariantContext {
  public:
    Type_structuredType_unpacked_recordType_record_variable_var_valueContext(VariantContext *ctx);

    ConstListContext *constList();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LPAREN();
    FieldListContext *fieldList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariantContext* variant();

  class  SetTypeContext : public antlr4::ParserRuleContext {
  public:
    SetTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SetTypeContext() = default;
    void copyFrom(SetTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_setType_setContext : public SetTypeContext {
  public:
    Type_structuredType_unpacked_setType_setContext(SetTypeContext *ctx);

    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *OF();
    BaseTypeContext *baseType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SetTypeContext* setType();

  class  BaseTypeContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BaseTypeContext() = default;
    void copyFrom(BaseTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_setType_set_baseContext : public BaseTypeContext {
  public:
    Type_structuredType_unpacked_setType_set_baseContext(BaseTypeContext *ctx);

    SimpleTypeContext *simpleType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BaseTypeContext* baseType();

  class  FileTypeContext : public antlr4::ParserRuleContext {
  public:
    FileTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FileTypeContext() = default;
    void copyFrom(FileTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_structuredType_unpacked_fileType_file1Context : public FileTypeContext {
  public:
    Type_structuredType_unpacked_fileType_file1Context(FileTypeContext *ctx);

    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *OF();
    Type_Context *type_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Type_structuredType_unpacked_fileType_file2Context : public FileTypeContext {
  public:
    Type_structuredType_unpacked_fileType_file2Context(FileTypeContext *ctx);

    antlr4::tree::TerminalNode *FILE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FileTypeContext* fileType();

  class  PointerTypeContext : public antlr4::ParserRuleContext {
  public:
    PointerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PointerTypeContext() = default;
    void copyFrom(PointerTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Type_pointerType_pointerContext : public PointerTypeContext {
  public:
    Type_pointerType_pointerContext(PointerTypeContext *ctx);

    antlr4::tree::TerminalNode *POINTER();
    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PointerTypeContext* pointerType();

  class  VariableDeclarationPartContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariableDeclarationPartContext() = default;
    void copyFrom(VariableDeclarationPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariablePartContext : public VariableDeclarationPartContext {
  public:
    VariablePartContext(VariableDeclarationPartContext *ctx);

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
   
    VariableDeclarationContext() = default;
    void copyFrom(VariableDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarDeclarationContext : public VariableDeclarationContext {
  public:
    VarDeclarationContext(VariableDeclarationContext *ctx);

    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    Type_Context *type_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariableDeclarationContext* variableDeclaration();

  class  ProcedureAndFunctionDeclarationPartContext : public antlr4::ParserRuleContext {
  public:
    ProcedureAndFunctionDeclarationPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProcedureAndFunctionDeclarationPartContext() = default;
    void copyFrom(ProcedureAndFunctionDeclarationPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProcedurePartContext : public ProcedureAndFunctionDeclarationPartContext {
  public:
    ProcedurePartContext(ProcedureAndFunctionDeclarationPartContext *ctx);

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

  class  Procedure_proContext : public ProcedureOrFunctionDeclarationContext {
  public:
    Procedure_proContext(ProcedureOrFunctionDeclarationContext *ctx);

    ProcedureDeclarationContext *procedureDeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Procedure_funcContext : public ProcedureOrFunctionDeclarationContext {
  public:
    Procedure_funcContext(ProcedureOrFunctionDeclarationContext *ctx);

    FunctionDeclarationContext *functionDeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProcedureOrFunctionDeclarationContext* procedureOrFunctionDeclaration();

  class  ProcedureDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProcedureDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProcedureDeclarationContext() = default;
    void copyFrom(ProcedureDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Procedure_pro_decContext : public ProcedureDeclarationContext {
  public:
    Procedure_pro_decContext(ProcedureDeclarationContext *ctx);

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
   
    FormalParameterListContext() = default;
    void copyFrom(FormalParameterListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Procedure_pro_parameterListContext : public FormalParameterListContext {
  public:
    Procedure_pro_parameterListContext(FormalParameterListContext *ctx);

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

  class  Procedure_pro_parameterList_varGroupContext : public FormalParameterSectionContext {
  public:
    Procedure_pro_parameterList_varGroupContext(FormalParameterSectionContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Procedure_pro_parameterList_funcGroupContext : public FormalParameterSectionContext {
  public:
    Procedure_pro_parameterList_funcGroupContext(FormalParameterSectionContext *ctx);

    antlr4::tree::TerminalNode *FUNCTION();
    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Procedure_pro_parameterList_groupContext : public FormalParameterSectionContext {
  public:
    Procedure_pro_parameterList_groupContext(FormalParameterSectionContext *ctx);

    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Procedure_pro_parameterList_proGroupContext : public FormalParameterSectionContext {
  public:
    Procedure_pro_parameterList_proGroupContext(FormalParameterSectionContext *ctx);

    antlr4::tree::TerminalNode *PROCEDURE();
    ParameterGroupContext *parameterGroup();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FormalParameterSectionContext* formalParameterSection();

  class  ParameterGroupContext : public antlr4::ParserRuleContext {
  public:
    ParameterGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParameterGroupContext() = default;
    void copyFrom(ParameterGroupContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Procedure_pro_parameterList_group_idContext : public ParameterGroupContext {
  public:
    Procedure_pro_parameterList_group_idContext(ParameterGroupContext *ctx);

    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParameterGroupContext* parameterGroup();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IdentifierListContext() = default;
    void copyFrom(IdentifierListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdListContext : public IdentifierListContext {
  public:
    IdListContext(IdentifierListContext *ctx);

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
   
    ConstListContext() = default;
    void copyFrom(ConstListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstantListContext : public ConstListContext {
  public:
    ConstantListContext(ConstListContext *ctx);

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
   
    FunctionDeclarationContext() = default;
    void copyFrom(FunctionDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Procedure_func_decContext : public FunctionDeclarationContext {
  public:
    Procedure_func_decContext(FunctionDeclarationContext *ctx);

    antlr4::tree::TerminalNode *FUNCTION();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    ResultTypeContext *resultType();
    antlr4::tree::TerminalNode *SEMI();
    BlockContext *block();
    FormalParameterListContext *formalParameterList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ResultTypeContext : public antlr4::ParserRuleContext {
  public:
    ResultTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ResultTypeContext() = default;
    void copyFrom(ResultTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Procedure_func_resultContext : public ResultTypeContext {
  public:
    Procedure_func_resultContext(ResultTypeContext *ctx);

    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ResultTypeContext* resultType();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatementPartContext : public StatementContext {
  public:
    StatementPartContext(StatementContext *ctx);

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

  class  Statement_simpleContext : public UnlabelledStatementContext {
  public:
    Statement_simpleContext(UnlabelledStatementContext *ctx);

    SimpleStatementContext *simpleStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_structuredContext : public UnlabelledStatementContext {
  public:
    Statement_structuredContext(UnlabelledStatementContext *ctx);

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

  class  Statement_simple_emptyContext : public SimpleStatementContext {
  public:
    Statement_simple_emptyContext(SimpleStatementContext *ctx);

    EmptyStatement_Context *emptyStatement_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_simple_procedureContext : public SimpleStatementContext {
  public:
    Statement_simple_procedureContext(SimpleStatementContext *ctx);

    ProcedureStatementContext *procedureStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_simple_assignmentContext : public SimpleStatementContext {
  public:
    Statement_simple_assignmentContext(SimpleStatementContext *ctx);

    AssignmentStatementContext *assignmentStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SimpleStatementContext* simpleStatement();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentStatementContext() = default;
    void copyFrom(AssignmentStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Statement_simple_assignment_assignContext : public AssignmentStatementContext {
  public:
    Statement_simple_assignment_assignContext(AssignmentStatementContext *ctx);

    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentStatementContext* assignmentStatement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariableContext() = default;
    void copyFrom(VariableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarContext : public VariableContext {
  public:
    VarContext(VariableContext *ctx);

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
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprContext : public ExpressionContext {
  public:
    ExprContext(ExpressionContext *ctx);

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

  class  Operator_INContext : public RelationaloperatorContext {
  public:
    Operator_INContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *IN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_notEqualContext : public RelationaloperatorContext {
  public:
    Operator_notEqualContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *NOT_EQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_equalContext : public RelationaloperatorContext {
  public:
    Operator_equalContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *EQUAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_LTContext : public RelationaloperatorContext {
  public:
    Operator_LTContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *LT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_LEContext : public RelationaloperatorContext {
  public:
    Operator_LEContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *LE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_GTContext : public RelationaloperatorContext {
  public:
    Operator_GTContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *GT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_GEContext : public RelationaloperatorContext {
  public:
    Operator_GEContext(RelationaloperatorContext *ctx);

    antlr4::tree::TerminalNode *GE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RelationaloperatorContext* relationaloperator();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleExpressionContext() = default;
    void copyFrom(SimpleExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_simpleContext : public SimpleExpressionContext {
  public:
    Expr_simpleContext(SimpleExpressionContext *ctx);

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

  class  Operator_minusContext : public AdditiveoperatorContext {
  public:
    Operator_minusContext(AdditiveoperatorContext *ctx);

    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_plusContext : public AdditiveoperatorContext {
  public:
    Operator_plusContext(AdditiveoperatorContext *ctx);

    antlr4::tree::TerminalNode *PLUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_orContext : public AdditiveoperatorContext {
  public:
    Operator_orContext(AdditiveoperatorContext *ctx);

    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AdditiveoperatorContext* additiveoperator();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_simple_termContext : public TermContext {
  public:
    Expr_simple_termContext(TermContext *ctx);

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

  class  Operator_andContext : public MultiplicativeoperatorContext {
  public:
    Operator_andContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *AND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_starContext : public MultiplicativeoperatorContext {
  public:
    Operator_starContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *STAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_modContext : public MultiplicativeoperatorContext {
  public:
    Operator_modContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *MOD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_slashContext : public MultiplicativeoperatorContext {
  public:
    Operator_slashContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *SLASH();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Operator_divContext : public MultiplicativeoperatorContext {
  public:
    Operator_divContext(MultiplicativeoperatorContext *ctx);

    antlr4::tree::TerminalNode *DIV();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MultiplicativeoperatorContext* multiplicativeoperator();

  class  SignedFactorContext : public antlr4::ParserRuleContext {
  public:
    SignedFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SignedFactorContext() = default;
    void copyFrom(SignedFactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_simple_term_signedFactorContext : public SignedFactorContext {
  public:
    Expr_simple_term_signedFactorContext(SignedFactorContext *ctx);

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

  class  Expr_simple_term_signedFactor_constContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_constContext(FactorContext *ctx);

    UnsignedConstantContext *unsignedConstant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_boolContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_boolContext(FactorContext *ctx);

    Bool_Context *bool_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_varContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_varContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_funcContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_funcContext(FactorContext *ctx);

    FunctionDesignatorContext *functionDesignator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_notContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_notContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_exprContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_exprContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_setContext : public FactorContext {
  public:
    Expr_simple_term_signedFactor_setContext(FactorContext *ctx);

    Set_Context *set_();

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

  class  Expr_simple_term_signedFactor_const_unsignedNumberContext : public UnsignedConstantContext {
  public:
    Expr_simple_term_signedFactor_const_unsignedNumberContext(UnsignedConstantContext *ctx);

    UnsignedNumberContext *unsignedNumber();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_const_constChrContext : public UnsignedConstantContext {
  public:
    Expr_simple_term_signedFactor_const_constChrContext(UnsignedConstantContext *ctx);

    ConstantChrContext *constantChr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_const_strContext : public UnsignedConstantContext {
  public:
    Expr_simple_term_signedFactor_const_strContext(UnsignedConstantContext *ctx);

    StringContext *string();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_const_nilContext : public UnsignedConstantContext {
  public:
    Expr_simple_term_signedFactor_const_nilContext(UnsignedConstantContext *ctx);

    antlr4::tree::TerminalNode *NIL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnsignedConstantContext* unsignedConstant();

  class  FunctionDesignatorContext : public antlr4::ParserRuleContext {
  public:
    FunctionDesignatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionDesignatorContext() = default;
    void copyFrom(FunctionDesignatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_simple_term_signedFactor_func_idContext : public FunctionDesignatorContext {
  public:
    Expr_simple_term_signedFactor_func_idContext(FunctionDesignatorContext *ctx);

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
   
    ParameterListContext() = default;
    void copyFrom(ParameterListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParaListContext : public ParameterListContext {
  public:
    ParaListContext(ParameterListContext *ctx);

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

  class  Expr_simple_term_signedFactor_set_1Context : public Set_Context {
  public:
    Expr_simple_term_signedFactor_set_1Context(Set_Context *ctx);

    antlr4::tree::TerminalNode *LBRACK();
    ElementListContext *elementList();
    antlr4::tree::TerminalNode *RBRACK();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_simple_term_signedFactor_set_2Context : public Set_Context {
  public:
    Expr_simple_term_signedFactor_set_2Context(Set_Context *ctx);

    antlr4::tree::TerminalNode *LBRACK2();
    ElementListContext *elementList();
    antlr4::tree::TerminalNode *RBRACK2();

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

  class  EleList_emptyContext : public ElementListContext {
  public:
    EleList_emptyContext(ElementListContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ElementListContext* elementList();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ElementContext() = default;
    void copyFrom(ElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EleContext : public ElementContext {
  public:
    EleContext(ElementContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOTDOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ElementContext* element();

  class  ProcedureStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProcedureStatementContext() = default;
    void copyFrom(ProcedureStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Statement_simple_procedure_proContext : public ProcedureStatementContext {
  public:
    Statement_simple_procedure_proContext(ProcedureStatementContext *ctx);

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
   
    ActualParameterContext() = default;
    void copyFrom(ActualParameterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParaList_actualContext : public ActualParameterContext {
  public:
    ParaList_actualContext(ActualParameterContext *ctx);

    ExpressionContext *expression();
    std::vector<ParameterwidthContext *> parameterwidth();
    ParameterwidthContext* parameterwidth(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ActualParameterContext* actualParameter();

  class  ParameterwidthContext : public antlr4::ParserRuleContext {
  public:
    ParameterwidthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParameterwidthContext() = default;
    void copyFrom(ParameterwidthContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParaList_actual_widthContext : public ParameterwidthContext {
  public:
    ParaList_actual_widthContext(ParameterwidthContext *ctx);

    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParameterwidthContext* parameterwidth();

  class  EmptyStatement_Context : public antlr4::ParserRuleContext {
  public:
    EmptyStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EmptyStatement_Context() = default;
    void copyFrom(EmptyStatement_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EmptyStateContext : public EmptyStatement_Context {
  public:
    EmptyStateContext(EmptyStatement_Context *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  EmptyStatement_Context* emptyStatement_();

  class  Empty_Context : public antlr4::ParserRuleContext {
  public:
    Empty_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Empty_Context() = default;
    void copyFrom(Empty_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EmptyContext : public Empty_Context {
  public:
    EmptyContext(Empty_Context *ctx);


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

  class  Statement_structured_conditionContext : public StructuredStatementContext {
  public:
    Statement_structured_conditionContext(StructuredStatementContext *ctx);

    ConditionalStatementContext *conditionalStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_structured_compoundContext : public StructuredStatementContext {
  public:
    Statement_structured_compoundContext(StructuredStatementContext *ctx);

    CompoundStatementContext *compoundStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_structured_repetetiveContext : public StructuredStatementContext {
  public:
    Statement_structured_repetetiveContext(StructuredStatementContext *ctx);

    RepetetiveStatementContext *repetetiveStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_structured_withContext : public StructuredStatementContext {
  public:
    Statement_structured_withContext(StructuredStatementContext *ctx);

    WithStatementContext *withStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructuredStatementContext* structuredStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompoundStatementContext() = default;
    void copyFrom(CompoundStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CompoundStateContext : public CompoundStatementContext {
  public:
    CompoundStateContext(CompoundStatementContext *ctx);

    antlr4::tree::TerminalNode *BEGIN();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *END();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompoundStatementContext* compoundStatement();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementsContext() = default;
    void copyFrom(StatementsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatesContext : public StatementsContext {
  public:
    StatesContext(StatementsContext *ctx);

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

  class  ConditionalState_caseContext : public ConditionalStatementContext {
  public:
    ConditionalState_caseContext(ConditionalStatementContext *ctx);

    CaseStatementContext *caseStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConditionalState_ifContext : public ConditionalStatementContext {
  public:
    ConditionalState_ifContext(ConditionalStatementContext *ctx);

    IfStatementContext *ifStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalStatementContext* conditionalStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfStatementContext() = default;
    void copyFrom(IfStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionalState_ifStateContext : public IfStatementContext {
  public:
    ConditionalState_ifStateContext(IfStatementContext *ctx);

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
   
    CaseStatementContext() = default;
    void copyFrom(CaseStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionalState_caseStateContext : public CaseStatementContext {
  public:
    ConditionalState_caseStateContext(CaseStatementContext *ctx);

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
   
    CaseListElementContext() = default;
    void copyFrom(CaseListElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CaseState_listContext : public CaseListElementContext {
  public:
    CaseState_listContext(CaseListElementContext *ctx);

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

  class  RepetetiveState_whileContext : public RepetetiveStatementContext {
  public:
    RepetetiveState_whileContext(RepetetiveStatementContext *ctx);

    WhileStatementContext *whileStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetetivetState_repeatContext : public RepetetiveStatementContext {
  public:
    RepetetivetState_repeatContext(RepetetiveStatementContext *ctx);

    RepeatStatementContext *repeatStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetetivetState_forContext : public RepetetiveStatementContext {
  public:
    RepetetivetState_forContext(RepetetiveStatementContext *ctx);

    ForStatementContext *forStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RepetetiveStatementContext* repetetiveStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WhileStatementContext() = default;
    void copyFrom(WhileStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RepetetiveState_whileStateContext : public WhileStatementContext {
  public:
    RepetetiveState_whileStateContext(WhileStatementContext *ctx);

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
   
    RepeatStatementContext() = default;
    void copyFrom(RepeatStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RepetetiveState_repeatStateContext : public RepeatStatementContext {
  public:
    RepetetiveState_repeatStateContext(RepeatStatementContext *ctx);

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
   
    ForStatementContext() = default;
    void copyFrom(ForStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RepetetiveState_forStateContext : public ForStatementContext {
  public:
    RepetetiveState_forStateContext(ForStatementContext *ctx);

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
   
    ForListContext() = default;
    void copyFrom(ForListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ForState_listContext : public ForListContext {
  public:
    ForState_listContext(ForListContext *ctx);

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
   
    InitialValueContext() = default;
    void copyFrom(InitialValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ForState_list_initContext : public InitialValueContext {
  public:
    ForState_list_initContext(InitialValueContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InitialValueContext* initialValue();

  class  FinalValueContext : public antlr4::ParserRuleContext {
  public:
    FinalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FinalValueContext() = default;
    void copyFrom(FinalValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ForState_list_finalContext : public FinalValueContext {
  public:
    ForState_list_finalContext(FinalValueContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FinalValueContext* finalValue();

  class  WithStatementContext : public antlr4::ParserRuleContext {
  public:
    WithStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WithStatementContext() = default;
    void copyFrom(WithStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WithStateContext : public WithStatementContext {
  public:
    WithStateContext(WithStatementContext *ctx);

    antlr4::tree::TerminalNode *WITH();
    RecordVariableListContext *recordVariableList();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WithStatementContext* withStatement();

  class  RecordVariableListContext : public antlr4::ParserRuleContext {
  public:
    RecordVariableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RecordVariableListContext() = default;
    void copyFrom(RecordVariableListContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WithState_listContext : public RecordVariableListContext {
  public:
    WithState_listContext(RecordVariableListContext *ctx);

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

