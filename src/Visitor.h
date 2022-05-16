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

        void visitBlock(PascalSParser::BlockContext *context, llvm::Function *function, bool isGlobal=false);
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
        llvm::Type *visitSimpleType(PascalSParser::SimpleTypeContext *context, bool isVar = false);

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

        void visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context, bool isGlobal=false);
        /**
         * @brief 解析变量定义
         *
         * @param context 语法树中表示变量定义分支的context
         */
        llvm::Type *visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context, bool isGlobal=false);
        /**
         * @brief visitProcedureAndFunctionDeclarationPart
         * @note Determine whether it is a procedure declaration or a function declaration 判断是过程声明还是函数声明
         * @param context the context of ProcedureAndFunctionDeclarationPart, indicating what to do next ProcedureAndFunctionDeclarationPartContext类型的参数，指示下一步动作
         */
        void visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context);
        /**
         * @brief visitProOrFuncDecPro
         * @note enter the part of ProcedureDeclaration 进入过程声明部分
         * @param context the context of ProOrFuncDecProContext
         */
        void visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context);
        /**
         * @brief visitProOrFuncDecFunc
         * @note enter the part of FunctionDeclaration 进入函数声明部分
         * @param context the context of ProOrFuncDecFuncContext
         */
        void visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context);
        /**
         * @brief visitProcedureDeclaration
         * @note declare a procedure and add it to scopes 声明一个过程，并将其添加到变量表中
         * @param context the context of ProcedureDeclarationContext
         */
        void visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context);
        /**
         * @brief visitFormalParameterList
         * @note Access the list of normal and var arguments 访问普通参数和var参数列表
         * @param context the context of visitFormalParameterList visitFormalParameterList类型的context
         * @param ParaTypes call by reference, Used to store variable types 引用调用，用来存储变量类型
         */
        void visitFormalParameterList(PascalSParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);
        /**
         * @brief visitFormalParaSecGroup
         * @note visit the non-var parameterGroup 访问非var类型变量
         * @param context the context of FormalParaSecGroupContext FormalParaSecGroupContext类型的context
         * @param ParaTypes call by reference, Used to store variable types 引用调用，用来存储变量类型
         */
        void visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);
        /**
         * @brief visitFormalParaSecVarGroup
         * @note visit the var parameterGroup 访问var类型变量
         * @param context the context of FormalParaSecVarGroupContext FormalParaSecVarGroupContext类型的context
         * @param ParaTypes call by reference, Used to store variable types 引用调用，用来存储变量类型
         */
        void visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);
        /**
         * @brief visitParameterGroup
         * @note get types and names of parameters 得到参数的类型和参数名
         * @param context the context of ParameterGroupContext ParameterGroupContext类型的context
         * @param ParaTypes call by reference, Used to store variable types 引用调用，用来存储变量类型
         * @param isVar type:bool true:is var false:is not var
         */
        void visitParameterGroup(PascalSParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar);
        /**
         * @brief 解析标识符串
         *
         * @param context 语法树中表示标识符串分支的context
         * @return 表示每个标识符名的字符串vector
         */
        std::vector<std::string> visitIdentifierList(PascalSParser::IdentifierListContext *context);

        void visitConstList(PascalSParser::ConstListContext *context);
        /**
         * @brief visitFunctionDeclaration
         * @note declare a function and add it to scopes 声明一个函数，并将其添加到变量表中
         * @param context the context of FunctionDeclarationContext
         */
        void visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context);

        /**
         * @brief 解析简单语句
         *
         * @param context 语法树中表示simpleState语句分支的context
         */
        void visitSimpleState(PascalSParser::SimpleStateContext *context,llvm::Function *function = nullptr);
        /**
         * @brief 解析结构语句
         *
         * @param context 语法树中表示strycturedState语句分支的context
         */
        void visitStructuredState(PascalSParser::StructuredStateContext *context, llvm::Function *function = nullptr);

        /**
         * @brief the entry of AssignmentStatement 访问AST中赋值语句的入口
         * @param context the context of SimpleStateAssignContext type 一个SimpleStateAssignContext类型的context
         */
        void visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *context);

        void visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context);

        void visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context);

        /**
         * @brief calculate the value of expression in right and assign it to the left 计算右侧表达式的值并将其赋给左侧变量
         * @param context the context of AssignmentStatementContext type 一个AssignmentStatementContext类型的context
         */
        void visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context);

        /**
         * @brief 获取变量的内存地址
         * @param context VariableContext*类型的context
         * @return llvm::Value*： return the address of variable or array element
         * @retval std::nullptr 未找到变量
         */
        llvm::Value *visitVariable(PascalSParser::VariableContext *context);

        /**
         * @brief 访问并计算AST中Expression节点的值
         *
         * @param context ExpressionContext*类型的context
         * @return llvm::Value*： 返回Expression的计算结果
         */
        llvm::Value *visitExpression(PascalSParser::ExpressionContext *context);

        /**
         * @brief 访问AST中OpEqual节点
         *
         * @param context OpEqualContext* 类型的context
         * @param L llvm::Value*：左侧子表达式的值
         * @param R llvm::Value*：右侧子表达式的值
         * @return llvm::Value*：返回左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpEqual(PascalSParser::OpEqualContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpNotEqual节点
         *
         * @param context OpNotEqualContext* 类型的context
         * @param L llvm::Value*：左侧子表达式的值
         * @param R llvm::Value*：右侧子表达式的值
         * @return llvm::Value*：返回左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpNotEqual(PascalSParser::OpNotEqualContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpLt节点
         *
         * @param context OpLtContext* 类型的context
         * @param L llvm::Value*：左侧子表达式的值
         * @param R llvm::Value*：右侧子表达式的值
         * @return llvm::Value*：返回左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpLt(PascalSParser::OpLtContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpLe节点
         *
         * @param context OpLeContext* 类型的context
         * @param L llvm::Value*：左侧子表达式的值
         * @param R llvm::Value*：右侧子表达式的值
         * @return llvm::Value*：返回左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpLe(PascalSParser::OpLeContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpGe节点
         *
         * @param context OpGeContext* 类型的context
         * @param L llvm::Value*：左侧子表达式的值
         * @param R llvm::Value*：右侧子表达式的值
         * @return llvm::Value*：返回左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpGe(PascalSParser::OpGeContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpGt节点
         *
         * @param context OpGtContext* 类型的context
         * @param L llvm::Value*：左侧子表达式的值
         * @param R llvm::Value*：右侧子表达式的值
         * @return llvm::Value*：返回左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpGt(PascalSParser::OpGtContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问并计算AST中SimpleExpression节点的值
         *
         * @param context SimpleExpressionContext*类型的context
         * @return llvm::Value*： 返回SimpleExpression的计算结果
         */
        llvm::Value *visitSimpleExpression(PascalSParser::SimpleExpressionContext *context);

        /**
         * @brief 访问AST中OpPlus节点
         *
         * @param context OpPlusContext* 类型的context
         * @param L llvm::Value*：左侧term的值
         * @param R llvm::Value*：右侧term的值
         * @return llvm::Value*：返回左右两侧term的计算结果
         */
        llvm::Value *visitOpPlus(PascalSParser::OpPlusContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpMinus节点
         *
         * @param context OpMinusContext* 类型的context
         * @param L llvm::Value*：左侧term的值
         * @param R llvm::Value*：右侧term的值
         * @return llvm::Value*：返回左右两侧term的计算结果
         */
        llvm::Value *visitOpMinus(PascalSParser::OpMinusContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpOr节点
         *
         * @param context OpOrContext* 类型的context
         * @param L llvm::Value*：左侧term的值
         * @param R llvm::Value*：右侧term的值
         * @return llvm::Value*：返回左右两侧term的计算结果
         */
        llvm::Value *visitOpOr(PascalSParser::OpOrContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问并计算AST中Term节点的值
         *
         * @param context TermContext*类型的context
         * @return llvm::Value*： 返回Term的计算结果
         */
        llvm::Value *visitTerm(PascalSParser::TermContext *context);

        /**
         * @brief 访问AST中OpStar（乘法）节点
         *
         * @param context OpStarContext* 类型的context
         * @param L llvm::Value*：左侧SignedFactor的值
         * @param R llvm::Value*：右侧SignedFactor的值
         * @return llvm::Value*：返回左右两侧SignedFactor的计算结果
         */
        llvm::Value *visitOpStar(PascalSParser::OpStarContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpSlash（浮点数除法）节点
         *
         * @param context OpSlashContext* 类型的context
         * @param L llvm::Value*：左侧SignedFactor的值
         * @param R llvm::Value*：右侧SignedFactor的值
         * @return llvm::Value*：返回左右两侧SignedFactor的计算结果
         */
        llvm::Value *visitOpSlash(PascalSParser::OpSlashContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpDiv（整数除法）节点
         *
         * @param context OpDivContext* 类型的context
         * @param L llvm::Value*：左侧SignedFactor的值
         * @param R llvm::Value*：右侧SignedFactor的值
         * @return llvm::Value*：返回左右两侧SignedFactor的计算结果
         */
        llvm::Value *visitOpDiv(PascalSParser::OpDivContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpMod（整数取余）节点
         *
         * @param context OpModContext* 类型的context
         * @param L llvm::Value*：左侧SignedFactor的值
         * @param R llvm::Value*：右侧SignedFactor的值
         * @return llvm::Value*：返回左右两侧SignedFactor的计算结果
         */
        llvm::Value *visitOpMod(PascalSParser::OpModContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问AST中OpAnd（与）节点
         *
         * @param context OpAndContext* 类型的context
         * @param L llvm::Value*：左侧SignedFactor的值
         * @param R llvm::Value*：右侧SignedFactor的值
         * @return llvm::Value*：返回左右两侧SignedFactor的计算结果
         */
        llvm::Value *visitOpAnd(PascalSParser::OpAndContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问并计算AST中SignedFactor节点的值
         *
         * @param context SignedFactorContext*：context
         * @return llvm::Value*： 返回SignedFactor的计算结果
         */
        llvm::Value *visitSignedFactor(PascalSParser::SignedFactorContext *context);

        /**
         * @brief 访问expression中的变量
         *
         * @note 这是Visitor中访问Variable的唯一接口。
         * @param context FactorVarContext*类型的context
         * @return llvm::Value*：Variable的值（default）或地址（Visitor.readlnArgFlag == ture）
         */
        llvm::Value *visitFactorVar(PascalSParser::FactorVarContext *context);

        /**
         * @brief 访问AST中FactorExpr节点，计算FactorExpr的值。
         *
         * @param context FactorExprContext *类型。
         * @return llvm::Value*：FactorExpr的值。
         */
        llvm::Value *visitFactorExpr(PascalSParser::FactorExprContext *context);

        /**
         * @brief 访问AST中FactorFunc节点，调用Function
         *
         * @param context FactorFuncContext *类型
         * @return llvm::Value*：调用Function的返回值
         */
        llvm::Value *visitFactorFunc(PascalSParser::FactorFuncContext *context);

        /**
         * @brief 访问AST中FactorUnsConst节点
         *
         * @param context FactorUnsConstContext *类型
         * @return llvm::Value*：FactorUnsConst的值
         */
        llvm::Value *visitFactorUnsConst(PascalSParser::FactorUnsConstContext *context);

        /**
         * @brief 访问并计算AST中FactorNotFact节点的值
         * @note 与visitSignedFactor相比，context剥离了+/-符号
         * @param context FactorNotFactContext*类型
         * @return llvm::Value*： 返回FactorNotFact的计算结果
         */
        llvm::Value *visitFactorNotFact(PascalSParser::FactorNotFactContext *context);

        /**
         * @brief 访问AST中FactorBool节点
         *
         * @param context FactorBoolContext *类型
         * @return llvm::Value*：FactorBool的值
         */
        llvm::Value *visitFactorBool(PascalSParser::FactorBoolContext *context);

        /**
         * @brief 访问AST中UnsignedConstUnsignedNum节点
         *
         * @param context UnsignedConstUnsignedNumContext *类型
         * @return llvm::Value*：返回UnsignedConstUnsignedNum类型常量值
         */
        llvm::Value *visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *context);

        /**
         * @brief 访问AST中UnsignedConstStr节点
         *
         * @param context UnsignedConstStrContext *类型
         * @return std::string 返回字符串常量的值
         */
        std::string visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *context);

        /**
         * @brief 访问AST中FunctionDesignator节点
         * @note 这是AST中调用函数的唯一接口
         * @param context FunctionDesignatorContext *类型
         * @return llvm::Value* 返回函数Function调用得到的返回值
         */
        llvm::Value *visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *context);

        /**
         * @brief 构造函数调用或过程调用的参数列表
         * @note 输入参数context为null时表示发生了一个无参数过程调用
         * @param context ParameterListContext *类型
         * @return std::vector<llvm::Value *> 所需形参值的std::vector
         */
        std::vector<llvm::Value *> visitParameterList(PascalSParser::ParameterListContext *context);

        /**
         * @brief 识别并调用过程。包括用户定义过程和标准输入、输出过程
         *
         * @param context ProcedureStatementContext *类型
         */
        void visitProcedureStatement(PascalSParser::ProcedureStatementContext *context);

        /**
         * @brief 计算函数调用或过程调用的参数列表中的一个参数值
         *
         * @param context ActualParameterContext *类型
         * @return llvm::Value* 形参的参数值
         */
        llvm::Value *visitActualParameter(PascalSParser::ActualParameterContext *context);

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

        /**
         * @brief visitStructuredStateConditional
         * @note entry of ifstatements 访问if语句的入口
         * @param context the context of StructuredStateConditionalContext StructuredStateConditionalContext类型的context
         * @param function main function
         */
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
        void visitStatements(PascalSParser::StatementsContext *context, llvm::Function *function = nullptr);

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
        std::vector<llvm::Value *> visitForList(PascalSParser::ForListContext *context);

        llvm::Value *visitInitialValue(PascalSParser::InitialValueContext *context);

        llvm::Value *visitFinalValue(PascalSParser::FinalValueContext *context);

        void visitRecordVariableList(PascalSParser::RecordVariableListContext *context);
        /**
         * @brief 解析各类语句块
         *
         * @param context 语法树中表示statement分支的context
         */
        void visitStatement(PascalSParser::StatementContext *context,llvm::Function *function);
    };
}; // namespace PascalS
