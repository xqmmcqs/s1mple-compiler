#include "StandardProcedure.h"

#include <sstream>

#include <llvm/IR/Module.h>

#include "../exceptions/NotImplementedException.h"

using namespace PascalS;

std::unordered_map<std::string, llvm::Function *(*)(std::unique_ptr<llvm::Module>)> StandardProcedure::prototypeMap;

std::unordered_map<std::string, void (*)(llvm::IRBuilder<> *, std::vector<llvm::Value *> &)> StandardProcedure::argsConstructorMap;

void StandardProcedure::init()
{
    prototypeMap["writeln"] = writelnPrototype;
    argsConstructorMap["writeln"] = writelnArgsConstructor;
}

bool StandardProcedure::hasProcedure(std::string name)
{
    return prototypeMap.find(name) != prototypeMap.end();
}


llvm::Function *StandardProcedure::writelnPrototype(std::unique_ptr<llvm::Module> module)
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
        else
            throw NotImplementedException();
    }

    std::ostringstream format;
    std::copy(formats.begin(), formats.end(), std::ostream_iterator<std::string>(format));
    auto formatString = format.str();

    args.insert(args.begin(), builder->CreateGlobalStringPtr(formatString));
}