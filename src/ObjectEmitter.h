/**
 * @file      ObjectEmitter.h
 * @brief     生成中间代码
 * @author    Ziheng Mao
 * @date      2022/4/20
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件定义了生成中间代码的接口。
 */

#pragma once

#include <llvm/IR/Module.h>

namespace PascalS
{
    class ObjectEmitter
    {
    public:
        /**
         * @brief 向文件中写入中间代码
         *
         * @param module LLVM Module
         * @param filename 文件名
         * @param error 错误信息
         * 
         * 此函数中设置目标机器信息，并向指定文件中写入中间代码
         */
        static void emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error);
    };
} // namespace PascalS
