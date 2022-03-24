/*
BSD License

Copyright (c) 2013, Tom Everett
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. Neither the name of Tom Everett nor the names of its contributors
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/*
Adapted from pascal.g by  Hakki Dogusan, Piet Schoutteten and Marton Papp
*/

grammar Pascal;

program
   : programHeading (INTERFACE)? block DOT   #programWhole
   ;

programHeading
   : PROGRAM identifier (LPAREN identifierList RPAREN)? SEMI   #programHead
   ;

identifier
   : IDENT  #id
   ;

block
   : (constantDefinitionPart | typeDefinitionPart | variableDeclarationPart | procedureAndFunctionDeclarationPart | IMPLEMENTATION)* compoundStatement   #programBody
   ;

constantDefinitionPart
   : CONST (constantDefinition SEMI) + #constPart
   ;

constantDefinition
   : identifier EQUAL constant   #const
   ;

constantChr
   : CHR LPAREN unsignedInteger RPAREN #constChr
   ;

constant
   : unsignedNumber        #const_unsignedNumber
   | sign unsignedNumber   #const_signedNumber
   | identifier            #const_identifier
   | sign identifier       #const_signedIdentifier
   | string                #const_string
   | constantChr           #const_constantChr
   ;

unsignedNumber
   : unsignedInteger #unsignedNumber_int
   | unsignedReal    #unsignedNumber_real
   ;

unsignedInteger
   : NUM_INT         #type_unsigned_int
   ;

unsignedReal
   : NUM_REAL        #type_unsigned_real
   ;

sign
   : PLUS            #type_signed_plus
   | MINUS           #type_signed_minus
   ;

bool_
   : TRUE            #type_bool_true
   | FALSE           #type_bool_false
   ;

string
   : STRING_LITERAL  #type_string
   ;

typeDefinitionPart
   : TYPE (typeDefinition SEMI) +   #typePart
   ;

typeDefinition
   : identifier EQUAL (type_ | procedureType)   #type
   ;

procedureType
   : PROCEDURE (formalParameterList)?  #type_procedureType
   ;

type_
   : simpleType      #type_simpleType
   | structuredType  #type_structuredType
   | pointerType     #type_pointerType
   ;

simpleType
   : scalarType      #type_simpleType_scalarType
   | subrangeType    #type_simpleType_subrangeType
   | typeIdentifier  #type_simpleType_typeIdentifier
   | stringtype      #type_simpleType_stringtype
   ;

scalarType
   : LPAREN identifierList RPAREN   #type_simpleType_scalarType_scalar
   ;

subrangeType
   : constant DOTDOT constant #type_simpleType_subrangeType_subrange
   ;

typeIdentifier
   : identifier                                    #type_simpleType_typeIdentifier_id
   | (CHAR | BOOLEAN | INTEGER | REAL | STRING)    #type_simpleType_typeIdentifier_type
   ;

structuredType
   : PACKED unpackedStructuredType  #type_structuredType_pacaked
   | unpackedStructuredType         #type_structuredType_unpacked
   ;

unpackedStructuredType
   : arrayType    #type_structuredType_unpacked_arrayType
   | recordType   #type_structuredType_unpacked_recordType
   | setType      #type_structuredType_unpacked_setType
   | fileType     #type_structuredType_unpacked_fileType
   ;

stringtype
   : STRING LBRACK (identifier | unsignedNumber) RBRACK  #type_simpleType_stringtype_str
   ;

arrayType
   : ARRAY LBRACK typeList RBRACK OF componentType    #type_structuredType_unpacked_arrayType_array1
   | ARRAY LBRACK2 typeList RBRACK2 OF componentType  #type_structuredType_unpacked_arrayType_array2
   ;

typeList
   : indexType (COMMA indexType)*   #type_structuredType_unpacked_arrayType_array_typeList
   ;

indexType
   : simpleType   #type_structuredType_unpacked_arrayType_array_typeList_index
   ;

componentType  
   : type_  #type_structuredType_unpacked_arrayType_array_component
   ;

recordType
   : RECORD fieldList? END #type_structuredType_unpacked_recordType_record
   ;

fieldList
   : fixedPart (SEMI variantPart)?  #type_structuredType_unpacked_recordType_record_fixed
   | variantPart                    #type_structuredType_unpacked_recordType_record_variable
   ;

