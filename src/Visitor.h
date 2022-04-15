#pragma once

#include <vector>

#include <llvm/IR/IRBuilder.h>

#include "runtime/PascalSLexer.h"
#include "runtime/PascalSParserBaseVisitor.h"
#include "logic/Scope.h"

namespace PascalS
{
    class Visitor
    {
    public:
        std::unique_ptr<llvm::LLVMContext> llvm_context;
        llvm::IRBuilder<> builder;
        std::unique_ptr<llvm::Module> module;
        std::vector<Scope> scopes;
        std::vector<std::string> FormalParaIdList;
        
        Visitor(std::string filename) : llvm_context(std::make_unique<llvm::LLVMContext>()),
                                        builder(*llvm_context),
                                        module(std::make_unique<llvm::Module>(filename, *llvm_context)) {}

        llvm::Value *getVariable(const std::string &name);

        void fromFile(const std::string &path);

        void visitProgram(PascalSParser::ProgramContext *context);

        std::string visitProgramHeading(PascalSParser::ProgramHeadingContext *context);

        std::string visitIdentifier(PascalSParser::IdentifierContext *context);

        llvm::Value* visitBlock(PascalSParser::BlockContext *context, llvm::Function *function);

        void visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context);

        void visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context);

        void visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context);

        void visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context);

        void visitConstIdentifier(PascalSParser::ConstIdentifierContext *context);

        void visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context);

        void visitConstString(PascalSParser::ConstStringContext *context);

        void visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context);

        void visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context);

        void visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context);

        void visitUnsignedReal(PascalSParser::UnsignedRealContext *context);

        void visitSignPlus(PascalSParser::SignPlusContext *context);

        void visitSignMinus(PascalSParser::SignMinusContext *context);

        void visitBoolTrue(PascalSParser::BoolTrueContext *context);

        void visitBoolFalse(PascalSParser::BoolFalseContext *context);

        void visitString(PascalSParser::StringContext *context);

        void visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context);

        void visitTypeDefinition(PascalSParser::TypeDefinitionContext *context);

        void visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context);

        void visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context);
        
        int visitSimpleType(PascalSParser::SimpleTypeContext *context);

        llvm::Type* visitSimpleType_ProFun(PascalSParser::SimpleTypeContext *context, bool isVar);

        void visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context);

        void visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context);

        void visitArrayType1(PascalSParser::ArrayType1Context *context);

        void visitArrayType2(PascalSParser::ArrayType2Context *context);

        void visitPeriods(PascalSParser::PeriodsContext *context);

        void visitPeriod(PascalSParser::PeriodContext *context);

        void visitRecordType(PascalSParser::RecordTypeContext *context);

        void visitRecordField(PascalSParser::RecordFieldContext *context);

        void visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context);

        void visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context);

        void visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context);

        void visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context);

        void visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context);

        void visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context);

        void visitFormalParameterList(PascalSParser::FormalParameterListContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitParameterGroup(PascalSParser::ParameterGroupContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar);

        std::vector<std::string> visitIdentifierList(PascalSParser::IdentifierListContext *context);

        void visitConstList(PascalSParser::ConstListContext *context);

        void visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context);

        void visitSimpleState(PascalSParser::SimpleStateContext *context);

        void visitStructuredState(PascalSParser::StructuredStateContext *context);

        void visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *context);

        void visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context);

        void visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context);

        void visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context);

        void visitVariable(PascalSParser::VariableContext *context);

        void visitExpression(PascalSParser::ExpressionContext *context);

        void visitOpEqual(PascalSParser::OpEqualContext *context);

        void visitOpNotEqual(PascalSParser::OpNotEqualContext *context);

        void visitOpLt(PascalSParser::OpLtContext *context);

        void visitOpLe(PascalSParser::OpLeContext *context);

        void visitOpGe(PascalSParser::OpGeContext *context);

        void visitOpGt(PascalSParser::OpGtContext *context);

        void visitSimpleExpression(PascalSParser::SimpleExpressionContext *context);

        void visitOpPlus(PascalSParser::OpPlusContext *context);

        void visitOpMinus(PascalSParser::OpMinusContext *context);

        void visitOpOr(PascalSParser::OpOrContext *context);

        void visitTerm(PascalSParser::TermContext *context);

        void visitOpStar(PascalSParser::OpStarContext *context);

        void visitOpSlash(PascalSParser::OpSlashContext *context);

        void visitOpDiv(PascalSParser::OpDivContext *context);

        void visitOpMod(PascalSParser::OpModContext *context);

        void visitOpAnd(PascalSParser::OpAndContext *context);

        void visitSignedFactor(PascalSParser::SignedFactorContext *context);

        void visitFactorVar(PascalSParser::FactorVarContext *context);

        void visitFactorExpr(PascalSParser::FactorExprContext *context);

        void visitFactorFunc(PascalSParser::FactorFuncContext *context);

        void visitFactorUnsConst(PascalSParser::FactorUnsConstContext *context);

        void visitFactorNotFact(PascalSParser::FactorNotFactContext *context);

        void visitFactorBool(PascalSParser::FactorBoolContext *context);

        void visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *context);

        void visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *context);

        void visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *context);

        std::vector<llvm::Value *> *visitParameterList(PascalSParser::ParameterListContext *context);

        void visitProcedureStatement(PascalSParser::ProcedureStatementContext *context);

        void visitActualParameter(PascalSParser::ActualParameterContext *context);

        void visitParameterwidth(PascalSParser::ParameterwidthContext *context);

        void visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context);

        void visitEmpty_(PascalSParser::Empty_Context *context);

        void visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *context);

        void visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *context);

        void visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *context);

        llvm::Value* visitCompoundStatement(PascalSParser::CompoundStatementContext *context);

        llvm::Value* visitStatements(PascalSParser::StatementsContext *context);

        void visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *context);

        void visitConditionalStateCase(PascalSParser::ConditionalStateCaseContext *context);

        void visitIfStatement(PascalSParser::IfStatementContext *context);

        void visitCaseStatement(PascalSParser::CaseStatementContext *context);

        void visitCaseListElement(PascalSParser::CaseListElementContext *context);

        void visitRepetetiveStateWhile(PascalSParser::RepetetiveStateWhileContext *context);

        void visitRepetetiveStateRepeat(PascalSParser::RepetetiveStateRepeatContext *context);

        void visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *context);

        void visitWhileStatement(PascalSParser::WhileStatementContext *context);

        void visitRepeatStatement(PascalSParser::RepeatStatementContext *context);

        void visitForStatement(PascalSParser::ForStatementContext *context);

        void visitForList(PascalSParser::ForListContext *context);

        void visitInitialValue(PascalSParser::InitialValueContext *context);

        void visitFinalValue(PascalSParser::FinalValueContext *context);

        void visitRecordVariableList(PascalSParser::RecordVariableListContext *context);
    };
}; // namespace PascalS