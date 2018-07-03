%{
#include "helper.cpp"
#include "y.tab.h"
#include <stdlib.h>
char * xyz = "lkajdsflkjasdf";
int lineno = 1;
%}

%option yylineno
QUOTES		"'" 
QUOTES1 	\"
DIGIT 		[0-9]
STRING 		[a-zA-Z0-9]+
TEXT_NUMBERS [a-zA-Z0-9]
NUM 		{DIGIT}+
ID 			[a-z]{TEXT_NUMBERS}*
ID1			[A-Z]{TEXT_NUMBERS}*
VAR1		{ID}"["{NUM}"]"
FLOATCONST	{NUM}"."{NUM}
SUM 		"+"|"-"
MULT 		"*"|"/"
LOGICAL_OP 	"&"|"\|"
UNARY_OP 	"!"|"++"|"--"
COMPARATOR 	">"|"<"|">="|"<="|"=="|"!="

%%
"("  			{ yylval.Node = terminal_node("OPENPR","("  ); return OPENPR;}
")"				{ yylval.Node = terminal_node("CLOSEPR", ")" ); return CLOSEPR;	}
"{"				{ yylval.Node = terminal_node("OPENBR", "{" );  return OPENBR; 	}
"}"				{ yylval.Node = terminal_node("CLOSEBR", "}" );  return CLOSEBR;	}
"["				{ yylval.Node = terminal_node("OPENSQ", "[" ); return OPENSQ; 	}
"]"				{ yylval.Node = terminal_node("CLOSESQ", "]" ); return CLOSESQ;	}
"."				{ yylval.Node = terminal_node("DOT", "." ); return DOT; 	}
","				{ yylval.Node = terminal_node("COMMA", "," ); return COMMA; }
";"				{ yylval.Node = terminal_node("DEL", ";" ); return DEL;		}
":"				{ yylval.Node = terminal_node("COLON", ":" ); return COLON;	}
"="				{ yylval.Node = terminal_node("EQUAL", "=" ); return EQUAL; 	}
{NUM}			{ yylval.Node = terminal_node("NUM", string(yytext), INT1 ); return NUM;	}
{FLOATCONST}	{ yylval.Node = terminal_node("FLOAT_CONST", string(yytext), FLOAT1 ); return FLOAT_CONST;	}
{SUM}			{ yylval.Node = terminal_node("SUM", string(yytext) ); return SUM;		}
{MULT}			{ yylval.Node = terminal_node("MULT", string(yytext) ); return MULT; 	}
{UNARY_OP}		{ yylval.Node = terminal_node("UNARY_OP", string(yytext) ); return UNARY_OP;		}
{COMPARATOR}	{ yylval.Node = terminal_node("COMPARATOR", string(yytext) ); return COMPARATOR;}
"true"          { yylval.Node = terminal_node("BOOL_CONST","true"); return BOOL_CONST; }
"false"         { yylval.Node = terminal_node("BOOL_CONST","false"); return BOOL_CONST; }
"if"			{ yylval.Node = terminal_node("IF", "if" ); return IF;		}
"while"			{ yylval.Node = terminal_node("WHILE", "while" ); return WHILE;	}
"else"			{ yylval.Node = terminal_node("ELSE", "else" ); return ELSE;	}
"for"			{ yylval.Node = terminal_node("FOR", "for" ); return FOR;		}
"int"			{ yylval.Node = terminal_node("INT", "int" ); return INT;		}
"float"			{ yylval.Node = terminal_node("FLOAT", "float" ); return FLOAT; 	}
"bool"			{ yylval.Node = terminal_node("BOOL", "bool", BOOL1 ); return BOOL; 	}
"string"		{ yylval.Node = terminal_node("STRING", "string" ); return STRING; 	}
"void"			{ yylval.Node = terminal_node("VOID", "void" ); return VOID; 	}
"return"		{ yylval.Node = terminal_node("RETURN", "return" ); return RETURN; 	}
{ID}			{ yylval.Node = terminal_node("ID", string(yytext) ); return ID; 		}
{ID1}			{ yylval.Node = terminal_node("ID1", string(yytext) ); return ID1; 		}
\"{STRING}\"	{ yylval.Node = terminal_node("STRING_CONST", string(yytext), STRING1 ); return STRING_CONST;	}
{STRING}	{ yylval.Node = terminal_node("STRING_CONST", string(yytext), STRING1 ); return STRING_CONST;	}
{QUOTES}		{ yylval.Node = terminal_node("QUOTES", "'" ); return QUOTES;	}
{QUOTES1}		{ yylval.Node = terminal_node("QUOTES", "\"" ); return QUOTES;	}
%%

int yywrap (void) {return 1;}