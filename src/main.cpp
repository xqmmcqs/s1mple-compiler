#include <iostream>
#include <string>

#include <antlr4-runtime.h>

#include "runtime/PascalLexer.h"
#include "runtime/PascalParser.h"

#include <llvm/Support/raw_ostream.h>

using namespace antlr4;

int main(){
    
    ANTLRInputStream input("1+1");

    PascalLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    PascalParser parser(&tokens);
    parser.setBuildParseTree(true);

    std::cout << "Hello, World!" << std::endl;

    llvm::errs() << "error\n";

    return 0;
}