fixedPart
   : recordSection (SEMI recordSection)*  #type_structuredType_unpacked_recordType_record_fixed_fix
   ;

recordSection
   : identifierList COLON type_  #type_structuredType_unpacked_recordType_record_fixed_fix_recordSection
   ;

variantPart
   : CASE tag OF variant (SEMI variant)*  #type_structuredType_unpacked_recordType_record_variable_var
   ;

tag
   : identifier COLON typeIdentifier   #type_structuredType_unpacked_recordType_record_variable_var_id
   | typeIdentifier                    #type_structuredType_unpacked_recordType_record_variable_var_typeId
   ;

variant
   : constList COLON LPAREN fieldList RPAREN #type_structuredType_unpacked_recordType_record_variable_var_value
   ;

setType
   : SET OF baseType #type_structuredType_unpacked_setType_set
   ;

baseType
   : simpleType   #type_structuredType_unpacked_setType_set_base
   ;

fileType
   : FILE OF type_   #type_structuredType_unpacked_fileType_file1
   | FILE            #type_structuredType_unpacked_fileType_file2
   ;

pointerType
   : POINTER typeIdentifier   #type_pointerType_pointer
   ;

variableDeclarationPart
   : VAR variableDeclaration (SEMI variableDeclaration)* SEMI  #variablePart
   ;

variableDeclaration
   : identifierList COLON type_  #varDeclaration
   ;

procedureAndFunctionDeclarationPart
   : procedureOrFunctionDeclaration SEMI  #procedurePart
   ;

procedureOrFunctionDeclaration
   : procedureDeclaration  #procedure_pro
   | functionDeclaration   #procedure_func
   ;

procedureDeclaration
   : PROCEDURE identifier (formalParameterList)? SEMI block    #procedure_pro
   ;

formalParameterList
   : LPAREN formalParameterSection (SEMI formalParameterSection)* RPAREN   #procedure_pro_parameterList
   ;

formalParameterSection
   : parameterGroup              #procedure_pro_parameterList_group
   | VAR parameterGroup          #procedure_pro_parameterList_varGroup
   | FUNCTION parameterGroup     #procedure_pro_parameterList_funcGroup
   | PROCEDURE parameterGroup    #procedure_pro_parameterList_proGroup
   ;

parameterGroup
   : identifierList COLON typeIdentifier  #procedure_pro_parameterList_group_id
   ;

identifierList
   : identifier (COMMA identifier)* #idList
   ;

constList
   : constant (COMMA constant)*  #constantList
   ;

functionDeclaration
   : FUNCTION identifier (formalParameterList)? COLON resultType SEMI block #procedure_func
   ;

resultType
   : typeIdentifier  #procedure_func_result
   ;

statement
   : unlabelledStatement   #statementPart
   ;

unlabelledStatement
   : simpleStatement       #statement_simple
   | structuredStatement   #statement_structured
   ;

simpleStatement
   : assignmentStatement   #statement_simple_assignment
   | procedureStatement    #statement_simple_procedure
   | emptyStatement_       #statement_simple_empty
   ;

assignmentStatement
   : variable ASSIGN expression  #statement_simple_assignment_assign
   ;

variable
   : (AT identifier | identifier) (LBRACK expression (COMMA expression)* RBRACK | LBRACK2 expression (COMMA expression)* RBRACK2 | DOT identifier | POINTER)*  #var
   ;

expression
   : simpleExpression (relationaloperator expression)?   #expr
   ;

relationaloperator
   : EQUAL        #operator_equal
   | NOT_EQUAL    #operator_notEqual
   | LT           #operator_LT
   | LE           #operator_LE
   | GE           #operator_GE
   | GT           #operator_GT
   | IN           #operator_IN
   ;

simpleExpression
   : term (additiveoperator simpleExpression)?  #expr_simple
   ;

additiveoperator
   : PLUS   #operator_plus
   | MINUS  #operator_minus
   | OR     #operator_or
   ;

term
   : signedFactor (multiplicativeoperator term)?   #expr_simple_term
   ;

multiplicativeoperator
   : STAR   #operator_star
   | SLASH  #operator_slash
   | DIV    #operator_div
   | MOD    #operator_mod
   | AND    #operator_and
   ;

