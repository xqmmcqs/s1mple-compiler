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

llvm::Value *Visitor::visitBlock(PascalSParser::BlockContext *context, llvm::Function *function)
{
    for (const auto &procedureAndFunctionDeclarationPart : context->procedureAndFunctionDeclarationPart())
    {
        visitProcedureAndFunctionDeclarationPart(procedureAndFunctionDeclarationPart);
    }
    auto block = llvm::BasicBlock::Create(*llvm_context, "", function);
    builder.SetInsertPoint(block);
    for (const auto &constantDefinitionPartContext : context->constantDefinitionPart())
    {
        visitConstantDefinitionPart(constantDefinitionPartContext);
    }
    for (const auto &variableDeclarePartContext : context->variableDeclarationPart())
    {
        visitVariableDeclarationPart(variableDeclarePartContext);
    }
    for (const auto &typeDefinitionPartContext : context->typeDefinitionPart())
    {
        visitTypeDefinitionPart(typeDefinitionPartContext);
    }
    return visitCompoundStatement(context->compoundStatement(), function);
}

void Visitor::visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context)
{
    for (const auto &typeDefinitionContext : context->typeDefinition())
    {
        visitTypeDefinition(typeDefinitionContext);
    }
}

void Visitor::visitTypeDefinition(PascalSParser::TypeDefinitionContext *context)
{
    auto identifier = visitIdentifier(context->identifier());

    if (auto typeSimpleTypeContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_()))
    {
        auto type = visitTypeSimpleType(typeSimpleTypeContext);
        llvm::StructType *testStruct = llvm::StructType::create(*llvm_context, identifier);
        testStruct->setBody(type);
        auto addr = builder.CreateAlloca(testStruct, nullptr);
        builder.CreateStore(llvm::UndefValue::get(testStruct), addr);
        scopes.back().setVariable(identifier, addr);
    }
    else if (auto typeStructuredTypeContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        // visitTypeStructuredType(typeStructuredTypeContext);
    }
    else
        throw NotImplementedException();
}

llvm::Value *Visitor::visitCompoundStatement(PascalSParser::CompoundStatementContext *context, llvm::Function *function)
{
    return visitStatements(context->statements(), function);
}

llvm::Value *Visitor::visitStatements(PascalSParser::StatementsContext *context, llvm::Function *function)
{
    for (const auto &statementContext : context->statement())
    {
        if (auto simpleStatementContext = dynamic_cast<PascalSParser::SimpleStateContext *>(statementContext))
            visitSimpleState(simpleStatementContext);
        else if (auto structuredStatementContext = dynamic_cast<PascalSParser::StructuredStateContext *>(statementContext))
            visitStructuredState(structuredStatementContext, function);
        else
            throw NotImplementedException();
    }

    //此处只是示例，为了编译可以��过
    return llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), -10);
}

void Visitor::visitSimpleState(PascalSParser::SimpleStateContext *context)
{
    if (auto assignmentStatementContext = dynamic_cast<PascalSParser::SimpleStateAssignContext *>(context->simpleStatement()))
        visitSimpleStateAssign(assignmentStatementContext);
    else if (auto procedureStatementContext = dynamic_cast<PascalSParser::SimpleStateProcContext *>(context->simpleStatement()))
        visitSimpleStateProc(procedureStatementContext);
    else if (auto emptyStatementContext = dynamic_cast<PascalSParser::SimpleStateEmptyContext *>(context->simpleStatement()))
        visitSimpleStateEmpty(emptyStatementContext);
    else
        throw NotImplementedException();
}

void Visitor::visitSimpleStateAssign(PascalSParser::SimpleStateAssignContext *context)
{
    visitAssignmentStatement(context->assignmentStatement());
}

void Visitor::visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context)
{
    auto value = visitExpression(context->expression());
    if (auto varAddr = visitVariable(context->variable()))
    {
        builder.CreateStore(value, varAddr);
    }
    else
    {
        throw VariableNotFoundException(visitIdentifier(context->variable()->identifier(0)));
    }
}

// return the address of variable
llvm::Value *Visitor::visitVariable(PascalSParser::VariableContext *context)
{
    llvm::Value *addr = nullptr;
    std::string varName = visitIdentifier(context->identifier(0));
    // TODO: 数组元素访问
    addr = getVariable(varName);

    return addr;
}

