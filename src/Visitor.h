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
        std::unordered_map<std::string, std::vector<int>> arrayRanges;
        std::vector<int> arrayRangeTemp;
        bool readlnArgFlag = false;

        Visitor(std::string filename) : llvm_context(std::make_unique<llvm::LLVMContext>()),
                                        builder(*llvm_context),
                                        module(std::make_unique<llvm::Module>(filename, *llvm_context)) {}

        llvm::Value *getVariable(const std::string &name);

        void fromFile(const std::string &path);

        void visitProgram(PascalSParser::ProgramContext *context);

        std::string visitProgramHeading(PascalSParser::ProgramHeadingContext *context);
        /**
        * @brief 解析标识符id
        *
        * @param context 语法树中表示id分支的context
        * @return id的值，字符串
        */
        std::string visitIdentifier(PascalSParser::IdentifierContext *context);

        void visitBlock(PascalSParser::BlockContext *context, llvm::Function *function);
        /**
        * @brief 解析常量定义区域
        *
        * @param context 语法树中表示常量定义区域分支的context
        */
        void visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context);
        /**
        * @brief 解析常量定义
        *
        * @param context 语法树中表示常量定义分支的context
        */
        void visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context);
        /**
        * @brief 解析不同类型的常量定义，无符号数，有符号数，标识符，字符串
        *
        * @param context 语法树中表示不同类型常量定义分支的context
        * @return LLVM类型的常量的值
        */
        llvm::Constant *visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context);

        llvm::Constant *visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context);

        llvm::Constant *visitConstIdentifier(PascalSParser::ConstIdentifierContext *context);

        llvm::Constant *visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context);

        std::string visitConstString(PascalSParser::ConstStringContext *context);
        /**
        * @brief 解析不同类型的数字，无符号整数，有符号整数，无符号实数， 有符号实数
        *
        * @param context 语法树中表示不同数字定义分支的context
        * @return 数字的浮点表示或整型表示
        */
        int visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context);

        float visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context);

        int visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context);

        float visitUnsignedReal(PascalSParser::UnsignedRealContext *context);

        void visitSignPlus(PascalSParser::SignPlusContext *context);

        void visitSignMinus(PascalSParser::SignMinusContext *context);

        void visitBoolTrue(PascalSParser::BoolTrueContext *context);

        void visitBoolFalse(PascalSParser::BoolFalseContext *context);

        std::string visitString(PascalSParser::StringContext *context);
        /**
        * @brief 解析type定义
        *
        * @param context 语法树中表示type定义分支的context
        */
        void visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context);

        void visitTypeDefinition(PascalSParser::TypeDefinitionContext *context);
        /**
        * @brief 解析不同类型的type定义
        *
        * @param context 语法树中表示不同类型type定义分支的context，简单类型（整型等），复合类型（数组， record等）
        * @return 表示具体类型的llvm::Type
        */
        llvm::Type *visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context);
        /**
        * @brief 解析复合类型
        *
        * @param context 语法树中表示简单类型分支的context
        * @param isVar 表示该类型的变量是否是引用
        * @return 表示具体类型的llvm::Type
        */
        llvm::Type *visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context, std::vector<std::string> idList);
        /**
        * @brief 解析简单类型
        *
        * @param context 语法树中表示简单类型分支的context
        * @param isVar 表示该类型的变量是否是引用
        * @return 表示具体类型的llvm::Type
        */
        llvm::Type *visitSimpleType(PascalSParser::SimpleTypeContext *context, bool isVar=false);


        llvm::Type *visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context, std::vector<std::string> idList);

        /**
        * @brief 解析record类型
        *
        * @param context 语法树中表示record类型分支的context
        * @param  idList record中可能含有变量定义，要传入变量标识符
        * @return 表示具体类型的llvm::Type
        */
        llvm::Type *visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context, std::vector<std::string> idList);

        llvm::Type *visitArrayType1(PascalSParser::ArrayType1Context *context, std::vector<std::string> idList);

        llvm::Type *visitArrayType2(PascalSParser::ArrayType2Context *context, std::vector<std::string> idList);

        std::vector<int> visitPeriods(PascalSParser::PeriodsContext *context);

        std::vector<int> visitPeriod(PascalSParser::PeriodContext *context);

        llvm::Type *visitRecordType(PascalSParser::RecordTypeContext *context, std::vector<std::string> idList);

        llvm::Type *visitRecordField(PascalSParser::RecordFieldContext *context, std::vector<std::string> idList);

        void visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context);
        /**
        * @brief 解析变量定义
        *
        * @param context 语法树中表示变量定义分支的context
        */
        llvm::Type *visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context);

        void visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context);

        void visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context);

        void visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context);

        void visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context);

        void visitFormalParameterList(PascalSParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        void visitParameterGroup(PascalSParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar);
        /**
        * @brief 解析标识符串
        *
        * @param context 语法树中表示标识符串分支的context
        * @return 表示每个标识符名的字符串vector
        */
        std::vector<std::string> visitIdentifierList(PascalSParser::IdentifierListContext *context);

        void visitConstList(PascalSParser::ConstListContext *context);

        void visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context);
        /**
        * @brief 解析简单语句
        *
        * @param context 语法树中表示simpleState语句分支的context
        */
        void visitSimpleState(PascalSParser::SimpleStateContext *context);
        /**
        * @brief 解析结构语句
        *
        * @param context 语法树中表示strycturedState语句分支的context
        */
        void visitStructuredState(PascalSParser::StructuredStateContext *context, llvm::Function *function=nullptr);

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

        std::vector<llvm::Value *> visitParameterList(PascalSParser::ParameterListContext *context);

        void visitProcedureStatement(PascalSParser::ProcedureStatementContext *context);

        llvm::Value* visitActualParameter(PascalSParser::ActualParameterContext *context);

        void visitParameterwidth(PascalSParser::ParameterwidthContext *context);

        void visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context);

        void visitEmpty_(PascalSParser::Empty_Context *context);
        /**
        * @brief 解析复合语句，如条件，循环等
        *
        * @param context 语法树中表示复合语句分支的context
        * @param function 该复合语句所处的函数块
        */
        void visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *context, llvm::Function *function);

        void visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *context, llvm::Function *function);
        /**
        * @brief 解析循环语句开始
        *
        * @param context 语法树中表示repetetive语句分支的context
        */
        void visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *context, llvm::Function *function);

        void visitCompoundStatement(PascalSParser::CompoundStatementContext *context, llvm::Function *function);
        /**
        * @brief 解析statemnet组成的集合
        *
        * @param context 语法树中表示statements语句分支的context
        * @return statement的value值
        */
        void visitStatements(PascalSParser::StatementsContext *context, llvm::Function *function=nullptr);

        void visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *context, llvm::Function *function);

        void visitConditionalStateCase(PascalSParser::ConditionalStateCaseContext *context);

        void visitIfStatement(PascalSParser::IfStatementContext *context, llvm::Function *function);

        void visitCaseStatement(PascalSParser::CaseStatementContext *context);

        void visitCaseListElement(PascalSParser::CaseListElementContext *context);
        /**
        * @brief while语句入口
        *
        * @param context 语法树中表示whileState语句分支的context
        */
        void visitRepetetiveStateWhile(PascalSParser::RepetetiveStateWhileContext *context, llvm::Function *function);
        /**
        * @brief repeat语句入口
        *
        * @param context 语法树中表示repeatState语句分支的context
        */
        void visitRepetetiveStateRepeat(PascalSParser::RepetetiveStateRepeatContext *context, llvm::Function *function);
        /**
        * @brief for语句入口
        *
        * @param context 语法树中表示forState语句分支的context
        */
        void visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *context, llvm::Function *function);
        /**
        * @brief 解析while语句
        *
        * @param context 语法树中表示while语句分支的context
        */
        void visitWhileStatement(PascalSParser::WhileStatementContext *context, llvm::Function *function);
        /**
        * @brief 解析repeat语句
        *
        * @param context 语法树中表示repeat语句分支的context
        */
        void visitRepeatStatement(PascalSParser::RepeatStatementContext *context, llvm::Function *function);
        /**
        * @brief 解析for语句
        *
        * @param context 语法树中表示for语句分支的context
        */
        void visitForStatement(PascalSParser::ForStatementContext *context, llvm::Function *function);
        /**
        * @brief 解析for语句中循环变量的起始值和结束值
        *
        * @param context 语法树中表示for语句分支的context
        * @return 循环变量的起始值和结束值的LLVM表示
        */
        std::vector<llvm::Value*>  visitForList(PascalSParser::ForListContext *context);

        llvm::Value* visitInitialValue(PascalSParser::InitialValueContext *context);

        llvm::Value* visitFinalValue(PascalSParser::FinalValueContext *context);

        void visitRecordVariableList(PascalSParser::RecordVariableListContext *context);
        /**
        * @brief 解析各类语句块
        *
        * @param context 语法树中表示statement分支的context
        */
        void visitStatement(PascalSParser::StatementContext *context);
    };
}; // namespace PascalS