/**
 * @file      Scope.cpp
 * @brief     变量作用域
 * @author    Ziheng Mao
 * @date      2022/4/20
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件的内容是变量作用域的实现。
 */

#include "Scope.h"

using namespace PascalS;

llvm::Value *Scope::setVariable(const std::string &name, llvm::Value *value)
{
    this->variables[name] = value;
    return value;
}

llvm::Value *Scope::getVariable(const std::string &name)
{
    try
    {
        return this->variables.at(name);
    }
    catch (std::out_of_range)
    {
        return nullptr;
    }
}
