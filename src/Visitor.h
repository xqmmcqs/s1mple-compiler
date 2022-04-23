#pragma once

#include <vector>

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Constants.h>
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

        llvm::Value *visitBlock(PascalSParser::BlockContext *context, llvm::Function *function);

        void visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context);

        void visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context);

        llvm::Constant *visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context);

        llvm::Constant *visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context);

        llvm::Constant *visitConstIdentifier(PascalSParser::ConstIdentifierContext *context);

        llvm::Constant *visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context);

        std::string visitConstString(PascalSParser::ConstStringContext *context);

        int visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context);

        float visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context);

        int visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context);

        float visitUnsignedReal(PascalSParser::UnsignedRealContext *context);

        void visitSignPlus(PascalSParser::SignPlusContext *context);

        void visitSignMinus(PascalSParser::SignMinusContext *context);

        void visitBoolTrue(PascalSParser::BoolTrueContext *context);

        void visitBoolFalse(PascalSParser::BoolFalseContext *context);

        std::string visitString(PascalSParser::StringContext *context);

        void visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context);

        void visitTypeDefinition(PascalSParser::TypeDefinitionContext *context);

        llvm::Type *visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context);

        llvm::Type *visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context, std::vector<std::string> idList);

        llvm::Type *visitSimpleType(PascalSParser::SimpleTypeContext *context, bool isVar=false);


        llvm::Type *visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context, std::vector<std::string> idList);

        llvm::Type *visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context, std::vector<std::string> idList);

        llvm::Type *visitArrayType1(PascalSParser::ArrayType1Context *context, std::vector<std::string> idList);

        llvm::Type *visitArrayType2(PascalSParser::ArrayType2Context *context, std::vector<std::string> idList);

        std::vector<int> visitPeriods(PascalSParser::PeriodsContext *context);

        std::vector<int> visitPeriod(PascalSParser::PeriodContext *context);

        llvm::Type *visitRecordType(PascalSParser::RecordTypeContext *context, std::vector<std::string> idList);

        llvm::Type *visitRecordField(PascalSParser::RecordFieldContext *context, std::vector<std::string> idList);

        void visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context);

        llvm::Type *visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context);

        void visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context);

        void visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context);

        void visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context);

        void visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context);

        void visitFormalParameterList(PascalSParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitParameterGroup(PascalSParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar);

        std::vector<std::string> visitIdentifierList(PascalSParser::IdentifierListContext *context);

        void visitConstList(PascalSParser::ConstListContext *context);

        void visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context);

        void visitSimpleState(PascalSParser::SimpleStateContext *context);

        void visitStructuredState(PascalSParser::StructuredStateContext *context, llvm::Function *function=NULL);

        void visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *context);

        void visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context);

        void visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context);

        void visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context);

        llvm::Value* visitVariable(PascalSParser::VariableContext *context);

        llvm::Value* visitExpression(PascalSParser::ExpressionContext *context);

        llvm::Value* visitOpEqual(PascalSParser::OpEqualContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpNotEqual(PascalSParser::OpNotEqualContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpLt(PascalSParser::OpLtContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpLe(PascalSParser::OpLeContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpGe(PascalSParser::OpGeContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpGt(PascalSParser::OpGtContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitSimpleExpression(PascalSParser::SimpleExpressionContext *context);

        llvm::Value* visitOpPlus(PascalSParser::OpPlusContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpMinus(PascalSParser::OpMinusContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitOpOr(PascalSParser::OpOrContext *context, llvm::Value *L, llvm::Value *R);

        llvm::Value* visitTerm(PascalSParser::TermContext *context);

        llvm::Value* visitOpStar(PascalSParser::OpStarContext *context, llvm::Value* L, llvm::Value* R);

        llvm::Value* visitOpSlash(PascalSParser::OpSlashContext *context, llvm::Value* L, llvm::Value* R);

        llvm::Value* visitOpDiv(PascalSParser::OpDivContext *context, llvm::Value* L, llvm::Value* R);

        llvm::Value* visitOpMod(PascalSParser::OpModContext *context, llvm::Value* L, llvm::Value* R);

        llvm::Value* visitOpAnd(PascalSParser::OpAndContext *context, llvm::Value* L, llvm::Value* R);

        llvm::Value* visitSignedFactor(PascalSParser::SignedFactorContext *context);

        llvm::Value* visitFactorVar(PascalSParser::FactorVarContext *context);

        llvm::Value* visitFactorExpr(PascalSParser::FactorExprContext *context);

        llvm::Value* visitFactorFunc(PascalSParser::FactorFuncContext *context);

        llvm::Value* visitFactorUnsConst(PascalSParser::FactorUnsConstContext *context);

        llvm::Value* visitFactorNotFact(PascalSParser::FactorNotFactContext *context);

        llvm::Value* visitFactorBool(PascalSParser::FactorBoolContext *context);

        llvm::Value* visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *context);

        std::string visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *context);

        llvm::Value* visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *context);

        std::vector<llvm::Value *> *visitParameterList(PascalSParser::ParameterListContext *context);

        void visitProcedureStatement(PascalSParser::ProcedureStatementContext *context);

        void visitActualParameter(PascalSParser::ActualParameterContext *context);

        void visitParameterwidth(PascalSParser::ParameterwidthContext *context);

        void visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context);

        void visitEmpty_(PascalSParser::Empty_Context *context);

        void visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *context);

        void visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *context);

        void visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *context, llvm::Function *function=NULL);

        llvm::Value *visitCompoundStatement(PascalSParser::CompoundStatementContext *context, llvm::Function *function=NULL);

        llvm::Value *visitStatements(PascalSParser::StatementsContext *context, llvm::Function *function=NULL);

        void visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *context);

        void visitConditionalStateCase(PascalSParser::ConditionalStateCaseContext *context);

        void visitIfStatement(PascalSParser::IfStatementContext *context);

        void visitCaseStatement(PascalSParser::CaseStatementContext *context);

        void visitCaseListElement(PascalSParser::CaseListElementContext *context);

        void visitRepetetiveStateWhile(PascalSParser::RepetetiveStateWhileContext *context);

        void visitRepetetiveStateRepeat(PascalSParser::RepetetiveStateRepeatContext *context);

        void visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *context, llvm::Function *function=NULL);

        void visitWhileStatement(PascalSParser::WhileStatementContext *context);

        void visitRepeatStatement(PascalSParser::RepeatStatementContext *context);

        void visitForStatement(PascalSParser::ForStatementContext *context, llvm::Function *function=NULL);

        std::vector<llvm::Value*>  visitForList(PascalSParser::ForListContext *context);

        llvm::Value* visitInitialValue(PascalSParser::InitialValueContext *context);

        llvm::Value* visitFinalValue(PascalSParser::FinalValueContext *context);

        void visitRecordVariableList(PascalSParser::RecordVariableListContext *context);
    };
}; // namespace PascalS