// Generated from /usr/src/app/s1mple-compiler/src/Pascal.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class PascalParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		AND=1, ARRAY=2, BEGIN=3, BOOLEAN=4, CASE=5, CHAR=6, CHR=7, CONST=8, DIV=9, 
		DO=10, DOWNTO=11, ELSE=12, END=13, FILE=14, FOR=15, FUNCTION=16, IF=17, 
		IN=18, INTEGER=19, MOD=20, NIL=21, NOT=22, OF=23, OR=24, PACKED=25, PROCEDURE=26, 
		PROGRAM=27, REAL=28, RECORD=29, REPEAT=30, SET=31, THEN=32, TO=33, TYPE=34, 
		UNTIL=35, VAR=36, WHILE=37, WITH=38, PLUS=39, MINUS=40, STAR=41, SLASH=42, 
		ASSIGN=43, COMMA=44, SEMI=45, COLON=46, EQUAL=47, NOT_EQUAL=48, LT=49, 
		LE=50, GE=51, GT=52, LPAREN=53, RPAREN=54, LBRACK=55, LBRACK2=56, RBRACK=57, 
		RBRACK2=58, POINTER=59, AT=60, DOT=61, DOTDOT=62, LCURLY=63, RCURLY=64, 
		UNIT=65, INTERFACE=66, USES=67, STRING=68, IMPLEMENTATION=69, TRUE=70, 
		FALSE=71, WS=72, COMMENT_1=73, COMMENT_2=74, IDENT=75, STRING_LITERAL=76, 
		NUM_INT=77, NUM_REAL=78;
	public static final int
		RULE_program = 0, RULE_programHeading = 1, RULE_identifier = 2, RULE_block = 3, 
		RULE_constantDefinitionPart = 4, RULE_constantDefinition = 5, RULE_constantChr = 6, 
		RULE_constant = 7, RULE_unsignedNumber = 8, RULE_unsignedInteger = 9, 
		RULE_unsignedReal = 10, RULE_sign = 11, RULE_bool_ = 12, RULE_string = 13, 
		RULE_typeDefinitionPart = 14, RULE_typeDefinition = 15, RULE_procedureType = 16, 
		RULE_type_ = 17, RULE_simpleType = 18, RULE_scalarType = 19, RULE_subrangeType = 20, 
		RULE_typeIdentifier = 21, RULE_structuredType = 22, RULE_unpackedStructuredType = 23, 
		RULE_stringtype = 24, RULE_arrayType = 25, RULE_typeList = 26, RULE_indexType = 27, 
		RULE_componentType = 28, RULE_recordType = 29, RULE_fieldList = 30, RULE_fixedPart = 31, 
		RULE_recordSection = 32, RULE_variantPart = 33, RULE_tag = 34, RULE_variant = 35, 
		RULE_setType = 36, RULE_baseType = 37, RULE_fileType = 38, RULE_pointerType = 39, 
		RULE_variableDeclarationPart = 40, RULE_variableDeclaration = 41, RULE_procedureAndFunctionDeclarationPart = 42, 
		RULE_procedureOrFunctionDeclaration = 43, RULE_procedureDeclaration = 44, 
		RULE_formalParameterList = 45, RULE_formalParameterSection = 46, RULE_parameterGroup = 47, 
		RULE_identifierList = 48, RULE_constList = 49, RULE_functionDeclaration = 50, 
		RULE_resultType = 51, RULE_statement = 52, RULE_unlabelledStatement = 53, 
		RULE_simpleStatement = 54, RULE_assignmentStatement = 55, RULE_variable = 56, 
		RULE_expression = 57, RULE_relationaloperator = 58, RULE_simpleExpression = 59, 
		RULE_additiveoperator = 60, RULE_term = 61, RULE_multiplicativeoperator = 62, 
		RULE_signedFactor = 63, RULE_factor = 64, RULE_unsignedConstant = 65, 
		RULE_functionDesignator = 66, RULE_parameterList = 67, RULE_set_ = 68, 
		RULE_elementList = 69, RULE_element = 70, RULE_procedureStatement = 71, 
		RULE_actualParameter = 72, RULE_parameterwidth = 73, RULE_emptyStatement_ = 74, 
		RULE_empty_ = 75, RULE_structuredStatement = 76, RULE_compoundStatement = 77, 
		RULE_statements = 78, RULE_conditionalStatement = 79, RULE_ifStatement = 80, 
		RULE_caseStatement = 81, RULE_caseListElement = 82, RULE_repetetiveStatement = 83, 
		RULE_whileStatement = 84, RULE_repeatStatement = 85, RULE_forStatement = 86, 
		RULE_forList = 87, RULE_initialValue = 88, RULE_finalValue = 89, RULE_withStatement = 90, 
		RULE_recordVariableList = 91;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "programHeading", "identifier", "block", "constantDefinitionPart", 
			"constantDefinition", "constantChr", "constant", "unsignedNumber", "unsignedInteger", 
			"unsignedReal", "sign", "bool_", "string", "typeDefinitionPart", "typeDefinition", 
			"procedureType", "type_", "simpleType", "scalarType", "subrangeType", 
			"typeIdentifier", "structuredType", "unpackedStructuredType", "stringtype", 
			"arrayType", "typeList", "indexType", "componentType", "recordType", 
			"fieldList", "fixedPart", "recordSection", "variantPart", "tag", "variant", 
			"setType", "baseType", "fileType", "pointerType", "variableDeclarationPart", 
			"variableDeclaration", "procedureAndFunctionDeclarationPart", "procedureOrFunctionDeclaration", 
			"procedureDeclaration", "formalParameterList", "formalParameterSection", 
			"parameterGroup", "identifierList", "constList", "functionDeclaration", 
			"resultType", "statement", "unlabelledStatement", "simpleStatement", 
			"assignmentStatement", "variable", "expression", "relationaloperator", 
			"simpleExpression", "additiveoperator", "term", "multiplicativeoperator", 
			"signedFactor", "factor", "unsignedConstant", "functionDesignator", "parameterList", 
			"set_", "elementList", "element", "procedureStatement", "actualParameter", 
			"parameterwidth", "emptyStatement_", "empty_", "structuredStatement", 
			"compoundStatement", "statements", "conditionalStatement", "ifStatement", 
			"caseStatement", "caseListElement", "repetetiveStatement", "whileStatement", 
			"repeatStatement", "forStatement", "forList", "initialValue", "finalValue", 
			"withStatement", "recordVariableList"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "'+'", "'-'", "'*'", "'/'", "':='", "','", "';'", "':'", 
			"'='", "'<>'", "'<'", "'<='", "'>='", "'>'", "'('", "')'", "'['", "'(.'", 
			"']'", "'.)'", "'^'", "'@'", "'.'", "'..'", "'{'", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AND", "ARRAY", "BEGIN", "BOOLEAN", "CASE", "CHAR", "CHR", "CONST", 
			"DIV", "DO", "DOWNTO", "ELSE", "END", "FILE", "FOR", "FUNCTION", "IF", 
			"IN", "INTEGER", "MOD", "NIL", "NOT", "OF", "OR", "PACKED", "PROCEDURE", 
			"PROGRAM", "REAL", "RECORD", "REPEAT", "SET", "THEN", "TO", "TYPE", "UNTIL", 
			"VAR", "WHILE", "WITH", "PLUS", "MINUS", "STAR", "SLASH", "ASSIGN", "COMMA", 
			"SEMI", "COLON", "EQUAL", "NOT_EQUAL", "LT", "LE", "GE", "GT", "LPAREN", 
			"RPAREN", "LBRACK", "LBRACK2", "RBRACK", "RBRACK2", "POINTER", "AT", 
			"DOT", "DOTDOT", "LCURLY", "RCURLY", "UNIT", "INTERFACE", "USES", "STRING", 
			"IMPLEMENTATION", "TRUE", "FALSE", "WS", "COMMENT_1", "COMMENT_2", "IDENT", 
			"STRING_LITERAL", "NUM_INT", "NUM_REAL"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Pascal.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public PascalParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgramContext extends ParserRuleContext {
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	 
		public ProgramContext() { }
		public void copyFrom(ProgramContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ProgramWholeContext extends ProgramContext {
		public ProgramHeadingContext programHeading() {
			return getRuleContext(ProgramHeadingContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public TerminalNode DOT() { return getToken(PascalParser.DOT, 0); }
		public TerminalNode INTERFACE() { return getToken(PascalParser.INTERFACE, 0); }
		public ProgramWholeContext(ProgramContext ctx) { copyFrom(ctx); }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			_localctx = new ProgramWholeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			programHeading();
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INTERFACE) {
				{
				setState(185);
				match(INTERFACE);
				}
			}

			setState(188);
			block();
			setState(189);
			match(DOT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgramHeadingContext extends ParserRuleContext {
		public ProgramHeadingContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programHeading; }
	 
		public ProgramHeadingContext() { }
		public void copyFrom(ProgramHeadingContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ProgramHeadContext extends ProgramHeadingContext {
		public TerminalNode PROGRAM() { return getToken(PascalParser.PROGRAM, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(PascalParser.SEMI, 0); }
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public ProgramHeadContext(ProgramHeadingContext ctx) { copyFrom(ctx); }
	}

	public final ProgramHeadingContext programHeading() throws RecognitionException {
		ProgramHeadingContext _localctx = new ProgramHeadingContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_programHeading);
		int _la;
		try {
			_localctx = new ProgramHeadContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(191);
			match(PROGRAM);
			setState(192);
			identifier();
			setState(197);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(193);
				match(LPAREN);
				setState(194);
				identifierList();
				setState(195);
				match(RPAREN);
				}
			}

			setState(199);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	 
		public IdentifierContext() { }
		public void copyFrom(IdentifierContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IdContext extends IdentifierContext {
		public TerminalNode IDENT() { return getToken(PascalParser.IDENT, 0); }
		public IdContext(IdentifierContext ctx) { copyFrom(ctx); }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_identifier);
		try {
			_localctx = new IdContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			match(IDENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	 
		public BlockContext() { }
		public void copyFrom(BlockContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ProgramBodyContext extends BlockContext {
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public List<ConstantDefinitionPartContext> constantDefinitionPart() {
			return getRuleContexts(ConstantDefinitionPartContext.class);
		}
		public ConstantDefinitionPartContext constantDefinitionPart(int i) {
			return getRuleContext(ConstantDefinitionPartContext.class,i);
		}
		public List<TypeDefinitionPartContext> typeDefinitionPart() {
			return getRuleContexts(TypeDefinitionPartContext.class);
		}
		public TypeDefinitionPartContext typeDefinitionPart(int i) {
			return getRuleContext(TypeDefinitionPartContext.class,i);
		}
		public List<VariableDeclarationPartContext> variableDeclarationPart() {
			return getRuleContexts(VariableDeclarationPartContext.class);
		}
		public VariableDeclarationPartContext variableDeclarationPart(int i) {
			return getRuleContext(VariableDeclarationPartContext.class,i);
		}
		public List<ProcedureAndFunctionDeclarationPartContext> procedureAndFunctionDeclarationPart() {
			return getRuleContexts(ProcedureAndFunctionDeclarationPartContext.class);
		}
		public ProcedureAndFunctionDeclarationPartContext procedureAndFunctionDeclarationPart(int i) {
			return getRuleContext(ProcedureAndFunctionDeclarationPartContext.class,i);
		}
		public List<TerminalNode> IMPLEMENTATION() { return getTokens(PascalParser.IMPLEMENTATION); }
		public TerminalNode IMPLEMENTATION(int i) {
			return getToken(PascalParser.IMPLEMENTATION, i);
		}
		public ProgramBodyContext(BlockContext ctx) { copyFrom(ctx); }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_block);
		int _la;
		try {
			_localctx = new ProgramBodyContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 8)) & ~0x3f) == 0 && ((1L << (_la - 8)) & ((1L << (CONST - 8)) | (1L << (FUNCTION - 8)) | (1L << (PROCEDURE - 8)) | (1L << (TYPE - 8)) | (1L << (VAR - 8)) | (1L << (IMPLEMENTATION - 8)))) != 0)) {
				{
				setState(208);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case CONST:
					{
					setState(203);
					constantDefinitionPart();
					}
					break;
				case TYPE:
					{
					setState(204);
					typeDefinitionPart();
					}
					break;
				case VAR:
					{
					setState(205);
					variableDeclarationPart();
					}
					break;
				case FUNCTION:
				case PROCEDURE:
					{
					setState(206);
					procedureAndFunctionDeclarationPart();
					}
					break;
				case IMPLEMENTATION:
					{
					setState(207);
					match(IMPLEMENTATION);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(213);
			compoundStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantDefinitionPartContext extends ParserRuleContext {
		public ConstantDefinitionPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantDefinitionPart; }
	 
		public ConstantDefinitionPartContext() { }
		public void copyFrom(ConstantDefinitionPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConstPartContext extends ConstantDefinitionPartContext {
		public TerminalNode CONST() { return getToken(PascalParser.CONST, 0); }
		public List<ConstantDefinitionContext> constantDefinition() {
			return getRuleContexts(ConstantDefinitionContext.class);
		}
		public ConstantDefinitionContext constantDefinition(int i) {
			return getRuleContext(ConstantDefinitionContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public ConstPartContext(ConstantDefinitionPartContext ctx) { copyFrom(ctx); }
	}

	public final ConstantDefinitionPartContext constantDefinitionPart() throws RecognitionException {
		ConstantDefinitionPartContext _localctx = new ConstantDefinitionPartContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_constantDefinitionPart);
		int _la;
		try {
			_localctx = new ConstPartContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			match(CONST);
			setState(219); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(216);
				constantDefinition();
				setState(217);
				match(SEMI);
				}
				}
				setState(221); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==IDENT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantDefinitionContext extends ParserRuleContext {
		public ConstantDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantDefinition; }
	 
		public ConstantDefinitionContext() { }
		public void copyFrom(ConstantDefinitionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConstContext extends ConstantDefinitionContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(PascalParser.EQUAL, 0); }
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public ConstContext(ConstantDefinitionContext ctx) { copyFrom(ctx); }
	}

	public final ConstantDefinitionContext constantDefinition() throws RecognitionException {
		ConstantDefinitionContext _localctx = new ConstantDefinitionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_constantDefinition);
		try {
			_localctx = new ConstContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			identifier();
			setState(224);
			match(EQUAL);
			setState(225);
			constant();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantChrContext extends ParserRuleContext {
		public ConstantChrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantChr; }
	 
		public ConstantChrContext() { }
		public void copyFrom(ConstantChrContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConstChrContext extends ConstantChrContext {
		public TerminalNode CHR() { return getToken(PascalParser.CHR, 0); }
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public UnsignedIntegerContext unsignedInteger() {
			return getRuleContext(UnsignedIntegerContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public ConstChrContext(ConstantChrContext ctx) { copyFrom(ctx); }
	}

	public final ConstantChrContext constantChr() throws RecognitionException {
		ConstantChrContext _localctx = new ConstantChrContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_constantChr);
		try {
			_localctx = new ConstChrContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
			match(CHR);
			setState(228);
			match(LPAREN);
			setState(229);
			unsignedInteger();
			setState(230);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantContext extends ParserRuleContext {
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
	 
		public ConstantContext() { }
		public void copyFrom(ConstantContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Const_signedNumberContext extends ConstantContext {
		public SignContext sign() {
			return getRuleContext(SignContext.class,0);
		}
		public UnsignedNumberContext unsignedNumber() {
			return getRuleContext(UnsignedNumberContext.class,0);
		}
		public Const_signedNumberContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Const_constantChrContext extends ConstantContext {
		public ConstantChrContext constantChr() {
			return getRuleContext(ConstantChrContext.class,0);
		}
		public Const_constantChrContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Const_signedIdentifierContext extends ConstantContext {
		public SignContext sign() {
			return getRuleContext(SignContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Const_signedIdentifierContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Const_stringContext extends ConstantContext {
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public Const_stringContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Const_unsignedNumberContext extends ConstantContext {
		public UnsignedNumberContext unsignedNumber() {
			return getRuleContext(UnsignedNumberContext.class,0);
		}
		public Const_unsignedNumberContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Const_identifierContext extends ConstantContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Const_identifierContext(ConstantContext ctx) { copyFrom(ctx); }
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_constant);
		try {
			setState(242);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				_localctx = new Const_unsignedNumberContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(232);
				unsignedNumber();
				}
				break;
			case 2:
				_localctx = new Const_signedNumberContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(233);
				sign();
				setState(234);
				unsignedNumber();
				}
				break;
			case 3:
				_localctx = new Const_identifierContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(236);
				identifier();
				}
				break;
			case 4:
				_localctx = new Const_signedIdentifierContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(237);
				sign();
				setState(238);
				identifier();
				}
				break;
			case 5:
				_localctx = new Const_stringContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(240);
				string();
				}
				break;
			case 6:
				_localctx = new Const_constantChrContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(241);
				constantChr();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnsignedNumberContext extends ParserRuleContext {
		public UnsignedNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsignedNumber; }
	 
		public UnsignedNumberContext() { }
		public void copyFrom(UnsignedNumberContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class UnsignedNumber_realContext extends UnsignedNumberContext {
		public UnsignedRealContext unsignedReal() {
			return getRuleContext(UnsignedRealContext.class,0);
		}
		public UnsignedNumber_realContext(UnsignedNumberContext ctx) { copyFrom(ctx); }
	}
	public static class UnsignedNumber_intContext extends UnsignedNumberContext {
		public UnsignedIntegerContext unsignedInteger() {
			return getRuleContext(UnsignedIntegerContext.class,0);
		}
		public UnsignedNumber_intContext(UnsignedNumberContext ctx) { copyFrom(ctx); }
	}

	public final UnsignedNumberContext unsignedNumber() throws RecognitionException {
		UnsignedNumberContext _localctx = new UnsignedNumberContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_unsignedNumber);
		try {
			setState(246);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUM_INT:
				_localctx = new UnsignedNumber_intContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(244);
				unsignedInteger();
				}
				break;
			case NUM_REAL:
				_localctx = new UnsignedNumber_realContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(245);
				unsignedReal();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnsignedIntegerContext extends ParserRuleContext {
		public UnsignedIntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsignedInteger; }
	 
		public UnsignedIntegerContext() { }
		public void copyFrom(UnsignedIntegerContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_unsigned_intContext extends UnsignedIntegerContext {
		public TerminalNode NUM_INT() { return getToken(PascalParser.NUM_INT, 0); }
		public Type_unsigned_intContext(UnsignedIntegerContext ctx) { copyFrom(ctx); }
	}

	public final UnsignedIntegerContext unsignedInteger() throws RecognitionException {
		UnsignedIntegerContext _localctx = new UnsignedIntegerContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_unsignedInteger);
		try {
			_localctx = new Type_unsigned_intContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(248);
			match(NUM_INT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnsignedRealContext extends ParserRuleContext {
		public UnsignedRealContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsignedReal; }
	 
		public UnsignedRealContext() { }
		public void copyFrom(UnsignedRealContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_unsigned_realContext extends UnsignedRealContext {
		public TerminalNode NUM_REAL() { return getToken(PascalParser.NUM_REAL, 0); }
		public Type_unsigned_realContext(UnsignedRealContext ctx) { copyFrom(ctx); }
	}

	public final UnsignedRealContext unsignedReal() throws RecognitionException {
		UnsignedRealContext _localctx = new UnsignedRealContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_unsignedReal);
		try {
			_localctx = new Type_unsigned_realContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			match(NUM_REAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SignContext extends ParserRuleContext {
		public SignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sign; }
	 
		public SignContext() { }
		public void copyFrom(SignContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_signed_minusContext extends SignContext {
		public TerminalNode MINUS() { return getToken(PascalParser.MINUS, 0); }
		public Type_signed_minusContext(SignContext ctx) { copyFrom(ctx); }
	}
	public static class Type_signed_plusContext extends SignContext {
		public TerminalNode PLUS() { return getToken(PascalParser.PLUS, 0); }
		public Type_signed_plusContext(SignContext ctx) { copyFrom(ctx); }
	}

	public final SignContext sign() throws RecognitionException {
		SignContext _localctx = new SignContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_sign);
		try {
			setState(254);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PLUS:
				_localctx = new Type_signed_plusContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(252);
				match(PLUS);
				}
				break;
			case MINUS:
				_localctx = new Type_signed_minusContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(253);
				match(MINUS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Bool_Context extends ParserRuleContext {
		public Bool_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bool_; }
	 
		public Bool_Context() { }
		public void copyFrom(Bool_Context ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_bool_trueContext extends Bool_Context {
		public TerminalNode TRUE() { return getToken(PascalParser.TRUE, 0); }
		public Type_bool_trueContext(Bool_Context ctx) { copyFrom(ctx); }
	}
	public static class Type_bool_falseContext extends Bool_Context {
		public TerminalNode FALSE() { return getToken(PascalParser.FALSE, 0); }
		public Type_bool_falseContext(Bool_Context ctx) { copyFrom(ctx); }
	}

	public final Bool_Context bool_() throws RecognitionException {
		Bool_Context _localctx = new Bool_Context(_ctx, getState());
		enterRule(_localctx, 24, RULE_bool_);
		try {
			setState(258);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TRUE:
				_localctx = new Type_bool_trueContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(256);
				match(TRUE);
				}
				break;
			case FALSE:
				_localctx = new Type_bool_falseContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(257);
				match(FALSE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringContext extends ParserRuleContext {
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
	 
		public StringContext() { }
		public void copyFrom(StringContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_stringContext extends StringContext {
		public TerminalNode STRING_LITERAL() { return getToken(PascalParser.STRING_LITERAL, 0); }
		public Type_stringContext(StringContext ctx) { copyFrom(ctx); }
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_string);
		try {
			_localctx = new Type_stringContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(260);
			match(STRING_LITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeDefinitionPartContext extends ParserRuleContext {
		public TypeDefinitionPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDefinitionPart; }
	 
		public TypeDefinitionPartContext() { }
		public void copyFrom(TypeDefinitionPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TypePartContext extends TypeDefinitionPartContext {
		public TerminalNode TYPE() { return getToken(PascalParser.TYPE, 0); }
		public List<TypeDefinitionContext> typeDefinition() {
			return getRuleContexts(TypeDefinitionContext.class);
		}
		public TypeDefinitionContext typeDefinition(int i) {
			return getRuleContext(TypeDefinitionContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public TypePartContext(TypeDefinitionPartContext ctx) { copyFrom(ctx); }
	}

	public final TypeDefinitionPartContext typeDefinitionPart() throws RecognitionException {
		TypeDefinitionPartContext _localctx = new TypeDefinitionPartContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_typeDefinitionPart);
		int _la;
		try {
			_localctx = new TypePartContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			match(TYPE);
			setState(266); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(263);
				typeDefinition();
				setState(264);
				match(SEMI);
				}
				}
				setState(268); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==IDENT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeDefinitionContext extends ParserRuleContext {
		public TypeDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDefinition; }
	 
		public TypeDefinitionContext() { }
		public void copyFrom(TypeDefinitionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TypeContext extends TypeDefinitionContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode EQUAL() { return getToken(PascalParser.EQUAL, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ProcedureTypeContext procedureType() {
			return getRuleContext(ProcedureTypeContext.class,0);
		}
		public TypeContext(TypeDefinitionContext ctx) { copyFrom(ctx); }
	}

	public final TypeDefinitionContext typeDefinition() throws RecognitionException {
		TypeDefinitionContext _localctx = new TypeDefinitionContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_typeDefinition);
		try {
			_localctx = new TypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(270);
			identifier();
			setState(271);
			match(EQUAL);
			setState(274);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ARRAY:
			case BOOLEAN:
			case CHAR:
			case CHR:
			case FILE:
			case INTEGER:
			case PACKED:
			case REAL:
			case RECORD:
			case SET:
			case PLUS:
			case MINUS:
			case LPAREN:
			case POINTER:
			case STRING:
			case IDENT:
			case STRING_LITERAL:
			case NUM_INT:
			case NUM_REAL:
				{
				setState(272);
				type_();
				}
				break;
			case PROCEDURE:
				{
				setState(273);
				procedureType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProcedureTypeContext extends ParserRuleContext {
		public ProcedureTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedureType; }
	 
		public ProcedureTypeContext() { }
		public void copyFrom(ProcedureTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_procedureTypeContext extends ProcedureTypeContext {
		public TerminalNode PROCEDURE() { return getToken(PascalParser.PROCEDURE, 0); }
		public FormalParameterListContext formalParameterList() {
			return getRuleContext(FormalParameterListContext.class,0);
		}
		public Type_procedureTypeContext(ProcedureTypeContext ctx) { copyFrom(ctx); }
	}

	public final ProcedureTypeContext procedureType() throws RecognitionException {
		ProcedureTypeContext _localctx = new ProcedureTypeContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_procedureType);
		int _la;
		try {
			_localctx = new Type_procedureTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(276);
			match(PROCEDURE);
			setState(278);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(277);
				formalParameterList();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_Context extends ParserRuleContext {
		public Type_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_; }
	 
		public Type_Context() { }
		public void copyFrom(Type_Context ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_simpleTypeContext extends Type_Context {
		public SimpleTypeContext simpleType() {
			return getRuleContext(SimpleTypeContext.class,0);
		}
		public Type_simpleTypeContext(Type_Context ctx) { copyFrom(ctx); }
	}
	public static class Type_pointerTypeContext extends Type_Context {
		public PointerTypeContext pointerType() {
			return getRuleContext(PointerTypeContext.class,0);
		}
		public Type_pointerTypeContext(Type_Context ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredTypeContext extends Type_Context {
		public StructuredTypeContext structuredType() {
			return getRuleContext(StructuredTypeContext.class,0);
		}
		public Type_structuredTypeContext(Type_Context ctx) { copyFrom(ctx); }
	}

	public final Type_Context type_() throws RecognitionException {
		Type_Context _localctx = new Type_Context(_ctx, getState());
		enterRule(_localctx, 34, RULE_type_);
		try {
			setState(283);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BOOLEAN:
			case CHAR:
			case CHR:
			case INTEGER:
			case REAL:
			case PLUS:
			case MINUS:
			case LPAREN:
			case STRING:
			case IDENT:
			case STRING_LITERAL:
			case NUM_INT:
			case NUM_REAL:
				_localctx = new Type_simpleTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(280);
				simpleType();
				}
				break;
			case ARRAY:
			case FILE:
			case PACKED:
			case RECORD:
			case SET:
				_localctx = new Type_structuredTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(281);
				structuredType();
				}
				break;
			case POINTER:
				_localctx = new Type_pointerTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(282);
				pointerType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleTypeContext extends ParserRuleContext {
		public SimpleTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleType; }
	 
		public SimpleTypeContext() { }
		public void copyFrom(SimpleTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_simpleType_scalarTypeContext extends SimpleTypeContext {
		public ScalarTypeContext scalarType() {
			return getRuleContext(ScalarTypeContext.class,0);
		}
		public Type_simpleType_scalarTypeContext(SimpleTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_simpleType_stringtypeContext extends SimpleTypeContext {
		public StringtypeContext stringtype() {
			return getRuleContext(StringtypeContext.class,0);
		}
		public Type_simpleType_stringtypeContext(SimpleTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_simpleType_subrangeTypeContext extends SimpleTypeContext {
		public SubrangeTypeContext subrangeType() {
			return getRuleContext(SubrangeTypeContext.class,0);
		}
		public Type_simpleType_subrangeTypeContext(SimpleTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_simpleType_typeIdentifierContext extends SimpleTypeContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public Type_simpleType_typeIdentifierContext(SimpleTypeContext ctx) { copyFrom(ctx); }
	}

	public final SimpleTypeContext simpleType() throws RecognitionException {
		SimpleTypeContext _localctx = new SimpleTypeContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_simpleType);
		try {
			setState(289);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				_localctx = new Type_simpleType_scalarTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(285);
				scalarType();
				}
				break;
			case 2:
				_localctx = new Type_simpleType_subrangeTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(286);
				subrangeType();
				}
				break;
			case 3:
				_localctx = new Type_simpleType_typeIdentifierContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(287);
				typeIdentifier();
				}
				break;
			case 4:
				_localctx = new Type_simpleType_stringtypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(288);
				stringtype();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ScalarTypeContext extends ParserRuleContext {
		public ScalarTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_scalarType; }
	 
		public ScalarTypeContext() { }
		public void copyFrom(ScalarTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_simpleType_scalarType_scalarContext extends ScalarTypeContext {
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public Type_simpleType_scalarType_scalarContext(ScalarTypeContext ctx) { copyFrom(ctx); }
	}

	public final ScalarTypeContext scalarType() throws RecognitionException {
		ScalarTypeContext _localctx = new ScalarTypeContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_scalarType);
		try {
			_localctx = new Type_simpleType_scalarType_scalarContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(291);
			match(LPAREN);
			setState(292);
			identifierList();
			setState(293);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SubrangeTypeContext extends ParserRuleContext {
		public SubrangeTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subrangeType; }
	 
		public SubrangeTypeContext() { }
		public void copyFrom(SubrangeTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_simpleType_subrangeType_subrangeContext extends SubrangeTypeContext {
		public List<ConstantContext> constant() {
			return getRuleContexts(ConstantContext.class);
		}
		public ConstantContext constant(int i) {
			return getRuleContext(ConstantContext.class,i);
		}
		public TerminalNode DOTDOT() { return getToken(PascalParser.DOTDOT, 0); }
		public Type_simpleType_subrangeType_subrangeContext(SubrangeTypeContext ctx) { copyFrom(ctx); }
	}

	public final SubrangeTypeContext subrangeType() throws RecognitionException {
		SubrangeTypeContext _localctx = new SubrangeTypeContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_subrangeType);
		try {
			_localctx = new Type_simpleType_subrangeType_subrangeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			constant();
			setState(296);
			match(DOTDOT);
			setState(297);
			constant();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeIdentifierContext extends ParserRuleContext {
		public TypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeIdentifier; }
	 
		public TypeIdentifierContext() { }
		public void copyFrom(TypeIdentifierContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_simpleType_typeIdentifier_idContext extends TypeIdentifierContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_simpleType_typeIdentifier_idContext(TypeIdentifierContext ctx) { copyFrom(ctx); }
	}
	public static class Type_simpleType_typeIdentifier_typeContext extends TypeIdentifierContext {
		public TerminalNode CHAR() { return getToken(PascalParser.CHAR, 0); }
		public TerminalNode BOOLEAN() { return getToken(PascalParser.BOOLEAN, 0); }
		public TerminalNode INTEGER() { return getToken(PascalParser.INTEGER, 0); }
		public TerminalNode REAL() { return getToken(PascalParser.REAL, 0); }
		public TerminalNode STRING() { return getToken(PascalParser.STRING, 0); }
		public Type_simpleType_typeIdentifier_typeContext(TypeIdentifierContext ctx) { copyFrom(ctx); }
	}

	public final TypeIdentifierContext typeIdentifier() throws RecognitionException {
		TypeIdentifierContext _localctx = new TypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_typeIdentifier);
		int _la;
		try {
			setState(301);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENT:
				_localctx = new Type_simpleType_typeIdentifier_idContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(299);
				identifier();
				}
				break;
			case BOOLEAN:
			case CHAR:
			case INTEGER:
			case REAL:
			case STRING:
				_localctx = new Type_simpleType_typeIdentifier_typeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(300);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOLEAN) | (1L << CHAR) | (1L << INTEGER) | (1L << REAL))) != 0) || _la==STRING) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StructuredTypeContext extends ParserRuleContext {
		public StructuredTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structuredType; }
	 
		public StructuredTypeContext() { }
		public void copyFrom(StructuredTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpackedContext extends StructuredTypeContext {
		public UnpackedStructuredTypeContext unpackedStructuredType() {
			return getRuleContext(UnpackedStructuredTypeContext.class,0);
		}
		public Type_structuredType_unpackedContext(StructuredTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_pacakedContext extends StructuredTypeContext {
		public TerminalNode PACKED() { return getToken(PascalParser.PACKED, 0); }
		public UnpackedStructuredTypeContext unpackedStructuredType() {
			return getRuleContext(UnpackedStructuredTypeContext.class,0);
		}
		public Type_structuredType_pacakedContext(StructuredTypeContext ctx) { copyFrom(ctx); }
	}

	public final StructuredTypeContext structuredType() throws RecognitionException {
		StructuredTypeContext _localctx = new StructuredTypeContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_structuredType);
		try {
			setState(306);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PACKED:
				_localctx = new Type_structuredType_pacakedContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(303);
				match(PACKED);
				setState(304);
				unpackedStructuredType();
				}
				break;
			case ARRAY:
			case FILE:
			case RECORD:
			case SET:
				_localctx = new Type_structuredType_unpackedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(305);
				unpackedStructuredType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnpackedStructuredTypeContext extends ParserRuleContext {
		public UnpackedStructuredTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unpackedStructuredType; }
	 
		public UnpackedStructuredTypeContext() { }
		public void copyFrom(UnpackedStructuredTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordTypeContext extends UnpackedStructuredTypeContext {
		public RecordTypeContext recordType() {
			return getRuleContext(RecordTypeContext.class,0);
		}
		public Type_structuredType_unpacked_recordTypeContext(UnpackedStructuredTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_arrayTypeContext extends UnpackedStructuredTypeContext {
		public ArrayTypeContext arrayType() {
			return getRuleContext(ArrayTypeContext.class,0);
		}
		public Type_structuredType_unpacked_arrayTypeContext(UnpackedStructuredTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_setTypeContext extends UnpackedStructuredTypeContext {
		public SetTypeContext setType() {
			return getRuleContext(SetTypeContext.class,0);
		}
		public Type_structuredType_unpacked_setTypeContext(UnpackedStructuredTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_fileTypeContext extends UnpackedStructuredTypeContext {
		public FileTypeContext fileType() {
			return getRuleContext(FileTypeContext.class,0);
		}
		public Type_structuredType_unpacked_fileTypeContext(UnpackedStructuredTypeContext ctx) { copyFrom(ctx); }
	}

	public final UnpackedStructuredTypeContext unpackedStructuredType() throws RecognitionException {
		UnpackedStructuredTypeContext _localctx = new UnpackedStructuredTypeContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_unpackedStructuredType);
		try {
			setState(312);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ARRAY:
				_localctx = new Type_structuredType_unpacked_arrayTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(308);
				arrayType();
				}
				break;
			case RECORD:
				_localctx = new Type_structuredType_unpacked_recordTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(309);
				recordType();
				}
				break;
			case SET:
				_localctx = new Type_structuredType_unpacked_setTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(310);
				setType();
				}
				break;
			case FILE:
				_localctx = new Type_structuredType_unpacked_fileTypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(311);
				fileType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringtypeContext extends ParserRuleContext {
		public StringtypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringtype; }
	 
		public StringtypeContext() { }
		public void copyFrom(StringtypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_simpleType_stringtype_strContext extends StringtypeContext {
		public TerminalNode STRING() { return getToken(PascalParser.STRING, 0); }
		public TerminalNode LBRACK() { return getToken(PascalParser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(PascalParser.RBRACK, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public UnsignedNumberContext unsignedNumber() {
			return getRuleContext(UnsignedNumberContext.class,0);
		}
		public Type_simpleType_stringtype_strContext(StringtypeContext ctx) { copyFrom(ctx); }
	}

	public final StringtypeContext stringtype() throws RecognitionException {
		StringtypeContext _localctx = new StringtypeContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_stringtype);
		try {
			_localctx = new Type_simpleType_stringtype_strContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(314);
			match(STRING);
			setState(315);
			match(LBRACK);
			setState(318);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENT:
				{
				setState(316);
				identifier();
				}
				break;
			case NUM_INT:
			case NUM_REAL:
				{
				setState(317);
				unsignedNumber();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(320);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArrayTypeContext extends ParserRuleContext {
		public ArrayTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayType; }
	 
		public ArrayTypeContext() { }
		public void copyFrom(ArrayTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_arrayType_array1Context extends ArrayTypeContext {
		public TerminalNode ARRAY() { return getToken(PascalParser.ARRAY, 0); }
		public TerminalNode LBRACK() { return getToken(PascalParser.LBRACK, 0); }
		public TypeListContext typeList() {
			return getRuleContext(TypeListContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(PascalParser.RBRACK, 0); }
		public TerminalNode OF() { return getToken(PascalParser.OF, 0); }
		public ComponentTypeContext componentType() {
			return getRuleContext(ComponentTypeContext.class,0);
		}
		public Type_structuredType_unpacked_arrayType_array1Context(ArrayTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_arrayType_array2Context extends ArrayTypeContext {
		public TerminalNode ARRAY() { return getToken(PascalParser.ARRAY, 0); }
		public TerminalNode LBRACK2() { return getToken(PascalParser.LBRACK2, 0); }
		public TypeListContext typeList() {
			return getRuleContext(TypeListContext.class,0);
		}
		public TerminalNode RBRACK2() { return getToken(PascalParser.RBRACK2, 0); }
		public TerminalNode OF() { return getToken(PascalParser.OF, 0); }
		public ComponentTypeContext componentType() {
			return getRuleContext(ComponentTypeContext.class,0);
		}
		public Type_structuredType_unpacked_arrayType_array2Context(ArrayTypeContext ctx) { copyFrom(ctx); }
	}

	public final ArrayTypeContext arrayType() throws RecognitionException {
		ArrayTypeContext _localctx = new ArrayTypeContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_arrayType);
		try {
			setState(336);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				_localctx = new Type_structuredType_unpacked_arrayType_array1Context(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(322);
				match(ARRAY);
				setState(323);
				match(LBRACK);
				setState(324);
				typeList();
				setState(325);
				match(RBRACK);
				setState(326);
				match(OF);
				setState(327);
				componentType();
				}
				break;
			case 2:
				_localctx = new Type_structuredType_unpacked_arrayType_array2Context(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(329);
				match(ARRAY);
				setState(330);
				match(LBRACK2);
				setState(331);
				typeList();
				setState(332);
				match(RBRACK2);
				setState(333);
				match(OF);
				setState(334);
				componentType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeListContext extends ParserRuleContext {
		public TypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeList; }
	 
		public TypeListContext() { }
		public void copyFrom(TypeListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_arrayType_array_typeListContext extends TypeListContext {
		public List<IndexTypeContext> indexType() {
			return getRuleContexts(IndexTypeContext.class);
		}
		public IndexTypeContext indexType(int i) {
			return getRuleContext(IndexTypeContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public Type_structuredType_unpacked_arrayType_array_typeListContext(TypeListContext ctx) { copyFrom(ctx); }
	}

	public final TypeListContext typeList() throws RecognitionException {
		TypeListContext _localctx = new TypeListContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_typeList);
		int _la;
		try {
			_localctx = new Type_structuredType_unpacked_arrayType_array_typeListContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(338);
			indexType();
			setState(343);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(339);
				match(COMMA);
				setState(340);
				indexType();
				}
				}
				setState(345);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexTypeContext extends ParserRuleContext {
		public IndexTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexType; }
	 
		public IndexTypeContext() { }
		public void copyFrom(IndexTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_arrayType_array_typeList_indexContext extends IndexTypeContext {
		public SimpleTypeContext simpleType() {
			return getRuleContext(SimpleTypeContext.class,0);
		}
		public Type_structuredType_unpacked_arrayType_array_typeList_indexContext(IndexTypeContext ctx) { copyFrom(ctx); }
	}

	public final IndexTypeContext indexType() throws RecognitionException {
		IndexTypeContext _localctx = new IndexTypeContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_indexType);
		try {
			_localctx = new Type_structuredType_unpacked_arrayType_array_typeList_indexContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(346);
			simpleType();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComponentTypeContext extends ParserRuleContext {
		public ComponentTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentType; }
	 
		public ComponentTypeContext() { }
		public void copyFrom(ComponentTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_arrayType_array_componentContext extends ComponentTypeContext {
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public Type_structuredType_unpacked_arrayType_array_componentContext(ComponentTypeContext ctx) { copyFrom(ctx); }
	}

	public final ComponentTypeContext componentType() throws RecognitionException {
		ComponentTypeContext _localctx = new ComponentTypeContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_componentType);
		try {
			_localctx = new Type_structuredType_unpacked_arrayType_array_componentContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(348);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RecordTypeContext extends ParserRuleContext {
		public RecordTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_recordType; }
	 
		public RecordTypeContext() { }
		public void copyFrom(RecordTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_recordContext extends RecordTypeContext {
		public TerminalNode RECORD() { return getToken(PascalParser.RECORD, 0); }
		public TerminalNode END() { return getToken(PascalParser.END, 0); }
		public FieldListContext fieldList() {
			return getRuleContext(FieldListContext.class,0);
		}
		public Type_structuredType_unpacked_recordType_recordContext(RecordTypeContext ctx) { copyFrom(ctx); }
	}

	public final RecordTypeContext recordType() throws RecognitionException {
		RecordTypeContext _localctx = new RecordTypeContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_recordType);
		int _la;
		try {
			_localctx = new Type_structuredType_unpacked_recordType_recordContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(350);
			match(RECORD);
			setState(352);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CASE || _la==IDENT) {
				{
				setState(351);
				fieldList();
				}
			}

			setState(354);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FieldListContext extends ParserRuleContext {
		public FieldListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldList; }
	 
		public FieldListContext() { }
		public void copyFrom(FieldListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_record_fixedContext extends FieldListContext {
		public FixedPartContext fixedPart() {
			return getRuleContext(FixedPartContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(PascalParser.SEMI, 0); }
		public VariantPartContext variantPart() {
			return getRuleContext(VariantPartContext.class,0);
		}
		public Type_structuredType_unpacked_recordType_record_fixedContext(FieldListContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_recordType_record_variableContext extends FieldListContext {
		public VariantPartContext variantPart() {
			return getRuleContext(VariantPartContext.class,0);
		}
		public Type_structuredType_unpacked_recordType_record_variableContext(FieldListContext ctx) { copyFrom(ctx); }
	}

	public final FieldListContext fieldList() throws RecognitionException {
		FieldListContext _localctx = new FieldListContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_fieldList);
		int _la;
		try {
			setState(362);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENT:
				_localctx = new Type_structuredType_unpacked_recordType_record_fixedContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(356);
				fixedPart();
				setState(359);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==SEMI) {
					{
					setState(357);
					match(SEMI);
					setState(358);
					variantPart();
					}
				}

				}
				break;
			case CASE:
				_localctx = new Type_structuredType_unpacked_recordType_record_variableContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(361);
				variantPart();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FixedPartContext extends ParserRuleContext {
		public FixedPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fixedPart; }
	 
		public FixedPartContext() { }
		public void copyFrom(FixedPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_record_fixed_fixContext extends FixedPartContext {
		public List<RecordSectionContext> recordSection() {
			return getRuleContexts(RecordSectionContext.class);
		}
		public RecordSectionContext recordSection(int i) {
			return getRuleContext(RecordSectionContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public Type_structuredType_unpacked_recordType_record_fixed_fixContext(FixedPartContext ctx) { copyFrom(ctx); }
	}

	public final FixedPartContext fixedPart() throws RecognitionException {
		FixedPartContext _localctx = new FixedPartContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_fixedPart);
		try {
			int _alt;
			_localctx = new Type_structuredType_unpacked_recordType_record_fixed_fixContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(364);
			recordSection();
			setState(369);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(365);
					match(SEMI);
					setState(366);
					recordSection();
					}
					} 
				}
				setState(371);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RecordSectionContext extends ParserRuleContext {
		public RecordSectionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_recordSection; }
	 
		public RecordSectionContext() { }
		public void copyFrom(RecordSectionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext extends RecordSectionContext {
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext(RecordSectionContext ctx) { copyFrom(ctx); }
	}

	public final RecordSectionContext recordSection() throws RecognitionException {
		RecordSectionContext _localctx = new RecordSectionContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_recordSection);
		try {
			_localctx = new Type_structuredType_unpacked_recordType_record_fixed_fix_recordSectionContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(372);
			identifierList();
			setState(373);
			match(COLON);
			setState(374);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariantPartContext extends ParserRuleContext {
		public VariantPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variantPart; }
	 
		public VariantPartContext() { }
		public void copyFrom(VariantPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_record_variable_varContext extends VariantPartContext {
		public TerminalNode CASE() { return getToken(PascalParser.CASE, 0); }
		public TagContext tag() {
			return getRuleContext(TagContext.class,0);
		}
		public TerminalNode OF() { return getToken(PascalParser.OF, 0); }
		public List<VariantContext> variant() {
			return getRuleContexts(VariantContext.class);
		}
		public VariantContext variant(int i) {
			return getRuleContext(VariantContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public Type_structuredType_unpacked_recordType_record_variable_varContext(VariantPartContext ctx) { copyFrom(ctx); }
	}

	public final VariantPartContext variantPart() throws RecognitionException {
		VariantPartContext _localctx = new VariantPartContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_variantPart);
		int _la;
		try {
			_localctx = new Type_structuredType_unpacked_recordType_record_variable_varContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(376);
			match(CASE);
			setState(377);
			tag();
			setState(378);
			match(OF);
			setState(379);
			variant();
			setState(384);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SEMI) {
				{
				{
				setState(380);
				match(SEMI);
				setState(381);
				variant();
				}
				}
				setState(386);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TagContext extends ParserRuleContext {
		public TagContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tag; }
	 
		public TagContext() { }
		public void copyFrom(TagContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext extends TagContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext(TagContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_recordType_record_variable_var_idContext extends TagContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public Type_structuredType_unpacked_recordType_record_variable_var_idContext(TagContext ctx) { copyFrom(ctx); }
	}

	public final TagContext tag() throws RecognitionException {
		TagContext _localctx = new TagContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_tag);
		try {
			setState(392);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				_localctx = new Type_structuredType_unpacked_recordType_record_variable_var_idContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(387);
				identifier();
				setState(388);
				match(COLON);
				setState(389);
				typeIdentifier();
				}
				break;
			case 2:
				_localctx = new Type_structuredType_unpacked_recordType_record_variable_var_typeIdContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(391);
				typeIdentifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariantContext extends ParserRuleContext {
		public VariantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variant; }
	 
		public VariantContext() { }
		public void copyFrom(VariantContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_recordType_record_variable_var_valueContext extends VariantContext {
		public ConstListContext constList() {
			return getRuleContext(ConstListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public FieldListContext fieldList() {
			return getRuleContext(FieldListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public Type_structuredType_unpacked_recordType_record_variable_var_valueContext(VariantContext ctx) { copyFrom(ctx); }
	}

	public final VariantContext variant() throws RecognitionException {
		VariantContext _localctx = new VariantContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_variant);
		try {
			_localctx = new Type_structuredType_unpacked_recordType_record_variable_var_valueContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(394);
			constList();
			setState(395);
			match(COLON);
			setState(396);
			match(LPAREN);
			setState(397);
			fieldList();
			setState(398);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SetTypeContext extends ParserRuleContext {
		public SetTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setType; }
	 
		public SetTypeContext() { }
		public void copyFrom(SetTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_setType_setContext extends SetTypeContext {
		public TerminalNode SET() { return getToken(PascalParser.SET, 0); }
		public TerminalNode OF() { return getToken(PascalParser.OF, 0); }
		public BaseTypeContext baseType() {
			return getRuleContext(BaseTypeContext.class,0);
		}
		public Type_structuredType_unpacked_setType_setContext(SetTypeContext ctx) { copyFrom(ctx); }
	}

	public final SetTypeContext setType() throws RecognitionException {
		SetTypeContext _localctx = new SetTypeContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_setType);
		try {
			_localctx = new Type_structuredType_unpacked_setType_setContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(400);
			match(SET);
			setState(401);
			match(OF);
			setState(402);
			baseType();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BaseTypeContext extends ParserRuleContext {
		public BaseTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_baseType; }
	 
		public BaseTypeContext() { }
		public void copyFrom(BaseTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_setType_set_baseContext extends BaseTypeContext {
		public SimpleTypeContext simpleType() {
			return getRuleContext(SimpleTypeContext.class,0);
		}
		public Type_structuredType_unpacked_setType_set_baseContext(BaseTypeContext ctx) { copyFrom(ctx); }
	}

	public final BaseTypeContext baseType() throws RecognitionException {
		BaseTypeContext _localctx = new BaseTypeContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_baseType);
		try {
			_localctx = new Type_structuredType_unpacked_setType_set_baseContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(404);
			simpleType();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FileTypeContext extends ParserRuleContext {
		public FileTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fileType; }
	 
		public FileTypeContext() { }
		public void copyFrom(FileTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_structuredType_unpacked_fileType_file1Context extends FileTypeContext {
		public TerminalNode FILE() { return getToken(PascalParser.FILE, 0); }
		public TerminalNode OF() { return getToken(PascalParser.OF, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public Type_structuredType_unpacked_fileType_file1Context(FileTypeContext ctx) { copyFrom(ctx); }
	}
	public static class Type_structuredType_unpacked_fileType_file2Context extends FileTypeContext {
		public TerminalNode FILE() { return getToken(PascalParser.FILE, 0); }
		public Type_structuredType_unpacked_fileType_file2Context(FileTypeContext ctx) { copyFrom(ctx); }
	}

	public final FileTypeContext fileType() throws RecognitionException {
		FileTypeContext _localctx = new FileTypeContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_fileType);
		try {
			setState(410);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				_localctx = new Type_structuredType_unpacked_fileType_file1Context(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(406);
				match(FILE);
				setState(407);
				match(OF);
				setState(408);
				type_();
				}
				break;
			case 2:
				_localctx = new Type_structuredType_unpacked_fileType_file2Context(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(409);
				match(FILE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PointerTypeContext extends ParserRuleContext {
		public PointerTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerType; }
	 
		public PointerTypeContext() { }
		public void copyFrom(PointerTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Type_pointerType_pointerContext extends PointerTypeContext {
		public TerminalNode POINTER() { return getToken(PascalParser.POINTER, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public Type_pointerType_pointerContext(PointerTypeContext ctx) { copyFrom(ctx); }
	}

	public final PointerTypeContext pointerType() throws RecognitionException {
		PointerTypeContext _localctx = new PointerTypeContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_pointerType);
		try {
			_localctx = new Type_pointerType_pointerContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(412);
			match(POINTER);
			setState(413);
			typeIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclarationPartContext extends ParserRuleContext {
		public VariableDeclarationPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclarationPart; }
	 
		public VariableDeclarationPartContext() { }
		public void copyFrom(VariableDeclarationPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VariablePartContext extends VariableDeclarationPartContext {
		public TerminalNode VAR() { return getToken(PascalParser.VAR, 0); }
		public List<VariableDeclarationContext> variableDeclaration() {
			return getRuleContexts(VariableDeclarationContext.class);
		}
		public VariableDeclarationContext variableDeclaration(int i) {
			return getRuleContext(VariableDeclarationContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public VariablePartContext(VariableDeclarationPartContext ctx) { copyFrom(ctx); }
	}

	public final VariableDeclarationPartContext variableDeclarationPart() throws RecognitionException {
		VariableDeclarationPartContext _localctx = new VariableDeclarationPartContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_variableDeclarationPart);
		try {
			int _alt;
			_localctx = new VariablePartContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(415);
			match(VAR);
			setState(416);
			variableDeclaration();
			setState(421);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(417);
					match(SEMI);
					setState(418);
					variableDeclaration();
					}
					} 
				}
				setState(423);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			}
			setState(424);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclarationContext extends ParserRuleContext {
		public VariableDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclaration; }
	 
		public VariableDeclarationContext() { }
		public void copyFrom(VariableDeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VarDeclarationContext extends VariableDeclarationContext {
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public VarDeclarationContext(VariableDeclarationContext ctx) { copyFrom(ctx); }
	}

	public final VariableDeclarationContext variableDeclaration() throws RecognitionException {
		VariableDeclarationContext _localctx = new VariableDeclarationContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_variableDeclaration);
		try {
			_localctx = new VarDeclarationContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(426);
			identifierList();
			setState(427);
			match(COLON);
			setState(428);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProcedureAndFunctionDeclarationPartContext extends ParserRuleContext {
		public ProcedureAndFunctionDeclarationPartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedureAndFunctionDeclarationPart; }
	 
		public ProcedureAndFunctionDeclarationPartContext() { }
		public void copyFrom(ProcedureAndFunctionDeclarationPartContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ProcedurePartContext extends ProcedureAndFunctionDeclarationPartContext {
		public ProcedureOrFunctionDeclarationContext procedureOrFunctionDeclaration() {
			return getRuleContext(ProcedureOrFunctionDeclarationContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(PascalParser.SEMI, 0); }
		public ProcedurePartContext(ProcedureAndFunctionDeclarationPartContext ctx) { copyFrom(ctx); }
	}

	public final ProcedureAndFunctionDeclarationPartContext procedureAndFunctionDeclarationPart() throws RecognitionException {
		ProcedureAndFunctionDeclarationPartContext _localctx = new ProcedureAndFunctionDeclarationPartContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_procedureAndFunctionDeclarationPart);
		try {
			_localctx = new ProcedurePartContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(430);
			procedureOrFunctionDeclaration();
			setState(431);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProcedureOrFunctionDeclarationContext extends ParserRuleContext {
		public ProcedureOrFunctionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedureOrFunctionDeclaration; }
	 
		public ProcedureOrFunctionDeclarationContext() { }
		public void copyFrom(ProcedureOrFunctionDeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_proContext extends ProcedureOrFunctionDeclarationContext {
		public ProcedureDeclarationContext procedureDeclaration() {
			return getRuleContext(ProcedureDeclarationContext.class,0);
		}
		public Procedure_proContext(ProcedureOrFunctionDeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class Procedure_funcContext extends ProcedureOrFunctionDeclarationContext {
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public Procedure_funcContext(ProcedureOrFunctionDeclarationContext ctx) { copyFrom(ctx); }
	}

	public final ProcedureOrFunctionDeclarationContext procedureOrFunctionDeclaration() throws RecognitionException {
		ProcedureOrFunctionDeclarationContext _localctx = new ProcedureOrFunctionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_procedureOrFunctionDeclaration);
		try {
			setState(435);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PROCEDURE:
				_localctx = new Procedure_proContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(433);
				procedureDeclaration();
				}
				break;
			case FUNCTION:
				_localctx = new Procedure_funcContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(434);
				functionDeclaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProcedureDeclarationContext extends ParserRuleContext {
		public ProcedureDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedureDeclaration; }
	 
		public ProcedureDeclarationContext() { }
		public void copyFrom(ProcedureDeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_pro_decContext extends ProcedureDeclarationContext {
		public TerminalNode PROCEDURE() { return getToken(PascalParser.PROCEDURE, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(PascalParser.SEMI, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public FormalParameterListContext formalParameterList() {
			return getRuleContext(FormalParameterListContext.class,0);
		}
		public Procedure_pro_decContext(ProcedureDeclarationContext ctx) { copyFrom(ctx); }
	}

	public final ProcedureDeclarationContext procedureDeclaration() throws RecognitionException {
		ProcedureDeclarationContext _localctx = new ProcedureDeclarationContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_procedureDeclaration);
		int _la;
		try {
			_localctx = new Procedure_pro_decContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(437);
			match(PROCEDURE);
			setState(438);
			identifier();
			setState(440);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(439);
				formalParameterList();
				}
			}

			setState(442);
			match(SEMI);
			setState(443);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FormalParameterListContext extends ParserRuleContext {
		public FormalParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formalParameterList; }
	 
		public FormalParameterListContext() { }
		public void copyFrom(FormalParameterListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_pro_parameterListContext extends FormalParameterListContext {
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public List<FormalParameterSectionContext> formalParameterSection() {
			return getRuleContexts(FormalParameterSectionContext.class);
		}
		public FormalParameterSectionContext formalParameterSection(int i) {
			return getRuleContext(FormalParameterSectionContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public Procedure_pro_parameterListContext(FormalParameterListContext ctx) { copyFrom(ctx); }
	}

	public final FormalParameterListContext formalParameterList() throws RecognitionException {
		FormalParameterListContext _localctx = new FormalParameterListContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_formalParameterList);
		int _la;
		try {
			_localctx = new Procedure_pro_parameterListContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(445);
			match(LPAREN);
			setState(446);
			formalParameterSection();
			setState(451);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SEMI) {
				{
				{
				setState(447);
				match(SEMI);
				setState(448);
				formalParameterSection();
				}
				}
				setState(453);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(454);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FormalParameterSectionContext extends ParserRuleContext {
		public FormalParameterSectionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formalParameterSection; }
	 
		public FormalParameterSectionContext() { }
		public void copyFrom(FormalParameterSectionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_pro_parameterList_varGroupContext extends FormalParameterSectionContext {
		public TerminalNode VAR() { return getToken(PascalParser.VAR, 0); }
		public ParameterGroupContext parameterGroup() {
			return getRuleContext(ParameterGroupContext.class,0);
		}
		public Procedure_pro_parameterList_varGroupContext(FormalParameterSectionContext ctx) { copyFrom(ctx); }
	}
	public static class Procedure_pro_parameterList_funcGroupContext extends FormalParameterSectionContext {
		public TerminalNode FUNCTION() { return getToken(PascalParser.FUNCTION, 0); }
		public ParameterGroupContext parameterGroup() {
			return getRuleContext(ParameterGroupContext.class,0);
		}
		public Procedure_pro_parameterList_funcGroupContext(FormalParameterSectionContext ctx) { copyFrom(ctx); }
	}
	public static class Procedure_pro_parameterList_groupContext extends FormalParameterSectionContext {
		public ParameterGroupContext parameterGroup() {
			return getRuleContext(ParameterGroupContext.class,0);
		}
		public Procedure_pro_parameterList_groupContext(FormalParameterSectionContext ctx) { copyFrom(ctx); }
	}
	public static class Procedure_pro_parameterList_proGroupContext extends FormalParameterSectionContext {
		public TerminalNode PROCEDURE() { return getToken(PascalParser.PROCEDURE, 0); }
		public ParameterGroupContext parameterGroup() {
			return getRuleContext(ParameterGroupContext.class,0);
		}
		public Procedure_pro_parameterList_proGroupContext(FormalParameterSectionContext ctx) { copyFrom(ctx); }
	}

	public final FormalParameterSectionContext formalParameterSection() throws RecognitionException {
		FormalParameterSectionContext _localctx = new FormalParameterSectionContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_formalParameterSection);
		try {
			setState(463);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENT:
				_localctx = new Procedure_pro_parameterList_groupContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(456);
				parameterGroup();
				}
				break;
			case VAR:
				_localctx = new Procedure_pro_parameterList_varGroupContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(457);
				match(VAR);
				setState(458);
				parameterGroup();
				}
				break;
			case FUNCTION:
				_localctx = new Procedure_pro_parameterList_funcGroupContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(459);
				match(FUNCTION);
				setState(460);
				parameterGroup();
				}
				break;
			case PROCEDURE:
				_localctx = new Procedure_pro_parameterList_proGroupContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(461);
				match(PROCEDURE);
				setState(462);
				parameterGroup();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterGroupContext extends ParserRuleContext {
		public ParameterGroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterGroup; }
	 
		public ParameterGroupContext() { }
		public void copyFrom(ParameterGroupContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_pro_parameterList_group_idContext extends ParameterGroupContext {
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public Procedure_pro_parameterList_group_idContext(ParameterGroupContext ctx) { copyFrom(ctx); }
	}

	public final ParameterGroupContext parameterGroup() throws RecognitionException {
		ParameterGroupContext _localctx = new ParameterGroupContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_parameterGroup);
		try {
			_localctx = new Procedure_pro_parameterList_group_idContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(465);
			identifierList();
			setState(466);
			match(COLON);
			setState(467);
			typeIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierListContext extends ParserRuleContext {
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
	 
		public IdentifierListContext() { }
		public void copyFrom(IdentifierListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IdListContext extends IdentifierListContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public IdListContext(IdentifierListContext ctx) { copyFrom(ctx); }
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_identifierList);
		int _la;
		try {
			_localctx = new IdListContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(469);
			identifier();
			setState(474);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(470);
				match(COMMA);
				setState(471);
				identifier();
				}
				}
				setState(476);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstListContext extends ParserRuleContext {
		public ConstListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constList; }
	 
		public ConstListContext() { }
		public void copyFrom(ConstListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConstantListContext extends ConstListContext {
		public List<ConstantContext> constant() {
			return getRuleContexts(ConstantContext.class);
		}
		public ConstantContext constant(int i) {
			return getRuleContext(ConstantContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public ConstantListContext(ConstListContext ctx) { copyFrom(ctx); }
	}

	public final ConstListContext constList() throws RecognitionException {
		ConstListContext _localctx = new ConstListContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_constList);
		int _la;
		try {
			_localctx = new ConstantListContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(477);
			constant();
			setState(482);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(478);
				match(COMMA);
				setState(479);
				constant();
				}
				}
				setState(484);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDeclarationContext extends ParserRuleContext {
		public FunctionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclaration; }
	 
		public FunctionDeclarationContext() { }
		public void copyFrom(FunctionDeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_func_decContext extends FunctionDeclarationContext {
		public TerminalNode FUNCTION() { return getToken(PascalParser.FUNCTION, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public ResultTypeContext resultType() {
			return getRuleContext(ResultTypeContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(PascalParser.SEMI, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public FormalParameterListContext formalParameterList() {
			return getRuleContext(FormalParameterListContext.class,0);
		}
		public Procedure_func_decContext(FunctionDeclarationContext ctx) { copyFrom(ctx); }
	}

	public final FunctionDeclarationContext functionDeclaration() throws RecognitionException {
		FunctionDeclarationContext _localctx = new FunctionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_functionDeclaration);
		int _la;
		try {
			_localctx = new Procedure_func_decContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(485);
			match(FUNCTION);
			setState(486);
			identifier();
			setState(488);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(487);
				formalParameterList();
				}
			}

			setState(490);
			match(COLON);
			setState(491);
			resultType();
			setState(492);
			match(SEMI);
			setState(493);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ResultTypeContext extends ParserRuleContext {
		public ResultTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_resultType; }
	 
		public ResultTypeContext() { }
		public void copyFrom(ResultTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Procedure_func_resultContext extends ResultTypeContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public Procedure_func_resultContext(ResultTypeContext ctx) { copyFrom(ctx); }
	}

	public final ResultTypeContext resultType() throws RecognitionException {
		ResultTypeContext _localctx = new ResultTypeContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_resultType);
		try {
			_localctx = new Procedure_func_resultContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(495);
			typeIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StatementPartContext extends StatementContext {
		public UnlabelledStatementContext unlabelledStatement() {
			return getRuleContext(UnlabelledStatementContext.class,0);
		}
		public StatementPartContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_statement);
		try {
			_localctx = new StatementPartContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(497);
			unlabelledStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnlabelledStatementContext extends ParserRuleContext {
		public UnlabelledStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unlabelledStatement; }
	 
		public UnlabelledStatementContext() { }
		public void copyFrom(UnlabelledStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Statement_simpleContext extends UnlabelledStatementContext {
		public SimpleStatementContext simpleStatement() {
			return getRuleContext(SimpleStatementContext.class,0);
		}
		public Statement_simpleContext(UnlabelledStatementContext ctx) { copyFrom(ctx); }
	}
	public static class Statement_structuredContext extends UnlabelledStatementContext {
		public StructuredStatementContext structuredStatement() {
			return getRuleContext(StructuredStatementContext.class,0);
		}
		public Statement_structuredContext(UnlabelledStatementContext ctx) { copyFrom(ctx); }
	}

	public final UnlabelledStatementContext unlabelledStatement() throws RecognitionException {
		UnlabelledStatementContext _localctx = new UnlabelledStatementContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_unlabelledStatement);
		try {
			setState(501);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ELSE:
			case END:
			case UNTIL:
			case SEMI:
			case AT:
			case IDENT:
				_localctx = new Statement_simpleContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(499);
				simpleStatement();
				}
				break;
			case BEGIN:
			case CASE:
			case FOR:
			case IF:
			case REPEAT:
			case WHILE:
			case WITH:
				_localctx = new Statement_structuredContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(500);
				structuredStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleStatementContext extends ParserRuleContext {
		public SimpleStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleStatement; }
	 
		public SimpleStatementContext() { }
		public void copyFrom(SimpleStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Statement_simple_emptyContext extends SimpleStatementContext {
		public EmptyStatement_Context emptyStatement_() {
			return getRuleContext(EmptyStatement_Context.class,0);
		}
		public Statement_simple_emptyContext(SimpleStatementContext ctx) { copyFrom(ctx); }
	}
	public static class Statement_simple_procedureContext extends SimpleStatementContext {
		public ProcedureStatementContext procedureStatement() {
			return getRuleContext(ProcedureStatementContext.class,0);
		}
		public Statement_simple_procedureContext(SimpleStatementContext ctx) { copyFrom(ctx); }
	}
	public static class Statement_simple_assignmentContext extends SimpleStatementContext {
		public AssignmentStatementContext assignmentStatement() {
			return getRuleContext(AssignmentStatementContext.class,0);
		}
		public Statement_simple_assignmentContext(SimpleStatementContext ctx) { copyFrom(ctx); }
	}

	public final SimpleStatementContext simpleStatement() throws RecognitionException {
		SimpleStatementContext _localctx = new SimpleStatementContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_simpleStatement);
		try {
			setState(506);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				_localctx = new Statement_simple_assignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(503);
				assignmentStatement();
				}
				break;
			case 2:
				_localctx = new Statement_simple_procedureContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(504);
				procedureStatement();
				}
				break;
			case 3:
				_localctx = new Statement_simple_emptyContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(505);
				emptyStatement_();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentStatementContext extends ParserRuleContext {
		public AssignmentStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentStatement; }
	 
		public AssignmentStatementContext() { }
		public void copyFrom(AssignmentStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Statement_simple_assignment_assignContext extends AssignmentStatementContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(PascalParser.ASSIGN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Statement_simple_assignment_assignContext(AssignmentStatementContext ctx) { copyFrom(ctx); }
	}

	public final AssignmentStatementContext assignmentStatement() throws RecognitionException {
		AssignmentStatementContext _localctx = new AssignmentStatementContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_assignmentStatement);
		try {
			_localctx = new Statement_simple_assignment_assignContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(508);
			variable();
			setState(509);
			match(ASSIGN);
			setState(510);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableContext extends ParserRuleContext {
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	 
		public VariableContext() { }
		public void copyFrom(VariableContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VarContext extends VariableContext {
		public TerminalNode AT() { return getToken(PascalParser.AT, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> LBRACK() { return getTokens(PascalParser.LBRACK); }
		public TerminalNode LBRACK(int i) {
			return getToken(PascalParser.LBRACK, i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> RBRACK() { return getTokens(PascalParser.RBRACK); }
		public TerminalNode RBRACK(int i) {
			return getToken(PascalParser.RBRACK, i);
		}
		public List<TerminalNode> LBRACK2() { return getTokens(PascalParser.LBRACK2); }
		public TerminalNode LBRACK2(int i) {
			return getToken(PascalParser.LBRACK2, i);
		}
		public List<TerminalNode> RBRACK2() { return getTokens(PascalParser.RBRACK2); }
		public TerminalNode RBRACK2(int i) {
			return getToken(PascalParser.RBRACK2, i);
		}
		public List<TerminalNode> DOT() { return getTokens(PascalParser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(PascalParser.DOT, i);
		}
		public List<TerminalNode> POINTER() { return getTokens(PascalParser.POINTER); }
		public TerminalNode POINTER(int i) {
			return getToken(PascalParser.POINTER, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public VarContext(VariableContext ctx) { copyFrom(ctx); }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_variable);
		int _la;
		try {
			_localctx = new VarContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(515);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AT:
				{
				setState(512);
				match(AT);
				setState(513);
				identifier();
				}
				break;
			case IDENT:
				{
				setState(514);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(544);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LBRACK) | (1L << LBRACK2) | (1L << POINTER) | (1L << DOT))) != 0)) {
				{
				setState(542);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LBRACK:
					{
					setState(517);
					match(LBRACK);
					setState(518);
					expression();
					setState(523);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(519);
						match(COMMA);
						setState(520);
						expression();
						}
						}
						setState(525);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(526);
					match(RBRACK);
					}
					break;
				case LBRACK2:
					{
					setState(528);
					match(LBRACK2);
					setState(529);
					expression();
					setState(534);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(530);
						match(COMMA);
						setState(531);
						expression();
						}
						}
						setState(536);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(537);
					match(RBRACK2);
					}
					break;
				case DOT:
					{
					setState(539);
					match(DOT);
					setState(540);
					identifier();
					}
					break;
				case POINTER:
					{
					setState(541);
					match(POINTER);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(546);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ExprContext extends ExpressionContext {
		public SimpleExpressionContext simpleExpression() {
			return getRuleContext(SimpleExpressionContext.class,0);
		}
		public RelationaloperatorContext relationaloperator() {
			return getRuleContext(RelationaloperatorContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExprContext(ExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_expression);
		int _la;
		try {
			_localctx = new ExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(547);
			simpleExpression();
			setState(551);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IN) | (1L << EQUAL) | (1L << NOT_EQUAL) | (1L << LT) | (1L << LE) | (1L << GE) | (1L << GT))) != 0)) {
				{
				setState(548);
				relationaloperator();
				setState(549);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationaloperatorContext extends ParserRuleContext {
		public RelationaloperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relationaloperator; }
	 
		public RelationaloperatorContext() { }
		public void copyFrom(RelationaloperatorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Operator_INContext extends RelationaloperatorContext {
		public TerminalNode IN() { return getToken(PascalParser.IN, 0); }
		public Operator_INContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_notEqualContext extends RelationaloperatorContext {
		public TerminalNode NOT_EQUAL() { return getToken(PascalParser.NOT_EQUAL, 0); }
		public Operator_notEqualContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_equalContext extends RelationaloperatorContext {
		public TerminalNode EQUAL() { return getToken(PascalParser.EQUAL, 0); }
		public Operator_equalContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_LTContext extends RelationaloperatorContext {
		public TerminalNode LT() { return getToken(PascalParser.LT, 0); }
		public Operator_LTContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_LEContext extends RelationaloperatorContext {
		public TerminalNode LE() { return getToken(PascalParser.LE, 0); }
		public Operator_LEContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_GTContext extends RelationaloperatorContext {
		public TerminalNode GT() { return getToken(PascalParser.GT, 0); }
		public Operator_GTContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_GEContext extends RelationaloperatorContext {
		public TerminalNode GE() { return getToken(PascalParser.GE, 0); }
		public Operator_GEContext(RelationaloperatorContext ctx) { copyFrom(ctx); }
	}

	public final RelationaloperatorContext relationaloperator() throws RecognitionException {
		RelationaloperatorContext _localctx = new RelationaloperatorContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_relationaloperator);
		try {
			setState(560);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQUAL:
				_localctx = new Operator_equalContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(553);
				match(EQUAL);
				}
				break;
			case NOT_EQUAL:
				_localctx = new Operator_notEqualContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(554);
				match(NOT_EQUAL);
				}
				break;
			case LT:
				_localctx = new Operator_LTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(555);
				match(LT);
				}
				break;
			case LE:
				_localctx = new Operator_LEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(556);
				match(LE);
				}
				break;
			case GE:
				_localctx = new Operator_GEContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(557);
				match(GE);
				}
				break;
			case GT:
				_localctx = new Operator_GTContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(558);
				match(GT);
				}
				break;
			case IN:
				_localctx = new Operator_INContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(559);
				match(IN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleExpressionContext extends ParserRuleContext {
		public SimpleExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleExpression; }
	 
		public SimpleExpressionContext() { }
		public void copyFrom(SimpleExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simpleContext extends SimpleExpressionContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public AdditiveoperatorContext additiveoperator() {
			return getRuleContext(AdditiveoperatorContext.class,0);
		}
		public SimpleExpressionContext simpleExpression() {
			return getRuleContext(SimpleExpressionContext.class,0);
		}
		public Expr_simpleContext(SimpleExpressionContext ctx) { copyFrom(ctx); }
	}

	public final SimpleExpressionContext simpleExpression() throws RecognitionException {
		SimpleExpressionContext _localctx = new SimpleExpressionContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_simpleExpression);
		int _la;
		try {
			_localctx = new Expr_simpleContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(562);
			term();
			setState(566);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OR) | (1L << PLUS) | (1L << MINUS))) != 0)) {
				{
				setState(563);
				additiveoperator();
				setState(564);
				simpleExpression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AdditiveoperatorContext extends ParserRuleContext {
		public AdditiveoperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_additiveoperator; }
	 
		public AdditiveoperatorContext() { }
		public void copyFrom(AdditiveoperatorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Operator_minusContext extends AdditiveoperatorContext {
		public TerminalNode MINUS() { return getToken(PascalParser.MINUS, 0); }
		public Operator_minusContext(AdditiveoperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_plusContext extends AdditiveoperatorContext {
		public TerminalNode PLUS() { return getToken(PascalParser.PLUS, 0); }
		public Operator_plusContext(AdditiveoperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_orContext extends AdditiveoperatorContext {
		public TerminalNode OR() { return getToken(PascalParser.OR, 0); }
		public Operator_orContext(AdditiveoperatorContext ctx) { copyFrom(ctx); }
	}

	public final AdditiveoperatorContext additiveoperator() throws RecognitionException {
		AdditiveoperatorContext _localctx = new AdditiveoperatorContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_additiveoperator);
		try {
			setState(571);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PLUS:
				_localctx = new Operator_plusContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(568);
				match(PLUS);
				}
				break;
			case MINUS:
				_localctx = new Operator_minusContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(569);
				match(MINUS);
				}
				break;
			case OR:
				_localctx = new Operator_orContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(570);
				match(OR);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TermContext extends ParserRuleContext {
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	 
		public TermContext() { }
		public void copyFrom(TermContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simple_termContext extends TermContext {
		public SignedFactorContext signedFactor() {
			return getRuleContext(SignedFactorContext.class,0);
		}
		public MultiplicativeoperatorContext multiplicativeoperator() {
			return getRuleContext(MultiplicativeoperatorContext.class,0);
		}
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public Expr_simple_termContext(TermContext ctx) { copyFrom(ctx); }
	}

	public final TermContext term() throws RecognitionException {
		TermContext _localctx = new TermContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_term);
		int _la;
		try {
			_localctx = new Expr_simple_termContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(573);
			signedFactor();
			setState(577);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AND) | (1L << DIV) | (1L << MOD) | (1L << STAR) | (1L << SLASH))) != 0)) {
				{
				setState(574);
				multiplicativeoperator();
				setState(575);
				term();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MultiplicativeoperatorContext extends ParserRuleContext {
		public MultiplicativeoperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multiplicativeoperator; }
	 
		public MultiplicativeoperatorContext() { }
		public void copyFrom(MultiplicativeoperatorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Operator_andContext extends MultiplicativeoperatorContext {
		public TerminalNode AND() { return getToken(PascalParser.AND, 0); }
		public Operator_andContext(MultiplicativeoperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_starContext extends MultiplicativeoperatorContext {
		public TerminalNode STAR() { return getToken(PascalParser.STAR, 0); }
		public Operator_starContext(MultiplicativeoperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_modContext extends MultiplicativeoperatorContext {
		public TerminalNode MOD() { return getToken(PascalParser.MOD, 0); }
		public Operator_modContext(MultiplicativeoperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_slashContext extends MultiplicativeoperatorContext {
		public TerminalNode SLASH() { return getToken(PascalParser.SLASH, 0); }
		public Operator_slashContext(MultiplicativeoperatorContext ctx) { copyFrom(ctx); }
	}
	public static class Operator_divContext extends MultiplicativeoperatorContext {
		public TerminalNode DIV() { return getToken(PascalParser.DIV, 0); }
		public Operator_divContext(MultiplicativeoperatorContext ctx) { copyFrom(ctx); }
	}

	public final MultiplicativeoperatorContext multiplicativeoperator() throws RecognitionException {
		MultiplicativeoperatorContext _localctx = new MultiplicativeoperatorContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_multiplicativeoperator);
		try {
			setState(584);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STAR:
				_localctx = new Operator_starContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(579);
				match(STAR);
				}
				break;
			case SLASH:
				_localctx = new Operator_slashContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				match(SLASH);
				}
				break;
			case DIV:
				_localctx = new Operator_divContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(581);
				match(DIV);
				}
				break;
			case MOD:
				_localctx = new Operator_modContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(582);
				match(MOD);
				}
				break;
			case AND:
				_localctx = new Operator_andContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(583);
				match(AND);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SignedFactorContext extends ParserRuleContext {
		public SignedFactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signedFactor; }
	 
		public SignedFactorContext() { }
		public void copyFrom(SignedFactorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simple_term_signedFactorContext extends SignedFactorContext {
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(PascalParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(PascalParser.MINUS, 0); }
		public Expr_simple_term_signedFactorContext(SignedFactorContext ctx) { copyFrom(ctx); }
	}

	public final SignedFactorContext signedFactor() throws RecognitionException {
		SignedFactorContext _localctx = new SignedFactorContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_signedFactor);
		int _la;
		try {
			_localctx = new Expr_simple_term_signedFactorContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(587);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(586);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(589);
			factor();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FactorContext extends ParserRuleContext {
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
	 
		public FactorContext() { }
		public void copyFrom(FactorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simple_term_signedFactor_constContext extends FactorContext {
		public UnsignedConstantContext unsignedConstant() {
			return getRuleContext(UnsignedConstantContext.class,0);
		}
		public Expr_simple_term_signedFactor_constContext(FactorContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_boolContext extends FactorContext {
		public Bool_Context bool_() {
			return getRuleContext(Bool_Context.class,0);
		}
		public Expr_simple_term_signedFactor_boolContext(FactorContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_varContext extends FactorContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public Expr_simple_term_signedFactor_varContext(FactorContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_funcContext extends FactorContext {
		public FunctionDesignatorContext functionDesignator() {
			return getRuleContext(FunctionDesignatorContext.class,0);
		}
		public Expr_simple_term_signedFactor_funcContext(FactorContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_notContext extends FactorContext {
		public TerminalNode NOT() { return getToken(PascalParser.NOT, 0); }
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public Expr_simple_term_signedFactor_notContext(FactorContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_exprContext extends FactorContext {
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public Expr_simple_term_signedFactor_exprContext(FactorContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_setContext extends FactorContext {
		public Set_Context set_() {
			return getRuleContext(Set_Context.class,0);
		}
		public Expr_simple_term_signedFactor_setContext(FactorContext ctx) { copyFrom(ctx); }
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_factor);
		try {
			setState(602);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				_localctx = new Expr_simple_term_signedFactor_varContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(591);
				variable();
				}
				break;
			case 2:
				_localctx = new Expr_simple_term_signedFactor_exprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(592);
				match(LPAREN);
				setState(593);
				expression();
				setState(594);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new Expr_simple_term_signedFactor_funcContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(596);
				functionDesignator();
				}
				break;
			case 4:
				_localctx = new Expr_simple_term_signedFactor_constContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(597);
				unsignedConstant();
				}
				break;
			case 5:
				_localctx = new Expr_simple_term_signedFactor_setContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(598);
				set_();
				}
				break;
			case 6:
				_localctx = new Expr_simple_term_signedFactor_notContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(599);
				match(NOT);
				setState(600);
				factor();
				}
				break;
			case 7:
				_localctx = new Expr_simple_term_signedFactor_boolContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(601);
				bool_();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnsignedConstantContext extends ParserRuleContext {
		public UnsignedConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsignedConstant; }
	 
		public UnsignedConstantContext() { }
		public void copyFrom(UnsignedConstantContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simple_term_signedFactor_const_unsignedNumberContext extends UnsignedConstantContext {
		public UnsignedNumberContext unsignedNumber() {
			return getRuleContext(UnsignedNumberContext.class,0);
		}
		public Expr_simple_term_signedFactor_const_unsignedNumberContext(UnsignedConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_const_constChrContext extends UnsignedConstantContext {
		public ConstantChrContext constantChr() {
			return getRuleContext(ConstantChrContext.class,0);
		}
		public Expr_simple_term_signedFactor_const_constChrContext(UnsignedConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_const_strContext extends UnsignedConstantContext {
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public Expr_simple_term_signedFactor_const_strContext(UnsignedConstantContext ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_const_nilContext extends UnsignedConstantContext {
		public TerminalNode NIL() { return getToken(PascalParser.NIL, 0); }
		public Expr_simple_term_signedFactor_const_nilContext(UnsignedConstantContext ctx) { copyFrom(ctx); }
	}

	public final UnsignedConstantContext unsignedConstant() throws RecognitionException {
		UnsignedConstantContext _localctx = new UnsignedConstantContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_unsignedConstant);
		try {
			setState(608);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUM_INT:
			case NUM_REAL:
				_localctx = new Expr_simple_term_signedFactor_const_unsignedNumberContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(604);
				unsignedNumber();
				}
				break;
			case CHR:
				_localctx = new Expr_simple_term_signedFactor_const_constChrContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(605);
				constantChr();
				}
				break;
			case STRING_LITERAL:
				_localctx = new Expr_simple_term_signedFactor_const_strContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(606);
				string();
				}
				break;
			case NIL:
				_localctx = new Expr_simple_term_signedFactor_const_nilContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(607);
				match(NIL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDesignatorContext extends ParserRuleContext {
		public FunctionDesignatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDesignator; }
	 
		public FunctionDesignatorContext() { }
		public void copyFrom(FunctionDesignatorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simple_term_signedFactor_func_idContext extends FunctionDesignatorContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public Expr_simple_term_signedFactor_func_idContext(FunctionDesignatorContext ctx) { copyFrom(ctx); }
	}

	public final FunctionDesignatorContext functionDesignator() throws RecognitionException {
		FunctionDesignatorContext _localctx = new FunctionDesignatorContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_functionDesignator);
		try {
			_localctx = new Expr_simple_term_signedFactor_func_idContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(610);
			identifier();
			setState(611);
			match(LPAREN);
			setState(612);
			parameterList();
			setState(613);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterListContext extends ParserRuleContext {
		public ParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterList; }
	 
		public ParameterListContext() { }
		public void copyFrom(ParameterListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParaListContext extends ParameterListContext {
		public List<ActualParameterContext> actualParameter() {
			return getRuleContexts(ActualParameterContext.class);
		}
		public ActualParameterContext actualParameter(int i) {
			return getRuleContext(ActualParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public ParaListContext(ParameterListContext ctx) { copyFrom(ctx); }
	}

	public final ParameterListContext parameterList() throws RecognitionException {
		ParameterListContext _localctx = new ParameterListContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_parameterList);
		int _la;
		try {
			_localctx = new ParaListContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(615);
			actualParameter();
			setState(620);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(616);
				match(COMMA);
				setState(617);
				actualParameter();
				}
				}
				setState(622);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Set_Context extends ParserRuleContext {
		public Set_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_set_; }
	 
		public Set_Context() { }
		public void copyFrom(Set_Context ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Expr_simple_term_signedFactor_set_1Context extends Set_Context {
		public TerminalNode LBRACK() { return getToken(PascalParser.LBRACK, 0); }
		public ElementListContext elementList() {
			return getRuleContext(ElementListContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(PascalParser.RBRACK, 0); }
		public Expr_simple_term_signedFactor_set_1Context(Set_Context ctx) { copyFrom(ctx); }
	}
	public static class Expr_simple_term_signedFactor_set_2Context extends Set_Context {
		public TerminalNode LBRACK2() { return getToken(PascalParser.LBRACK2, 0); }
		public ElementListContext elementList() {
			return getRuleContext(ElementListContext.class,0);
		}
		public TerminalNode RBRACK2() { return getToken(PascalParser.RBRACK2, 0); }
		public Expr_simple_term_signedFactor_set_2Context(Set_Context ctx) { copyFrom(ctx); }
	}

	public final Set_Context set_() throws RecognitionException {
		Set_Context _localctx = new Set_Context(_ctx, getState());
		enterRule(_localctx, 136, RULE_set_);
		try {
			setState(631);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LBRACK:
				_localctx = new Expr_simple_term_signedFactor_set_1Context(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(623);
				match(LBRACK);
				setState(624);
				elementList();
				setState(625);
				match(RBRACK);
				}
				break;
			case LBRACK2:
				_localctx = new Expr_simple_term_signedFactor_set_2Context(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(627);
				match(LBRACK2);
				setState(628);
				elementList();
				setState(629);
				match(RBRACK2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementListContext extends ParserRuleContext {
		public ElementListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elementList; }
	 
		public ElementListContext() { }
		public void copyFrom(ElementListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class EleListContext extends ElementListContext {
		public List<ElementContext> element() {
			return getRuleContexts(ElementContext.class);
		}
		public ElementContext element(int i) {
			return getRuleContext(ElementContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public EleListContext(ElementListContext ctx) { copyFrom(ctx); }
	}
	public static class EleList_emptyContext extends ElementListContext {
		public EleList_emptyContext(ElementListContext ctx) { copyFrom(ctx); }
	}

	public final ElementListContext elementList() throws RecognitionException {
		ElementListContext _localctx = new ElementListContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_elementList);
		int _la;
		try {
			setState(642);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CHR:
			case NIL:
			case NOT:
			case PLUS:
			case MINUS:
			case LPAREN:
			case LBRACK:
			case LBRACK2:
			case AT:
			case TRUE:
			case FALSE:
			case IDENT:
			case STRING_LITERAL:
			case NUM_INT:
			case NUM_REAL:
				_localctx = new EleListContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(633);
				element();
				setState(638);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(634);
					match(COMMA);
					setState(635);
					element();
					}
					}
					setState(640);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case RBRACK:
			case RBRACK2:
				_localctx = new EleList_emptyContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementContext extends ParserRuleContext {
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
	 
		public ElementContext() { }
		public void copyFrom(ElementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class EleContext extends ElementContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode DOTDOT() { return getToken(PascalParser.DOTDOT, 0); }
		public EleContext(ElementContext ctx) { copyFrom(ctx); }
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_element);
		int _la;
		try {
			_localctx = new EleContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(644);
			expression();
			setState(647);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTDOT) {
				{
				setState(645);
				match(DOTDOT);
				setState(646);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProcedureStatementContext extends ParserRuleContext {
		public ProcedureStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_procedureStatement; }
	 
		public ProcedureStatementContext() { }
		public void copyFrom(ProcedureStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Statement_simple_procedure_proContext extends ProcedureStatementContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(PascalParser.LPAREN, 0); }
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalParser.RPAREN, 0); }
		public Statement_simple_procedure_proContext(ProcedureStatementContext ctx) { copyFrom(ctx); }
	}

	public final ProcedureStatementContext procedureStatement() throws RecognitionException {
		ProcedureStatementContext _localctx = new ProcedureStatementContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_procedureStatement);
		int _la;
		try {
			_localctx = new Statement_simple_procedure_proContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(649);
			identifier();
			setState(654);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LPAREN) {
				{
				setState(650);
				match(LPAREN);
				setState(651);
				parameterList();
				setState(652);
				match(RPAREN);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ActualParameterContext extends ParserRuleContext {
		public ActualParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actualParameter; }
	 
		public ActualParameterContext() { }
		public void copyFrom(ActualParameterContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParaList_actualContext extends ActualParameterContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public List<ParameterwidthContext> parameterwidth() {
			return getRuleContexts(ParameterwidthContext.class);
		}
		public ParameterwidthContext parameterwidth(int i) {
			return getRuleContext(ParameterwidthContext.class,i);
		}
		public ParaList_actualContext(ActualParameterContext ctx) { copyFrom(ctx); }
	}

	public final ActualParameterContext actualParameter() throws RecognitionException {
		ActualParameterContext _localctx = new ActualParameterContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_actualParameter);
		int _la;
		try {
			_localctx = new ParaList_actualContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(656);
			expression();
			setState(660);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COLON) {
				{
				{
				setState(657);
				parameterwidth();
				}
				}
				setState(662);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterwidthContext extends ParserRuleContext {
		public ParameterwidthContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterwidth; }
	 
		public ParameterwidthContext() { }
		public void copyFrom(ParameterwidthContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParaList_actual_widthContext extends ParameterwidthContext {
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParaList_actual_widthContext(ParameterwidthContext ctx) { copyFrom(ctx); }
	}

	public final ParameterwidthContext parameterwidth() throws RecognitionException {
		ParameterwidthContext _localctx = new ParameterwidthContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_parameterwidth);
		try {
			_localctx = new ParaList_actual_widthContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(663);
			match(COLON);
			setState(664);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EmptyStatement_Context extends ParserRuleContext {
		public EmptyStatement_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_emptyStatement_; }
	 
		public EmptyStatement_Context() { }
		public void copyFrom(EmptyStatement_Context ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class EmptyStateContext extends EmptyStatement_Context {
		public EmptyStateContext(EmptyStatement_Context ctx) { copyFrom(ctx); }
	}

	public final EmptyStatement_Context emptyStatement_() throws RecognitionException {
		EmptyStatement_Context _localctx = new EmptyStatement_Context(_ctx, getState());
		enterRule(_localctx, 148, RULE_emptyStatement_);
		try {
			_localctx = new EmptyStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Empty_Context extends ParserRuleContext {
		public Empty_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_empty_; }
	 
		public Empty_Context() { }
		public void copyFrom(Empty_Context ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class EmptyContext extends Empty_Context {
		public EmptyContext(Empty_Context ctx) { copyFrom(ctx); }
	}

	public final Empty_Context empty_() throws RecognitionException {
		Empty_Context _localctx = new Empty_Context(_ctx, getState());
		enterRule(_localctx, 150, RULE_empty_);
		try {
			_localctx = new EmptyContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StructuredStatementContext extends ParserRuleContext {
		public StructuredStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structuredStatement; }
	 
		public StructuredStatementContext() { }
		public void copyFrom(StructuredStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Statement_structured_conditionContext extends StructuredStatementContext {
		public ConditionalStatementContext conditionalStatement() {
			return getRuleContext(ConditionalStatementContext.class,0);
		}
		public Statement_structured_conditionContext(StructuredStatementContext ctx) { copyFrom(ctx); }
	}
	public static class Statement_structured_compoundContext extends StructuredStatementContext {
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public Statement_structured_compoundContext(StructuredStatementContext ctx) { copyFrom(ctx); }
	}
	public static class Statement_structured_repetetiveContext extends StructuredStatementContext {
		public RepetetiveStatementContext repetetiveStatement() {
			return getRuleContext(RepetetiveStatementContext.class,0);
		}
		public Statement_structured_repetetiveContext(StructuredStatementContext ctx) { copyFrom(ctx); }
	}
	public static class Statement_structured_withContext extends StructuredStatementContext {
		public WithStatementContext withStatement() {
			return getRuleContext(WithStatementContext.class,0);
		}
		public Statement_structured_withContext(StructuredStatementContext ctx) { copyFrom(ctx); }
	}

	public final StructuredStatementContext structuredStatement() throws RecognitionException {
		StructuredStatementContext _localctx = new StructuredStatementContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_structuredStatement);
		try {
			setState(674);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BEGIN:
				_localctx = new Statement_structured_compoundContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(670);
				compoundStatement();
				}
				break;
			case CASE:
			case IF:
				_localctx = new Statement_structured_conditionContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(671);
				conditionalStatement();
				}
				break;
			case FOR:
			case REPEAT:
			case WHILE:
				_localctx = new Statement_structured_repetetiveContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(672);
				repetetiveStatement();
				}
				break;
			case WITH:
				_localctx = new Statement_structured_withContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(673);
				withStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompoundStatementContext extends ParserRuleContext {
		public CompoundStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundStatement; }
	 
		public CompoundStatementContext() { }
		public void copyFrom(CompoundStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class CompoundStateContext extends CompoundStatementContext {
		public TerminalNode BEGIN() { return getToken(PascalParser.BEGIN, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalParser.END, 0); }
		public CompoundStateContext(CompoundStatementContext ctx) { copyFrom(ctx); }
	}

	public final CompoundStatementContext compoundStatement() throws RecognitionException {
		CompoundStatementContext _localctx = new CompoundStatementContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_compoundStatement);
		try {
			_localctx = new CompoundStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(676);
			match(BEGIN);
			setState(677);
			statements();
			setState(678);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementsContext extends ParserRuleContext {
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	 
		public StatementsContext() { }
		public void copyFrom(StatementsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StatesContext extends StatementsContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public StatesContext(StatementsContext ctx) { copyFrom(ctx); }
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_statements);
		int _la;
		try {
			_localctx = new StatesContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(680);
			statement();
			setState(685);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==SEMI) {
				{
				{
				setState(681);
				match(SEMI);
				setState(682);
				statement();
				}
				}
				setState(687);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionalStatementContext extends ParserRuleContext {
		public ConditionalStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionalStatement; }
	 
		public ConditionalStatementContext() { }
		public void copyFrom(ConditionalStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConditionalState_caseContext extends ConditionalStatementContext {
		public CaseStatementContext caseStatement() {
			return getRuleContext(CaseStatementContext.class,0);
		}
		public ConditionalState_caseContext(ConditionalStatementContext ctx) { copyFrom(ctx); }
	}
	public static class ConditionalState_ifContext extends ConditionalStatementContext {
		public IfStatementContext ifStatement() {
			return getRuleContext(IfStatementContext.class,0);
		}
		public ConditionalState_ifContext(ConditionalStatementContext ctx) { copyFrom(ctx); }
	}

	public final ConditionalStatementContext conditionalStatement() throws RecognitionException {
		ConditionalStatementContext _localctx = new ConditionalStatementContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_conditionalStatement);
		try {
			setState(690);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IF:
				_localctx = new ConditionalState_ifContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(688);
				ifStatement();
				}
				break;
			case CASE:
				_localctx = new ConditionalState_caseContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(689);
				caseStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfStatementContext extends ParserRuleContext {
		public IfStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStatement; }
	 
		public IfStatementContext() { }
		public void copyFrom(IfStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConditionalState_ifStateContext extends IfStatementContext {
		public TerminalNode IF() { return getToken(PascalParser.IF, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode THEN() { return getToken(PascalParser.THEN, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(PascalParser.ELSE, 0); }
		public ConditionalState_ifStateContext(IfStatementContext ctx) { copyFrom(ctx); }
	}

	public final IfStatementContext ifStatement() throws RecognitionException {
		IfStatementContext _localctx = new IfStatementContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_ifStatement);
		try {
			_localctx = new ConditionalState_ifStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(692);
			match(IF);
			setState(693);
			expression();
			setState(694);
			match(THEN);
			setState(695);
			statement();
			setState(698);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
			case 1:
				{
				setState(696);
				match(ELSE);
				setState(697);
				statement();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CaseStatementContext extends ParserRuleContext {
		public CaseStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caseStatement; }
	 
		public CaseStatementContext() { }
		public void copyFrom(CaseStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConditionalState_caseStateContext extends CaseStatementContext {
		public TerminalNode CASE() { return getToken(PascalParser.CASE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode OF() { return getToken(PascalParser.OF, 0); }
		public List<CaseListElementContext> caseListElement() {
			return getRuleContexts(CaseListElementContext.class);
		}
		public CaseListElementContext caseListElement(int i) {
			return getRuleContext(CaseListElementContext.class,i);
		}
		public TerminalNode END() { return getToken(PascalParser.END, 0); }
		public List<TerminalNode> SEMI() { return getTokens(PascalParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(PascalParser.SEMI, i);
		}
		public TerminalNode ELSE() { return getToken(PascalParser.ELSE, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public ConditionalState_caseStateContext(CaseStatementContext ctx) { copyFrom(ctx); }
	}

	public final CaseStatementContext caseStatement() throws RecognitionException {
		CaseStatementContext _localctx = new CaseStatementContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_caseStatement);
		int _la;
		try {
			int _alt;
			_localctx = new ConditionalState_caseStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(700);
			match(CASE);
			setState(701);
			expression();
			setState(702);
			match(OF);
			setState(703);
			caseListElement();
			setState(708);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(704);
					match(SEMI);
					setState(705);
					caseListElement();
					}
					} 
				}
				setState(710);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			}
			setState(714);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMI) {
				{
				setState(711);
				match(SEMI);
				setState(712);
				match(ELSE);
				setState(713);
				statements();
				}
			}

			setState(716);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CaseListElementContext extends ParserRuleContext {
		public CaseListElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caseListElement; }
	 
		public CaseListElementContext() { }
		public void copyFrom(CaseListElementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class CaseState_listContext extends CaseListElementContext {
		public ConstListContext constList() {
			return getRuleContext(ConstListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalParser.COLON, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public CaseState_listContext(CaseListElementContext ctx) { copyFrom(ctx); }
	}

	public final CaseListElementContext caseListElement() throws RecognitionException {
		CaseListElementContext _localctx = new CaseListElementContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_caseListElement);
		try {
			_localctx = new CaseState_listContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(718);
			constList();
			setState(719);
			match(COLON);
			setState(720);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RepetetiveStatementContext extends ParserRuleContext {
		public RepetetiveStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_repetetiveStatement; }
	 
		public RepetetiveStatementContext() { }
		public void copyFrom(RepetetiveStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class RepetetiveState_whileContext extends RepetetiveStatementContext {
		public WhileStatementContext whileStatement() {
			return getRuleContext(WhileStatementContext.class,0);
		}
		public RepetetiveState_whileContext(RepetetiveStatementContext ctx) { copyFrom(ctx); }
	}
	public static class RepetetivetState_repeatContext extends RepetetiveStatementContext {
		public RepeatStatementContext repeatStatement() {
			return getRuleContext(RepeatStatementContext.class,0);
		}
		public RepetetivetState_repeatContext(RepetetiveStatementContext ctx) { copyFrom(ctx); }
	}
	public static class RepetetivetState_forContext extends RepetetiveStatementContext {
		public ForStatementContext forStatement() {
			return getRuleContext(ForStatementContext.class,0);
		}
		public RepetetivetState_forContext(RepetetiveStatementContext ctx) { copyFrom(ctx); }
	}

	public final RepetetiveStatementContext repetetiveStatement() throws RecognitionException {
		RepetetiveStatementContext _localctx = new RepetetiveStatementContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_repetetiveStatement);
		try {
			setState(725);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case WHILE:
				_localctx = new RepetetiveState_whileContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(722);
				whileStatement();
				}
				break;
			case REPEAT:
				_localctx = new RepetetivetState_repeatContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(723);
				repeatStatement();
				}
				break;
			case FOR:
				_localctx = new RepetetivetState_forContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(724);
				forStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileStatementContext extends ParserRuleContext {
		public WhileStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileStatement; }
	 
		public WhileStatementContext() { }
		public void copyFrom(WhileStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class RepetetiveState_whileStateContext extends WhileStatementContext {
		public TerminalNode WHILE() { return getToken(PascalParser.WHILE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode DO() { return getToken(PascalParser.DO, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public RepetetiveState_whileStateContext(WhileStatementContext ctx) { copyFrom(ctx); }
	}

	public final WhileStatementContext whileStatement() throws RecognitionException {
		WhileStatementContext _localctx = new WhileStatementContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_whileStatement);
		try {
			_localctx = new RepetetiveState_whileStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(727);
			match(WHILE);
			setState(728);
			expression();
			setState(729);
			match(DO);
			setState(730);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RepeatStatementContext extends ParserRuleContext {
		public RepeatStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_repeatStatement; }
	 
		public RepeatStatementContext() { }
		public void copyFrom(RepeatStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class RepetetiveState_repeatStateContext extends RepeatStatementContext {
		public TerminalNode REPEAT() { return getToken(PascalParser.REPEAT, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(PascalParser.UNTIL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public RepetetiveState_repeatStateContext(RepeatStatementContext ctx) { copyFrom(ctx); }
	}

	public final RepeatStatementContext repeatStatement() throws RecognitionException {
		RepeatStatementContext _localctx = new RepeatStatementContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_repeatStatement);
		try {
			_localctx = new RepetetiveState_repeatStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(732);
			match(REPEAT);
			setState(733);
			statements();
			setState(734);
			match(UNTIL);
			setState(735);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForStatementContext extends ParserRuleContext {
		public ForStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forStatement; }
	 
		public ForStatementContext() { }
		public void copyFrom(ForStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class RepetetiveState_forStateContext extends ForStatementContext {
		public TerminalNode FOR() { return getToken(PascalParser.FOR, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(PascalParser.ASSIGN, 0); }
		public ForListContext forList() {
			return getRuleContext(ForListContext.class,0);
		}
		public TerminalNode DO() { return getToken(PascalParser.DO, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public RepetetiveState_forStateContext(ForStatementContext ctx) { copyFrom(ctx); }
	}

	public final ForStatementContext forStatement() throws RecognitionException {
		ForStatementContext _localctx = new ForStatementContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_forStatement);
		try {
			_localctx = new RepetetiveState_forStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(737);
			match(FOR);
			setState(738);
			identifier();
			setState(739);
			match(ASSIGN);
			setState(740);
			forList();
			setState(741);
			match(DO);
			setState(742);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForListContext extends ParserRuleContext {
		public ForListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forList; }
	 
		public ForListContext() { }
		public void copyFrom(ForListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ForState_listContext extends ForListContext {
		public InitialValueContext initialValue() {
			return getRuleContext(InitialValueContext.class,0);
		}
		public FinalValueContext finalValue() {
			return getRuleContext(FinalValueContext.class,0);
		}
		public TerminalNode TO() { return getToken(PascalParser.TO, 0); }
		public TerminalNode DOWNTO() { return getToken(PascalParser.DOWNTO, 0); }
		public ForState_listContext(ForListContext ctx) { copyFrom(ctx); }
	}

	public final ForListContext forList() throws RecognitionException {
		ForListContext _localctx = new ForListContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_forList);
		int _la;
		try {
			_localctx = new ForState_listContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(744);
			initialValue();
			setState(745);
			_la = _input.LA(1);
			if ( !(_la==DOWNTO || _la==TO) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(746);
			finalValue();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitialValueContext extends ParserRuleContext {
		public InitialValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initialValue; }
	 
		public InitialValueContext() { }
		public void copyFrom(InitialValueContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ForState_list_initContext extends InitialValueContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ForState_list_initContext(InitialValueContext ctx) { copyFrom(ctx); }
	}

	public final InitialValueContext initialValue() throws RecognitionException {
		InitialValueContext _localctx = new InitialValueContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_initialValue);
		try {
			_localctx = new ForState_list_initContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(748);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FinalValueContext extends ParserRuleContext {
		public FinalValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_finalValue; }
	 
		public FinalValueContext() { }
		public void copyFrom(FinalValueContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ForState_list_finalContext extends FinalValueContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ForState_list_finalContext(FinalValueContext ctx) { copyFrom(ctx); }
	}

	public final FinalValueContext finalValue() throws RecognitionException {
		FinalValueContext _localctx = new FinalValueContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_finalValue);
		try {
			_localctx = new ForState_list_finalContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(750);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WithStatementContext extends ParserRuleContext {
		public WithStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_withStatement; }
	 
		public WithStatementContext() { }
		public void copyFrom(WithStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class WithStateContext extends WithStatementContext {
		public TerminalNode WITH() { return getToken(PascalParser.WITH, 0); }
		public RecordVariableListContext recordVariableList() {
			return getRuleContext(RecordVariableListContext.class,0);
		}
		public TerminalNode DO() { return getToken(PascalParser.DO, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public WithStateContext(WithStatementContext ctx) { copyFrom(ctx); }
	}

	public final WithStatementContext withStatement() throws RecognitionException {
		WithStatementContext _localctx = new WithStatementContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_withStatement);
		try {
			_localctx = new WithStateContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(752);
			match(WITH);
			setState(753);
			recordVariableList();
			setState(754);
			match(DO);
			setState(755);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RecordVariableListContext extends ParserRuleContext {
		public RecordVariableListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_recordVariableList; }
	 
		public RecordVariableListContext() { }
		public void copyFrom(RecordVariableListContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class WithState_listContext extends RecordVariableListContext {
		public List<VariableContext> variable() {
			return getRuleContexts(VariableContext.class);
		}
		public VariableContext variable(int i) {
			return getRuleContext(VariableContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(PascalParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(PascalParser.COMMA, i);
		}
		public WithState_listContext(RecordVariableListContext ctx) { copyFrom(ctx); }
	}

	public final RecordVariableListContext recordVariableList() throws RecognitionException {
		RecordVariableListContext _localctx = new RecordVariableListContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_recordVariableList);
		int _la;
		try {
			_localctx = new WithState_listContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(757);
			variable();
			setState(762);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(758);
				match(COMMA);
				setState(759);
				variable();
				}
				}
				setState(764);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3P\u0300\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\3\2\3\2\5\2\u00bd"+
		"\n\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\5\3\u00c8\n\3\3\3\3\3\3\4\3\4"+
		"\3\5\3\5\3\5\3\5\3\5\7\5\u00d3\n\5\f\5\16\5\u00d6\13\5\3\5\3\5\3\6\3\6"+
		"\3\6\3\6\6\6\u00de\n\6\r\6\16\6\u00df\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b"+
		"\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u00f5\n\t\3\n\3\n\5\n"+
		"\u00f9\n\n\3\13\3\13\3\f\3\f\3\r\3\r\5\r\u0101\n\r\3\16\3\16\5\16\u0105"+
		"\n\16\3\17\3\17\3\20\3\20\3\20\3\20\6\20\u010d\n\20\r\20\16\20\u010e\3"+
		"\21\3\21\3\21\3\21\5\21\u0115\n\21\3\22\3\22\5\22\u0119\n\22\3\23\3\23"+
		"\3\23\5\23\u011e\n\23\3\24\3\24\3\24\3\24\5\24\u0124\n\24\3\25\3\25\3"+
		"\25\3\25\3\26\3\26\3\26\3\26\3\27\3\27\5\27\u0130\n\27\3\30\3\30\3\30"+
		"\5\30\u0135\n\30\3\31\3\31\3\31\3\31\5\31\u013b\n\31\3\32\3\32\3\32\3"+
		"\32\5\32\u0141\n\32\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33"+
		"\3\33\3\33\3\33\3\33\3\33\3\33\5\33\u0153\n\33\3\34\3\34\3\34\7\34\u0158"+
		"\n\34\f\34\16\34\u015b\13\34\3\35\3\35\3\36\3\36\3\37\3\37\5\37\u0163"+
		"\n\37\3\37\3\37\3 \3 \3 \5 \u016a\n \3 \5 \u016d\n \3!\3!\3!\7!\u0172"+
		"\n!\f!\16!\u0175\13!\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\7#\u0181\n#\f#"+
		"\16#\u0184\13#\3$\3$\3$\3$\3$\5$\u018b\n$\3%\3%\3%\3%\3%\3%\3&\3&\3&\3"+
		"&\3\'\3\'\3(\3(\3(\3(\5(\u019d\n(\3)\3)\3)\3*\3*\3*\3*\7*\u01a6\n*\f*"+
		"\16*\u01a9\13*\3*\3*\3+\3+\3+\3+\3,\3,\3,\3-\3-\5-\u01b6\n-\3.\3.\3.\5"+
		".\u01bb\n.\3.\3.\3.\3/\3/\3/\3/\7/\u01c4\n/\f/\16/\u01c7\13/\3/\3/\3\60"+
		"\3\60\3\60\3\60\3\60\3\60\3\60\5\60\u01d2\n\60\3\61\3\61\3\61\3\61\3\62"+
		"\3\62\3\62\7\62\u01db\n\62\f\62\16\62\u01de\13\62\3\63\3\63\3\63\7\63"+
		"\u01e3\n\63\f\63\16\63\u01e6\13\63\3\64\3\64\3\64\5\64\u01eb\n\64\3\64"+
		"\3\64\3\64\3\64\3\64\3\65\3\65\3\66\3\66\3\67\3\67\5\67\u01f8\n\67\38"+
		"\38\38\58\u01fd\n8\39\39\39\39\3:\3:\3:\5:\u0206\n:\3:\3:\3:\3:\7:\u020c"+
		"\n:\f:\16:\u020f\13:\3:\3:\3:\3:\3:\3:\7:\u0217\n:\f:\16:\u021a\13:\3"+
		":\3:\3:\3:\3:\7:\u0221\n:\f:\16:\u0224\13:\3;\3;\3;\3;\5;\u022a\n;\3<"+
		"\3<\3<\3<\3<\3<\3<\5<\u0233\n<\3=\3=\3=\3=\5=\u0239\n=\3>\3>\3>\5>\u023e"+
		"\n>\3?\3?\3?\3?\5?\u0244\n?\3@\3@\3@\3@\3@\5@\u024b\n@\3A\5A\u024e\nA"+
		"\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\3B\5B\u025d\nB\3C\3C\3C\3C\5C\u0263"+
		"\nC\3D\3D\3D\3D\3D\3E\3E\3E\7E\u026d\nE\fE\16E\u0270\13E\3F\3F\3F\3F\3"+
		"F\3F\3F\3F\5F\u027a\nF\3G\3G\3G\7G\u027f\nG\fG\16G\u0282\13G\3G\5G\u0285"+
		"\nG\3H\3H\3H\5H\u028a\nH\3I\3I\3I\3I\3I\5I\u0291\nI\3J\3J\7J\u0295\nJ"+
		"\fJ\16J\u0298\13J\3K\3K\3K\3L\3L\3M\3M\3N\3N\3N\3N\5N\u02a5\nN\3O\3O\3"+
		"O\3O\3P\3P\3P\7P\u02ae\nP\fP\16P\u02b1\13P\3Q\3Q\5Q\u02b5\nQ\3R\3R\3R"+
		"\3R\3R\3R\5R\u02bd\nR\3S\3S\3S\3S\3S\3S\7S\u02c5\nS\fS\16S\u02c8\13S\3"+
		"S\3S\3S\5S\u02cd\nS\3S\3S\3T\3T\3T\3T\3U\3U\3U\5U\u02d8\nU\3V\3V\3V\3"+
		"V\3V\3W\3W\3W\3W\3W\3X\3X\3X\3X\3X\3X\3X\3Y\3Y\3Y\3Y\3Z\3Z\3[\3[\3\\\3"+
		"\\\3\\\3\\\3\\\3]\3]\3]\7]\u02fb\n]\f]\16]\u02fe\13]\3]\2\2^\2\4\6\b\n"+
		"\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\"+
		"^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090"+
		"\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8"+
		"\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\2\5\7\2\6\6\b\b\25\25"+
		"\36\36FF\3\2)*\4\2\r\r##\2\u0309\2\u00ba\3\2\2\2\4\u00c1\3\2\2\2\6\u00cb"+
		"\3\2\2\2\b\u00d4\3\2\2\2\n\u00d9\3\2\2\2\f\u00e1\3\2\2\2\16\u00e5\3\2"+
		"\2\2\20\u00f4\3\2\2\2\22\u00f8\3\2\2\2\24\u00fa\3\2\2\2\26\u00fc\3\2\2"+
		"\2\30\u0100\3\2\2\2\32\u0104\3\2\2\2\34\u0106\3\2\2\2\36\u0108\3\2\2\2"+
		" \u0110\3\2\2\2\"\u0116\3\2\2\2$\u011d\3\2\2\2&\u0123\3\2\2\2(\u0125\3"+
		"\2\2\2*\u0129\3\2\2\2,\u012f\3\2\2\2.\u0134\3\2\2\2\60\u013a\3\2\2\2\62"+
		"\u013c\3\2\2\2\64\u0152\3\2\2\2\66\u0154\3\2\2\28\u015c\3\2\2\2:\u015e"+
		"\3\2\2\2<\u0160\3\2\2\2>\u016c\3\2\2\2@\u016e\3\2\2\2B\u0176\3\2\2\2D"+
		"\u017a\3\2\2\2F\u018a\3\2\2\2H\u018c\3\2\2\2J\u0192\3\2\2\2L\u0196\3\2"+
		"\2\2N\u019c\3\2\2\2P\u019e\3\2\2\2R\u01a1\3\2\2\2T\u01ac\3\2\2\2V\u01b0"+
		"\3\2\2\2X\u01b5\3\2\2\2Z\u01b7\3\2\2\2\\\u01bf\3\2\2\2^\u01d1\3\2\2\2"+
		"`\u01d3\3\2\2\2b\u01d7\3\2\2\2d\u01df\3\2\2\2f\u01e7\3\2\2\2h\u01f1\3"+
		"\2\2\2j\u01f3\3\2\2\2l\u01f7\3\2\2\2n\u01fc\3\2\2\2p\u01fe\3\2\2\2r\u0205"+
		"\3\2\2\2t\u0225\3\2\2\2v\u0232\3\2\2\2x\u0234\3\2\2\2z\u023d\3\2\2\2|"+
		"\u023f\3\2\2\2~\u024a\3\2\2\2\u0080\u024d\3\2\2\2\u0082\u025c\3\2\2\2"+
		"\u0084\u0262\3\2\2\2\u0086\u0264\3\2\2\2\u0088\u0269\3\2\2\2\u008a\u0279"+
		"\3\2\2\2\u008c\u0284\3\2\2\2\u008e\u0286\3\2\2\2\u0090\u028b\3\2\2\2\u0092"+
		"\u0292\3\2\2\2\u0094\u0299\3\2\2\2\u0096\u029c\3\2\2\2\u0098\u029e\3\2"+
		"\2\2\u009a\u02a4\3\2\2\2\u009c\u02a6\3\2\2\2\u009e\u02aa\3\2\2\2\u00a0"+
		"\u02b4\3\2\2\2\u00a2\u02b6\3\2\2\2\u00a4\u02be\3\2\2\2\u00a6\u02d0\3\2"+
		"\2\2\u00a8\u02d7\3\2\2\2\u00aa\u02d9\3\2\2\2\u00ac\u02de\3\2\2\2\u00ae"+
		"\u02e3\3\2\2\2\u00b0\u02ea\3\2\2\2\u00b2\u02ee\3\2\2\2\u00b4\u02f0\3\2"+
		"\2\2\u00b6\u02f2\3\2\2\2\u00b8\u02f7\3\2\2\2\u00ba\u00bc\5\4\3\2\u00bb"+
		"\u00bd\7D\2\2\u00bc\u00bb\3\2\2\2\u00bc\u00bd\3\2\2\2\u00bd\u00be\3\2"+
		"\2\2\u00be\u00bf\5\b\5\2\u00bf\u00c0\7?\2\2\u00c0\3\3\2\2\2\u00c1\u00c2"+
		"\7\35\2\2\u00c2\u00c7\5\6\4\2\u00c3\u00c4\7\67\2\2\u00c4\u00c5\5b\62\2"+
		"\u00c5\u00c6\78\2\2\u00c6\u00c8\3\2\2\2\u00c7\u00c3\3\2\2\2\u00c7\u00c8"+
		"\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\u00ca\7/\2\2\u00ca\5\3\2\2\2\u00cb"+
		"\u00cc\7M\2\2\u00cc\7\3\2\2\2\u00cd\u00d3\5\n\6\2\u00ce\u00d3\5\36\20"+
		"\2\u00cf\u00d3\5R*\2\u00d0\u00d3\5V,\2\u00d1\u00d3\7G\2\2\u00d2\u00cd"+
		"\3\2\2\2\u00d2\u00ce\3\2\2\2\u00d2\u00cf\3\2\2\2\u00d2\u00d0\3\2\2\2\u00d2"+
		"\u00d1\3\2\2\2\u00d3\u00d6\3\2\2\2\u00d4\u00d2\3\2\2\2\u00d4\u00d5\3\2"+
		"\2\2\u00d5\u00d7\3\2\2\2\u00d6\u00d4\3\2\2\2\u00d7\u00d8\5\u009cO\2\u00d8"+
		"\t\3\2\2\2\u00d9\u00dd\7\n\2\2\u00da\u00db\5\f\7\2\u00db\u00dc\7/\2\2"+
		"\u00dc\u00de\3\2\2\2\u00dd\u00da\3\2\2\2\u00de\u00df\3\2\2\2\u00df\u00dd"+
		"\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0\13\3\2\2\2\u00e1\u00e2\5\6\4\2\u00e2"+
		"\u00e3\7\61\2\2\u00e3\u00e4\5\20\t\2\u00e4\r\3\2\2\2\u00e5\u00e6\7\t\2"+
		"\2\u00e6\u00e7\7\67\2\2\u00e7\u00e8\5\24\13\2\u00e8\u00e9\78\2\2\u00e9"+
		"\17\3\2\2\2\u00ea\u00f5\5\22\n\2\u00eb\u00ec\5\30\r\2\u00ec\u00ed\5\22"+
		"\n\2\u00ed\u00f5\3\2\2\2\u00ee\u00f5\5\6\4\2\u00ef\u00f0\5\30\r\2\u00f0"+
		"\u00f1\5\6\4\2\u00f1\u00f5\3\2\2\2\u00f2\u00f5\5\34\17\2\u00f3\u00f5\5"+
		"\16\b\2\u00f4\u00ea\3\2\2\2\u00f4\u00eb\3\2\2\2\u00f4\u00ee\3\2\2\2\u00f4"+
		"\u00ef\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f4\u00f3\3\2\2\2\u00f5\21\3\2\2"+
		"\2\u00f6\u00f9\5\24\13\2\u00f7\u00f9\5\26\f\2\u00f8\u00f6\3\2\2\2\u00f8"+
		"\u00f7\3\2\2\2\u00f9\23\3\2\2\2\u00fa\u00fb\7O\2\2\u00fb\25\3\2\2\2\u00fc"+
		"\u00fd\7P\2\2\u00fd\27\3\2\2\2\u00fe\u0101\7)\2\2\u00ff\u0101\7*\2\2\u0100"+
		"\u00fe\3\2\2\2\u0100\u00ff\3\2\2\2\u0101\31\3\2\2\2\u0102\u0105\7H\2\2"+
		"\u0103\u0105\7I\2\2\u0104\u0102\3\2\2\2\u0104\u0103\3\2\2\2\u0105\33\3"+
		"\2\2\2\u0106\u0107\7N\2\2\u0107\35\3\2\2\2\u0108\u010c\7$\2\2\u0109\u010a"+
		"\5 \21\2\u010a\u010b\7/\2\2\u010b\u010d\3\2\2\2\u010c\u0109\3\2\2\2\u010d"+
		"\u010e\3\2\2\2\u010e\u010c\3\2\2\2\u010e\u010f\3\2\2\2\u010f\37\3\2\2"+
		"\2\u0110\u0111\5\6\4\2\u0111\u0114\7\61\2\2\u0112\u0115\5$\23\2\u0113"+
		"\u0115\5\"\22\2\u0114\u0112\3\2\2\2\u0114\u0113\3\2\2\2\u0115!\3\2\2\2"+
		"\u0116\u0118\7\34\2\2\u0117\u0119\5\\/\2\u0118\u0117\3\2\2\2\u0118\u0119"+
		"\3\2\2\2\u0119#\3\2\2\2\u011a\u011e\5&\24\2\u011b\u011e\5.\30\2\u011c"+
		"\u011e\5P)\2\u011d\u011a\3\2\2\2\u011d\u011b\3\2\2\2\u011d\u011c\3\2\2"+
		"\2\u011e%\3\2\2\2\u011f\u0124\5(\25\2\u0120\u0124\5*\26\2\u0121\u0124"+
		"\5,\27\2\u0122\u0124\5\62\32\2\u0123\u011f\3\2\2\2\u0123\u0120\3\2\2\2"+
		"\u0123\u0121\3\2\2\2\u0123\u0122\3\2\2\2\u0124\'\3\2\2\2\u0125\u0126\7"+
		"\67\2\2\u0126\u0127\5b\62\2\u0127\u0128\78\2\2\u0128)\3\2\2\2\u0129\u012a"+
		"\5\20\t\2\u012a\u012b\7@\2\2\u012b\u012c\5\20\t\2\u012c+\3\2\2\2\u012d"+
		"\u0130\5\6\4\2\u012e\u0130\t\2\2\2\u012f\u012d\3\2\2\2\u012f\u012e\3\2"+
		"\2\2\u0130-\3\2\2\2\u0131\u0132\7\33\2\2\u0132\u0135\5\60\31\2\u0133\u0135"+
		"\5\60\31\2\u0134\u0131\3\2\2\2\u0134\u0133\3\2\2\2\u0135/\3\2\2\2\u0136"+
		"\u013b\5\64\33\2\u0137\u013b\5<\37\2\u0138\u013b\5J&\2\u0139\u013b\5N"+
		"(\2\u013a\u0136\3\2\2\2\u013a\u0137\3\2\2\2\u013a\u0138\3\2\2\2\u013a"+
		"\u0139\3\2\2\2\u013b\61\3\2\2\2\u013c\u013d\7F\2\2\u013d\u0140\79\2\2"+
		"\u013e\u0141\5\6\4\2\u013f\u0141\5\22\n\2\u0140\u013e\3\2\2\2\u0140\u013f"+
		"\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0143\7;\2\2\u0143\63\3\2\2\2\u0144"+
		"\u0145\7\4\2\2\u0145\u0146\79\2\2\u0146\u0147\5\66\34\2\u0147\u0148\7"+
		";\2\2\u0148\u0149\7\31\2\2\u0149\u014a\5:\36\2\u014a\u0153\3\2\2\2\u014b"+
		"\u014c\7\4\2\2\u014c\u014d\7:\2\2\u014d\u014e\5\66\34\2\u014e\u014f\7"+
		"<\2\2\u014f\u0150\7\31\2\2\u0150\u0151\5:\36\2\u0151\u0153\3\2\2\2\u0152"+
		"\u0144\3\2\2\2\u0152\u014b\3\2\2\2\u0153\65\3\2\2\2\u0154\u0159\58\35"+
		"\2\u0155\u0156\7.\2\2\u0156\u0158\58\35\2\u0157\u0155\3\2\2\2\u0158\u015b"+
		"\3\2\2\2\u0159\u0157\3\2\2\2\u0159\u015a\3\2\2\2\u015a\67\3\2\2\2\u015b"+
		"\u0159\3\2\2\2\u015c\u015d\5&\24\2\u015d9\3\2\2\2\u015e\u015f\5$\23\2"+
		"\u015f;\3\2\2\2\u0160\u0162\7\37\2\2\u0161\u0163\5> \2\u0162\u0161\3\2"+
		"\2\2\u0162\u0163\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0165\7\17\2\2\u0165"+
		"=\3\2\2\2\u0166\u0169\5@!\2\u0167\u0168\7/\2\2\u0168\u016a\5D#\2\u0169"+
		"\u0167\3\2\2\2\u0169\u016a\3\2\2\2\u016a\u016d\3\2\2\2\u016b\u016d\5D"+
		"#\2\u016c\u0166\3\2\2\2\u016c\u016b\3\2\2\2\u016d?\3\2\2\2\u016e\u0173"+
		"\5B\"\2\u016f\u0170\7/\2\2\u0170\u0172\5B\"\2\u0171\u016f\3\2\2\2\u0172"+
		"\u0175\3\2\2\2\u0173\u0171\3\2\2\2\u0173\u0174\3\2\2\2\u0174A\3\2\2\2"+
		"\u0175\u0173\3\2\2\2\u0176\u0177\5b\62\2\u0177\u0178\7\60\2\2\u0178\u0179"+
		"\5$\23\2\u0179C\3\2\2\2\u017a\u017b\7\7\2\2\u017b\u017c\5F$\2\u017c\u017d"+
		"\7\31\2\2\u017d\u0182\5H%\2\u017e\u017f\7/\2\2\u017f\u0181\5H%\2\u0180"+
		"\u017e\3\2\2\2\u0181\u0184\3\2\2\2\u0182\u0180\3\2\2\2\u0182\u0183\3\2"+
		"\2\2\u0183E\3\2\2\2\u0184\u0182\3\2\2\2\u0185\u0186\5\6\4\2\u0186\u0187"+
		"\7\60\2\2\u0187\u0188\5,\27\2\u0188\u018b\3\2\2\2\u0189\u018b\5,\27\2"+
		"\u018a\u0185\3\2\2\2\u018a\u0189\3\2\2\2\u018bG\3\2\2\2\u018c\u018d\5"+
		"d\63\2\u018d\u018e\7\60\2\2\u018e\u018f\7\67\2\2\u018f\u0190\5> \2\u0190"+
		"\u0191\78\2\2\u0191I\3\2\2\2\u0192\u0193\7!\2\2\u0193\u0194\7\31\2\2\u0194"+
		"\u0195\5L\'\2\u0195K\3\2\2\2\u0196\u0197\5&\24\2\u0197M\3\2\2\2\u0198"+
		"\u0199\7\20\2\2\u0199\u019a\7\31\2\2\u019a\u019d\5$\23\2\u019b\u019d\7"+
		"\20\2\2\u019c\u0198\3\2\2\2\u019c\u019b\3\2\2\2\u019dO\3\2\2\2\u019e\u019f"+
		"\7=\2\2\u019f\u01a0\5,\27\2\u01a0Q\3\2\2\2\u01a1\u01a2\7&\2\2\u01a2\u01a7"+
		"\5T+\2\u01a3\u01a4\7/\2\2\u01a4\u01a6\5T+\2\u01a5\u01a3\3\2\2\2\u01a6"+
		"\u01a9\3\2\2\2\u01a7\u01a5\3\2\2\2\u01a7\u01a8\3\2\2\2\u01a8\u01aa\3\2"+
		"\2\2\u01a9\u01a7\3\2\2\2\u01aa\u01ab\7/\2\2\u01abS\3\2\2\2\u01ac\u01ad"+
		"\5b\62\2\u01ad\u01ae\7\60\2\2\u01ae\u01af\5$\23\2\u01afU\3\2\2\2\u01b0"+
		"\u01b1\5X-\2\u01b1\u01b2\7/\2\2\u01b2W\3\2\2\2\u01b3\u01b6\5Z.\2\u01b4"+
		"\u01b6\5f\64\2\u01b5\u01b3\3\2\2\2\u01b5\u01b4\3\2\2\2\u01b6Y\3\2\2\2"+
		"\u01b7\u01b8\7\34\2\2\u01b8\u01ba\5\6\4\2\u01b9\u01bb\5\\/\2\u01ba\u01b9"+
		"\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01bd\7/\2\2\u01bd"+
		"\u01be\5\b\5\2\u01be[\3\2\2\2\u01bf\u01c0\7\67\2\2\u01c0\u01c5\5^\60\2"+
		"\u01c1\u01c2\7/\2\2\u01c2\u01c4\5^\60\2\u01c3\u01c1\3\2\2\2\u01c4\u01c7"+
		"\3\2\2\2\u01c5\u01c3\3\2\2\2\u01c5\u01c6\3\2\2\2\u01c6\u01c8\3\2\2\2\u01c7"+
		"\u01c5\3\2\2\2\u01c8\u01c9\78\2\2\u01c9]\3\2\2\2\u01ca\u01d2\5`\61\2\u01cb"+
		"\u01cc\7&\2\2\u01cc\u01d2\5`\61\2\u01cd\u01ce\7\22\2\2\u01ce\u01d2\5`"+
		"\61\2\u01cf\u01d0\7\34\2\2\u01d0\u01d2\5`\61\2\u01d1\u01ca\3\2\2\2\u01d1"+
		"\u01cb\3\2\2\2\u01d1\u01cd\3\2\2\2\u01d1\u01cf\3\2\2\2\u01d2_\3\2\2\2"+
		"\u01d3\u01d4\5b\62\2\u01d4\u01d5\7\60\2\2\u01d5\u01d6\5,\27\2\u01d6a\3"+
		"\2\2\2\u01d7\u01dc\5\6\4\2\u01d8\u01d9\7.\2\2\u01d9\u01db\5\6\4\2\u01da"+
		"\u01d8\3\2\2\2\u01db\u01de\3\2\2\2\u01dc\u01da\3\2\2\2\u01dc\u01dd\3\2"+
		"\2\2\u01ddc\3\2\2\2\u01de\u01dc\3\2\2\2\u01df\u01e4\5\20\t\2\u01e0\u01e1"+
		"\7.\2\2\u01e1\u01e3\5\20\t\2\u01e2\u01e0\3\2\2\2\u01e3\u01e6\3\2\2\2\u01e4"+
		"\u01e2\3\2\2\2\u01e4\u01e5\3\2\2\2\u01e5e\3\2\2\2\u01e6\u01e4\3\2\2\2"+
		"\u01e7\u01e8\7\22\2\2\u01e8\u01ea\5\6\4\2\u01e9\u01eb\5\\/\2\u01ea\u01e9"+
		"\3\2\2\2\u01ea\u01eb\3\2\2\2\u01eb\u01ec\3\2\2\2\u01ec\u01ed\7\60\2\2"+
		"\u01ed\u01ee\5h\65\2\u01ee\u01ef\7/\2\2\u01ef\u01f0\5\b\5\2\u01f0g\3\2"+
		"\2\2\u01f1\u01f2\5,\27\2\u01f2i\3\2\2\2\u01f3\u01f4\5l\67\2\u01f4k\3\2"+
		"\2\2\u01f5\u01f8\5n8\2\u01f6\u01f8\5\u009aN\2\u01f7\u01f5\3\2\2\2\u01f7"+
		"\u01f6\3\2\2\2\u01f8m\3\2\2\2\u01f9\u01fd\5p9\2\u01fa\u01fd\5\u0090I\2"+
		"\u01fb\u01fd\5\u0096L\2\u01fc\u01f9\3\2\2\2\u01fc\u01fa\3\2\2\2\u01fc"+
		"\u01fb\3\2\2\2\u01fdo\3\2\2\2\u01fe\u01ff\5r:\2\u01ff\u0200\7-\2\2\u0200"+
		"\u0201\5t;\2\u0201q\3\2\2\2\u0202\u0203\7>\2\2\u0203\u0206\5\6\4\2\u0204"+
		"\u0206\5\6\4\2\u0205\u0202\3\2\2\2\u0205\u0204\3\2\2\2\u0206\u0222\3\2"+
		"\2\2\u0207\u0208\79\2\2\u0208\u020d\5t;\2\u0209\u020a\7.\2\2\u020a\u020c"+
		"\5t;\2\u020b\u0209\3\2\2\2\u020c\u020f\3\2\2\2\u020d\u020b\3\2\2\2\u020d"+
		"\u020e\3\2\2\2\u020e\u0210\3\2\2\2\u020f\u020d\3\2\2\2\u0210\u0211\7;"+
		"\2\2\u0211\u0221\3\2\2\2\u0212\u0213\7:\2\2\u0213\u0218\5t;\2\u0214\u0215"+
		"\7.\2\2\u0215\u0217\5t;\2\u0216\u0214\3\2\2\2\u0217\u021a\3\2\2\2\u0218"+
		"\u0216\3\2\2\2\u0218\u0219\3\2\2\2\u0219\u021b\3\2\2\2\u021a\u0218\3\2"+
		"\2\2\u021b\u021c\7<\2\2\u021c\u0221\3\2\2\2\u021d\u021e\7?\2\2\u021e\u0221"+
		"\5\6\4\2\u021f\u0221\7=\2\2\u0220\u0207\3\2\2\2\u0220\u0212\3\2\2\2\u0220"+
		"\u021d\3\2\2\2\u0220\u021f\3\2\2\2\u0221\u0224\3\2\2\2\u0222\u0220\3\2"+
		"\2\2\u0222\u0223\3\2\2\2\u0223s\3\2\2\2\u0224\u0222\3\2\2\2\u0225\u0229"+
		"\5x=\2\u0226\u0227\5v<\2\u0227\u0228\5t;\2\u0228\u022a\3\2\2\2\u0229\u0226"+
		"\3\2\2\2\u0229\u022a\3\2\2\2\u022au\3\2\2\2\u022b\u0233\7\61\2\2\u022c"+
		"\u0233\7\62\2\2\u022d\u0233\7\63\2\2\u022e\u0233\7\64\2\2\u022f\u0233"+
		"\7\65\2\2\u0230\u0233\7\66\2\2\u0231\u0233\7\24\2\2\u0232\u022b\3\2\2"+
		"\2\u0232\u022c\3\2\2\2\u0232\u022d\3\2\2\2\u0232\u022e\3\2\2\2\u0232\u022f"+
		"\3\2\2\2\u0232\u0230\3\2\2\2\u0232\u0231\3\2\2\2\u0233w\3\2\2\2\u0234"+
		"\u0238\5|?\2\u0235\u0236\5z>\2\u0236\u0237\5x=\2\u0237\u0239\3\2\2\2\u0238"+
		"\u0235\3\2\2\2\u0238\u0239\3\2\2\2\u0239y\3\2\2\2\u023a\u023e\7)\2\2\u023b"+
		"\u023e\7*\2\2\u023c\u023e\7\32\2\2\u023d\u023a\3\2\2\2\u023d\u023b\3\2"+
		"\2\2\u023d\u023c\3\2\2\2\u023e{\3\2\2\2\u023f\u0243\5\u0080A\2\u0240\u0241"+
		"\5~@\2\u0241\u0242\5|?\2\u0242\u0244\3\2\2\2\u0243\u0240\3\2\2\2\u0243"+
		"\u0244\3\2\2\2\u0244}\3\2\2\2\u0245\u024b\7+\2\2\u0246\u024b\7,\2\2\u0247"+
		"\u024b\7\13\2\2\u0248\u024b\7\26\2\2\u0249\u024b\7\3\2\2\u024a\u0245\3"+
		"\2\2\2\u024a\u0246\3\2\2\2\u024a\u0247\3\2\2\2\u024a\u0248\3\2\2\2\u024a"+
		"\u0249\3\2\2\2\u024b\177\3\2\2\2\u024c\u024e\t\3\2\2\u024d\u024c\3\2\2"+
		"\2\u024d\u024e\3\2\2\2\u024e\u024f\3\2\2\2\u024f\u0250\5\u0082B\2\u0250"+
		"\u0081\3\2\2\2\u0251\u025d\5r:\2\u0252\u0253\7\67\2\2\u0253\u0254\5t;"+
		"\2\u0254\u0255\78\2\2\u0255\u025d\3\2\2\2\u0256\u025d\5\u0086D\2\u0257"+
		"\u025d\5\u0084C\2\u0258\u025d\5\u008aF\2\u0259\u025a\7\30\2\2\u025a\u025d"+
		"\5\u0082B\2\u025b\u025d\5\32\16\2\u025c\u0251\3\2\2\2\u025c\u0252\3\2"+
		"\2\2\u025c\u0256\3\2\2\2\u025c\u0257\3\2\2\2\u025c\u0258\3\2\2\2\u025c"+
		"\u0259\3\2\2\2\u025c\u025b\3\2\2\2\u025d\u0083\3\2\2\2\u025e\u0263\5\22"+
		"\n\2\u025f\u0263\5\16\b\2\u0260\u0263\5\34\17\2\u0261\u0263\7\27\2\2\u0262"+
		"\u025e\3\2\2\2\u0262\u025f\3\2\2\2\u0262\u0260\3\2\2\2\u0262\u0261\3\2"+
		"\2\2\u0263\u0085\3\2\2\2\u0264\u0265\5\6\4\2\u0265\u0266\7\67\2\2\u0266"+
		"\u0267\5\u0088E\2\u0267\u0268\78\2\2\u0268\u0087\3\2\2\2\u0269\u026e\5"+
		"\u0092J\2\u026a\u026b\7.\2\2\u026b\u026d\5\u0092J\2\u026c\u026a\3\2\2"+
		"\2\u026d\u0270\3\2\2\2\u026e\u026c\3\2\2\2\u026e\u026f\3\2\2\2\u026f\u0089"+
		"\3\2\2\2\u0270\u026e\3\2\2\2\u0271\u0272\79\2\2\u0272\u0273\5\u008cG\2"+
		"\u0273\u0274\7;\2\2\u0274\u027a\3\2\2\2\u0275\u0276\7:\2\2\u0276\u0277"+
		"\5\u008cG\2\u0277\u0278\7<\2\2\u0278\u027a\3\2\2\2\u0279\u0271\3\2\2\2"+
		"\u0279\u0275\3\2\2\2\u027a\u008b\3\2\2\2\u027b\u0280\5\u008eH\2\u027c"+
		"\u027d\7.\2\2\u027d\u027f\5\u008eH\2\u027e\u027c\3\2\2\2\u027f\u0282\3"+
		"\2\2\2\u0280\u027e\3\2\2\2\u0280\u0281\3\2\2\2\u0281\u0285\3\2\2\2\u0282"+
		"\u0280\3\2\2\2\u0283\u0285\3\2\2\2\u0284\u027b\3\2\2\2\u0284\u0283\3\2"+
		"\2\2\u0285\u008d\3\2\2\2\u0286\u0289\5t;\2\u0287\u0288\7@\2\2\u0288\u028a"+
		"\5t;\2\u0289\u0287\3\2\2\2\u0289\u028a\3\2\2\2\u028a\u008f\3\2\2\2\u028b"+
		"\u0290\5\6\4\2\u028c\u028d\7\67\2\2\u028d\u028e\5\u0088E\2\u028e\u028f"+
		"\78\2\2\u028f\u0291\3\2\2\2\u0290\u028c\3\2\2\2\u0290\u0291\3\2\2\2\u0291"+
		"\u0091\3\2\2\2\u0292\u0296\5t;\2\u0293\u0295\5\u0094K\2\u0294\u0293\3"+
		"\2\2\2\u0295\u0298\3\2\2\2\u0296\u0294\3\2\2\2\u0296\u0297\3\2\2\2\u0297"+
		"\u0093\3\2\2\2\u0298\u0296\3\2\2\2\u0299\u029a\7\60\2\2\u029a\u029b\5"+
		"t;\2\u029b\u0095\3\2\2\2\u029c\u029d\3\2\2\2\u029d\u0097\3\2\2\2\u029e"+
		"\u029f\3\2\2\2\u029f\u0099\3\2\2\2\u02a0\u02a5\5\u009cO\2\u02a1\u02a5"+
		"\5\u00a0Q\2\u02a2\u02a5\5\u00a8U\2\u02a3\u02a5\5\u00b6\\\2\u02a4\u02a0"+
		"\3\2\2\2\u02a4\u02a1\3\2\2\2\u02a4\u02a2\3\2\2\2\u02a4\u02a3\3\2\2\2\u02a5"+
		"\u009b\3\2\2\2\u02a6\u02a7\7\5\2\2\u02a7\u02a8\5\u009eP\2\u02a8\u02a9"+
		"\7\17\2\2\u02a9\u009d\3\2\2\2\u02aa\u02af\5j\66\2\u02ab\u02ac\7/\2\2\u02ac"+
		"\u02ae\5j\66\2\u02ad\u02ab\3\2\2\2\u02ae\u02b1\3\2\2\2\u02af\u02ad\3\2"+
		"\2\2\u02af\u02b0\3\2\2\2\u02b0\u009f\3\2\2\2\u02b1\u02af\3\2\2\2\u02b2"+
		"\u02b5\5\u00a2R\2\u02b3\u02b5\5\u00a4S\2\u02b4\u02b2\3\2\2\2\u02b4\u02b3"+
		"\3\2\2\2\u02b5\u00a1\3\2\2\2\u02b6\u02b7\7\23\2\2\u02b7\u02b8\5t;\2\u02b8"+
		"\u02b9\7\"\2\2\u02b9\u02bc\5j\66\2\u02ba\u02bb\7\16\2\2\u02bb\u02bd\5"+
		"j\66\2\u02bc\u02ba\3\2\2\2\u02bc\u02bd\3\2\2\2\u02bd\u00a3\3\2\2\2\u02be"+
		"\u02bf\7\7\2\2\u02bf\u02c0\5t;\2\u02c0\u02c1\7\31\2\2\u02c1\u02c6\5\u00a6"+
		"T\2\u02c2\u02c3\7/\2\2\u02c3\u02c5\5\u00a6T\2\u02c4\u02c2\3\2\2\2\u02c5"+
		"\u02c8\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c6\u02c7\3\2\2\2\u02c7\u02cc\3\2"+
		"\2\2\u02c8\u02c6\3\2\2\2\u02c9\u02ca\7/\2\2\u02ca\u02cb\7\16\2\2\u02cb"+
		"\u02cd\5\u009eP\2\u02cc\u02c9\3\2\2\2\u02cc\u02cd\3\2\2\2\u02cd\u02ce"+
		"\3\2\2\2\u02ce\u02cf\7\17\2\2\u02cf\u00a5\3\2\2\2\u02d0\u02d1\5d\63\2"+
		"\u02d1\u02d2\7\60\2\2\u02d2\u02d3\5j\66\2\u02d3\u00a7\3\2\2\2\u02d4\u02d8"+
		"\5\u00aaV\2\u02d5\u02d8\5\u00acW\2\u02d6\u02d8\5\u00aeX\2\u02d7\u02d4"+
		"\3\2\2\2\u02d7\u02d5\3\2\2\2\u02d7\u02d6\3\2\2\2\u02d8\u00a9\3\2\2\2\u02d9"+
		"\u02da\7\'\2\2\u02da\u02db\5t;\2\u02db\u02dc\7\f\2\2\u02dc\u02dd\5j\66"+
		"\2\u02dd\u00ab\3\2\2\2\u02de\u02df\7 \2\2\u02df\u02e0\5\u009eP\2\u02e0"+
		"\u02e1\7%\2\2\u02e1\u02e2\5t;\2\u02e2\u00ad\3\2\2\2\u02e3\u02e4\7\21\2"+
		"\2\u02e4\u02e5\5\6\4\2\u02e5\u02e6\7-\2\2\u02e6\u02e7\5\u00b0Y\2\u02e7"+
		"\u02e8\7\f\2\2\u02e8\u02e9\5j\66\2\u02e9\u00af\3\2\2\2\u02ea\u02eb\5\u00b2"+
		"Z\2\u02eb\u02ec\t\4\2\2\u02ec\u02ed\5\u00b4[\2\u02ed\u00b1\3\2\2\2\u02ee"+
		"\u02ef\5t;\2\u02ef\u00b3\3\2\2\2\u02f0\u02f1\5t;\2\u02f1\u00b5\3\2\2\2"+
		"\u02f2\u02f3\7(\2\2\u02f3\u02f4\5\u00b8]\2\u02f4\u02f5\7\f\2\2\u02f5\u02f6"+
		"\5j\66\2\u02f6\u00b7\3\2\2\2\u02f7\u02fc\5r:\2\u02f8\u02f9\7.\2\2\u02f9"+
		"\u02fb\5r:\2\u02fa\u02f8\3\2\2\2\u02fb\u02fe\3\2\2\2\u02fc\u02fa\3\2\2"+
		"\2\u02fc\u02fd\3\2\2\2\u02fd\u00b9\3\2\2\2\u02fe\u02fc\3\2\2\2D\u00bc"+
		"\u00c7\u00d2\u00d4\u00df\u00f4\u00f8\u0100\u0104\u010e\u0114\u0118\u011d"+
		"\u0123\u012f\u0134\u013a\u0140\u0152\u0159\u0162\u0169\u016c\u0173\u0182"+
		"\u018a\u019c\u01a7\u01b5\u01ba\u01c5\u01d1\u01dc\u01e4\u01ea\u01f7\u01fc"+
		"\u0205\u020d\u0218\u0220\u0222\u0229\u0232\u0238\u023d\u0243\u024a\u024d"+
		"\u025c\u0262\u026e\u0279\u0280\u0284\u0289\u0290\u0296\u02a4\u02af\u02b4"+
		"\u02bc\u02c6\u02cc\u02d7\u02fc";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}