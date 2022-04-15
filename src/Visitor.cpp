 #include "Visitor.h"

#include "exceptions/NotImplementedException.h"
#include "exceptions/VariableNotFoundException.h"
#include "exceptions/ProcedureNotFoundException.h"
#include "builtin/StandardProcedure.h"

using namespace antlr4;
using namespace PascalS;

llvm::Value *Visitor::getVariable(const std::string &name)
{
    for (auto it = scopes.rbegin(); it != scopes.rend(); it++)
    {
        auto variable = it->getVariable(name);
        if (variable)
            return variable;
    }
    return nullptr;
}

void Visitor::fromFile(const std::string &path)
{
    std::ifstream stream(path);

    auto input = new ANTLRInputStream(stream);
    auto lexer = new PascalSLexer(input);
    auto tokens = new CommonTokenStream(lexer);
    auto parser = new PascalSParser(tokens);

    // parser->setBuildParseTree(true);
    // tree::ParseTree *tree = parser->program();
    // std::cout << tree->toStringTree(&parser) << std::endl;

    auto program = parser->program();

    visitProgram(program);
}

void Visitor::visitProgram(PascalSParser::ProgramContext *context)
{
    auto functionType = llvm::FunctionType::get(builder.getVoidTy(), {}, false);
    auto programName = visitProgramHeading(context->programHeading());
    auto function = llvm::Function::Create(functionType, llvm::GlobalValue::LinkageTypes::ExternalLinkage, "main", module.get());

    scopes.push_back(Scope());
    scopes.back().setVariable(programName, function);

    visitBlock(context->block(), function);

    builder.CreateRetVoid();
}

std::string Visitor::visitProgramHeading(PascalSParser::ProgramHeadingContext *context)
{
    return visitIdentifier(context->identifier());
}

std::string Visitor::visitIdentifier(PascalSParser::IdentifierContext *context)
{
    return context->IDENT()->getText();
}

llvm::Value* Visitor::visitBlock(PascalSParser::BlockContext *context, llvm::Function *function)
{
    for (const auto &procedureAndFunctionDeclarationPart : context->procedureAndFunctionDeclarationPart())
    {
        visitProcedureAndFunctionDeclarationPart(procedureAndFunctionDeclarationPart);
    }

    // for (const auto &constantDefinitionPartContext : context->constantDefinitionPart())
    auto block = llvm::BasicBlock::Create(*llvm_context,"", function);
    builder.SetInsertPoint(block);

    return visitCompoundStatement(context->compoundStatement());
}

llvm::Value* Visitor::visitCompoundStatement(PascalSParser::CompoundStatementContext *context)
{
    return visitStatements(context->statements());
}

llvm::Value* Visitor::visitStatements(PascalSParser::StatementsContext *context)
{
    for (const auto &statementContext : context->statement())
    {
        if (auto simpleStatementContext = dynamic_cast<PascalSParser::SimpleStateContext *>(statementContext))
            visitSimpleState(simpleStatementContext);
        // else if(auto structuredStatementContext = dynamic_cast<PascalSParser::StructuredStateContext *>(statementContext))
        //     visitStructuredState(structuredStatementContext);
        else
            throw NotImplementedException();
    }

    //此处只是示例，为了编译可以通过
    return llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), -10);
}

void Visitor::visitSimpleState(PascalSParser::SimpleStateContext *context)
{
    // if (auto assignmentStatementContext = dynamic_cast<PascalSParser::SimpleStateAssignContext *>(context->simpleStatement()))
    //     visitSimpleStateAssign(assignmentStatementContext);
    // else
    if (auto procedureStatementContext = dynamic_cast<PascalSParser::SimpleStateProcContext *>(context->simpleStatement()))
        visitSimpleStateProc(procedureStatementContext);
    else if (auto emptyStatementContext = dynamic_cast<PascalSParser::SimpleStateEmptyContext *>(context->simpleStatement()))
        visitSimpleStateEmpty(emptyStatementContext);
    else
        throw NotImplementedException();
}

void Visitor::visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context)
{
    visitProcedureStatement(context->procedureStatement());
}

void Visitor::visitProcedureStatement(PascalSParser::ProcedureStatementContext *context)
{
    auto identifier = visitIdentifier(context->identifier());
    if(getVariable(identifier))
    {
        // 调用
    }
    else if(StandardProcedure::hasProcedure(identifier))
    {
        // 获取原型
        // 构��参敄1�71ￄ1�77
        // 调用
    }
    else 
        throw ProcedureNotFoundException(identifier);
}

std::vector<llvm::Value *> *Visitor::visitParameterList(PascalSParser::ParameterListContext *context)
{
    auto params = new std::vector<llvm::Value *>;
    return params;
}

void Visitor::visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context)
{
    visitEmptyStatement_(context->emptyStatement_());
}

void Visitor::visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context)
{
}

//------------------
void Visitor::visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context)
{
    const auto &ProOrFuncDec=context->procedureOrFunctionDeclaration();
    if (auto procedureDeclarationContext = dynamic_cast<PascalSParser:: ProOrFuncDecProContext *>(ProOrFuncDec))
        visitProOrFuncDecPro(procedureDeclarationContext);
    else if(auto functionDeclarationContext = dynamic_cast<PascalSParser:: ProOrFuncDecFuncContext*>(ProOrFuncDec))
        visitProOrFuncDecFunc(functionDeclarationContext);
    else
        throw NotImplementedException();
}

