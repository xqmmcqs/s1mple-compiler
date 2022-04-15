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


/*#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/ExecutionEngine/MCJIT.h"
#include "llvm/Support/TargetSelect.h"

int main()
{
    //创建一个module
    static llvm::LLVMContext MyGlobalContext;
    llvm::LLVMContext &context = MyGlobalContext;
    llvm::Module *module=new llvm::Module("testing",context);

    llvm::IRBuilder<> builder(context);

    llvm::SmallVector<llvm::Type *> funcMaxArgs; //两个参数
    //参数和返回值类型
    funcMaxArgs.push_back(llvm::Type::getInt32Ty(context));
    funcMaxArgs.push_back(llvm::Type::getInt32Ty(context));
    llvm::Type *returnType=llvm::Type::getInt32Ty(context);
    //函数类型
    llvm::FunctionType *funcMaxType = llvm::FunctionType::get(returnType,funcMaxArgs,false);
    //在module中创建function
    llvm::Function *max_fun=llvm::Function::Create(funcMaxType,llvm::Function::ExternalLinkage,llvm::Twine("max"),module);

    //给两个参数名字
    llvm::Function::arg_iterator argsItr=max_fun->arg_begin();
    llvm::Value *arg_a=argsItr++;
    arg_a->setName("a");
    llvm::Value *arg_b=argsItr;
    arg_b->setName("b");

    // 创建函数 entry Basic Block (入口块，每个function有且只有一个entry块)
    llvm::BasicBlock *entryMaxFunction = llvm::BasicBlock::Create(context,"entry",max_fun);
    // 创建一个IRBuilder用来创建指令，每个basicblock对应一个IRbulider
    llvm::IRBuilder<> builderMaxFunc(entryMaxFunction);
    // 创建一条 有符号cmp命令
    llvm::Value *cmpValue=builderMaxFunc.CreateICmpSGT(arg_a,arg_b);
    
    //创建一个if.then代码块
    llvm::BasicBlock *ifThen=llvm::BasicBlock::Create(context,"if_then",max_fun);
    llvm::IRBuilder<> builderIfThen(ifThen);
    builderIfThen.CreateRet(arg_a);

    //创建一个if.else代码块
	llvm::BasicBlock *ifElse = llvm::BasicBlock::Create(context, "if_else", max_fun);
	llvm::IRBuilder<> builderIfElse(ifElse);
    builderIfElse.CreateRet(arg_b);

    // 生成 br跳转指令
    builderMaxFunc.CreateCondBr(cmpValue,ifThen,ifElse);

    //声明 int main() 函数
    llvm::FunctionType *mainType=llvm::FunctionType::get(llvm::Type::getInt32Ty(context),false);
    llvm::Function *mainFunc=llvm::Function::Create(mainType,llvm::Function::ExternalLinkage,"main",module);

    //入口块
    llvm::BasicBlock *entryMain=llvm::BasicBlock::Create(context,"entry",mainFunc);
    llvm::IRBuilder<> builderMainFunc(entryMain);

    //创建一个i32常量
    llvm::Value *aValue=llvm::ConstantInt::get(llvm::Type::getInt32Ty(context),-10);
    llvm::Value *bValue=llvm::ConstantInt::get(llvm::Type::getInt32Ty(context),20);

    //构造实参列表
    std::vector<llvm::Value*> argsMax;
    argsMax.push_back(aValue);
    argsMax.push_back(bValue);
    llvm::ArrayRef<llvm::Value*> argsRef(argsMax);

    // 调用函数max
    llvm::Value *ret=builderMainFunc.CreateCall(max_fun,argsRef);
    //创建返回值
    builderMainFunc.CreateRet(ret);

    module->dump();

    return 0;
}*/