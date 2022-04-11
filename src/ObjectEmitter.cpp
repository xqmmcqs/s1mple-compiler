#include "ObjectEmitter.h"

#include <llvm/Support/Error.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/Host.h>
#include <llvm/Support/TargetRegistry.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/Target/TargetOptions.h>
#include <llvm/Bitcode/BitcodeWriter.h>

using namespace PascalS;

void ObjectEmitter::emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error)
{
    auto targetTriple = llvm::sys::getDefaultTargetTriple();
    auto target = llvm::TargetRegistry::lookupTarget(targetTriple, error);
    if (!target)
    {
        return;
    }

    auto cpu = "generic";
    auto features = "";
    llvm::TargetOptions opt;
    auto RM = llvm::Optional<llvm::Reloc::Model>();
    auto targetMachine = target->createTargetMachine(targetTriple, cpu, features, opt, RM);

    module->setDataLayout(targetMachine->createDataLayout());
    module->setTargetTriple(targetTriple);

    std::error_code ec;
    llvm::raw_fd_ostream dest(filename, ec, llvm::sys::fs::CD_CreateAlways, llvm::sys::fs::FA_Write, llvm::sys::fs::OF_None);
    if (ec)
    {
        error = "Could not open file: " + ec.message();
        return;
    }

    llvm::WriteBitcodeToFile(*module, dest);
    dest.flush();
}