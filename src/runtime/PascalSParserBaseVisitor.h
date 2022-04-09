
// Generated from /usr/src/app/src/PascalSParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "PascalSParserVisitor.h"


/**
 * This class provides an empty implementation of PascalSParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PascalSParserBaseVisitor : public PascalSParserVisitor {
public:

  virtual antlrcpp::Any visitProgram(PascalSParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramHeading(PascalSParser::ProgramHeadingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(PascalSParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(PascalSParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDefinition(PascalSParser::ConstantDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstIdentifier(PascalSParser::ConstIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstString(PascalSParser::ConstStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedReal(PascalSParser::UnsignedRealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignPlus(PascalSParser::SignPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignMinus(PascalSParser::SignMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolTrue(PascalSParser::BoolTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolFalse(PascalSParser::BoolFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(PascalSParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDefinition(PascalSParser::TypeDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleType(PascalSParser::SimpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayType1(PascalSParser::ArrayType1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayType2(PascalSParser::ArrayType2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPeriods(PascalSParser::PeriodsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPeriod(PascalSParser::PeriodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordType(PascalSParser::RecordTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordField(PascalSParser::RecordFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(PascalSParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameterList(PascalSParser::FormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterGroup(PascalSParser::ParameterGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(PascalSParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstList(PascalSParser::ConstListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleState(PascalSParser::SimpleStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructuredState(PascalSParser::StructuredStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStateProc(PascalSParser::SimpleStateProcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStatement(PascalSParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(PascalSParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(PascalSParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpEqual(PascalSParser::OpEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpNotEqual(PascalSParser::OpNotEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpLt(PascalSParser::OpLtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpLe(PascalSParser::OpLeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpGe(PascalSParser::OpGeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpGt(PascalSParser::OpGtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExpression(PascalSParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpPlus(PascalSParser::OpPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpMinus(PascalSParser::OpMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpOr(PascalSParser::OpOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(PascalSParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpStar(PascalSParser::OpStarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpSlash(PascalSParser::OpSlashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpDiv(PascalSParser::OpDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpMod(PascalSParser::OpModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpAnd(PascalSParser::OpAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedFactor(PascalSParser::SignedFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorVar(PascalSParser::FactorVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorExpr(PascalSParser::FactorExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorFunc(PascalSParser::FactorFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorUnsConst(PascalSParser::FactorUnsConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorNotFact(PascalSParser::FactorNotFactContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactorBool(PascalSParser::FactorBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(PascalSParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureStatement(PascalSParser::ProcedureStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActualParameter(PascalSParser::ActualParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterwidth(PascalSParser::ParameterwidthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement_(PascalSParser::EmptyStatement_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_(PascalSParser::Empty_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(PascalSParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatements(PascalSParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalStateCase(PascalSParser::ConditionalStateCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(PascalSParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseStatement(PascalSParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseListElement(PascalSParser::CaseListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveStateWhile(PascalSParser::RepetetiveStateWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveStateRepeat(PascalSParser::RepetetiveStateRepeatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(PascalSParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStatement(PascalSParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(PascalSParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForList(PascalSParser::ForListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitialValue(PascalSParser::InitialValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFinalValue(PascalSParser::FinalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordVariableList(PascalSParser::RecordVariableListContext *ctx) override {
    return visitChildren(ctx);
  }


};