signedFactor
   : (PLUS | MINUS)? factor   #expr_simple_term_signedFactor
   ;

factor
   : variable                    #expr_simple_term_signedFactor_var
   | LPAREN expression RPAREN    #expr_simple_term_signedFactor_expr
   | functionDesignator          #expr_simple_term_signedFactor_func
   | unsignedConstant            #expr_simple_term_signedFactor_const
   | set_                        #expr_simple_term_signedFactor_set
   | NOT factor                  #expr_simple_term_signedFactor_not
   | bool_                       #expr_simple_term_signedFactor_bool
   ;

unsignedConstant
   : unsignedNumber  #expr_simple_term_signedFactor_const_unsignedNumber
   | constantChr     #expr_simple_term_signedFactor_const_constChr
   | string          #expr_simple_term_signedFactor_const_str
   | NIL             #expr_simple_term_signedFactor_const_nil
   ;

functionDesignator
   : identifier LPAREN parameterList RPAREN  #expr_simple_term_signedFactor_func_id
   ;

parameterList
   : actualParameter (COMMA actualParameter)*   #paraList
   ;

set_
   : LBRACK elementList RBRACK      #expr_simple_term_signedFactor_set_1
   | LBRACK2 elementList RBRACK2    #expr_simple_term_signedFactor_set_2
   ;

elementList
   : element (COMMA element)* #eleList
   |                          #eleList_empty
   ;

element
   : expression (DOTDOT expression)?   #ele
   ;

procedureStatement
   : identifier (LPAREN parameterList RPAREN)?  #statement_simple_procedure_pro
   ;

actualParameter
   : expression parameterwidth*  #paraList_actual
   ;

parameterwidth
   : ':' expression  #paraList_actual_width
   ;

emptyStatement_
   :  #empty
   ;

empty_
   :  #empty
   /* empty */
   ;

structuredStatement
   : compoundStatement     #statement_structured_compound
   | conditionalStatement  #statement_structured_condition
   | repetetiveStatement   #statement_structured_repetetive
   | withStatement         #statement_structured_with
   ;

compoundStatement
   : BEGIN statements END  #compoundState
   ;

statements
   : statement (SEMI statement)* #states
   ;

conditionalStatement
   : ifStatement     #conditionalState_if
   | caseStatement   #conditionalState_case
   ;

ifStatement
   : IF expression THEN statement (: ELSE statement)? #conditionalState_ifState
   ;

caseStatement
   : CASE expression OF caseListElement (SEMI caseListElement)* (SEMI ELSE statements)? END  #conditionalState_caseState
   ;

caseListElement
   : constList COLON statement   #caseState_list
   ;

repetetiveStatement
   : whileStatement     #repetetiveState_while
   | repeatStatement    #repetetivetState_repeat
   | forStatement       #repetetivetState_for
   ;

whileStatement
   : WHILE expression DO statement  #repetetiveState_whileState
   ;

repeatStatement
   : REPEAT statements UNTIL expression   #repetetiveState_repeatState
   ;

forStatement
   : FOR identifier ASSIGN forList DO statement #repetetiveState_forState
   ;

forList
   : initialValue (TO | DOWNTO) finalValue   #forState_list
   ;

initialValue
   : expression   #forState_list_init
   ;

finalValue
   : expression   #forState_list_final
   ;

withStatement
   : WITH recordVariableList DO statement #withState
   ;

recordVariableList
   : variable (COMMA variable)*  #withState_list
   ;


fragment A
   : ('a' | 'A')
   ;


fragment B
   : ('b' | 'B')
   ;


fragment C
   : ('c' | 'C')
   ;


fragment D
   : ('d' | 'D')
   ;


fragment E
   : ('e' | 'E')
   ;


fragment F
   : ('f' | 'F')
   ;


fragment G
   : ('g' | 'G')
   ;


fragment H
   : ('h' | 'H')
   ;


fragment I
   : ('i' | 'I')
   ;


fragment J
   : ('j' | 'J')
   ;


fragment K
   : ('k' | 'K')
   ;


fragment L
   : ('l' | 'L')
   ;


fragment M
   : ('m' | 'M')
   ;


fragment N
   : ('n' | 'N')
   ;


fragment O
   : ('o' | 'O')
   ;


