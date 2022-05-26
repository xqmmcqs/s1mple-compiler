/**
 * @file      Scope.h
 * @brief     变量作用域
 * @author    Ziheng Mao
 * @date      2022/4/20
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件定义了变量作用域的接口。
 */

#pragma once

#include <llvm/IR/Value.h>
#include <string>
#include <unordered_map>

namespace PascalS
{
    class Scope
    {
    private:
        std::unordered_map<std::string, llvm::Value *> variables; ///< 变量名到值的映射

    public:
        /**
         * @brief 设置变量的值
         * 
         * @param name 变量名
         * @return llvm::Value* 变量的值
         */
        llvm::Value *setVariable(const std::string &name, llvm::Value *);

        /**
         * @brief 获取变量的值
         * 
         * @param name 变量名
         * @return llvm::Value* 变量的值，若获取不到返回空指针
         */
        llvm::Value *getVariable(const std::string &name);
    };
} // namespace PascalS
