
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
    virtual antlrcpp::Any visitProgramWhole(PascalParser::ProgramWholeContext *context) = 0;

    virtual antlrcpp::Any visitProgramHead(PascalParser::ProgramHeadContext *context) = 0;

    virtual antlrcpp::Any visitId(PascalParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitProgramBody(PascalParser::ProgramBodyContext *context) = 0;

    virtual antlrcpp::Any visitConstPart(PascalParser::ConstPartContext *context) = 0;

    virtual antlrcpp::Any visitConst(PascalParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitConstChr(PascalParser::ConstChrContext *context) = 0;

    virtual antlrcpp::Any visitConst_unsignedNumber(PascalParser::Const_unsignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitConst_signedNumber(PascalParser::Const_signedNumberContext *context) = 0;

    virtual antlrcpp::Any visitConst_identifier(PascalParser::Const_identifierContext *context) = 0;

    virtual antlrcpp::Any visitConst_signedIdentifier(PascalParser::Const_signedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConst_string(PascalParser::Const_stringContext *context) = 0;

    virtual antlrcpp::Any visitConst_constantChr(PascalParser::Const_constantChrContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumber_int(PascalParser::UnsignedNumber_intContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumber_real(PascalParser::UnsignedNumber_realContext *context) = 0;

    virtual antlrcpp::Any visitType_unsigned_int(PascalParser::Type_unsigned_intContext *context) = 0;

    virtual antlrcpp::Any visitType_unsigned_real(PascalParser::Type_unsigned_realContext *context) = 0;

    virtual antlrcpp::Any visitType_signed_plus(PascalParser::Type_signed_plusContext *context) = 0;

    virtual antlrcpp::Any visitType_signed_minus(PascalParser::Type_signed_minusContext *context) = 0;

    virtual antlrcpp::Any visitType_bool_true(PascalParser::Type_bool_trueContext *context) = 0;

    virtual antlrcpp::Any visitType_bool_false(PascalParser::Type_bool_falseContext *context) = 0;

    virtual antlrcpp::Any visitType_string(PascalParser::Type_stringContext *context) = 0;

    virtual antlrcpp::Any visitTypePart(PascalParser::TypePartContext *context) = 0;

    virtual antlrcpp::Any visitType(PascalParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitType_procedureType(PascalParser::Type_procedureTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType(PascalParser::Type_simpleTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType(PascalParser::Type_structuredTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_pointerType(PascalParser::Type_pointerTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_scalarType(PascalParser::Type_simpleType_scalarTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_subrangeType(PascalParser::Type_simpleType_subrangeTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_typeIdentifier(PascalParser::Type_simpleType_typeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_stringtype(PascalParser::Type_simpleType_stringtypeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_scalarType_scalar(PascalParser::Type_simpleType_scalarType_scalarContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_subrangeType_subrange(PascalParser::Type_simpleType_subrangeType_subrangeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_typeIdentifier_id(PascalParser::Type_simpleType_typeIdentifier_idContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_typeIdentifier_type(PascalParser::Type_simpleType_typeIdentifier_typeContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_pacaked(PascalParser::Type_structuredType_pacakedContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked(PascalParser::Type_structuredType_unpackedContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType(PascalParser::Type_structuredType_unpacked_arrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType(PascalParser::Type_structuredType_unpacked_recordTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_setType(PascalParser::Type_structuredType_unpacked_setTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_fileType(PascalParser::Type_structuredType_unpacked_fileTypeContext *context) = 0;

    virtual antlrcpp::Any visitType_simpleType_stringtype_str(PascalParser::Type_simpleType_stringtype_strContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array1(PascalParser::Type_structuredType_unpacked_arrayType_array1Context *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array2(PascalParser::Type_structuredType_unpacked_arrayType_array2Context *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array_typeList(PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array_typeList_index(PascalParser::Type_structuredType_unpacked_arrayType_array_typeList_indexContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array_component(PascalParser::Type_structuredType_unpacked_arrayType_array_componentContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record(PascalParser::Type_structuredType_unpacked_recordType_recordContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_fixed(PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable(PascalParser::Type_structuredType_unpacked_recordType_record_variableContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_fixed_fix(PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_fixed_fix_recordSection(PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var(PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var_id(PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var_typeId(PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var_value(PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_setType_set(PascalParser::Type_structuredType_unpacked_setType_setContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_setType_set_base(PascalParser::Type_structuredType_unpacked_setType_set_baseContext *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_fileType_file1(PascalParser::Type_structuredType_unpacked_fileType_file1Context *context) = 0;

    virtual antlrcpp::Any visitType_structuredType_unpacked_fileType_file2(PascalParser::Type_structuredType_unpacked_fileType_file2Context *context) = 0;

    virtual antlrcpp::Any visitType_pointerType_pointer(PascalParser::Type_pointerType_pointerContext *context) = 0;

    virtual antlrcpp::Any visitVariablePart(PascalParser::VariablePartContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclaration(PascalParser::VarDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitProcedurePart(PascalParser::ProcedurePartContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro(PascalParser::Procedure_proContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_func(PascalParser::Procedure_funcContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_dec(PascalParser::Procedure_pro_decContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_parameterList(PascalParser::Procedure_pro_parameterListContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_parameterList_group(PascalParser::Procedure_pro_parameterList_groupContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_parameterList_varGroup(PascalParser::Procedure_pro_parameterList_varGroupContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_parameterList_funcGroup(PascalParser::Procedure_pro_parameterList_funcGroupContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_parameterList_proGroup(PascalParser::Procedure_pro_parameterList_proGroupContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_pro_parameterList_group_id(PascalParser::Procedure_pro_parameterList_group_idContext *context) = 0;

    virtual antlrcpp::Any visitIdList(PascalParser::IdListContext *context) = 0;

    virtual antlrcpp::Any visitConstantList(PascalParser::ConstantListContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_func_dec(PascalParser::Procedure_func_decContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_func_result(PascalParser::Procedure_func_resultContext *context) = 0;

    virtual antlrcpp::Any visitStatementPart(PascalParser::StatementPartContext *context) = 0;

    virtual antlrcpp::Any visitStatement_simple(PascalParser::Statement_simpleContext *context) = 0;

    virtual antlrcpp::Any visitStatement_structured(PascalParser::Statement_structuredContext *context) = 0;

    virtual antlrcpp::Any visitStatement_simple_assignment(PascalParser::Statement_simple_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitStatement_simple_procedure(PascalParser::Statement_simple_procedureContext *context) = 0;

    virtual antlrcpp::Any visitStatement_simple_empty(PascalParser::Statement_simple_emptyContext *context) = 0;

    virtual antlrcpp::Any visitStatement_simple_assignment_assign(PascalParser::Statement_simple_assignment_assignContext *context) = 0;

    virtual antlrcpp::Any visitVar(PascalParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitExpr(PascalParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitOperator_equal(PascalParser::Operator_equalContext *context) = 0;

    virtual antlrcpp::Any visitOperator_notEqual(PascalParser::Operator_notEqualContext *context) = 0;

    virtual antlrcpp::Any visitOperator_LT(PascalParser::Operator_LTContext *context) = 0;

    virtual antlrcpp::Any visitOperator_LE(PascalParser::Operator_LEContext *context) = 0;

    virtual antlrcpp::Any visitOperator_GE(PascalParser::Operator_GEContext *context) = 0;

    virtual antlrcpp::Any visitOperator_GT(PascalParser::Operator_GTContext *context) = 0;

    virtual antlrcpp::Any visitOperator_IN(PascalParser::Operator_INContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple(PascalParser::Expr_simpleContext *context) = 0;

    virtual antlrcpp::Any visitOperator_plus(PascalParser::Operator_plusContext *context) = 0;

    virtual antlrcpp::Any visitOperator_minus(PascalParser::Operator_minusContext *context) = 0;

    virtual antlrcpp::Any visitOperator_or(PascalParser::Operator_orContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term(PascalParser::Expr_simple_termContext *context) = 0;

    virtual antlrcpp::Any visitOperator_star(PascalParser::Operator_starContext *context) = 0;

    virtual antlrcpp::Any visitOperator_slash(PascalParser::Operator_slashContext *context) = 0;

    virtual antlrcpp::Any visitOperator_div(PascalParser::Operator_divContext *context) = 0;

    virtual antlrcpp::Any visitOperator_mod(PascalParser::Operator_modContext *context) = 0;

    virtual antlrcpp::Any visitOperator_and(PascalParser::Operator_andContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor(PascalParser::Expr_simple_term_signedFactorContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_var(PascalParser::Expr_simple_term_signedFactor_varContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_expr(PascalParser::Expr_simple_term_signedFactor_exprContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_func(PascalParser::Expr_simple_term_signedFactor_funcContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const(PascalParser::Expr_simple_term_signedFactor_constContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_set(PascalParser::Expr_simple_term_signedFactor_setContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_not(PascalParser::Expr_simple_term_signedFactor_notContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_bool(PascalParser::Expr_simple_term_signedFactor_boolContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_unsignedNumber(PascalParser::Expr_simple_term_signedFactor_const_unsignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_constChr(PascalParser::Expr_simple_term_signedFactor_const_constChrContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_str(PascalParser::Expr_simple_term_signedFactor_const_strContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_nil(PascalParser::Expr_simple_term_signedFactor_const_nilContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_func_id(PascalParser::Expr_simple_term_signedFactor_func_idContext *context) = 0;

    virtual antlrcpp::Any visitParaList(PascalParser::ParaListContext *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_set_1(PascalParser::Expr_simple_term_signedFactor_set_1Context *context) = 0;

    virtual antlrcpp::Any visitExpr_simple_term_signedFactor_set_2(PascalParser::Expr_simple_term_signedFactor_set_2Context *context) = 0;

    virtual antlrcpp::Any visitEleList(PascalParser::EleListContext *context) = 0;

    virtual antlrcpp::Any visitEleList_empty(PascalParser::EleList_emptyContext *context) = 0;

    virtual antlrcpp::Any visitEle(PascalParser::EleContext *context) = 0;

    virtual antlrcpp::Any visitStatement_simple_procedure_pro(PascalParser::Statement_simple_procedure_proContext *context) = 0;

    virtual antlrcpp::Any visitParaList_actual(PascalParser::ParaList_actualContext *context) = 0;

    virtual antlrcpp::Any visitParaList_actual_width(PascalParser::ParaList_actual_widthContext *context) = 0;

    virtual antlrcpp::Any visitEmptyState(PascalParser::EmptyStateContext *context) = 0;

    virtual antlrcpp::Any visitEmpty(PascalParser::EmptyContext *context) = 0;

    virtual antlrcpp::Any visitStatement_structured_compound(PascalParser::Statement_structured_compoundContext *context) = 0;

    virtual antlrcpp::Any visitStatement_structured_condition(PascalParser::Statement_structured_conditionContext *context) = 0;

    virtual antlrcpp::Any visitStatement_structured_repetetive(PascalParser::Statement_structured_repetetiveContext *context) = 0;

    virtual antlrcpp::Any visitStatement_structured_with(PascalParser::Statement_structured_withContext *context) = 0;

    virtual antlrcpp::Any visitCompoundState(PascalParser::CompoundStateContext *context) = 0;

    virtual antlrcpp::Any visitStates(PascalParser::StatesContext *context) = 0;

    virtual antlrcpp::Any visitConditionalState_if(PascalParser::ConditionalState_ifContext *context) = 0;

    virtual antlrcpp::Any visitConditionalState_case(PascalParser::ConditionalState_caseContext *context) = 0;

    virtual antlrcpp::Any visitConditionalState_ifState(PascalParser::ConditionalState_ifStateContext *context) = 0;

    virtual antlrcpp::Any visitConditionalState_caseState(PascalParser::ConditionalState_caseStateContext *context) = 0;

    virtual antlrcpp::Any visitCaseState_list(PascalParser::CaseState_listContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveState_while(PascalParser::RepetetiveState_whileContext *context) = 0;

    virtual antlrcpp::Any visitRepetetivetState_repeat(PascalParser::RepetetivetState_repeatContext *context) = 0;

    virtual antlrcpp::Any visitRepetetivetState_for(PascalParser::RepetetivetState_forContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveState_whileState(PascalParser::RepetetiveState_whileStateContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveState_repeatState(PascalParser::RepetetiveState_repeatStateContext *context) = 0;

    virtual antlrcpp::Any visitRepetetiveState_forState(PascalParser::RepetetiveState_forStateContext *context) = 0;

    virtual antlrcpp::Any visitForState_list(PascalParser::ForState_listContext *context) = 0;

    virtual antlrcpp::Any visitForState_list_init(PascalParser::ForState_list_initContext *context) = 0;

    virtual antlrcpp::Any visitForState_list_final(PascalParser::ForState_list_finalContext *context) = 0;

    virtual antlrcpp::Any visitWithState(PascalParser::WithStateContext *context) = 0;

    virtual antlrcpp::Any visitWithState_list(PascalParser::WithState_listContext *context) = 0;


};