fragment P
   : ('p' | 'P')
   ;


fragment Q
   : ('q' | 'Q')
   ;


fragment R
   : ('r' | 'R')
   ;


fragment S
   : ('s' | 'S')
   ;


fragment T
   : ('t' | 'T')
   ;


fragment U
   : ('u' | 'U')
   ;


fragment V
   : ('v' | 'V')
   ;


fragment W
   : ('w' | 'W')
   ;


fragment X
   : ('x' | 'X')
   ;


fragment Y
   : ('y' | 'Y')
   ;


fragment Z
   : ('z' | 'Z')
   ;


AND
   : A N D
   ;


ARRAY
   : A R R A Y
   ;


BEGIN
   : B E G I N
   ;


BOOLEAN
   : B O O L E A N
   ;


CASE
   : C A S E
   ;


CHAR
   : C H A R
   ;


CHR
   : C H R
   ;


CONST
   : C O N S T
   ;


DIV
   : D I V
   ;


DO
   : D O
   ;


DOWNTO
   : D O W N T O
   ;


ELSE
   : E L S E
   ;


END
   : E N D
   ;


FILE
   : F I L E
   ;


FOR
   : F O R
   ;


FUNCTION
   : F U N C T I O N
   ;


IF
   : I F
   ;


IN
   : I N
   ;


INTEGER
   : I N T E G E R
   ;


MOD
   : M O D
   ;


NIL
   : N I L
   ;


NOT
   : N O T
   ;


OF
   : O F
   ;


OR
   : O R
   ;


PACKED
   : P A C K E D
   ;


PROCEDURE
   : P R O C E D U R E
   ;


PROGRAM
   : P R O G R A M
   ;


REAL
   : R E A L
   ;


RECORD
   : R E C O R D
   ;


REPEAT
   : R E P E A T
   ;


SET
   : S E T
   ;


THEN
   : T H E N
   ;


TO
   : T O
   ;


TYPE
   : T Y P E
   ;


UNTIL
   : U N T I L
   ;


VAR
   : V A R
   ;


WHILE
   : W H I L E
   ;


WITH
   : W I T H
   ;


PLUS
   : '+'
   ;


MINUS
   : '-'
   ;


STAR
   : '*'
   ;


SLASH
   : '/'
   ;


ASSIGN
   : ':='
   ;


COMMA
   : ','
   ;


SEMI
   : ';'
   ;


COLON
   : ':'
   ;


EQUAL
   : '='
   ;


NOT_EQUAL
   : '<>'
   ;


LT
   : '<'
   ;


LE
   : '<='
   ;


GE
   : '>='
   ;


GT
   : '>'
   ;


LPAREN
   : '('
   ;


RPAREN
   : ')'
   ;


LBRACK
   : '['
   ;


LBRACK2
   : '(.'
   ;


RBRACK
   : ']'
   ;


RBRACK2
   : '.)'
   ;


POINTER
   : '^'
   ;


AT
   : '@'
   ;


DOT
   : '.'
   ;


DOTDOT
   : '..'
   ;


LCURLY
   : '{'
   ;


RCURLY
   : '}'
   ;


UNIT
   : U N I T
   ;


INTERFACE
   : I N T E R F A C E
   ;


USES
   : U S E S
   ;


STRING
   : S T R I N G
   ;


IMPLEMENTATION
   : I M P L E M E N T A T I O N
   ;


TRUE
   : T R U E
   ;


FALSE
   : F A L S E
   ;


WS
   : [ \t\r\n] -> skip
   ;


COMMENT_1
   : '(*' .*? '*)' -> skip
   ;


COMMENT_2
   : '{' .*? '}' -> skip
   ;


IDENT
   : ('a' .. 'z' | 'A' .. 'Z') ('a' .. 'z' | 'A' .. 'Z' | '0' .. '9' | '_')*
   ;


STRING_LITERAL
   : '\'' ('\'\'' | ~ ('\''))* '\''
   ;


NUM_INT
   : ('0' .. '9') +
   ;


NUM_REAL
   : ('0' .. '9') + (('.' ('0' .. '9') + (EXPONENT)?)? | EXPONENT)
   ;


fragment EXPONENT
   : ('e') ('+' | '-')? ('0' .. '9') +
   ;
