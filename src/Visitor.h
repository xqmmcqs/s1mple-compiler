/**
 * @file      Visitor.h
 * @brief     通过Visitor模式访问语法树
 * @author    Ziheng Mao, Aolun Xie, Kangtong Li, Jianlong Ban, Junhui Li, Yongqi Qiao
 * @date      2022/4/20
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件定义了Visitor模式的接口。
 */

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
        std::vector<Scope> scopes; ///< 变量作用域
        std::vector<std::string> FormalParaIdList;
        std::unordered_map<std::string, std::vector<int>> arrayRanges; ///< 存放所有array的下标范围，访问array时是计算元素偏移量的依据。
        std::vector<int> arrayRangeTemp;                               ///< 暂存一个array的下标范围。
        bool readlnArgFlag = false;                                    ///< readln参数标记，为真时visitFactorVar返回地址而非值。
        bool arrayIndexFlag = false;                                   ///< array下标标记，为真时visitFactorVar返回值而非地址，无论readlnArgFlag如何。

        Visitor(std::string filename) : llvm_context(std::make_unique<llvm::LLVMContext>()),
                                        builder(*llvm_context),
                                        module(std::make_unique<llvm::Module>(filename, *llvm_context)) {}

        /**
         * @brief 从作用域中查找变量
         *
         * @param name 变量名
         * @return 变量值
         */
        llvm::Value *getVariable(const std::string &name);

        /**
         * @brief 从文件中生成语法树
         *
         * @param path 文件路径
         */
        void fromFile(const std::string &path);

        /**
         * @brief 访问程序
         *
         * @param context 语法树中表示program分支的上下文
         */
        void visitProgram(PascalSParser::ProgramContext *context);

        /**
         * @brief 访问程序头
         *
         * @param context 语法树中表示programHeading分支的上下文
         * @return 程序名
         */
        std::string visitProgramHeading(PascalSParser::ProgramHeadingContext *context);

        /**
         * @brief 访问标识符
         *
         * @param context 语法树中表示标识符分支的上下文
         * @return 标识符的字面值
         */
        std::string visitIdentifier(PascalSParser::IdentifierContext *context);

        /**
         * @brief 访问程序/函数块
         *
         * @param context 语法树中表示程序/函数块分支的上下文
         * @param function 程序/函数块所属的函数
         * @param isGlobal 是否是主函数
         */
        void visitBlock(PascalSParser::BlockContext *context, llvm::Function *function, bool isGlobal = false);

        /**
         * @brief 访问常量定义区域
         *
         * @param context 语法树中表示常量定义区域分支的上下文
         */
        void visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context);

        /**
         * @brief 访问常量定义
         *
         * @param context 语法树中表示常量定义分支的上下文
         */
        void visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context);

        /**
         * @brief 访问无符号数常量
         *
         * @param context 语法树中表示无符号数常量分支的上下文
         * @return 无符号数常量
         */
        llvm::Constant *visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context);

        /**
         * @brief 访问有符号数常量
         *
         * @param context 语法树中表示有符号数常量分支的上下文
         * @return 有符号数常量
         */
        llvm::Constant *visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context);

        /**
         * @brief 访问标识符常量（一个常量用另一个常量的值来初始化）
         *
         * @param context 语法树中表示标识符常量分支的上下文
         * @return 标识符常量
         */
        llvm::Constant *visitConstIdentifier(PascalSParser::ConstIdentifierContext *context);

        /**
         * @brief 访问有符号标识符常量（一个常量用另一个常量的值来初始化）
         *
         * @param context 语法树中表示有符号标识符常量分支的上下文
         * @return 有符号标识符常量
         */
        llvm::Constant *visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context);

        /**
         * @brief 访问字符串常量
         *
         * @param context 语法树中表示字符串常量分支的上下文
         * @return 字符串常量
         */
        std::string visitConstString(PascalSParser::ConstStringContext *context);

        /**
         * @brief 访问无符号整数
         *
         * @param context 语法树中表示无符号整数分支的上下文
         * @return 无符号整数值
         */
        int visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context);

        /**
         * @brief 访问无符号实数
         *
         * @param context 语法树中表示无符号实数分支的上下文
         * @return 无符号实数值
         */
        float visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context);

        /**
         * @brief 访问无符号整数
         *
         * @param context 语法树中表示无符号整数分支的上下文
         * @return 无符号整数值
         */
        int visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context);

        /**
         * @brief 访问无符号实数
         *
         * @param context 语法树中表示无符号实数分支的上下文
         * @return 无符号实数值
         */
        float visitUnsignedReal(PascalSParser::UnsignedRealContext *context);

        /**
         * @brief 访问字符串
         *
         * @param context 语法树中表示字符串分支的上下文
         * @return 字符串值
         */
        std::string visitString(PascalSParser::StringContext *context);

        /**
         * @brief 访问类型定义部分
         *
         * @param context 语法树中表示类型定义部分分支的上下文
         */
        void visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context);

        /**
         * @brief 访问类型定义
         *
         * @param context 语法树中表示类型定义分支的上下文
         */
        void visitTypeDefinition(PascalSParser::TypeDefinitionContext *context);

        /**
         * @brief 访问简单类型定义
         *
         * @param context 语法树中表示简单类型定义分支的上下文
         * @return 简单类型
         */
        llvm::Type *visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context);

        /**
         * @brief 访问复合类型定义
         *
         * @param context 语法树中表示复合类型定义分支的上下文
         * @param idList 标识符列表，用于Record类型
         * @return 复合类型
         */
        llvm::Type *visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context, std::vector<std::string> idList);

        /**
         * @brief 访问简单类型
         *
         * @param context 语法树中表示简单类型分支的上下文
         * @param isVar 表示该类型的变量是否是引用
         * @return 简单类型
         */
        llvm::Type *visitSimpleType(PascalSParser::SimpleTypeContext *context, bool isVar = false);

        /**
         * @brief 访问复合类型定义
         *
         * @param context 语法树中表示复合类型定义分支的上下文
         * @param idList 标识符列表
         * @return 复合类型
         */
        llvm::Type *visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context, std::vector<std::string> idList);

        /**
         * @brief 访问record类型
         *
         * @param context 语法树中表示record类型分支的上下文
         * @param idList 标识符列表
         * @return record类型
         */
        llvm::Type *visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context, std::vector<std::string> idList);

        /**
         * @brief 访问array类型
         *
         * @param context 语法树中表示array类型分支的上下文
         * @param idList 标识符列表
         * @return array类型
         */
        llvm::Type *visitArrayType1(PascalSParser::ArrayType1Context *context, std::vector<std::string> idList);

        /**
         * @brief 访问array类型
         *
         * @param context 语法树中表示array类型分支的上下文
         * @param idList 标识符列表
         * @return array类型
         */
        llvm::Type *visitArrayType2(PascalSParser::ArrayType2Context *context, std::vector<std::string> idList);

        /**
         * @brief 访问下标区间
         *
         * @param context 语法树中表示下标区间分支的上下文
         * @return 下标区间列表，每两个值表示一个下标区间
         */
        std::vector<int> visitPeriods(PascalSParser::PeriodsContext *context);

        /**
         * @brief 访问下标区间
         *
         * @param context 语法树中表示下标区间分支的上下文
         * @return 下标区间列表，两个数，表示一个下标区间
         */
        std::vector<int> visitPeriod(PascalSParser::PeriodContext *context);

        /**
         * @brief 访问record类型
         *
         * @param context 语法树中表示record类型分支的上下文
         * @param idList 标识符列表
         * @return record类型
         */
        llvm::Type *visitRecordType(PascalSParser::RecordTypeContext *context, std::vector<std::string> idList);

        /**
         * @brief 访问record类型
         *
         * @param context 语法树中表示record类型分支的上下文
         * @param idList 标识符列表
         * @return record类型
         */
        llvm::Type *visitRecordField(PascalSParser::RecordFieldContext *context, std::vector<std::string> idList);

        /**
         * @brief 访问变量定义部分
         *
         * @param context 语法树中表示变量定义部分分支的上下文
         * @param isGlobal 是否是全局变量
         */
        void visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context, bool isGlobal = false);

        /**
         * @brief 访问变量定义
         *
         * @param context 语法树中表示变量定义分支的上下文
         * @param isGlobal 是否是全局变量
         */
        llvm::Type *visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context, bool isGlobal = false);

        /**
         * @brief 访问过程和函数定义部分
         *
         * @note 判断是过程声明还是函数声明
         * @param context 语法树中表示过程和函数定义部分分支的上下文
         */
        void visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context);

        /**
         * @brief 访问过程定义部分
         *
         * @param context 语法树中表示过程定义部分分支的上下文
         *
         * 进入过程声明部分
         */
        void visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context);

        /**
         * @brief 访问函数定义部分
         *
         * @param context 语法树中表示函数定义部分分支的上下文
         *
         * 进入函数声明部分
         */
        void visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context);

        /**
         * @brief 访问过程定义
         *
         * @param context 语法树中表示过程定义分支的上下文
         *
         * 声明一个过程，并将其添加到变量表中
         */
        void visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context);

        /**
         * @brief 访问参数列表
         *
         * @param context 语法树中表示参数列表分支的上下文
         * @param ParaTypes 引用调用，用来存储变量类型
         *
         * 访问普通参数和var参数列表
         */
        void visitFormalParameterList(PascalSParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        /**
         * @brief 访问非var参数
         *
         * @param context 语法树中表示非var参数分支的上下文
         * @param ParaTypes 引用调用，用来存储变量类型
         */
        void visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        /**
         * @brief 访问var参数
         *
         * @param context 语法树中表示var参数分支的上下文
         * @param ParaTypes 引用调用，用来存储变量类型
         */
        void visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes);

        /**
         * @brief 访问一个参数组（标识符和类型）
         *
         * @param context 语法树中表示参数组分支的上下文
         * @param ParaTypes 引用调用，用来存储变量类型
         * @param isVar 是否是var参数
         *
         * 得到参数的类型和参数名
         */
        void visitParameterGroup(PascalSParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar);

        /**
         * @brief 访问标识符列表
         *
         * @param context 语法树中表示标识符列表分支的上下文
         * @return 标识符字符串的列表
         */
        std::vector<std::string> visitIdentifierList(PascalSParser::IdentifierListContext *context);

        /**
         * @brief 访问函数定义
         *
         * @param context 语法树中表示函数定义分支的上下文
         *
         * 声明一个函数，并将其添加到变量表中
         */
        void visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context);

        /**
         * @brief 访问简单语句（赋值、过程调用、空）
         *
         * @param context 语法树中表示简单语句分支的上下文
         * @param function 语句所属的函数
         */
        void visitSimpleState(PascalSParser::SimpleStateContext *context, llvm::Function *function = nullptr);

        /**
         * @brief 访问结构语句（语句块、分支、循环）
         *
         * @param context 语法树中表示结构语句分支的上下文
         * @param function 语句所属的函数
         */
        void visitStructuredState(PascalSParser::StructuredStateContext *context, llvm::Function *function = nullptr);

        /**
         * @brief 访问赋值语句
         *
         * @param context 语法树中表示赋值语句分支的上下文
         */
        void visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *context);

        /**
         * @brief 访问过程调用语句
         *
         * @param context 语法树中表示过程调用语句分支的上下文
         */
        void visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context);

        /**
         * @brief 访问空语句
         *
         * @param context 语法树中表示空语句分支的上下文
         */
        void visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context);

        /**
         * @brief 访问赋值语句
         *
         * @param context 语法树中表示赋值语句分支的上下文
         *
         * 计算右侧表达式的值并将其赋给左侧变量
         */
        void visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context);

        /**
         * @brief 访问变量
         *
         * @param context 语法树中表示变量分支的上下文
         * @return 变量的内存地址
         * @retval std::nullptr 未找到变量
         */
        llvm::Value *visitVariable(PascalSParser::VariableContext *context);

        /**
         * @brief 访问表达式
         *
         * @param context 语法树中表示表达式分支的上下文
         * @return 表达式的计算结果
         */
        llvm::Value *visitExpression(PascalSParser::ExpressionContext *context);

        /**
         * @brief 访问相等关系表达式
         *
         * @param context 语法树中表示相等关系表达式分支的上下文
         * @param L 左侧子表达式的值
         * @param R 右侧子表达式的值
         * @return 左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpEqual(PascalSParser::OpEqualContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问不等关系表达式
         *
         * @param context 语法树中表示不等关系表达式分支的上下文
         * @param L 左侧子表达式的值
         * @param R 右侧子表达式的值
         * @return 左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpNotEqual(PascalSParser::OpNotEqualContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问小于关系表达式
         *
         * @param context 语法树中表示小于关系表达式分支的上下文
         * @param L 左侧子表达式的值
         * @param R 右侧子表达式的值
         * @return 左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpLt(PascalSParser::OpLtContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问小于等于关系表达式
         *
         * @param context 语法树中表示小于等于关系表达式分支的上下文
         * @param L 左侧子表达式的值
         * @param R 右侧子表达式的值
         * @return 左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpLe(PascalSParser::OpLeContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问大于等于关系表达式
         *
         * @param context 语法树中表示大于等于关系表达式分支的上下文
         * @param L 左侧子表达式的值
         * @param R 右侧子表达式的值
         * @return 左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpGe(PascalSParser::OpGeContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问大于关系表达式
         *
         * @param context 语法树中表示大于关系表达式分支的上下文
         * @param L 左侧子表达式的值
         * @param R 右侧子表达式的值
         * @return 左右两侧子表达式的比较结果
         */
        llvm::Value *visitOpGt(PascalSParser::OpGtContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问简单表达式
         *
         * @param context 语法树中表示简单表达式分支的上下文
         * @return 简单表达式的计算结果
         */
        llvm::Value *visitSimpleExpression(PascalSParser::SimpleExpressionContext *context);

        /**
         * @brief 访问加运算表达式
         *
         * @param context 语法树中表示加运算表达式分支的上下文
         * @param L 左侧term的值
         * @param R 右侧term的值
         * @return 表达式的计算结果
         */
        llvm::Value *visitOpPlus(PascalSParser::OpPlusContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问减运算表达式
         *
         * @param context 语法树中表示减运算表达式分支的上下文
         * @param L 左侧term的值
         * @param R 右侧term的值
         * @return 表达式的计算结果
         */
        llvm::Value *visitOpMinus(PascalSParser::OpMinusContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问或运算表达式
         *
         * @param context 语法树中表示或运算表达式分支的上下文
         * @param L 左侧term的值
         * @param R 右侧term的值
         * @return 表达式的计算结果
         */
        llvm::Value *visitOpOr(PascalSParser::OpOrContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问term
         *
         * @param context 语法树中表示term分支的上下文
         * @return term的计算结果
         */
        llvm::Value *visitTerm(PascalSParser::TermContext *context);

        /**
         * @brief 访问乘运算term
         *
         * @param context 语法树中表示乘运算term分支的上下文
         * @param L 左侧factor的值
         * @param R 右侧factor的值
         * @return term的计算结果
         */
        llvm::Value *visitOpStar(PascalSParser::OpStarContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问浮点数除运算term
         *
         * @param context 语法树中表示浮点数除运算term分支的上下文
         * @param L 左侧factor的值
         * @param R 右侧factor的值
         * @return term的计算结果
         */
        llvm::Value *visitOpSlash(PascalSParser::OpSlashContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问整数除运算term
         *
         * @param context 语法树中表示整数除运算term分支的上下文
         * @param L 左侧factor的值
         * @param R 右侧factor的值
         * @return term的计算结果
         */
        llvm::Value *visitOpDiv(PascalSParser::OpDivContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问整数取余运算term
         *
         * @param context 语法树中表示整数取余运算term分支的上下文
         * @param L 左侧factor的值
         * @param R 右侧factor的值
         * @return term的计算结果
         */
        llvm::Value *visitOpMod(PascalSParser::OpModContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问与运算term
         *
         * @param context 语法树中表示与运算term分支的上下文
         * @param L 左侧factor的值
         * @param R 右侧factor的值
         * @return term的计算结果
         */
        llvm::Value *visitOpAnd(PascalSParser::OpAndContext *context, llvm::Value *L, llvm::Value *R);

        /**
         * @brief 访问有符号factor
         *
         * @param context 语法树中表示有符号factor分支的上下文
         * @return 有符号factor的计算结果
         */
        llvm::Value *visitSignedFactor(PascalSParser::SignedFactorContext *context);

        /**
         * @brief 访问变量factor
         *
         * @note 这是Expression中获取variable值的唯一接口，调用了visitVariable()
         * @param context 语法树中表示变量factor分支的上下文
         * @return 变量的值或地址
         */
        llvm::Value *visitFactorVar(PascalSParser::FactorVarContext *context);

        /**
         * @brief 访问表达式factor
         *
         * @param context 语法树中表示表达式factor分支的上下文
         * @return 表达式的值
         */
        llvm::Value *visitFactorExpr(PascalSParser::FactorExprContext *context);

        /**
         * @brief 访问函数调用factor
         *
         * @param context 语法树中表示函数调用factor分支的上下文
         * @return 函数调用的返回值
         */
        llvm::Value *visitFactorFunc(PascalSParser::FactorFuncContext *context);

        /**
         * @brief 访问无符号常量factor
         *
         * @param context 语法树中表示无符号常量factor分支的上下文
         * @return 常量的值
         */
        llvm::Value *visitFactorUnsConst(PascalSParser::FactorUnsConstContext *context);

        /**
         * @brief 访问取反factor
         *
         * @note 与visitSignedFactor相比，context剥离了+/-符号
         * @param context 语法树中表示取反factor分支的上下文
         * @return 计算结果
         */
        llvm::Value *visitFactorNotFact(PascalSParser::FactorNotFactContext *context);

        /**
         * @brief 访问布尔factor
         *
         * @param context 语法树中表示布尔factor分支的上下文
         * @return 布尔值
         */
        llvm::Value *visitFactorBool(PascalSParser::FactorBoolContext *context);

        /**
         * @brief 访问无符号整数常量factor
         *
         * @param context 语法树中表示无符号整数常量factor分支的上下文
         * @return 常量的值
         */
        llvm::Value *visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *context);

        /**
         * @brief 访问字符串常量factor
         *
         * @param context 语法树中表示字符串常量factor分支的上下文
         * @return 常量的值
         */
        std::string visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *context);

        /**
         * @brief 访问函数调用factor
         *
         * @note 这是AST中调用函数的唯一接口
         * @param context 语法树中表示函数调用factor分支的上下文
         * @return 函数调用的返回值
         */
        llvm::Value *visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *context);

        /**
         * @brief 访问函数调用或过程调用的参数列表
         *
         * @note 输入参数context为null时表示发生了一个无参数过程调用
         * @param context 语法树中表示参数列表分支的上下文
         * @param changeFP 默认为false，为true时需要将Float类型拓展为Double类型。
         * @return 函数调用的形参列表
         */
        std::vector<llvm::Value *> visitParameterList(PascalSParser::ParameterListContext *context, bool changeFP = false);

        /**
         * @brief 访问过程调用
         *
         * @param context 语法树中表示过程调用分支的上下文
         *
         * 识别并调用过程。包括用户定义过程和标准输入、输出过程
         */
        void visitProcedureStatement(PascalSParser::ProcedureStatementContext *context);

        /**
         * @brief 访问函数调用或过程调用的参数列表中特定参数值
         *
         * @param context 语法树中表示参数分支的上下文
         * @return 形参的参数值
         */
        llvm::Value *visitActualParameter(PascalSParser::ActualParameterContext *context);

        /**
         * @brief 访问空语句
         *
         * @param context 语法树中表示空语句分支的上下文
         */
        void visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context);

        /**
         * @brief 访问空语句
         *
         * @param context 语法树中表示空语句分支的上下文
         */
        void visitEmpty_(PascalSParser::Empty_Context *context);

        /**
         * @brief 访问语句块
         *
         * @param context 语法树中表示语句块分支的上下文
         * @param function 该语句块所属的函数
         */
        void visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *context, llvm::Function *function);

        /**
         * @brief 访问条件语句
         *
         * @param context 语法树中表示条件语句分支的上下文
         * @param function 该条件语句所属的函数
         */
        void visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *context, llvm::Function *function);

        /**
         * @brief 访问循环语句
         *
         * @param context 语法树中表示循环语句分支的上下文
         * @param function 该循环语句所属的函数
         */
        void visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *context, llvm::Function *function);

        /**
         * @brief 访问语句块
         *
         * @param context 语法树中表示语句块分支的上下文
         * @param function 该语句块所属的函数
         */
        void visitCompoundStatement(PascalSParser::CompoundStatementContext *context, llvm::Function *function);

        /**
         * @brief 访问语句集合
         *
         * @param context 语法树中表示语句集合分支的上下文
         */
        void visitStatements(PascalSParser::StatementsContext *context, llvm::Function *function = nullptr);

        /**
         * @brief 访问if语句
         *
         * @param context 语法树中表示if语句分支的上下文
         * @param function 该if语句所属的函数
         */
        void visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *context, llvm::Function *function);

        /**
         * @brief 访问if语句
         *
         * @param context 语法树中表示if语句分支的上下文
         * @param function 该if语句所属的函数
         */
        void visitIfStatement(PascalSParser::IfStatementContext *context, llvm::Function *function);

        /**
         * @brief 访问while语句
         *
         * @param context 语法树中表示while语句分支的上下文
         * @param function 该while语句所属的函数
         */
        void visitRepetetiveStateWhile(PascalSParser::RepetetiveStateWhileContext *context, llvm::Function *function);

        /**
         * @brief 访问repeat语句
         *
         * @param context 语法树中表示repeat语句分支的上下文
         * @param function 该repeat语句所属的函数
         */
        void visitRepetetiveStateRepeat(PascalSParser::RepetetiveStateRepeatContext *context, llvm::Function *function);

        /**
         * @brief 访问for语句
         *
         * @param context 语法树中表示for语句分支的上下文
         * @param function 该for语句所属的函数
         */
        void visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *context, llvm::Function *function);

        /**
         * @brief 访问while语句
         *
         * @param context 语法树中表示while语句分支的上下文
         * @param function 该while语句所属的函数
         */
        void visitWhileStatement(PascalSParser::WhileStatementContext *context, llvm::Function *function);

        /**
         * @brief 访问repeat语句
         *
         * @param context 语法树中表示repeat语句分支的上下文
         * @param function 该repeat语句所属的函数
         */
        void visitRepeatStatement(PascalSParser::RepeatStatementContext *context, llvm::Function *function);

        /**
         * @brief 访问for语句
         *
         * @param context 语法树中表示for语句分支的上下文
         * @param function 该for语句所属的函数
         */
        void visitForStatement(PascalSParser::ForStatementContext *context, llvm::Function *function);

        /**
         * @brief 访问for语句中循环变量的循环区间
         *
         * @param context 语法树中表示for语句变量循环区间分支的上下文
         * @return 循环变量的循环区间
         */
        std::vector<llvm::Value *> visitForList(PascalSParser::ForListContext *context);

        /**
         * @brief 访问for语句中循环变量的起始值
         *
         * @param context 语法树中表示for语句变量起始值分支的上下文
         * @return 起始值
         */
        llvm::Value *visitInitialValue(PascalSParser::InitialValueContext *context);

        /**
         * @brief 访问for语句中循环变量的终止值
         *
         * @param context 语法树中表示for语句变量终止值分支的上下文
         * @return 终止值
         */
        llvm::Value *visitFinalValue(PascalSParser::FinalValueContext *context);

        /**
         * @brief 访问语句
         *
         * @param context 语法树中表示语句分支的上下文
         * @param function 语句所属的函数
         */
        void visitStatement(PascalSParser::StatementContext *context, llvm::Function *function);
    };
}; // namespace PascalS
