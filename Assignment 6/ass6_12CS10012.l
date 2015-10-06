%{
	#include "ass6_12CS10012_translator.h"
	#include "y.tab.h"
	extern void yyerror(const char *);
	static void comment(void);
%}

letter						[A-Za-z_]
identifier					{letter}({letter}|{digit})*

digit						[0-9]
nonzero_digit				[1-9]
sign						[+-]
integer_constant			{nonzero_digit}{digit}*|[0]
exponent					[Ee]{sign}?{digit}+
floating_constant			({digit}*"."{digit}+|{digit}+"."){exponent}?|{digit}+{exponent}
escape_seq					\\['"\?\\abfnrtv]
char_const					"\'"([^'\\\n]|{escape_seq})"\'"
enumeration_constant		{identifier}
string_literal				"\""([^"\\\n]|{escape_seq})+"\""

multiline-comment	"/"\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/"
singleline-comment	"//".*
comment {multiline-comment}|{singleline-comment}
ws							[ \t\n]

%%

"auto"						{return(AUTO);}
"break"						{return(BREAK);}
"case"						{return(CASE);}
"char"						{return(CHAR);}
"const"						{return(CONST);}
"continue"					{return(CONTINUE);}
"default"					{return(DEFAULT);}
"do"						{return(DO);}
"double"					{return(DOUBLE);}
"else"						{return(ELSE);}
"enum"						{return(ENUM);}
"extern"					{return(EXTERN);}
"float"						{return(FLOAT);}
"for"						{return(FOR);}
"goto"						{return(GOTO);}
"if"						{return(IF);}
"inline"					{return(INLINE);}
"int"						{return(INT);}
"long"						{return(LONG);}
"register"					{return(REGISTER);}
"restrict"					{return(RESTRICT);}
"return"					{return(RETURN);}
"short"						{return(SHORT);}
"signed"					{return(SIGNED);}
"sizeof"					{return(SIZEOF);}
"static"					{return(STATIC);}
"struct"					{return(STRUCT);}
"switch"					{return(SWITCH);}
"typedef"					{return(TYPEDEF);}
"union"						{return(UNION);}
"unsigned"					{return(UNSIGNED);}
"void"						{return(VOID);}
"volatile"					{return(VOLATILE);}
"while"						{return(WHILE);}
"_Bool"						{return(BOOL);}
"_Complex"					{return(COMPLEX);}
"_Imaginary"				{return(IMAGINARY);}

{identifier}				{yylval.idAttr.name = new string(yytext);return(IDENTIFIER);}

{integer_constant}			{yylval.intval = atoi(yytext);return(INTEGER_CONSTANT);}
{floating_constant}			{yylval.floatval = atof(yytext);return(FLOATING_CONSTANT);}
{enumeration_constant}		{return(ENUMERATION_CONSTANT);}
{char_const}				{yylval.charval = yytext[1];return(CHAR_CONST);}

{string_literal}			{yylval.strval = new string(yytext);return(STRING_LITERAL);}

"["		      				{return('[');}
"]" 	     				{return(']');}
"("     	 				{return('(');}
")"      					{return(')');}
"{"      					{return('{');}
"}"      					{return('}');}
"."							{return('.');}
"->"						{return(POINTER);}
"++"						{return(INCREMENT);}
"--"						{return(DECREMENT);}
"&"							{return('&');}
"*"							{return('*');}
"+"							{return('+');}
"-"							{return('-');}
"~"							{return('~');}
"!"							{return('!');}
"/"							{return('/');}
"%"							{return('%');}
"<<"						{return(LEFT_SHIFT);}
">>"						{return(RIGHT_SHIFT);}
"<" 						{return('<');}
">"							{return('>');}
"<="						{return(LESS_EQUALS);}
">="						{return(GREATER_EQUALS);}
"=="						{return(EQUALS);}
"!="						{return(NOT_EQUALS);}
"^"							{return('^');}
"|"							{return('|');}
"&&"						{return(AND);}
"||"						{return(OR);}
"?"							{return('?');}
":"							{return(':');}
";"							{return(';');}
"..."						{return(ELLIPSIS);}
"="							{return('=');}
"*="						{return(MULTIPLY_ASSIGN);}
"/="						{return(DIVIDE_ASSIGN);}
"%="						{return(MODULO_ASSIGN);}
"+="						{return(ADD_ASSIGN);}
"-="						{return(SUBTRACT_ASSIGN);}
"<<="						{return(LEFT_SHIFT_ASSIGN);}
">>="						{return(RIGHT_SHIFT_ASSIGN);}
"&="						{return(AND_ASSIGN);}
"^="						{return(XOR_ASSIGN);}
"|="						{return(OR_ASSIGN);}
","							{return(',');}
"#"							{return('#');}

"//"[^\n]*					{}

{ws}						{}

%%
