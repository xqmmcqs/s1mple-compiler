parser grammar PascalSParser;

options {
	tokenVocab = PascalSLexer;
}

program
   : programHeading block DOT
   ;

programHeading
   : PROGRAM identifier (LPAREN identifierList RPAREN)? SEMI
   ;

identifier
   : IDENT
   ;

block
   : (constantDefinitionPart | typeDefinitionPart | variableDeclarationPart | procedureAndFunctionDeclarationPart)* compoundStatement
   ;

constantDefinitionPart
   : CONST (constantDefinition SEMI)+
   ;

constantDefinition
   : identifier EQUAL constant
   ;

constant
   : unsignedNumber         #ConstUnsignedNumber
   | sign unsignedNumber    #ConstSignedNumber
   | identifier             #ConstIdentifier
   | sign identifier        #ConstSignIdentifier
   | string                 #ConstString
   ;

unsignedNumber
   : unsignedInteger    #UnsignedNumberInteger
   | unsignedReal       #UnsignedNumberReal
   ;

unsignedInteger
   : NUM_INT
   ;

unsignedReal
   : NUM_REAL
   ;

sign
   : PLUS   #SignPlus
   | MINUS  #SignMinus
   ;

bool_
   : TRUE   #BoolTrue
   | FALSE  #BoolFalse
   ;

string
   : STRING_LITERAL
   ;

typeDefinitionPart
   : TYPE (typeDefinition SEMI)+
   ;

typeDefinition
   : identifier EQUAL type_
   ;

type_
   : simpleType     #TypeSimpleType
   | structuredType #TypeStructuredType
   ;

simpleType
   : (CHAR | BOOLEAN | INTEGER | REAL)
   ;

structuredType
   : arrayType  #StructuredTypeArray
   | recordType #StructuredTypeRecord
   ;

arrayType
   : ARRAY LBRACK periods RBRACK OF type_   #ArrayType1
   | ARRAY LBRACK2 periods RBRACK2 OF type_ #ArrayType2
   ;

periods
   : period (COMMA period)*
   ;

period
   : constant DOTDOT constant
   ;

recordType
   : RECORD recordField? END
   ;

recordField
   : variableDeclaration (SEMI variableDeclaration)* SEMI
   ;

variableDeclarationPart
   : VAR variableDeclaration (SEMI variableDeclaration)* SEMI
   ;

variableDeclaration
   : identifierList COLON type_
   ;

procedureAndFunctionDeclarationPart
   : procedureOrFunctionDeclaration SEMI
   ;

procedureOrFunctionDeclaration
   : procedureDeclaration   #ProOrFuncDecPro
   | functionDeclaration    #ProOrFuncDecFunc
   ;

procedureDeclaration
   : PROCEDURE identifier (formalParameterList)? SEMI block
   ;

formalParameterList
   : LPAREN formalParameterSection (SEMI formalParameterSection)* RPAREN
   ;

formalParameterSection
   : parameterGroup             #FormalParaSecGroup
   | VAR parameterGroup         #FormalParaSecVarGroup
   | FUNCTION parameterGroup    #FormalParaSecFuncGroup
   | PROCEDURE parameterGroup   #FormalParaSecProcGroup
   ;

parameterGroup
   : identifierList COLON simpleType
   ;

identifierList
   : identifier (COMMA identifier)*
   ;

constList
   : constant (COMMA constant)*
   ;

functionDeclaration
   : FUNCTION identifier (formalParameterList)? COLON simpleType SEMI block
   ;

statement
   : unlabelledStatement
   ;

unlabelledStatement
   : simpleStatement        #UnlabelledStateSimple
   | structuredStatement    #UnlabelledStateStructured
   ;

simpleStatement
   : assignmentStatement    #SimpleStateAssign
   | procedureStatement     #SimpleStateProc 
   | emptyStatement_        #SimpleStateEmpty
   ;

assignmentStatement
   : variable ASSIGN expression
   ;

variable
   : (AT identifier | identifier) (LBRACK expression (COMMA expression)* RBRACK | LBRACK2 expression (COMMA expression)* RBRACK2 | DOT identifier | POINTER)*
   ;

expression
   : simpleExpression (relationaloperator expression)?
   ;

relationaloperator
   : EQUAL      #OpEqual
   | NOT_EQUAL  #OpNotEqual
   | LT         #OpLt
   | LE         #OpLe
   | GE         #OpGe
   | GT         #OpGt
   ;

simpleExpression
   : term (additiveoperator simpleExpression)?
   ;

additiveoperator
   : PLUS   #OpPlus
   | MINUS  #OpMinus
   | OR     #OpOr
   ;

term
   : signedFactor (multiplicativeoperator term)?
   ;

multiplicativeoperator
   : STAR   #OpStar
   | SLASH  #OpSlash
   | DIV    #OpDiv
   | MOD    #OpMod
   | AND    #OpAnd
   ;

signedFactor
   : (PLUS | MINUS)? factor
   ;

factor
   : variable                   #FactorVar
   | LPAREN expression RPAREN   #FactorExpr
   | functionDesignator         #FactorFunc
   | unsignedConstant           #FactorUnsConst
   | set_                       #FactorSet
   | NOT factor                 #FactorNotFact
   | bool_                      #FactorBool
   ;

unsignedConstant
   : unsignedNumber #UnsignedConstUnsignedNum
   | string         #UnsignedConstStr
   ;

functionDesignator
   : identifier LPAREN parameterList RPAREN
   ;

parameterList
   : actualParameter (COMMA actualParameter)*
   ;

set_
   : LBRACK elementList RBRACK      #Set1
   | LBRACK2 elementList RBRACK2    #Set2
   ;

elementList
   : element (COMMA element)*   #EleList
   |                            #EleList2
   ;

element
   : expression (DOTDOT expression)?
   ;

procedureStatement
   : identifier (LPAREN parameterList RPAREN)?
   ;

actualParameter
   : expression parameterwidth*
   ;

parameterwidth
   : ':' expression
   ;

emptyStatement_
   :
   ;

empty_
   :
   /* empty */
   ;

structuredStatement
   : compoundStatement      #StructuredStateCompound
   | conditionalStatement   #StructuredStateConditional
   | repetetiveStatement    #StructuredStateRepetetive
   ;

compoundStatement
   : BEGIN statements END
   ;

statements
   : statement (SEMI statement)*
   ;

conditionalStatement
   : ifStatement    #ConditionalStateIf
   | caseStatement  #ConditionalStateCase
   ;

ifStatement
   : IF expression THEN statement (: ELSE statement)?
   ;

caseStatement
   : CASE expression OF caseListElement (SEMI caseListElement)* (SEMI ELSE statements)? END
   ;

caseListElement
   : constList COLON statement
   ;

repetetiveStatement
   : whileStatement     #RepetetiveStateWhile
   | repeatStatement    #RepetetiveStateRepeat
   | forStatement       #RepetetiveStateFor
   ;

whileStatement
   : WHILE expression DO statement
   ;

repeatStatement
   : REPEAT statements UNTIL expression
   ;

forStatement
   : FOR identifier ASSIGN forList DO statement
   ;

forList
   : initialValue (TO | DOWNTO) finalValue
   ;

initialValue
   : expression
   ;

finalValue
   : expression
   ;

recordVariableList
   : variable (COMMA variable)*
   ;