void Visitor::visitProOrFuncDecPro(PascalSParser::ProOrFuncDecProContext *context)
{
    visitProcedureDeclaration(context->procedureDeclaration());
}

void Visitor::visitProOrFuncDecFunc(PascalSParser::ProOrFuncDecFuncContext *context)
{
    visitFunctionDeclaration(context->functionDeclaration());
}

void Visitor::visitProcedureDeclaration(PascalSParser::ProcedureDeclarationContext *context)
{
    
    auto identifier=visitIdentifier(context->identifier());
    
    //返回值类类型
    llvm::SmallVector<llvm::Type *> ParaTypes; 

    //参数类型
    visitFormalParameterList(context->formalParameterList(), ParaTypes);
    
    auto functionType = llvm::FunctionType::get(builder.getVoidTy(), ParaTypes, false);

    auto function=llvm::Function::Create(functionType,llvm::Function::ExternalLinkage,llvm::Twine(identifier),module.get());

    scopes.push_back(Scope());
    scopes.back().setVariable(identifier, function);

    //存储参数
    int n=0;
    for(auto argsItr=function->arg_begin();argsItr!=function->arg_end();argsItr++)
    {
        llvm::Value *arg=argsItr;
        arg->setName(FormalParaIdList[n]);
        scopes.back().setVariable(FormalParaIdList[n++], arg);
    }

    visitBlock(context->block(), function);

    builder.CreateRetVoid();
}

void Visitor::visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context)
{
    auto identifier=visitIdentifier(context->identifier());
    
    //返回值类类型
    auto simpleType=visitSimpleType_ProFun(context->simpleType(),false);

    //参数类型
    llvm::SmallVector<llvm::Type *> ParaTypes; 
    visitFormalParameterList(context->formalParameterList(), ParaTypes);

    auto functionType = llvm::FunctionType::get(simpleType, ParaTypes, false);
    
    auto function=llvm::Function::Create(functionType,llvm::Function::ExternalLinkage,llvm::Twine(identifier),module.get());

    scopes.push_back(Scope());
    scopes.back().setVariable(identifier, function);

    //存储参数
    int n=0;
    for(auto argsItr=function->arg_begin();argsItr!=function->arg_end();argsItr++)
    {
        llvm::Value *arg=argsItr;
        arg->setName(FormalParaIdList[n]);
        scopes.back().setVariable(FormalParaIdList[n++], arg);
    }

    llvm::Value* ret=visitBlock(context->block(), function);
    
    if(ret->getType()!=simpleType) throw NotImplementedException();

    builder.CreateRet(ret);
}

void Visitor::visitFormalParameterList(PascalSParser::FormalParameterListContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    FormalParaIdList.clear();
    
    for (const auto &formalParameterSectionContext : context->formalParameterSection())
    {
        if(auto parameterGroupContext= dynamic_cast<PascalSParser:: FormalParaSecGroupContext *>(formalParameterSectionContext))
        {   
            visitFormalParaSecGroup(parameterGroupContext, ParaTypes);
        }
        else if(auto VAR_parameterGroupContext= dynamic_cast<PascalSParser:: FormalParaSecVarGroupContext *>(formalParameterSectionContext))
        {
            visitFormalParaSecVarGroup(VAR_parameterGroupContext,ParaTypes);
        }
        else
            throw NotImplementedException();
    }
}

void Visitor::visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    visitParameterGroup(context->parameterGroup(),ParaTypes,false);
}

void Visitor::visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    visitParameterGroup(context->parameterGroup(),ParaTypes,true);
}

void Visitor::visitParameterGroup(PascalSParser::ParameterGroupContext *context,llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar)
{
    auto simpleType=visitSimpleType_ProFun(context->simpleType(),isVar);
    auto IdList=visitIdentifierList(context->identifierList());
    for(int i=0;i<IdList.size();i++)
    {
        ParaTypes.push_back(simpleType); //参数类型
        FormalParaIdList.push_back(IdList[i]);  //参数名称
    }
}

std::vector<std::string> Visitor::visitIdentifierList(PascalSParser::IdentifierListContext *context)
{
    std::vector<std::string> idents;
    for(const auto &identfierContext : context->identifier())
    {   
        idents.push_back(visitIdentifier(identfierContext));
    }
    return idents;
}

/*int Visitor::visitSimpleType(PascalSParser::SimpleTypeContext *context){
    if (auto type = context->CHAR()){
        return 0;
    }
    else if(auto type = context->BOOLEAN()){
        return 1;
    }
    else if(auto type = context->INTEGER()){
        return 2;
    }
    else if(auto type = context->REAL()){
        return 3;
    }
    else{//error
        throw NotImplementedException();
    }
}*/

llvm::Type* Visitor:: visitSimpleType_ProFun(PascalSParser::SimpleTypeContext *context,bool isVar)
{
    if(auto charContext=context->CHAR())
    {
        if(isVar) return builder.getInt8PtrTy();
        else return builder.getInt8Ty();
    }
    else if(auto charContext=context->INTEGER())
    {
        if(isVar) return llvm::Type::getInt32PtrTy(*llvm_context);
        else return builder.getInt32Ty();
    }
    else if(auto charContext=context->BOOLEAN())
    {
        if(isVar) return llvm::Type::getInt1PtrTy(*llvm_context);
        else return builder.getInt1Ty();
    }
    else if(auto charContext=context->REAL())
    {
        if(isVar) return llvm::Type::getFloatPtrTy(*llvm_context);
        else return builder.getFloatTy();
    }
    else throw NotImplementedException();
}
 
