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

void Visitor::visitBlock(PascalSParser::BlockContext *context, llvm::Function *function)
{
    auto block = llvm::BasicBlock::Create(*llvm_context, "", function);
    builder.SetInsertPoint(block);
    for (const auto &constantDefinitionPartContext : context->constantDefinitionPart()){
        visitConstantDefinitionPart(constantDefinitionPartContext);
    }
    for (const auto &vDeclarePartContext : context->variableDeclarationPart()){
        visitVariableDeclarationPart(vDeclarePartContext);
    }

    for (const auto &typeDefinitionPartContext : context->typeDefinitionPart()){
        visitTypeDefinitionPart(typeDefinitionPartContext);
    }


    visitCompoundStatement(context->compoundStatement());
}

void Visitor::visitTypeDefinitionPart(PascalSParser::TypeDefinitionPartContext *context)
{
    for (const auto &typeDefinitionContext : context->typeDefinition()) {
        visitTypeDefinition(typeDefinitionContext);
    }
    
}

void Visitor::visitTypeDefinition(PascalSParser::TypeDefinitionContext *context)
{
    auto identifier = visitIdentifier(context->identifier());

    if (auto typeSimpleTypeContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_()))
    {
        auto type = visitTypeSimpleType(typeSimpleTypeContext);
        switch (type)
        {
        case 0:{
            //CHAR
            auto addr = builder.CreateAlloca(llvm::Type::getInt8Ty(*llvm_context), nullptr);
            builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt8Ty(*llvm_context)), addr);
            scopes.back().setVariable(identifier, addr);
            // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            
            break;
        }
        
        case 1:{
            //BOOL
            auto addr = builder.CreateAlloca(llvm::Type::getInt1Ty(*llvm_context), nullptr);
            builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt1Ty(*llvm_context)), addr);
            scopes.back().setVariable(identifier, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));

            break;
        }
        
        case 2:{
           //INT
            auto addr = builder.CreateAlloca(llvm::Type::getInt32Ty(*llvm_context), nullptr);
            builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt32Ty(*llvm_context)), addr);
            scopes.back().setVariable(identifier, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            
            break; 
        }
        
        case 3:{
            //REAL

            auto addr = builder.CreateAlloca(llvm::Type::getFloatTy(*llvm_context), nullptr);
            builder.CreateStore(llvm::UndefValue::get(llvm::Type::getFloatTy(*llvm_context)), addr);
            scopes.back().setVariable(identifier, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            break;
        }
        
        default:
            throw NotImplementedException();
            break;
        }

    }
    else if(auto typeStructuredTypeContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        
    }
    else
        throw NotImplementedException();
}




void Visitor::visitCompoundStatement(PascalSParser::CompoundStatementContext *context)
{
    visitStatements(context->statements());
}

void Visitor::visitStatements(PascalSParser::StatementsContext *context)
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
        // 构造参数
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

void Visitor::visitConstantDefinition(PascalSParser::ConstantDefinitionContext *context)
{
    // identifier = const
    auto id = visitIdentifier(context->identifier());
    //switch const
    if (auto constIdentifierContext = dynamic_cast<PascalSParser::ConstIdentifierContext *>(context->constant()))
    {
        auto addr = visitConstIdentifier(constIdentifierContext);
        scopes.back().setVariable(id, addr);
    }
    else if (auto constStringContext = dynamic_cast<PascalSParser::ConstStringContext *>(context->constant()))
    {
        auto v = visitConstString(constStringContext);
        auto value = llvm::ConstantDataArray::getString(*llvm_context, v);
        auto addr = builder.CreateAlloca(value->getType(), nullptr);
        builder.CreateStore(value, addr);
        scopes.back().setVariable(id, addr);

    }
    else if (auto ConstunumberCtx = dynamic_cast<PascalSParser::ConstUnsignedNumberContext *>(context->constant()))
    {
        auto value = visitConstUnsignedNumber(ConstunumberCtx);
        auto addr = builder.CreateAlloca(value->getType(), nullptr);
        builder.CreateStore(value, addr);
        scopes.back().setVariable(id, addr);
    }
    else if (auto ConstnumberCtx = dynamic_cast<PascalSParser::ConstSignedNumberContext *>(context->constant()))
    {
        auto value = visitConstSignedNumber(ConstnumberCtx);
        auto addr = builder.CreateAlloca(value->getType(), nullptr);
        builder.CreateStore(value, addr);
        scopes.back().setVariable(id, addr);
    }
    else if (auto ConstsIdentifierCtx = dynamic_cast<PascalSParser::ConstSignIdentifierContext *>(context->constant())){
        auto addr = visitConstSignIdentifier(ConstsIdentifierCtx);
        scopes.back().setVariable(id, addr);
    }
    else{
        throw NotImplementedException();
    }
}

