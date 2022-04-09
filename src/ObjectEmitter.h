#pragma once

#include <llvm/IR/Module.h>

namespace PascalS
{
    class ObjectEmitter
    {
    public:
        static void emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error);
    };
} // namespace PascalS