llvm::Value *Visitor::visitExpression(PascalSParser::ExpressionContext *context)
{
    if (!context->relationaloperator())
    {
        return visitSimpleExpression(context->simpleExpression(0));
    }
    auto L = visitSimpleExpression(context->simpleExpression(0));
    auto R = visitSimpleExpression(context->simpleExpression(1));
    if (auto equalContext = dynamic_cast<PascalSParser::OpEqualContext *>(context->relationaloperator()))
    {
        return visitOpEqual(equalContext, L, R);
    }
    else if (auto notEqualContext = dynamic_cast<PascalSParser::OpNotEqualContext *>(context->relationaloperator()))
    {
        return visitOpNotEqual(notEqualContext, L, R);
    }
    else if (auto ltContext = dynamic_cast<PascalSParser::OpLtContext *>(context->relationaloperator()))
    {
        return visitOpLt(ltContext, L, R);
    }
    else if (auto leContext = dynamic_cast<PascalSParser::OpLeContext *>(context->relationaloperator()))
    {
        return visitOpLe(leContext, L, R);
    }
    else if (auto geContext = dynamic_cast<PascalSParser::OpGeContext *>(context->relationaloperator()))
    {
        return visitOpGe(geContext, L, R);
    }
    else if (auto gtContext = dynamic_cast<PascalSParser::OpGtContext *>(context->relationaloperator()))
    {
        return visitOpGt(gtContext, L, R);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Value *Visitor::visitOpEqual(PascalSParser::OpEqualContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFCmpOEQ(L, R);
}

llvm::Value *Visitor::visitOpNotEqual(PascalSParser::OpNotEqualContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFCmpONE(L, R);
}

llvm::Value *Visitor::visitOpLt(PascalSParser::OpLtContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFCmpOLT(L, R);
}

llvm::Value *Visitor::visitOpLe(PascalSParser::OpLeContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFCmpOLE(L, R);
}

llvm::Value *Visitor::visitOpGe(PascalSParser::OpGeContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFCmpOGE(L, R);
}

llvm::Value *Visitor::visitOpGt(PascalSParser::OpGtContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFCmpOGT(L, R);
}

llvm::Value *Visitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext *context)
{
    if (!context->additiveoperator())
    {
        return visitTerm(context->term(0));
    }

    auto L = visitTerm(context->term(0));
    auto R = visitTerm(context->term(1));
    
    if (auto plusContext = dynamic_cast<PascalSParser::OpPlusContext *>(context->additiveoperator()))
    {
        return visitOpPlus(plusContext, L, R);
    }
    else if (auto minusContext = dynamic_cast<PascalSParser::OpMinusContext *>(context->additiveoperator()))
    {
        return visitOpMinus(minusContext, L, R);
    }
    else if (auto orContext = dynamic_cast<PascalSParser::OpOrContext *>(context->additiveoperator()))
    {
        return visitOpOr(orContext, L, R);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Value *Visitor::visitOpPlus(PascalSParser::OpPlusContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateAdd(L, R);
}

llvm::Value *Visitor::visitOpMinus(PascalSParser::OpMinusContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateSub(L, R);
}

llvm::Value *Visitor::visitOpOr(PascalSParser::OpOrContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateOr(L, R);
}

llvm::Value *Visitor::visitTerm(PascalSParser::TermContext *context)
{
    if (!context->multiplicativeoperator())
    {
        return visitSignedFactor(context->signedFactor(0));
    }

    auto L = visitSignedFactor(context->signedFactor(0));
    auto R = visitSignedFactor(context->signedFactor(1));
    if (auto starContext = dynamic_cast<PascalSParser::OpStarContext *>(context->multiplicativeoperator()))
    {
        return visitOpStar(starContext, L, R);
    }
    else if (auto slashContext = dynamic_cast<PascalSParser::OpSlashContext *>(context->multiplicativeoperator()))
    {
        return visitOpSlash(slashContext, L, R);
    }
    else if (auto divContext = dynamic_cast<PascalSParser::OpDivContext *>(context->multiplicativeoperator()))
    {
        return visitOpDiv(divContext, L, R);
    }
    else if (auto modContext = dynamic_cast<PascalSParser::OpModContext *>(context->multiplicativeoperator()))
    {
        return visitOpMod(modContext, L, R);
    }
    else if (auto andContext = dynamic_cast<PascalSParser::OpAndContext *>(context->multiplicativeoperator()))
    {
        return visitOpAnd(andContext, L, R);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Value *Visitor::visitOpStar(PascalSParser::OpStarContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateMul(L, R);
}

llvm::Value *Visitor::visitOpSlash(PascalSParser::OpSlashContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateFDiv(L, R);
}

llvm::Value *Visitor::visitOpDiv(PascalSParser::OpDivContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateSDiv(L, R);
}

llvm::Value *Visitor::visitOpMod(PascalSParser::OpModContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateSRem(L, R);
}

llvm::Value *Visitor::visitOpAnd(PascalSParser::OpAndContext *context, llvm::Value *L, llvm::Value *R)
{
    return builder.CreateAnd(L, R);
}

llvm::Value *Visitor::visitSignedFactor(PascalSParser::SignedFactorContext *context)
{
    
    int flag = context->MINUS() ? -1 : 1;
    
    auto flag_v = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
    if (auto factorVarCtx = dynamic_cast<PascalSParser::FactorVarContext *>(context->factor()))
    {
        
        auto value = visitFactorVar(factorVarCtx);
        
        return builder.CreateMul(flag_v, value);
    }
    else if (auto factorExprCtx = dynamic_cast<PascalSParser::FactorExprContext *>(context->factor()))
    {
        auto value = visitFactorExpr(factorExprCtx);
        return builder.CreateMul(flag_v, value);
    }
    else if (auto factorFuncCtx = dynamic_cast<PascalSParser::FactorFuncContext *>(context->factor()))
    {
        auto value = visitFactorFunc(factorFuncCtx);
        return builder.CreateMul(flag_v, value);
    }
    else if (auto factorUnsConstCtx = dynamic_cast<PascalSParser::FactorUnsConstContext *>(context->factor()))
    {
        auto value = visitFactorUnsConst(factorUnsConstCtx);
        return builder.CreateMul(flag_v, value);
    }
    else if (auto factorNotFactCtx = dynamic_cast<PascalSParser::FactorNotFactContext *>(context->factor()))
    {
        auto value = visitFactorNotFact(factorNotFactCtx);
        return builder.CreateMul(flag_v, value);
    }
    else if (auto factorBoolCtx = dynamic_cast<PascalSParser::FactorBoolContext *>(context->factor()))
    {
        auto value = visitFactorBool(factorBoolCtx);
        return builder.CreateMul(flag_v, value);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Value *Visitor::visitFactorVar(PascalSParser::FactorVarContext *context)
{
    if(!visitVariable(context->variable()))
    {
        auto value = module->getNamedGlobal(visitIdentifier(context->variable()->identifier(0)));
        return value;
    }
    return builder.CreateLoad(visitVariable(context->variable()));
}

llvm::Value *Visitor::visitFactorExpr(PascalSParser::FactorExprContext *context)
{
    return visitExpression(context->expression());
}

llvm::Value *Visitor::visitFactorFunc(PascalSParser::FactorFuncContext *context)
{
    return visitFunctionDesignator(context->functionDesignator());
}

llvm::Value *Visitor::visitFactorUnsConst(PascalSParser::FactorUnsConstContext *context)
{
    if (auto unsignedConstStrCtx = dynamic_cast<PascalSParser::UnsignedConstStrContext *>(context->unsignedConstant()))
    {
        auto v = visitUnsignedConstStr(unsignedConstStrCtx);
        return llvm::ConstantDataArray::getString(*llvm_context, v);
    }
    else if (auto unsignedConstUnsignedNumCtx = dynamic_cast<PascalSParser::UnsignedConstUnsignedNumContext *>(context->unsignedConstant()))
    {
        return visitUnsignedConstUnsignedNum(unsignedConstUnsignedNumCtx);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Value *Visitor::visitFactorNotFact(PascalSParser::FactorNotFactContext *context)
{
    llvm::Value *value;
    if (auto factorVarCtx = dynamic_cast<PascalSParser::FactorVarContext *>(context->factor()))
    {
        value = visitFactorVar(factorVarCtx);
    }
    else if (auto factorExprCtx = dynamic_cast<PascalSParser::FactorExprContext *>(context->factor()))
    {
        value = visitFactorExpr(factorExprCtx);
    }
    else if (auto factorFuncCtx = dynamic_cast<PascalSParser::FactorFuncContext *>(context->factor()))
    {
        value = visitFactorFunc(factorFuncCtx);
    }
    else if (auto factorUnsConstCtx = dynamic_cast<PascalSParser::FactorUnsConstContext *>(context->factor()))
    {
        value = visitFactorUnsConst(factorUnsConstCtx);
    }
    else if (auto factorNotFactCtx = dynamic_cast<PascalSParser::FactorNotFactContext *>(context->factor()))
    {
        value = visitFactorNotFact(factorNotFactCtx);
    }
    else if (auto factorBoolCtx = dynamic_cast<PascalSParser::FactorBoolContext *>(context->factor()))
    {
        value = visitFactorBool(factorBoolCtx);
    }
    else
    {
        throw NotImplementedException();
    }

    if (context->NOT())
    {
        return builder.CreateNot(value);
    }
    else
    {
        return value;
    }
}

llvm::Value *Visitor::visitFactorBool(PascalSParser::FactorBoolContext *context)
{
    auto bool_str = context->bool_()->getText();
    if (bool_str == "TRUE")
    {
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(*llvm_context), true);
    }
    else if (bool_str == "FALSE")
    {
        return llvm::ConstantInt::get(llvm::Type::getInt1Ty(*llvm_context), false);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Value *Visitor::visitUnsignedConstUnsignedNum(PascalSParser::UnsignedConstUnsignedNumContext *context)
{
    if (auto intContext = dynamic_cast<PascalSParser::UnsignedNumberIntegerContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberInteger(intContext);
        auto value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
        return value;
    }
    else if (auto realContext = dynamic_cast<PascalSParser::UnsignedNumberRealContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberReal(realContext);
        auto value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);
        return value;
    }
    else
    {
        throw NotImplementedException();
    }
}

std::string Visitor::visitUnsignedConstStr(PascalSParser::UnsignedConstStrContext *context)
{
    return visitString(context->string());
}

llvm::Value *Visitor::visitFunctionDesignator(PascalSParser::FunctionDesignatorContext *context)
{
    auto funcName = context->identifier()->IDENT()->getText();
    if (auto function = llvm::dyn_cast_or_null<llvm::Function>(getVariable(funcName)))
    {
        auto paraList = visitParameterList(context->parameterList());
        llvm::ArrayRef<llvm::Value *> argsRef(paraList);
        auto retValue = builder.CreateCall(function, argsRef);
        builder.CreateRet(retValue);
        return retValue;
    }
    else
    {
        throw VariableNotFoundException(funcName);
    }
}

std::vector<llvm::Value *> Visitor::visitParameterList(PascalSParser::ParameterListContext *context)
{
    std::vector<llvm::Value *> params;
    if (context)
    {
        for (auto actualPara : context->actualParameter())
        {
            auto param = visitActualParameter(actualPara);
            params.push_back(param);
        }
    }
    return params;
}

llvm::Value *Visitor::visitActualParameter(PascalSParser::ActualParameterContext *context)
{
    return visitExpression(context->expression());
}

void Visitor::visitParameterwidth(PascalSParser::ParameterwidthContext *context)
{
}

void Visitor::visitSimpleStateProc(PascalSParser::SimpleStateProcContext *context)
{
    visitProcedureStatement(context->procedureStatement());
}

void Visitor::visitProcedureStatement(PascalSParser::ProcedureStatementContext *context)
{
    auto identifier = visitIdentifier(context->identifier());
    if (auto procedure = llvm::dyn_cast_or_null<llvm::Function>(getVariable(identifier)))
    {
        auto paraList = visitParameterList(context->parameterList());
        llvm::ArrayRef<llvm::Value *> argsRef(paraList);
        builder.CreateCall(procedure, argsRef);
    }
    else if (StandardProcedure::hasProcedure(identifier))
    {
        auto stdProcedure = StandardProcedure::prototypeMap[identifier](module.get());
        auto paraList = visitParameterList(context->parameterList());
        StandardProcedure::argsConstructorMap[identifier](&builder, paraList);
        llvm::ArrayRef<llvm::Value *> argsRef(paraList);
        builder.CreateCall(stdProcedure, argsRef);
    }
    else
        throw ProcedureNotFoundException(identifier);
}

void Visitor::visitSimpleStateEmpty(PascalSParser::SimpleStateEmptyContext *context)
{
    visitEmptyStatement_(context->emptyStatement_());
}

void Visitor::visitEmptyStatement_(PascalSParser::EmptyStatement_Context *context)
{
}

void Visitor::visitEmpty_(PascalSParser::Empty_Context *context)
{
}

void Visitor::visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context)
{
    // identifier = const
    auto id = visitIdentifier(context->identifier());
    // switch const
    if (auto constIdentifierContext = dynamic_cast<PascalSParser::ConstIdentifierContext *>(context->constant()))
    {
        auto value = visitConstIdentifier(constIdentifierContext);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
    else if (auto constStringContext = dynamic_cast<PascalSParser::ConstStringContext *>(context->constant()))
    {
        auto v = visitConstString(constStringContext);
        auto value = llvm::ConstantDataArray::getString(*llvm_context, v);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
    else if (auto ConstunumberCtx = dynamic_cast<PascalSParser::ConstUnsignedNumberContext *>(context->constant()))
    {
        auto value = visitConstUnsignedNumber(ConstunumberCtx);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
    else if (auto ConstnumberCtx = dynamic_cast<PascalSParser::ConstSignedNumberContext *>(context->constant()))
    {
        auto value = visitConstSignedNumber(ConstnumberCtx);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
    else if (auto ConstsIdentifierCtx = dynamic_cast<PascalSParser::ConstSignIdentifierContext *>(context->constant()))
    {
        auto value = visitConstSignIdentifier(ConstsIdentifierCtx);
        module->getOrInsertGlobal(id, value->getType());
        auto global = module->getNamedGlobal(id);
        global->setInitializer(value);
        global->setConstant(true);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Constant *Visitor::visitConstIdentifier(PascalSParser::ConstIdentifierContext *context)
{
    auto s = visitIdentifier(context->identifier());
    if (getVariable(s))
    {
        auto addr = getVariable(s);
        auto value = builder.CreateLoad(addr);
        if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(value))
        {
            return CI;
        }
        else
        {
            throw NotImplementedException();
        }
    }
    else if (module->getNamedGlobal(s))
    {
        auto global = module->getNamedGlobal(s);
        llvm::ConstantInt *value = (llvm::ConstantInt *)(global->getInitializer());
        return value;
    }
    else
    {
        throw VariableNotFoundException(s);
    }
}

std::string Visitor::visitConstString(PascalSParser::ConstStringContext *context)
{
    return visitString(context->string());
}

llvm::Constant *Visitor::visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context)
{
    auto sign = context->sign()->getText();
    int flag = 1;
    if (sign == "+")
    {
        flag = 1;
    }
    else if (sign == "-")
    {
        flag = -1;
    }
    else
    {
        throw NotImplementedException();
    }
    if (auto intContext = dynamic_cast<PascalSParser::UnsignedNumberIntegerContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberInteger(intContext) * flag;
        auto value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
        return value;
    }
    else if (auto realContext = dynamic_cast<PascalSParser::UnsignedNumberRealContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberReal(realContext) * flag;
        auto value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);
        return value;
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Constant *Visitor::visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context)
{
    if (auto intContext = dynamic_cast<PascalSParser::UnsignedNumberIntegerContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberInteger(intContext);
        auto value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
        return value;
    }
    else if (auto realContext = dynamic_cast<PascalSParser::UnsignedNumberRealContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberReal(realContext);
        auto value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);
        return value;
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Constant *Visitor::visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context)
{
    auto sign = context->sign()->getText();
    int flag = 1;
    if (sign == "+")
    {
        flag = 1;
    }
    else if (sign == "-")
    {
        flag = -1;
    }
    else
    {
        throw NotImplementedException();
    }
    auto s = visitIdentifier(context->identifier());
    if (getVariable(s))
    {
        auto addr = getVariable(s);
        auto value1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
        auto value2 = builder.CreateLoad(addr);
        auto dest = builder.CreateMul(value1, value2);
        return (llvm::Constant *)dest;
    }
    else if (module->getNamedGlobal(s))
    {
        auto global = module->getNamedGlobal(s);
        llvm::ConstantInt *value2 = (llvm::ConstantInt *)(global->getInitializer());
        auto value1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
        auto dest = builder.CreateMul(value1, value2);
        return (llvm::Constant *)dest;
    }
    else
    {
        throw VariableNotFoundException(s);
    }
}

std::string Visitor::visitString(PascalSParser::StringContext *context)
{
    return context->STRING_LITERAL()->getText();
}

int Visitor::visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context)
{
    return visitUnsignedInteger(context->unsignedInteger());
}

float Visitor::visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context)
{
    return visitUnsignedReal(context->unsignedReal());
}

int Visitor::visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context)
{
    auto s = context->NUM_INT()->getText();
    return atoi(s.c_str());
}

float Visitor::visitUnsignedReal(PascalSParser::UnsignedRealContext *context)
{
    auto s = context->NUM_REAL()->getText();
    return atof(s.c_str());
}

void Visitor::visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context)
{
    for (const auto &constDefinitionContext : context->constantDefinition())
    {
        visitConstantDefinition(constDefinitionContext);
    }
}

void Visitor::visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context)
{
    for (const auto &vDeclarationContext : context->variableDeclaration())
    {
        visitVariableDeclaration(vDeclarationContext);
    }
}

llvm::Type *Visitor::visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context)
{
    auto idList = visitIdentifierList(context->identifierList());
    if (auto typeSimpleContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_()))
    {
        auto type = visitTypeSimpleType(typeSimpleContext);
        for (auto id : idList)
        {
            auto addr = builder.CreateAlloca(type, nullptr);
            builder.CreateStore(llvm::UndefValue::get(type), addr);
            scopes.back().setVariable(id, addr);
        }
        return type;
    }
    else if (auto typeStructureContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        auto type = visitTypeStructuredType(typeStructureContext, idList);
        for (auto id : idList)
        {
            auto addr = builder.CreateAlloca(type, nullptr);
            scopes.back().setVariable(id, addr);
        }
        return type;
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Type *Visitor::visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context)
{
    return visitSimpleType(context->simpleType());
}

llvm::Type *Visitor::visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context, std::vector<std::string> idList)
{
    if (auto arrayContext = dynamic_cast<PascalSParser::StructuredTypeArrayContext *>(context->structuredType()))
    {
        return visitStructuredTypeArray(arrayContext, idList);
    }
    else if (auto recordContext = dynamic_cast<PascalSParser::StructuredTypeRecordContext *>(context->structuredType()))
    {
        return visitStructuredTypeRecord(recordContext, idList);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Type *Visitor::visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context, std::vector<std::string> idList)
{
    if (auto array1Context = dynamic_cast<PascalSParser::ArrayType1Context *>(context->arrayType()))
    {
        return visitArrayType1(array1Context, idList);
    }
    else if (auto array2Context = dynamic_cast<PascalSParser::ArrayType2Context *>(context->arrayType()))
    {
        return visitArrayType2(array2Context, idList);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Type *Visitor::visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context, std::vector<std::string> idList)
{
    return visitRecordType(context->recordType(), idList);
}

llvm::Type *Visitor::visitArrayType1(PascalSParser::ArrayType1Context *context, std::vector<std::string> idList)
{
    auto ranges = visitPeriods(context->periods());
    int space = 1;
    // calculate the space of array
    for (auto iter = ranges.begin(); iter != ranges.end(); iter++)
    {
        auto v1 = *iter;
        auto v2 = *(++iter);
        space *= (v2 - v1 + 1);
    }

    if (auto typeSimpleContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_()))
    {
        auto type = visitTypeSimpleType(typeSimpleContext);
        return llvm::ArrayType::get(type, space);
    }
    else if (auto typeStructureContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        auto type = visitTypeStructuredType(typeStructureContext, idList);
        return llvm::ArrayType::get(type, space);
    }
    else
    {
        throw NotImplementedException();
    }
}

llvm::Type *Visitor::visitArrayType2(PascalSParser::ArrayType2Context *context, std::vector<std::string> idList)
{
    auto ranges = visitPeriods(context->periods());
    int space = 1;
    // calculate the space of array
    for (auto iter = ranges.begin(); iter != ranges.end(); iter++)
    {
        auto v1 = *iter;
        auto v2 = *(++iter);
        space *= (v2 - v1 + 1);
    }

    if (auto typeSimpleContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_()))
    {
        auto type = visitTypeSimpleType(typeSimpleContext);
        return llvm::ArrayType::get(type, space);
    }
    else if (auto typeStructureContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        auto type = visitTypeStructuredType(typeStructureContext, idList);
        return llvm::ArrayType::get(type, space);
    }
    else
    {
        throw NotImplementedException();
    }
}

std::vector<int> Visitor::visitPeriods(PascalSParser::PeriodsContext *context)
{
    std::vector<int> ranges;
    for (const auto &periodContext : context->period())
    {
        auto range = visitPeriod(periodContext);
        for (int a : range)
        {
            ranges.push_back(a);
        }
    }
    return ranges;
}
// return 2 int
std::vector<int> Visitor::visitPeriod(PascalSParser::PeriodContext *context)
{
    auto vec = context->constant();
    if (vec.size() != 2)
    {
        throw NotImplementedException();
    }
    auto constContext = vec[0];
    llvm::Value *value1, *value2;
    if (auto constIdentifierContext = dynamic_cast<PascalSParser::ConstIdentifierContext *>(constContext))
    {
        auto value = visitConstIdentifier(constIdentifierContext);
        if (!value->getType()->isIntegerTy())
        {
            throw NotImplementedException();
        }
        else
        {
            value1 = value;
        }
    }
    else if (auto ConstunumberCtx = dynamic_cast<PascalSParser::ConstUnsignedNumberContext *>(constContext))
    {
        value1 = visitConstUnsignedNumber(ConstunumberCtx);
    }
    else if (auto ConstnumberCtx = dynamic_cast<PascalSParser::ConstSignedNumberContext *>(constContext))
    {
        value1 = visitConstSignedNumber(ConstnumberCtx);
    }
    else if (auto ConstsIdentifierCtx = dynamic_cast<PascalSParser::ConstSignIdentifierContext *>(constContext))
    {
        auto value = visitConstSignIdentifier(ConstsIdentifierCtx);
        if (!value->getType()->isIntegerTy())
        {
            throw NotImplementedException();
        }
        else
        {
            value1 = value;
        }
    }
    else
    {
        throw NotImplementedException();
    }

    constContext = vec[1];
    if (auto constIdentifierContext = dynamic_cast<PascalSParser::ConstIdentifierContext *>(constContext))
    {
        auto value = visitConstIdentifier(constIdentifierContext);
        if (!value->getType()->isIntegerTy())
        {
            throw NotImplementedException();
        }
        else
        {
            value2 = value;
        }
    }
    else if (auto ConstunumberCtx = dynamic_cast<PascalSParser::ConstUnsignedNumberContext *>(constContext))
    {
        value2 = visitConstUnsignedNumber(ConstunumberCtx);
    }
    else if (auto ConstnumberCtx = dynamic_cast<PascalSParser::ConstSignedNumberContext *>(constContext))
    {
        value2 = visitConstSignedNumber(ConstnumberCtx);
    }
    else if (auto ConstsIdentifierCtx = dynamic_cast<PascalSParser::ConstSignIdentifierContext *>(constContext))
    {
        auto value = visitConstSignIdentifier(ConstsIdentifierCtx);
        if (!value->getType()->isIntegerTy())
        {
            throw NotImplementedException();
        }
        else
        {
            value2 = value;
        }
    }
    else
    {
        throw NotImplementedException();
    }
    int constIntValue1, constIntValue2;
    if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(value1))
    {
        constIntValue1 = CI->getSExtValue();
    }
    else
    {
        throw NotImplementedException();
    }
    if (llvm::ConstantInt *CI = llvm::dyn_cast<llvm::ConstantInt>(value2))
    {
        constIntValue2 = CI->getSExtValue();
    }
    else
    {
        throw NotImplementedException();
    }
    std::vector<int> range;
    range.push_back(constIntValue1);
    range.push_back(constIntValue2);
    return range;
}

llvm::Type *Visitor::visitRecordType(PascalSParser::RecordTypeContext *context, std::vector<std::string> idList)
{
    return visitRecordField(context->recordField(), idList);
}

llvm::Type *Visitor::visitRecordField(PascalSParser::RecordFieldContext *context, std::vector<std::string> idList)
{
    std::vector<llvm::Type *> elements;
    for (const auto &varDeclareCtx : context->variableDeclaration())
    {
        auto e = visitVariableDeclaration(varDeclareCtx);
        elements.push_back(e);
    }
    for (auto id : idList)
    {
        llvm::StructType *testStruct = llvm::StructType::create(*llvm_context, id);
        testStruct->setBody(elements);
        return testStruct;
    }
    return elements[0];
}

void Visitor::visitProcedureAndFunctionDeclarationPart(PascalSParser::ProcedureAndFunctionDeclarationPartContext *context)
{
    const auto &ProOrFuncDec = context->procedureOrFunctionDeclaration();
    if (auto procedureDeclarationContext = dynamic_cast<PascalSParser::ProOrFuncDecProContext *>(ProOrFuncDec))
        visitProOrFuncDecPro(procedureDeclarationContext);
    else if (auto functionDeclarationContext = dynamic_cast<PascalSParser::ProOrFuncDecFuncContext *>(ProOrFuncDec))
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

    auto identifier = visitIdentifier(context->identifier());

    //返回值类类型
    llvm::SmallVector<llvm::Type *> ParaTypes;

    //参数类型
    visitFormalParameterList(context->formalParameterList(), ParaTypes);

    auto functionType = llvm::FunctionType::get(builder.getVoidTy(), ParaTypes, false);

    auto function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, llvm::Twine(identifier), module.get());

    scopes.push_back(Scope());
    scopes.back().setVariable(identifier, function);

    //存储参数
    int n = 0;
    for (auto argsItr = function->arg_begin(); argsItr != function->arg_end(); argsItr++)
    {
        llvm::Value *arg = argsItr;
        arg->setName(FormalParaIdList[n]);
        scopes.back().setVariable(FormalParaIdList[n++], arg);
    }

    visitBlock(context->block(), function);

    builder.CreateRetVoid();
}

void Visitor::visitFunctionDeclaration(PascalSParser::FunctionDeclarationContext *context)
{
    auto identifier = visitIdentifier(context->identifier());

    //返回值类类型
    auto simpleType = visitSimpleType(context->simpleType(), false);

    //参数类型
    llvm::SmallVector<llvm::Type *> ParaTypes;
    visitFormalParameterList(context->formalParameterList(), ParaTypes);

    auto functionType = llvm::FunctionType::get(simpleType, ParaTypes, false);

    auto function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, llvm::Twine(identifier), module.get());

    scopes.push_back(Scope());
    scopes.back().setVariable(identifier, function);

    //存储参数
    int n = 0;
    for (auto argsItr = function->arg_begin(); argsItr != function->arg_end(); argsItr++)
    {
        llvm::Value *arg = argsItr;
        arg->setName(FormalParaIdList[n]);
        scopes.back().setVariable(FormalParaIdList[n++], arg);
    }

    llvm::Value *ret = visitBlock(context->block(), function);

    if (ret->getType() != simpleType)
        throw NotImplementedException();

    scopes.pop_back();
    builder.CreateRet(ret);
}

void Visitor::visitFormalParameterList(PascalSParser::FormalParameterListContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    FormalParaIdList.clear();

    for (const auto &formalParameterSectionContext : context->formalParameterSection())
    {
        if (auto parameterGroupContext = dynamic_cast<PascalSParser::FormalParaSecGroupContext *>(formalParameterSectionContext))
        {
            visitFormalParaSecGroup(parameterGroupContext, ParaTypes);
        }
        else if (auto VAR_parameterGroupContext = dynamic_cast<PascalSParser::FormalParaSecVarGroupContext *>(formalParameterSectionContext))
        {
            visitFormalParaSecVarGroup(VAR_parameterGroupContext, ParaTypes);
        }
        else
            throw NotImplementedException();
    }
}

void Visitor::visitFormalParaSecGroup(PascalSParser::FormalParaSecGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    visitParameterGroup(context->parameterGroup(), ParaTypes, false);
}

void Visitor::visitFormalParaSecVarGroup(PascalSParser::FormalParaSecVarGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes)
{
    visitParameterGroup(context->parameterGroup(), ParaTypes, true);
}

void Visitor::visitParameterGroup(PascalSParser::ParameterGroupContext *context, llvm::SmallVector<llvm::Type *> &ParaTypes, bool isVar)
{
    auto simpleType = visitSimpleType(context->simpleType(), isVar);
    auto IdList = visitIdentifierList(context->identifierList());
    for (int i = 0; i < IdList.size(); i++)
    {
        ParaTypes.push_back(simpleType);       //参数类型
        FormalParaIdList.push_back(IdList[i]); //参数名称
    }
}

std::vector<std::string> Visitor::visitIdentifierList(PascalSParser::IdentifierListContext *context)
{
    std::vector<std::string> idents;
    for (const auto &identfierContext : context->identifier())
    {
        idents.push_back(visitIdentifier(identfierContext));
    }
    return idents;
}

llvm::Type *Visitor::visitSimpleType(PascalSParser::SimpleTypeContext *context, bool isVar)
{
    if (auto charContext = context->CHAR())
    {
        if (isVar)
            return builder.getInt8PtrTy();
        else
            return builder.getInt8Ty();
    }
    else if (auto charContext = context->INTEGER())
    {
        if (isVar)
            return llvm::Type::getInt32PtrTy(*llvm_context);
        else
            return builder.getInt32Ty();
    }
    else if (auto charContext = context->BOOLEAN())
    {
        if (isVar)
            return llvm::Type::getInt1PtrTy(*llvm_context);
        else
            return builder.getInt1Ty();
    }
    else if (auto charContext = context->REAL())
    {
        if (isVar)
            return llvm::Type::getFloatPtrTy(*llvm_context);
        else
            return builder.getFloatTy();
    }
    else
        throw NotImplementedException();
}

void Visitor::visitStructuredState(PascalSParser::StructuredStateContext *context, llvm::Function *function)
{
    if (auto compoundStatementContext = dynamic_cast<PascalSParser::StructuredStateCompoundContext *>(context->structuredStatement()))
        visitStructuredStateCompound(compoundStatementContext, function);
    else if (auto conditionalStatementContext = dynamic_cast<PascalSParser::StructuredStateConditionalContext *>(context->structuredStatement()))
        visitStructuredStateConditional(conditionalStatementContext, function);
    else if (auto structuredStateRepetetiveContext = dynamic_cast<PascalSParser::StructuredStateRepetetiveContext *>(context->structuredStatement()))
        visitStructuredStateRepetetive(structuredStateRepetetiveContext, function);
    else
    {
        throw NotImplementedException();
    }
}

void Visitor::visitStructuredStateRepetetive(PascalSParser::StructuredStateRepetetiveContext *context, llvm::Function *function)
{
    if (auto repetetiveStateForContext = dynamic_cast<PascalSParser::RepetetiveStateForContext *>(context->repetetiveStatement()))
    {
        visitRepetetiveStateFor(repetetiveStateForContext, function);
    }
    else
        throw NotImplementedException();
}

void Visitor::visitRepetetiveStateFor(PascalSParser::RepetetiveStateForContext *context, llvm::Function *function)
{
    visitForStatement(context->forStatement(), function);
}

void Visitor::visitForStatement(PascalSParser::ForStatementContext *context, llvm::Function *function)
{
    auto id = visitIdentifier(context->identifier());
    auto v = visitForList(context->forList());
    auto con_1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), 1);
    auto initial = v[0];
    auto final = v[1];
    auto addr = builder.CreateAlloca(llvm::Type::getInt32Ty(*llvm_context), nullptr);
    builder.CreateStore(initial, addr);

    auto while_count = llvm::BasicBlock::Create(*llvm_context, "while_count", function, 0);
    llvm::BasicBlock *while_body = llvm::BasicBlock::Create(*llvm_context, "while_body", function, 0);
    llvm::BasicBlock *while_end = llvm::BasicBlock::Create(*llvm_context, "while_end", function, 0);

    builder.CreateBr(while_count);
    builder.SetInsertPoint(while_count);
    auto tmp_i = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), addr);
    auto cmp = builder.CreateICmpSLE(tmp_i, final);

    builder.CreateCondBr(cmp, while_body, while_end);

    builder.SetInsertPoint(while_body);

    // if (auto simpleStatementContext = dynamic_cast<PascalSParser::SimpleStateContext *>(context->statement()))
    //         visitSimpleState(simpleStatementContext);
    // else if(auto structuredStatementContext = dynamic_cast<PascalSParser::StructuredStateContext *>(context->statement()))
    //         visitStructuredState(structuredStatementContext, function);
    // else
    //     throw NotImplementedException();

    auto i = builder.CreateLoad(llvm::IntegerType::getInt32Ty(*llvm_context), addr);
    auto tmp = builder.CreateAdd(i, con_1);
    builder.CreateStore(tmp, addr);

    builder.CreateBr(while_count);

    builder.SetInsertPoint(while_end);
}