llvm::Value* Visitor::visitConstIdentifier(PascalSParser::ConstIdentifierContext *context){
    auto s = visitIdentifier(context->identifier());
    if(getVariable(s)){
        //connst cannot be altered, so i assume them in the same addr
        auto addr = getVariable(s);
        return addr;
    }
    else{
        throw VariableNotFoundException(s);
    }
}

std::string Visitor::visitConstString(PascalSParser::ConstStringContext *context){
    return visitString(context->string());

}

llvm::Value* Visitor::visitConstSignedNumber(PascalSParser::ConstSignedNumberContext *context){
    auto sign = context->sign()->getText();
    int flag = 1;
    if(sign == "+"){
        flag = 1;
    }
    else if(sign == "-"){
        flag = -1;
    }
    else{
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
    else{
        throw NotImplementedException();
    }
}

llvm::Value* Visitor::visitConstUnsignedNumber(PascalSParser::ConstUnsignedNumberContext *context){
    if (auto intContext = dynamic_cast<PascalSParser::UnsignedNumberIntegerContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberInteger(intContext);
        auto value = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), v);
        // std::cout<<value->getType()->isIntegerTy()<<std::endl;
        return value;

    }
    else if (auto realContext = dynamic_cast<PascalSParser::UnsignedNumberRealContext *>(context->unsignedNumber()))
    {
        auto v = visitUnsignedNumberReal(realContext);
        auto value = llvm::ConstantFP::get(llvm::Type::getFloatTy(*llvm_context), v);
        return value;
    }
    else{
        throw NotImplementedException();
    }
}

llvm::Value* Visitor::visitConstSignIdentifier(PascalSParser::ConstSignIdentifierContext *context){
    auto sign = context->sign()->getText();
    int flag = 1;
    if(sign == "+"){
        flag = 1;
    }
    else if(sign == "-"){
        flag = -1;
    }
    else{
        throw NotImplementedException();
    }
    auto s = visitIdentifier(context->identifier());
    if(getVariable(s)){
        auto addr = getVariable(s);
        auto value1 = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*llvm_context), flag);
        auto value2 = builder.CreateLoad(addr);
        auto dest = builder.CreateMul(value1, value2);
        auto addr_dest = builder.CreateAlloca(dest->getType(), nullptr);
        builder.CreateStore(dest, addr_dest);
        return addr_dest;
    }
    else{
        throw VariableNotFoundException(s);
    }
}

std::string Visitor::visitString(PascalSParser::StringContext *context){
    return context->STRING_LITERAL()->getText();
}

int Visitor::visitUnsignedNumberInteger(PascalSParser::UnsignedNumberIntegerContext *context){
    return visitUnsignedInteger(context->unsignedInteger());
}

float Visitor::visitUnsignedNumberReal(PascalSParser::UnsignedNumberRealContext *context){
    return visitUnsignedReal(context->unsignedReal());
}

int Visitor::visitUnsignedInteger(PascalSParser::UnsignedIntegerContext *context){
    auto s = context->NUM_INT()->getText();
    return atoi(s.c_str());
}

float Visitor::visitUnsignedReal(PascalSParser::UnsignedRealContext *context){
    auto s = context->NUM_REAL()->getText();
    return atof(s.c_str());
}


void Visitor::visitConstantDefinitionPart(PascalSParser::ConstantDefinitionPartContext *context){
    for (const auto &constDefinitionContext : context->constantDefinition()){
        visitConstantDefinition(constDefinitionContext);
    }
    
}


void Visitor::visitVariableDeclarationPart(PascalSParser::VariableDeclarationPartContext *context){
    for (const auto &vDeclarationContext : context->variableDeclaration()){
        visitVariableDeclaration(vDeclarationContext);
    }
}

