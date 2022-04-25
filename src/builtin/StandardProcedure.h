#pragma once

#include <llvm/IR/IRBuilder.h>
#include <unordered_map>

namespace PascalS
{
    class StandardProcedure
    {
    public:
        static std::unordered_map<std::string, llvm::Function *(*)(llvm::Module *)> prototypeMap;

        static std::unordered_map<std::string, void (*)(llvm::IRBuilder<> *, std::vector<llvm::Value *> &)> argsConstructorMap;

        static void init();

        static bool hasProcedure(std::string name);

        static llvm::Function *readlnPrototype(llvm::Module * module);

        static void readlnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args);

        static llvm::Function *writelnPrototype(llvm::Module * module);

        static void writelnArgsConstructor(llvm::IRBuilder<> *builder, std::vector<llvm::Value *> &args);
    };
} // namespace PascalS
