/**
 * @file      StandardProcedure.cpp
 * @brief     标准过程库
 * @author    Ziheng Mao, Aolun Xie
 * @date      2022/4/20
 * @copyright GNU General Public License, version 3 (GPL-3.0)
 *
 * 本文件中实现了部分标准过程库的过程原型构造和参数构造。
 */

#include "StandardProcedure.h"

#include <sstream>

#include <llvm/IR/Module.h>

#include "../exceptions/NotImplementedException.h"

using namespace PascalS;

std::unordered_map<std::string, llvm::Function *(*)(llvm::Module *)> StandardProcedure::prototypeMap;

std::unordered_map<std::string, void (*)(llvm::IRBuilder<> *, std::vector<llvm::Value *> &)> StandardProcedure::argsConstructorMap;

void StandardProcedure::init()
{
    prototypeMap["writeln"] = writelnPrototype;
    prototypeMap["readln"] = readlnPrototype;
    argsConstructorMap["writeln"] = writelnArgsConstructor;
    argsConstructorMap["readln"] = readlnArgsConstructor;
}

bool StandardProcedure::hasProcedure(std::string name)
{
    return prototypeMap.find(name) != prototypeMap.end();
}

llvm::Function *StandardProcedure::readlnPrototype(llvm::Module *module)
{
    auto scanf_type = llvm::FunctionType::get(llvm::Type::getVoidTy(module->getContext()), {llvm::Type::getInt8PtrTy(module->getContext())}, true);
    auto func = module->getOrInsertFunction("scanf", scanf_type, llvm::AttributeList().addAttribute(module->getContext(), 1U, llvm::Attribute::NoAlias));

    return llvm::cast<llvm::Function>(func.getCallee());
}

void StandardProcedure::readlnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args)
{
    std::vector<std::string> formats;

    for (const auto &arg : args)
    {
        auto type = arg->getType();
        if (type->isIntegerTy())
            formats.push_back("%d");
        else if (type->isDoubleTy())
            formats.push_back("%f");
        else
            throw NotImplementedException();
    }

    std::ostringstream format;
    std::copy(formats.begin(), formats.end(), std::ostream_iterator<std::string>(format));
    auto formatString = format.str();

    args.insert(args.begin(), builder->CreateGlobalStringPtr(formatString));
}

llvm::Function *StandardProcedure::writelnPrototype(llvm::Module *module)
{
    auto printf_type = llvm::FunctionType::get(llvm::Type::getVoidTy(module->getContext()), {llvm::Type::getInt8PtrTy(module->getContext())}, true);
    auto func = module->getOrInsertFunction("printf", printf_type, llvm::AttributeList().addAttribute(module->getContext(), 1U, llvm::Attribute::NoAlias));

    return llvm::cast<llvm::Function>(func.getCallee());
}

void StandardProcedure::writelnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args)
{
    std::vector<std::string> formats;

    for (const auto &arg : args)
    {
        auto type = arg->getType();
        if (type->isIntegerTy())
            formats.push_back("%d");
        else if (type->isDoubleTy())
            formats.push_back("%lf");
        else
            throw NotImplementedException();
    }
    formats.push_back("\n");

    std::ostringstream format;
    std::copy(formats.begin(), formats.end(), std::ostream_iterator<std::string>(format));
    auto formatString = format.str();

    args.insert(args.begin(), builder->CreateGlobalStringPtr(formatString));
}