#include <unistd.h>

#include <llvm/Support/TargetSelect.h>
#include <llvm/Support/raw_ostream.h>

#include "Visitor.h"
#include "ObjectEmitter.h"
#include "builtin/StandardProcedure.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        llvm::errs() << "Usage: s1mple-compiler <source-file> [-h] [-o <target-file (default: <filename>.o)>]\n";
        return 1;
    }
    std::string sourcePath(argv[1]), targetPath;
    while (int o = getopt(argc, argv, "ho:") != -1)
    {
        switch (o)
        {
        case 'h':
            llvm::errs() << "Usage: s1mple-compiler <source-file> [-h] [-o <target-file (default: <filename>.o)>]\n";
            return 1;
        case 'o':
            targetPath = optarg;
            break;
        case '?':
            llvm::errs() << "Usage: s1mple-compiler <source-file> [-h] [-o <target-file (default: <filename>.o)>]\n";
            return 1;
        }
    }

    PascalS::StandardProcedure::init();
    
    PascalS::Visitor visitor(sourcePath);
    try
    {
        visitor.fromFile(sourcePath);
    }
    catch (const std::ifstream::failure &e)
    {
        llvm::errs() << e.what();
    }

    if (targetPath.empty())
        targetPath = sourcePath.substr(0, sourcePath.find_last_of('.')) + ".bc";
    
    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();

    std::string error;
    PascalS::ObjectEmitter::emit(visitor.module, targetPath, error);
    if (!error.empty())
    {
        llvm::errs() << error << '\n';
        return 1;
    }
    
    return 0;
}
