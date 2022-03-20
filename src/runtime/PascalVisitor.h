
// Generated from /usr/src/app/src/Pascal.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "PascalParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PascalParser.
 */
class  PascalVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PascalParser.
   */
    virtual antlrcpp::Any visitProgram(PascalParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitProgramHeading(PascalParser::ProgramHeadingContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(PascalParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitBlock(PascalParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitUsesUnitsPart(PascalParser::UsesUnitsPartContext *context) = 0;

    virtual antlrcpp::Any visitLabelDeclarationPart(PascalParser::LabelDeclarationPartContext *context) = 0;

    virtual antlrcpp::Any visitLabel(PascalParser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefinitionPart(PascalParser::ConstantDefinitionPartContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefinition(PascalParser::ConstantDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitConstantChr(PascalParser::ConstantChrContext *context) = 0;

    virtual antlrcpp::Any visitConstant(PascalParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumber(PascalParser::UnsignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedInteger(PascalParser::UnsignedIntegerContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedReal(PascalParser::UnsignedRealContext *context) = 0;

    virtual antlrcpp::Any visitSign(PascalParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitBool_(PascalParser::Bool_Context *context) = 0;

    virtual antlrcpp::Any visitString(PascalParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinitionPart(PascalParser::TypeDefinitionPartContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinition(PascalParser::TypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(PascalParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitProcedureType(PascalParser::ProcedureTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_(PascalParser::Type_Context *context) = 0;

    virtual antlrcpp::Any visitSimpleType(PascalParser::SimpleTypeContext *context) = 0;

    virtual antlrcpp::Any visitScalarType(PascalParser::ScalarTypeContext *context) = 0;

    virtual antlrcpp::Any visitSubrangeType(PascalParser::SubrangeTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentifier(PascalParser::TypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitStructuredType(PascalParser::StructuredTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnpackedStructuredType(PascalParser::UnpackedStructuredTypeContext *context) = 0;

    virtual antlrcpp::Any visitStringtype(PascalParser::StringtypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(PascalParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeList(PascalParser::TypeListContext *context) = 0;

    virtual antlrcpp::Any visitIndexType(PascalParser::IndexTypeContext *context) = 0;

    virtual antlrcpp::Any visitComponentType(PascalParser::ComponentTypeContext *context) = 0;

    virtual antlrcpp::Any visitRecordType(PascalParser::RecordTypeContext *context) = 0;

    virtual antlrcpp::Any visitFieldList(PascalParser::FieldListContext *context) = 0;

    virtual antlrcpp::Any visitFixedPart(PascalParser::FixedPartContext *context) = 0;

    virtual antlrcpp::Any visitRecordSection(PascalParser::RecordSectionContext *context) = 0;

    virtual antlrcpp::Any visitVariantPart(PascalParser::VariantPartContext *context) = 0;

    virtual antlrcpp::Any visitTag(PascalParser::TagContext *context) = 0;

    virtual antlrcpp::Any visitVariant(PascalParser::VariantContext *context) = 0;

    virtual antlrcpp::Any visitSetType(PascalParser::SetTypeContext *context) = 0;

    virtual antlrcpp::Any visitBaseType(PascalParser::BaseTypeContext *context) = 0;

    virtual antlrcpp::Any visitFileType(PascalParser::FileTypeContext *context) = 0;

    virtual antlrcpp::Any visitPointerType(PascalParser::PointerTypeContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarationPart(PascalParser::VariableDeclarationPartContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(PascalParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitProcedureAndFunctionDeclarationPart(PascalParser::ProcedureAndFunctionDeclarationPartContext *context) = 0;

    virtual antlrcpp::Any visitProcedureOrFunctionDeclaration(PascalParser::ProcedureOrFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitProcedureDeclaration(PascalParser::ProcedureDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterList(PascalParser::FormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterSection(PascalParser::FormalParameterSectionContext *context) = 0;

    virtual antlrcpp::Any visitParameterGroup(PascalParser::ParameterGroupContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(PascalParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitConstList(PascalParser::ConstListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(PascalParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitResultType(PascalParser::ResultTypeContext *context) = 0;

    virtual antlrcpp::Any visitStatement(PascalParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitUnlabelledStatement(PascalParser::UnlabelledStatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStatement(PascalParser::SimpleStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStatement(PascalParser::AssignmentStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariable(PascalParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitExpression(PascalParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationaloperator(PascalParser::RelationaloperatorContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpression(PascalParser::SimpleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveoperator(PascalParser::AdditiveoperatorContext *context) = 0;

    virtual antlrcpp::Any visitTerm(PascalParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeoperator(PascalParser::MultiplicativeoperatorContext *context) = 0;

    virtual antlrcpp::Any visitSignedFactor(PascalParser::SignedFactorContext *context) = 0;

    virtual antlrcpp::Any visitFactor(PascalParser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedConstant(PascalParser::UnsignedConstantContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDesignator(PascalParser::FunctionDesignatorContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(PascalParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitSet_(PascalParser::Set_Context *context) = 0;

    virtual antlrcpp::Any visitElementList(PascalParser::ElementListContext *context) = 0;

    virtual antlrcpp::Any visitElement(PascalParser::ElementContext *context) = 0;

    virtual antlrcpp::Any visitProcedureStatement(PascalParser::ProcedureStatementContext *context) = 0;

    virtual antlrcpp::Any visitActualParameter(PascalParser::ActualParameterContext *context) = 0;

    virtual antlrcpp::Any visitParameterwidth(PascalParser::ParameterwidthContext *context) = 0;

    virtual antlrcpp::Any visitGotoStatement(PascalParser::GotoStatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement_(PascalParser::EmptyStatement_Context *context) = 0;

    virtual antlrcpp::Any visitEmpty_(PascalParser::Empty_Context *context) = 0;

    virtual antlrcpp::Any visitStructuredStatement(PascalParser::StructuredStatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(PascalParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatements(PascalParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitConditionalStatement(PascalParser::ConditionalStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(PascalParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseStatement(PascalParser::CaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseListElement(PascalParser::CaseListElementContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveStatement(PascalParser::RepetetiveStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(PascalParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitRepeatStatement(PascalParser::RepeatStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(PascalParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForList(PascalParser::ForListContext *context) = 0;

    virtual antlrcpp::Any visitInitialValue(PascalParser::InitialValueContext *context) = 0;

    virtual antlrcpp::Any visitFinalValue(PascalParser::FinalValueContext *context) = 0;

    virtual antlrcpp::Any visitWithStatement(PascalParser::WithStatementContext *context) = 0;

    virtual antlrcpp::Any visitRecordVariableList(PascalParser::RecordVariableListContext *context) = 0;


};