void Visitor::visitVariableDeclaration(PascalSParser::VariableDeclarationContext *context){
    auto idList = visitIdentifierList(context->identifierList());
    if (auto typeSimpleContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_())){
        auto type = visitTypeSimpleType(typeSimpleContext);
        switch (type)
        {
        case 0:
        //CHAR
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getInt8Ty(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt8Ty(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            break;
        case 1:
        //BOOL
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getInt1Ty(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt1Ty(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            break;
        case 2:
        //INT
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getInt32Ty(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt32Ty(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            
            break;
        case 3:
        //REAL
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getFloatTy(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getFloatTy(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            break;
        default:
            throw NotImplementedException();
            break;
        }
    }
    else if (auto typeStructureContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        visitTypeStructuredType(typeStructureContext);
        for(auto id : idList){
            auto addr = builder.CreateAlloca(llvm::Type::getFloatTy(*llvm_context), nullptr);
            builder.CreateStore(llvm::UndefValue::get(llvm::Type::getFloatTy(*llvm_context)), addr);
            scopes.back().setVariable(id, addr);
            // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
        }
    }
    else{
        throw NotImplementedException();
    }
}

int Visitor::visitTypeSimpleType(PascalSParser::TypeSimpleTypeContext *context){
    return visitSimpleType(context->simpleType());
}

int Visitor::visitSimpleType(PascalSParser::SimpleTypeContext *context){
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
}

std::vector<std::string> Visitor::visitIdentifierList(PascalSParser::IdentifierListContext *context){
    std::vector<std::string> idList;
    for (const auto &idContext : context->identifier()){
        idList.push_back(visitIdentifier(idContext));
    }
    return idList;
}

void Visitor::visitTypeStructuredType(PascalSParser::TypeStructuredTypeContext *context){
    if (auto arrayContext = dynamic_cast<PascalSParser::StructuredTypeArrayContext *>(context->structuredType())){
        visitStructuredTypeArray(arrayContext);
    }
    else if(auto recordContext = dynamic_cast<PascalSParser::StructuredTypeRecordContext *>(context->structuredType())){
        visitStructuredTypeRecord(recordContext);
    }
    else{
        throw NotImplementedException();
    }
}

void Visitor::visitStructuredTypeArray(PascalSParser::StructuredTypeArrayContext *context){
    if (auto array1Context = dynamic_cast<PascalSParser::ArrayType1Context *>(context->arrayType())){
        visitArrayType1(array1Context);
    }
    else if(auto array2Context = dynamic_cast<PascalSParser::ArrayType2Context *>(context->arrayType())){
        visitArrayType2(array2Context);
    }
    else{
        throw NotImplementedException();
    }
}

void Visitor::visitStructuredTypeRecord(PascalSParser::StructuredTypeRecordContext *context){
    visitRecordType(context->recordType());
}

void Visitor::visitArrayType1(PascalSParser::ArrayType1Context *context){
    std::vector<std::string> idList;
    visitPeriods(context->periods());
    if (auto typeSimpleContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_())){
        auto type = visitTypeSimpleType(typeSimpleContext);
        switch (type)
        {
        case 0:
        //CHAR
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getInt8Ty(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt8Ty(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            break;
        case 1:
        //BOOL
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getInt1Ty(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt1Ty(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            break;
        case 2:
        //INT
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getInt32Ty(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getInt32Ty(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            
            break;
        case 3:
        //REAL
            for(auto id : idList){
                auto addr = builder.CreateAlloca(llvm::Type::getFloatTy(*llvm_context), nullptr);
                builder.CreateStore(llvm::UndefValue::get(llvm::Type::getFloatTy(*llvm_context)), addr);
                scopes.back().setVariable(id, addr);
                // auto a = builder.CreateLoad(llvm::Type::getInt32Ty(*llvm_context), getVariable(id));
            }
            break;
        default:
            break;
        }
    }
    else if (auto typeStructureContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        visitTypeStructuredType(typeStructureContext);
    }
    else{
        
    }
}

void Visitor::visitArrayType2(PascalSParser::ArrayType2Context *context){
    std::vector<int> ranges = visitPeriods(context->periods());
    if (auto typeSimpleContext = dynamic_cast<PascalSParser::TypeSimpleTypeContext *>(context->type_())){
        auto type = visitTypeSimpleType(typeSimpleContext);
        switch (type)
        {
        case 0:
        //CHAR
            
            break;
        case 1:
        //BOOL
            
            break;
        case 2:
        //INT
            
            break;
        case 3:
        //REAL
            
            break;
        default:
            break;
        }
    }
    else if (auto typeStructureContext = dynamic_cast<PascalSParser::TypeStructuredTypeContext *>(context->type_()))
    {
        visitTypeStructuredType(typeStructureContext);
    }
    else{
        
    }
}

std::vector<int> Visitor::visitPeriods(PascalSParser::PeriodsContext *context){
    std::vector<int> ranges;
    for (const auto &periodContext : context->period()){
        auto range = visitPeriod(periodContext);
        for(int a : range){
            ranges.push_back(a);
        }
    }
    return ranges;
}

std::vector<int> Visitor::visitPeriod(PascalSParser::PeriodContext *context){
    auto vec = context->constant();
    if(vec.size() != 2){
        throw NotImplementedException();
    }
    auto constContext = vec[0]; 
    llvm::Value *value1, *value2;
        if (auto constIdentifierContext = dynamic_cast<PascalSParser::ConstIdentifierContext *>(constContext))
        {
            auto addr = visitConstIdentifier(constIdentifierContext);
            auto value = builder.CreateLoad(addr);
            if(!value->getType()->isIntegerTy()){
                throw NotImplementedException();
            }
            else{
                value1 = value;
            }
        }
        else if (auto ConstunumberCtx = dynamic_cast<PascalSParser::ConstUnsignedNumberContext *>(constContext))
        {
            auto value = visitConstUnsignedNumber(ConstunumberCtx);
        }
        else if (auto ConstnumberCtx = dynamic_cast<PascalSParser::ConstSignedNumberContext *>(constContext))
        {
            auto value = visitConstSignedNumber(ConstnumberCtx);
        }
        else if (auto ConstsIdentifierCtx = dynamic_cast<PascalSParser::ConstSignIdentifierContext *>(constContext)){
            auto addr = visitConstSignIdentifier(ConstsIdentifierCtx);
        }
        else{
            throw NotImplementedException();
        }

    constContext = vec[1]; 
        if (auto constIdentifierContext = dynamic_cast<PascalSParser::ConstIdentifierContext *>(constContext))
        {
            auto addr = visitConstIdentifier(constIdentifierContext);
            auto value = builder.CreateLoad(addr);
            if(!value->getType()->isIntegerTy()){
                throw NotImplementedException();
            }
            else{
                value2 = value;
            }
        }
        else if (auto ConstunumberCtx = dynamic_cast<PascalSParser::ConstUnsignedNumberContext *>(constContext))
        {
            auto addr = visitConstUnsignedNumber(ConstunumberCtx);
        }
        else if (auto ConstnumberCtx = dynamic_cast<PascalSParser::ConstSignedNumberContext *>(constContext))
        {
            auto addr = visitConstSignedNumber(ConstnumberCtx);
        }
        else if (auto ConstsIdentifierCtx = dynamic_cast<PascalSParser::ConstSignIdentifierContext *>(constContext)){
            auto addr = visitConstSignIdentifier(ConstsIdentifierCtx);
        }
        else{
            throw NotImplementedException();
        }
    int constIntValue1, constIntValue2;
    if (llvm::ConstantInt* CI = llvm::dyn_cast<llvm::ConstantInt>(value1)) {
        constIntValue1 = CI->getSExtValue();
    }
    else{
        throw NotImplementedException();
    }
    if (llvm::ConstantInt* CI = llvm::dyn_cast<llvm::ConstantInt>(value2)) {
        constIntValue2 = CI->getSExtValue();
    }
    else{
        throw NotImplementedException();
    }
    std::vector<int> range;
    range.push_back(constIntValue1);
    range.push_back(constIntValue2);
    return range;
}

void Visitor::visitRecordType(PascalSParser::RecordTypeContext *context){
    visitRecordField(context->recordField());
}

void Visitor::visitRecordField(PascalSParser::RecordFieldContext *context){
    for (const auto &varDeclareCtx : context->variableDeclaration()){
        visitVariableDeclaration(varDeclareCtx);
    }
}


