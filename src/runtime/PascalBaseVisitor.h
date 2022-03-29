
// Generated from /usr/src/app/src/Pascal.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "PascalVisitor.h"


/**
 * This class provides an empty implementation of PascalVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PascalBaseVisitor : public PascalVisitor {
public:

  virtual antlrcpp::Any visitProgramWhole(PascalParser::ProgramWholeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramHead(PascalParser::ProgramHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(PascalParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramBody(PascalParser::ProgramBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstPart(PascalParser::ConstPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(PascalParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstChr(PascalParser::ConstChrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_unsignedNumber(PascalParser::Const_unsignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_signedNumber(PascalParser::Const_signedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_identifier(PascalParser::Const_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_signedIdentifier(PascalParser::Const_signedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_string(PascalParser::Const_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst_constantChr(PascalParser::Const_constantChrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumber_int(PascalParser::UnsignedNumber_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumber_real(PascalParser::UnsignedNumber_realContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_unsigned_int(PascalParser::Type_unsigned_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_unsigned_real(PascalParser::Type_unsigned_realContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_signed_plus(PascalParser::Type_signed_plusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_signed_minus(PascalParser::Type_signed_minusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_bool_true(PascalParser::Type_bool_trueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_bool_false(PascalParser::Type_bool_falseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_string(PascalParser::Type_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypePart(PascalParser::TypePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(PascalParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_procedureType(PascalParser::Type_procedureTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType(PascalParser::Type_simpleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType(PascalParser::Type_structuredTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_pointerType(PascalParser::Type_pointerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_scalarType(PascalParser::Type_simpleType_scalarTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_subrangeType(PascalParser::Type_simpleType_subrangeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_typeIdentifier(PascalParser::Type_simpleType_typeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_stringtype(PascalParser::Type_simpleType_stringtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_scalarType_scalar(PascalParser::Type_simpleType_scalarType_scalarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_subrangeType_subrange(PascalParser::Type_simpleType_subrangeType_subrangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_typeIdentifier_id(PascalParser::Type_simpleType_typeIdentifier_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_typeIdentifier_type(PascalParser::Type_simpleType_typeIdentifier_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_pacaked(PascalParser::Type_structuredType_pacakedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked(PascalParser::Type_structuredType_unpackedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType(PascalParser::Type_structuredType_unpacked_arrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType(PascalParser::Type_structuredType_unpacked_recordTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_setType(PascalParser::Type_structuredType_unpacked_setTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_fileType(PascalParser::Type_structuredType_unpacked_fileTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_simpleType_stringtype_str(PascalParser::Type_simpleType_stringtype_strContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array1(PascalParser::Type_structuredType_unpacked_arrayType_array1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array2(PascalParser::Type_structuredType_unpacked_arrayType_array2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array_typeList(PascalParser::Type_structuredType_unpacked_arrayType_array_typeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array_typeList_index(PascalParser::Type_structuredType_unpacked_arrayType_array_typeList_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_arrayType_array_component(PascalParser::Type_structuredType_unpacked_arrayType_array_componentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record(PascalParser::Type_structuredType_unpacked_recordType_recordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_fixed(PascalParser::Type_structuredType_unpacked_recordType_record_fixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable(PascalParser::Type_structuredType_unpacked_recordType_record_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_fixed_fix(PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_fixed_fix_recordSection(PascalParser::Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var(PascalParser::Type_structuredType_unpacked_recordType_record_variable_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var_id(PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var_typeId(PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_recordType_record_variable_var_value(PascalParser::Type_structuredType_unpacked_recordType_record_variable_var_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_setType_set(PascalParser::Type_structuredType_unpacked_setType_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_setType_set_base(PascalParser::Type_structuredType_unpacked_setType_set_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_fileType_file1(PascalParser::Type_structuredType_unpacked_fileType_file1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_structuredType_unpacked_fileType_file2(PascalParser::Type_structuredType_unpacked_fileType_file2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_pointerType_pointer(PascalParser::Type_pointerType_pointerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariablePart(PascalParser::VariablePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclaration(PascalParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedurePart(PascalParser::ProcedurePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro(PascalParser::Procedure_proContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_func(PascalParser::Procedure_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_dec(PascalParser::Procedure_pro_decContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_parameterList(PascalParser::Procedure_pro_parameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_parameterList_group(PascalParser::Procedure_pro_parameterList_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_parameterList_varGroup(PascalParser::Procedure_pro_parameterList_varGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_parameterList_funcGroup(PascalParser::Procedure_pro_parameterList_funcGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_parameterList_proGroup(PascalParser::Procedure_pro_parameterList_proGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_pro_parameterList_group_id(PascalParser::Procedure_pro_parameterList_group_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdList(PascalParser::IdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantList(PascalParser::ConstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_func_dec(PascalParser::Procedure_func_decContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_func_result(PascalParser::Procedure_func_resultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementPart(PascalParser::StatementPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_simple(PascalParser::Statement_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_structured(PascalParser::Statement_structuredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_simple_assignment(PascalParser::Statement_simple_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_simple_procedure(PascalParser::Statement_simple_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_simple_empty(PascalParser::Statement_simple_emptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_simple_assignment_assign(PascalParser::Statement_simple_assignment_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(PascalParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(PascalParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_equal(PascalParser::Operator_equalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_notEqual(PascalParser::Operator_notEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_LT(PascalParser::Operator_LTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_LE(PascalParser::Operator_LEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_GE(PascalParser::Operator_GEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_GT(PascalParser::Operator_GTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_IN(PascalParser::Operator_INContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple(PascalParser::Expr_simpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_plus(PascalParser::Operator_plusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_minus(PascalParser::Operator_minusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_or(PascalParser::Operator_orContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term(PascalParser::Expr_simple_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_star(PascalParser::Operator_starContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_slash(PascalParser::Operator_slashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_div(PascalParser::Operator_divContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_mod(PascalParser::Operator_modContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_and(PascalParser::Operator_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor(PascalParser::Expr_simple_term_signedFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_var(PascalParser::Expr_simple_term_signedFactor_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_expr(PascalParser::Expr_simple_term_signedFactor_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_func(PascalParser::Expr_simple_term_signedFactor_funcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const(PascalParser::Expr_simple_term_signedFactor_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_set(PascalParser::Expr_simple_term_signedFactor_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_not(PascalParser::Expr_simple_term_signedFactor_notContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_bool(PascalParser::Expr_simple_term_signedFactor_boolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_unsignedNumber(PascalParser::Expr_simple_term_signedFactor_const_unsignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_constChr(PascalParser::Expr_simple_term_signedFactor_const_constChrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_str(PascalParser::Expr_simple_term_signedFactor_const_strContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_const_nil(PascalParser::Expr_simple_term_signedFactor_const_nilContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_func_id(PascalParser::Expr_simple_term_signedFactor_func_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParaList(PascalParser::ParaListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_set_1(PascalParser::Expr_simple_term_signedFactor_set_1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_simple_term_signedFactor_set_2(PascalParser::Expr_simple_term_signedFactor_set_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEleList(PascalParser::EleListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEleList_empty(PascalParser::EleList_emptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEle(PascalParser::EleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_simple_procedure_pro(PascalParser::Statement_simple_procedure_proContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParaList_actual(PascalParser::ParaList_actualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParaList_actual_width(PascalParser::ParaList_actual_widthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyState(PascalParser::EmptyStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty(PascalParser::EmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_structured_compound(PascalParser::Statement_structured_compoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_structured_condition(PascalParser::Statement_structured_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_structured_repetetive(PascalParser::Statement_structured_repetetiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_structured_with(PascalParser::Statement_structured_withContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundState(PascalParser::CompoundStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStates(PascalParser::StatesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalState_if(PascalParser::ConditionalState_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalState_case(PascalParser::ConditionalState_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalState_ifState(PascalParser::ConditionalState_ifStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalState_caseState(PascalParser::ConditionalState_caseStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseState_list(PascalParser::CaseState_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveState_while(PascalParser::RepetetiveState_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetivetState_repeat(PascalParser::RepetetivetState_repeatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetivetState_for(PascalParser::RepetetivetState_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveState_whileState(PascalParser::RepetetiveState_whileStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveState_repeatState(PascalParser::RepetetiveState_repeatStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepetetiveState_forState(PascalParser::RepetetiveState_forStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForState_list(PascalParser::ForState_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForState_list_init(PascalParser::ForState_list_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForState_list_final(PascalParser::ForState_list_finalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithState(PascalParser::WithStateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithState_list(PascalParser::WithState_listContext *ctx) override {
    return visitChildren(ctx);
  }


};