std::vector<llvm::Value *> Visitor::visitForList(PascalSParser::ForListContext *context)
{
    std::vector<llvm::Value *> v;
    auto v1 = visitInitialValue(context->initialValue());
    auto v2 = visitFinalValue(context->finalValue());
    v.push_back(v1);
    v.push_back(v2);
    return v;
}

llvm::Value *Visitor::visitInitialValue(PascalSParser::InitialValueContext *context)
{
    auto value = visitExpression(context->expression());
    return value;
}

llvm::Value *Visitor::visitFinalValue(PascalSParser::FinalValueContext *context)
{
    auto value = visitExpression(context->expression());
    return value;
}

//------------------------------

void Visitor::visitStructuredStateCompound(PascalSParser::StructuredStateCompoundContext *context, llvm::Function *function)
{
    visitCompoundStatement(context->compoundStatement(), function);
}
void Visitor::visitStructuredStateConditional(PascalSParser::StructuredStateConditionalContext *context, llvm::Function *function)
{
    if (auto ifStatementContext = dynamic_cast<PascalSParser::ConditionalStateIfContext *>(context->conditionalStatement()))
        visitConditionalStateIf(ifStatementContext, function);
    else
    {
        throw NotImplementedException();
    }
}
void Visitor::visitConditionalStateIf(PascalSParser::ConditionalStateIfContext *context, llvm::Function *function)
{
    visitIfStatement(context->ifStatement(), function);
}
void Visitor::visitIfStatement(PascalSParser::IfStatementContext *context, llvm::Function *function)
{
    llvm::Value * exp_value = visitExpression(context->expression());
    // //为了测试，创建一个i32常量
    // llvm::Value *aValue = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), -10);
    // llvm::Value *bValue = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), 20);
    // llvm::Value *exp_value = builder.CreateICmpSGT(aValue, bValue);

    //创建then else基本块
    llvm::BasicBlock *thenBB = llvm::BasicBlock::Create(*llvm_context, "then", function);
    llvm::BasicBlock *elseBB = llvm::BasicBlock::Create(*llvm_context, "else", function);
    llvm::BasicBlock *end = llvm::BasicBlock::Create(*llvm_context, "if_end", function);

    //如果执行then
    builder.SetInsertPoint(thenBB);
    visitStatement(context->statement(0));
    builder.CreateBr(end);
    //如果有else
    if (context->statement().size() == 2)
    {
        builder.SetInsertPoint(elseBB);
        visitStatement(context->statement(1));
        builder.CreateBr(end);
    }

    //根据条件判断跳转到哪个块
    if(context->statement().size() == 2)
        builder.CreateCondBr(exp_value, thenBB, elseBB);
    else
        builder.CreateCondBr(exp_value, thenBB, end);

    builder.SetInsertPoint(end);
}

void Visitor::visitStatement(PascalSParser::StatementContext *context)
{
    if (auto simpleStatementContext = dynamic_cast<PascalSParser::SimpleStateContext *>(context))
        visitSimpleState(simpleStatementContext);
    else if (auto structuredStatementContext = dynamic_cast<PascalSParser::StructuredStateContext *>(context))
        visitStructuredState(structuredStatementContext);
    else
        throw NotImplementedException();
}