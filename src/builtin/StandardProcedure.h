/**
 * @file      StandardProcedure.h
 * @brief     标准过程库
 * @author    Ziheng Mao
 * @date      2022/4/20
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件定义了标准过程库原型和参数构造函数的接口。
 */

#pragma once

#include <llvm/IR/IRBuilder.h>
#include <unordered_map>

namespace PascalS
{
    class StandardProcedure
    {
    public:
        static std::unordered_map<std::string, llvm::Function *(*)(llvm::Module *)> prototypeMap; ///< 过程名到过程原型构造函数的映射

        static std::unordered_map<std::string, void (*)(llvm::IRBuilder<> *, std::vector<llvm::Value *> &)> argsConstructorMap; ///< 过程名到过程参数构造函数的映射

        /**
         * @brief 初始化
         */
        static void init();

        /**
         * @brief 判断是否有某个标准过程
         *
         * @param name 过程名
         * @return true 有该过程
         * @return false 无该过程
         */
        static bool hasProcedure(std::string name);

        /**
         * @brief readln过程原型构造
         *
         * @param module LLVM Module
         * @return llvm::Function* readln过程原型
         */
        static llvm::Function *readlnPrototype(llvm::Module *module);

        /**
         * @brief readln过程参数构造
         *
         * @param builder LLVM IRBuilder
         * @param args 需要构造的参数
         *
         * 在原有参数前加说明参数类型的字符串
         */
        static void readlnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args);

        /**
         * @brief writeln过程原型构造
         *
         * @param module LLVM Module
         * @return llvm::Function* readln过程原型
         */
        static llvm::Function *writelnPrototype(llvm::Module *module);

        /**
         * @brief writeln过程参数构造
         *
         * @param builder LLVM IRBuilder
         * @param args 需要构造的参数
         *
         * 在原有参数前加说明参数类型的字符串
         */
        static void writelnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args);
    };
} // namespace PascalS
