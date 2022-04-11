
// Generated from /usr/src/app/src/PascalSParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "PascalSParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PascalSParser.
 */
class  PascalSParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PascalSParser.
   */
    virtual antlrcpp::Any visitProgram(PascalSParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitProgramHeading(PascalSParser::ProgramHeadingContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(PascalSParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitBlock(PascalSParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitConstIdentifier(PascalSParser::ConstIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConstString(PascalSParser::ConstStringContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedReal(PascalSParser::UnsignedRealContext *context) = 0;

    virtual antlrcpp::Any visitSignPlus(PascalSParser::SignPlusContext *context) = 0;

    virtual antlrcpp::Any visitSignMinus(PascalSParser::SignMinusContext *context) = 0;

    virtual antlrcpp::Any visitBoolTrue(PascalSParser::BoolTrueContext *context) = 0;

    virtual antlrcpp::Any visitBoolFalse(PascalSParser::BoolFalseContext *context) = 0;

    virtual antlrcpp::Any visitString(PascalSParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinition(PascalSParser::TypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleType(PascalSParser::SimpleTypeContext *context) = 0;

    virtual antlrcpp::Any visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context) = 0;

    virtual antlrcpp::Any visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context) = 0;

    virtual antlrcpp::Any visitArrayType1(PascalSParser::ArrayType1Context *context) = 0;

    virtual antlrcpp::Any visitArrayType2(PascalSParser::ArrayType2Context *context) = 0;

    virtual antlrcpp::Any visitPeriods(PascalSParser::PeriodsContext *context) = 0;

    virtual antlrcpp::Any visitPeriod(PascalSParser::PeriodContext *context) = 0;

    virtual antlrcpp::Any visitRecordType(PascalSParser::RecordTypeContext *context) = 0;

    virtual antlrcpp::Any visitRecordField(PascalSParser::RecordFieldContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context) = 0;

    virtual antlrcpp::Any visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context) = 0;

    virtual antlrcpp::Any visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context) = 0;

    virtual antlrcpp::Any visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterList(PascalSParser::FormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context) = 0;

    virtual antlrcpp::Any visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context) = 0;

    virtual antlrcpp::Any visitParameterGroup(PascalSParser::ParameterGroupContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(PascalSParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitConstList(PascalSParser::ConstListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSimpleState(PascalSParser::SimpleStateContext *context) = 0;

    virtual antlrcpp::Any visitStructuredState(PascalSParser::StructuredStateContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariable(PascalSParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitExpression(PascalSParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitOpEqual(PascalSParser::OpEqualContext *context) = 0;

    virtual antlrcpp::Any visitOpNotEqual(PascalSParser::OpNotEqualContext *context) = 0;

    virtual antlrcpp::Any visitOpLt(PascalSParser::OpLtContext *context) = 0;

    virtual antlrcpp::Any visitOpLe(PascalSParser::OpLeContext *context) = 0;

    virtual antlrcpp::Any visitOpGe(PascalSParser::OpGeContext *context) = 0;

    virtual antlrcpp::Any visitOpGt(PascalSParser::OpGtContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpression(PascalSParser::SimpleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitOpPlus(PascalSParser::OpPlusContext *context) = 0;

    virtual antlrcpp::Any visitOpMinus(PascalSParser::OpMinusContext *context) = 0;

    virtual antlrcpp::Any visitOpOr(PascalSParser::OpOrContext *context) = 0;

    virtual antlrcpp::Any visitTerm(PascalSParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitOpStar(PascalSParser::OpStarContext *context) = 0;

    virtual antlrcpp::Any visitOpSlash(PascalSParser::OpSlashContext *context) = 0;

    virtual antlrcpp::Any visitOpDiv(PascalSParser::OpDivContext *context) = 0;

    virtual antlrcpp::Any visitOpMod(PascalSParser::OpModContext *context) = 0;

    virtual antlrcpp::Any visitOpAnd(PascalSParser::OpAndContext *context) = 0;

    virtual antlrcpp::Any visitSignedFactor(PascalSParser::SignedFactorContext *context) = 0;

    virtual antlrcpp::Any visitFactorVar(PascalSParser::FactorVarContext *context) = 0;

    virtual antlrcpp::Any visitFactorExpr(PascalSParser::FactorExprContext *context) = 0;

    virtual antlrcpp::Any visitFactorFunc(PascalSParser::FactorFuncContext *context) = 0;

    virtual antlrcpp::Any visitFactorUnsConst(PascalSParser::FactorUnsConstContext *context) = 0;

    virtual antlrcpp::Any visitFactorNotFact(PascalSParser::FactorNotFactContext *context) = 0;

    virtual antlrcpp::Any visitFactorBool(PascalSParser::FactorBoolContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(PascalSParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitProcedureStatement(PascalSParser::ProcedureStatementContext *context) = 0;

    virtual antlrcpp::Any visitActualParameter(PascalSParser::ActualParameterContext *context) = 0;

    virtual antlrcpp::Any visitParameterwidth(PascalSParser::ParameterwidthContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context) = 0;

    virtual antlrcpp::Any visitEmpty_(PascalSParser::Empty_Context *context) = 0;

    virtual antlrcpp::Any visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *context) = 0;

    virtual antlrcpp::Any visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *context) = 0;

    virtual antlrcpp::Any visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(PascalSParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatements(PascalSParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *context) = 0;

    virtual antlrcpp::Any visitConditionalStateCase(PascalSParser::ConditionalStateCaseContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(PascalSParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseStatement(PascalSParser::CaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseListElement(PascalSParser::CaseListElementContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveStateWhile(PascalSParser::RepetetiveStateWhileContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveStateRepeat(PascalSParser::RepetetiveStateRepeatContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(PascalSParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitRepeatStatement(PascalSParser::RepeatStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(PascalSParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForList(PascalSParser::ForListContext *context) = 0;

    virtual antlrcpp::Any visitInitialValue(PascalSParser::InitialValueContext *context) = 0;

    virtual antlrcpp::Any visitFinalValue(PascalSParser::FinalValueContext *context) = 0;

    virtual antlrcpp::Any visitRecordVariableList(PascalSParser::RecordVariableListContext *context) = 0;


};

