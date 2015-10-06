/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass5_12CS10012.y" /* yacc.c:339  */

	#include "ass5_12CS10012_translator.h"
	void yyerror(const char*);
	extern int yylex(void);
	using namespace std;

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    ENUMERATION_CONSTANT = 298,
    CHAR_CONST = 299,
    STRING_LITERAL = 300,
    POINTER = 301,
    INCREMENT = 302,
    DECREMENT = 303,
    LEFT_SHIFT = 304,
    RIGHT_SHIFT = 305,
    LESS_EQUALS = 306,
    GREATER_EQUALS = 307,
    EQUALS = 308,
    NOT_EQUALS = 309,
    AND = 310,
    OR = 311,
    ELLIPSIS = 312,
    MULTIPLY_ASSIGN = 313,
    DIVIDE_ASSIGN = 314,
    MODULO_ASSIGN = 315,
    ADD_ASSIGN = 316,
    SUBTRACT_ASSIGN = 317,
    LEFT_SHIFT_ASSIGN = 318,
    RIGHT_SHIFT_ASSIGN = 319,
    AND_ASSIGN = 320,
    XOR_ASSIGN = 321,
    OR_ASSIGN = 322,
    SINGLE_LINE_COMMENT = 323,
    MULTI_LINE_COMMENT = 324,
    UNARY = 325
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define ENUMERATION_CONSTANT 298
#define CHAR_CONST 299
#define STRING_LITERAL 300
#define POINTER 301
#define INCREMENT 302
#define DECREMENT 303
#define LEFT_SHIFT 304
#define RIGHT_SHIFT 305
#define LESS_EQUALS 306
#define GREATER_EQUALS 307
#define EQUALS 308
#define NOT_EQUALS 309
#define AND 310
#define OR 311
#define ELLIPSIS 312
#define MULTIPLY_ASSIGN 313
#define DIVIDE_ASSIGN 314
#define MODULO_ASSIGN 315
#define ADD_ASSIGN 316
#define SUBTRACT_ASSIGN 317
#define LEFT_SHIFT_ASSIGN 318
#define RIGHT_SHIFT_ASSIGN 319
#define AND_ASSIGN 320
#define XOR_ASSIGN 321
#define OR_ASSIGN 322
#define SINGLE_LINE_COMMENT 323
#define MULTI_LINE_COMMENT 324
#define UNARY 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 9 "ass5_12CS10012.y" /* yacc.c:355  */

	int intval;
	float floatval;
	string *strval;
	char charval;
	idStruct idAttr;
	SymbolTable *ST;
	expStruct expAttr;
	list *nextlist;
	decStruct decAttr;
	arglistStruct argsAttr;
	int instr;

#line 267 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 282 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1010

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    74,    84,     2,
      76,    77,    72,    70,    83,    71,    80,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    94,
      87,    93,    88,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    90,    82,    85,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    71,    77,   110,   119,   128,   137,   138,
     143,   145,   148,   163,   188,   189,   192,   212,   232,   235,
     239,   245,   251,   255,   260,   263,   283,   303,   350,   351,
     353,   356,   359,   362,   365,   368,   372,   392,   396,   399,
     405,   411,   418,   421,   427,   435,   438,   443,   450,   453,
     461,   469,   477,   486,   489,   497,   507,   510,   516,   519,
     525,   528,   534,   537,   548,   551,   563,   566,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   596,
     599,   619,   623,   626,   632,   642,   648,   652,   653,   654,
     655,   657,   657,   660,   664,   666,   673,   679,   680,   681,
     682,   684,   687,   690,   691,   694,   695,   696,   699,   700,
     701,   702,   703,   704,   706,   709,   711,   712,   714,   715,
     716,   718,   722,   724,   725,   727,   728,   730,   731,   732,
     734,   736,   776,   779,   784,   802,   805,   830,   831,   832,
     833,   873,   905,   906,   908,   911,   915,   915,   918,   921,
     925,   926,   928,   931,   933,   936,   940,   943,   945,   946,
     948,   950,   953,   954,   956,   957,   959,   959,   962,   964,
     965,   967,   968,   971,   972,   975,   978,   981,   984,   988,
     989,   990,   992,   996,   999,  1003,  1006,  1011,  1014,  1018,
    1022,  1025,  1030,  1048,  1057,  1059,  1069,  1079,  1089,  1091,
    1092,  1093,  1094,  1109,  1110,  1112,  1113,  1115,  1141,  1141,
    1144,  1145
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "ENUMERATION_CONSTANT", "CHAR_CONST",
  "STRING_LITERAL", "POINTER", "INCREMENT", "DECREMENT", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_EQUALS", "GREATER_EQUALS", "EQUALS", "NOT_EQUALS",
  "AND", "OR", "ELLIPSIS", "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN",
  "MODULO_ASSIGN", "ADD_ASSIGN", "SUBTRACT_ASSIGN", "LEFT_SHIFT_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "'+'", "'-'", "'*'", "'/'",
  "'%'", "UNARY", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "'&'", "'~'", "'!'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "$accept", "M", "N", "primary_expression", "enumeration_constant",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_operator", "assignment_expression",
  "constant_expression", "expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      43,    45,    42,    47,    37,   325,    40,    41,    91,    93,
      46,   123,   125,    44,    38,   126,    33,    60,    62,    94,
     124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -279

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-279)))

#define YYTABLE_NINF -210

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     937,  -279,  -279,  -279,  -279,    -9,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,    45,   937,   937,  -279,   937,   937,   862,
    -279,  -279,   -21,   -16,    31,   -14,    18,  -279,   344,   -27,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,    34,  -279,
      38,    31,  -279,    38,   595,  -279,    45,    50,   937,  -279,
      38,    46,  -279,    26,    32,  -279,  -279,  -279,  -279,    49,
     661,  -279,  -279,  -279,  -279,  -279,   694,   694,  -279,  -279,
    -279,   576,   108,  -279,  -279,  -279,  -279,   120,   263,   713,
    -279,   100,    57,    97,    -6,   139,    54,    76,    79,   128,
     -39,  -279,  -279,  -279,   268,  -279,  -279,   102,   899,    40,
     713,  -279,   -24,   576,  -279,   576,  -279,  -279,  -279,   -63,
     971,  -279,   971,   125,   713,   135,   122,   595,  -279,   -45,
    -279,   157,  -279,  -279,   713,   713,   168,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,   713,  -279,
    -279,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,  -279,  -279,   121,
     127,   713,   133,   130,  -279,   143,   185,   152,   713,   155,
     156,   141,   151,  -279,  -279,  -279,  -279,   153,   154,  -279,
    -279,   145,  -279,  -279,  -279,  -279,  -279,    68,   160,   163,
     158,  -279,   159,    31,   746,    98,  -279,  -279,  -279,  -279,
     167,   169,  -279,   713,  -279,  -279,  -279,   642,   166,  -279,
    -279,    72,  -279,  -279,  -279,  -279,   165,   172,  -279,   -60,
    -279,  -279,  -279,  -279,  -279,   100,   100,    57,    57,    97,
      97,    97,    97,    -6,    -6,   139,    54,    76,   713,   713,
    -279,  -279,   161,  -279,   509,   509,   458,   164,   713,   170,
     713,  -279,   509,  -279,   382,  -279,  -279,  -279,  -279,   822,
     210,   713,   173,  -279,   175,   713,   178,   178,  -279,   108,
    -279,  -279,  -279,   595,   713,  -279,  -279,    79,   128,   713,
     509,  -279,   215,   713,   171,  -279,   151,  -279,   -10,   713,
    -279,  -279,  -279,  -279,  -279,   181,  -279,  -279,   182,   124,
    -279,  -279,   151,  -279,   186,   174,  -279,   189,   509,   151,
    -279,  -279,  -279,    75,   188,  -279,   713,   713,  -279,  -279,
     190,  -279,  -279,   713,   220,  -279,   509,  -279,   713,   151,
     509,   205,   251,   509,  -279,   223,  -279,  -279,   299,  -279,
     224,   713,  -279,  -279,  -279,   509,   237,  -279,  -279,   509,
    -279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   127,   107,   122,    97,   106,   130,   104,
     105,   100,   128,   103,   108,    98,   109,   101,   129,   110,
     111,   112,   206,   133,    92,    92,   113,    92,    92,     0,
     203,   205,   120,     0,   143,     0,    85,    93,    95,     0,
     132,    91,    87,    88,    89,    90,     1,   204,     0,   150,
     148,   142,    84,   133,     0,   210,   133,     0,   208,   134,
     133,   131,    10,   125,     0,   123,   149,   151,    94,    95,
       0,     4,     5,     6,     7,     8,     0,     0,    32,    33,
      31,     0,   167,    30,    34,    35,    11,    24,    36,     0,
      38,    42,    45,    48,    53,    56,    58,    60,    62,    64,
      66,    79,   161,    96,   184,   207,   211,     0,   147,   143,
       0,   118,     0,     0,    28,     0,    25,    26,    82,     0,
     117,   160,   117,     0,     0,     0,     0,     0,   166,     0,
     169,     0,    16,    17,    23,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    68,     0,    36,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     2,     0,
       0,     0,     0,     0,     2,     0,     0,     0,   191,     0,
       0,     4,   190,   187,   188,   173,   174,     0,     2,   185,
     175,     0,   176,   177,   178,   135,   158,   133,     0,     0,
     152,   154,   146,   143,   145,   142,    81,   126,   119,   124,
       0,     0,     9,     0,   116,   114,   115,     0,     0,   172,
     162,   167,   164,   168,   170,    15,    22,     0,    20,     0,
      14,    80,    39,    40,    41,    43,    44,    46,    47,    51,
      52,    49,    50,    54,    55,    57,    59,    61,     0,     0,
       2,   201,     0,   200,   191,   191,   191,     0,     0,     0,
       0,     2,   191,   182,   191,   189,   156,   141,   140,     0,
       0,     0,    31,   144,     0,     0,    29,     0,    83,   167,
      37,   171,   163,     0,     0,    13,    12,    63,    65,     0,
     191,   181,     0,   191,     0,   199,     3,   202,     0,     0,
     179,   186,   153,   155,   159,     0,   139,   136,     0,     0,
     165,    21,     3,   180,     0,     0,     2,     0,   191,     3,
     137,   138,    18,   167,     0,     2,   191,   191,     2,   194,
       0,    19,     2,     0,     0,     3,   191,     2,     0,     3,
     191,     0,   193,   191,    67,     0,   198,     2,     0,   195,
       0,   191,     2,   196,     3,   191,     0,   192,     2,   191,
     197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,  -138,  -278,  -279,  -279,  -279,  -279,  -279,   -68,  -279,
     -82,    56,    59,     3,    55,   177,   180,   176,    71,    82,
    -279,  -109,  -279,   -28,  -118,   -76,   -26,  -279,     0,   131,
    -279,   264,  -279,    -4,    69,   198,  -279,  -279,  -279,   221,
      21,  -279,   -20,  -279,  -279,   -99,  -279,  -279,   282,   225,
    -279,  -279,    66,  -279,    88,  -123,    58,  -210,  -279,  -279,
     207,  -211,  -279,   286,  -279,  -279,    84,  -279,  -156,  -279,
    -279,  -279,  -279,   317,  -279,  -279,  -279
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   248,   169,    86,    63,    87,   226,   227,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   148,   118,   207,   182,    22,    35,    56,    42,
      36,    37,    24,    25,   121,   215,    26,    33,    64,    65,
      27,    28,    69,    39,    61,    50,   274,   198,    40,    51,
     199,   200,   201,   202,   123,   103,   126,   127,   128,   129,
     130,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    29,    30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   206,   114,    38,   222,   119,   218,   150,   116,   117,
     204,   283,    55,    59,   212,   206,    62,   168,   317,   286,
     213,   149,   259,   213,    41,    41,   102,    41,    41,    23,
     249,    32,   106,   124,   324,   125,   255,   119,     3,   119,
     107,   330,   149,   291,   292,   158,   159,     3,   223,    60,
     264,   300,    -3,   252,    12,    49,   149,   341,   208,   229,
    -121,   345,   206,    12,   348,    48,    18,   318,   203,   232,
     233,   234,    67,   213,    62,    18,   356,   120,   183,   313,
      52,   160,   161,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   102,
     294,    53,   122,   149,   271,     3,   228,   329,   197,   120,
      34,   120,   289,   283,   111,   112,   120,    34,   120,   110,
     231,    12,   108,   299,   109,   342,   275,   154,   155,   346,
      49,   104,   349,    18,   122,   280,   122,   315,   164,   -86,
      34,   122,    54,   122,   357,  -157,   156,   157,   360,   149,
     124,  -157,   125,   124,   282,   125,    43,   331,    44,    45,
     310,   239,   240,   241,   242,   165,   131,   132,   133,   166,
     334,   335,   151,   152,   153,   219,   273,   266,   327,   195,
     149,   149,   296,   167,   298,   278,   124,   333,   125,   214,
     336,   214,   162,   163,   338,   354,   134,   225,   135,   343,
     136,   210,   217,   211,   220,   221,   322,   323,   230,   351,
     235,   236,   250,   312,   355,   237,   238,   243,   244,   256,
     359,   251,   254,   319,    49,   257,    67,   253,   258,   344,
     293,   260,   261,   262,   213,   263,  -183,   267,   183,   265,
     268,   269,   270,   305,   276,   281,   277,   308,   284,   285,
     304,   314,   306,   290,   307,   102,   311,   339,   295,   279,
     320,   321,   325,    -3,   297,   316,   328,   337,   326,   197,
     149,     1,   170,   171,     2,     3,   172,   173,   174,     4,
     332,     5,     6,     7,   175,   176,   177,     8,     9,    10,
      11,    12,   178,    13,    14,    70,    15,   340,   179,   347,
     350,    16,    17,    18,   180,    19,    20,    21,   181,    72,
      73,   352,    74,    75,   358,    76,    77,    68,   353,   287,
     216,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   288,    66,   209,   205,   303,   224,   309,    78,    79,
      80,   245,   247,   105,    81,   246,    47,     1,   301,   104,
       2,     3,    83,    84,    85,     4,   147,     5,     6,     7,
       0,     0,  -191,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     1,   170,   171,     2,     3,
     172,   173,   174,     4,     0,     5,     6,     7,   175,   176,
     177,     8,     9,    10,    11,    12,   178,    13,    14,    70,
      15,     0,   179,     0,     0,    16,    17,    18,   180,    19,
      20,    21,   181,    72,    73,  -209,    74,    75,     0,    76,
      77,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,     0,     0,     0,    81,     0,
       0,     1,     0,   104,     2,     3,    83,    84,    85,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,    70,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,    71,    72,
      73,     0,    74,    75,     0,    76,    77,     0,     0,     0,
       0,     0,     0,   170,   171,     0,     0,   172,   173,   174,
       0,     0,     0,     0,     0,   175,   176,   177,    78,    79,
      80,     0,     0,   178,    81,     0,    70,     0,     0,   179,
       0,     0,    83,    84,    85,   180,     0,     0,     0,   181,
      72,    73,     0,    74,    75,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,     2,     3,     0,    81,     0,     4,     0,     5,
     104,     7,     0,    83,    84,    85,     9,    10,     0,    12,
       0,    13,    14,    70,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,    71,    72,    73,     0,
      74,    75,    70,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,     0,    74,
      75,     0,    76,    77,     0,     0,    78,    79,    80,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
      83,    84,    85,     0,     0,    78,    79,    80,     0,    70,
       0,    81,     0,     0,     0,     0,    82,     0,     0,    83,
      84,    85,    71,    72,    73,     0,    74,    75,    70,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,     0,    74,    75,     0,    76,    77,
       0,     0,    78,    79,    80,     0,     0,     0,    81,     0,
       0,    70,     0,   279,     0,     0,    83,    84,    85,     0,
       0,    78,    79,    80,    71,    72,    73,   113,    74,    75,
      70,    76,    77,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    71,    72,    73,     0,    74,    75,     0,
      76,    77,     0,     0,    78,    79,    80,     0,     0,     0,
     115,     0,     0,    70,     0,     0,     0,     0,    83,    84,
      85,     0,     0,    78,    79,    80,    71,    72,    73,    81,
      74,    75,     0,    76,    77,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,   272,     0,
       0,     0,    81,     0,     0,     1,     0,     0,     2,     3,
      83,    84,    85,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,    46,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,   302,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,   196,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       0,     9,    10,     0,    12,     0,    13,    14,     0,     0,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21
};

static const yytype_int16 yycheck[] =
{
       0,   110,    70,    23,   127,    81,   124,    89,    76,    77,
     109,   221,    38,    40,    77,   124,    40,    56,   296,    79,
      83,    89,   178,    83,    24,    25,    54,    27,    28,    29,
     168,    40,    58,    78,   312,    80,   174,   113,     7,   115,
      60,   319,   110,   254,   255,    51,    52,     7,    93,    76,
     188,   262,    91,   171,    23,    34,   124,   335,    82,   135,
      81,   339,   171,    23,   342,    81,    35,    77,    28,   151,
     152,   153,    51,    83,    40,    35,   354,    81,   104,   290,
      94,    87,    88,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   127,
     256,    83,    81,   171,   203,     7,   134,   318,   108,   113,
      72,   115,   250,   323,    82,    83,   120,    72,   122,    93,
     148,    23,    76,   261,    78,   336,    28,    70,    71,   340,
     109,    81,   343,    35,   113,   217,   115,   293,    84,    94,
      72,   120,    93,   122,   355,    77,    49,    50,   359,   217,
      78,    83,    80,    78,    82,    80,    25,    82,    27,    28,
     283,   158,   159,   160,   161,    89,    46,    47,    48,    90,
     326,   327,    72,    73,    74,    40,   204,   197,   316,    77,
     248,   249,   258,    55,   260,   213,    78,   325,    80,   120,
     328,   122,    53,    54,   332,   351,    76,    40,    78,   337,
      80,   113,    77,   115,    82,    83,    82,    83,    40,   347,
     154,   155,    91,   289,   352,   156,   157,   162,   163,    76,
     358,    94,    92,   299,   203,    40,   205,    94,    76,   338,
     256,    76,    76,    92,    83,    82,    82,    77,   264,    94,
      77,    83,    83,   271,    77,    79,    77,   275,    83,    77,
      40,    36,    79,    92,    79,   283,   284,   333,    94,    81,
      79,    79,    76,    12,    94,    94,    77,    77,    94,   269,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      92,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    77,    30,    94,
      77,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    44,    45,    77,    47,    48,    53,    94,   248,
     122,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,   249,    50,   112,   109,   269,   129,   279,    70,    71,
      72,   164,   166,    57,    76,   165,    29,     3,   264,    81,
       6,     7,    84,    85,    86,    11,    93,    13,    14,    15,
      -1,    -1,    94,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    81,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,     3,    -1,    81,     6,     7,    84,    85,    86,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    70,    71,
      72,    -1,    -1,    24,    76,    -1,    27,    -1,    -1,    30,
      -1,    -1,    84,    85,    86,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,     6,     7,    -1,    76,    -1,    11,    -1,    13,
      81,    15,    -1,    84,    85,    86,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    27,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    -1,    -1,    70,    71,    72,    -1,    27,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,
      85,    86,    40,    41,    42,    -1,    44,    45,    27,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    44,    45,    -1,    47,    48,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    27,    -1,    81,    -1,    -1,    84,    85,    86,    -1,
      -1,    70,    71,    72,    40,    41,    42,    76,    44,    45,
      27,    47,    48,    -1,    -1,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,    -1,
      47,    48,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    27,    -1,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    70,    71,    72,    40,    41,    42,    76,
      44,    45,    -1,    47,    48,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,     3,    -1,    -1,     6,     7,
      84,    85,    86,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,     0,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    57,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    40,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   121,   123,   127,   128,   131,   135,   136,   167,
     168,   169,    40,   132,    72,   122,   125,   126,   137,   138,
     143,   123,   124,   124,   124,   124,     0,   168,    81,   135,
     140,   144,    94,    83,    93,   121,   123,   170,   171,    40,
      76,   139,    40,    99,   133,   134,   143,   135,   126,   137,
      27,    40,    41,    42,    44,    45,    47,    48,    70,    71,
      72,    76,    81,    84,    85,    86,    98,   100,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   150,    81,   158,   121,   137,    76,    78,
      93,    82,    83,    76,   103,    76,   103,   103,   118,   120,
     128,   129,   135,   149,    78,    80,   151,   152,   153,   154,
     155,    46,    47,    48,    76,    78,    80,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    93,   117,   103,
     105,    72,    73,    74,    70,    71,    49,    50,    51,    52,
      87,    88,    53,    54,    84,    89,    90,    55,    56,    97,
       4,     5,     8,     9,    10,    16,    17,    18,    24,    30,
      36,    40,   120,   121,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,    77,    40,   123,   142,   145,
     146,   147,   148,    28,   140,   144,   116,   119,    82,   134,
     149,   149,    77,    83,   129,   130,   130,    77,   119,    40,
      82,    83,   150,    93,   155,    40,   101,   102,   118,   120,
      40,   118,   105,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   110,   111,   112,    96,    96,
      91,    94,   119,    94,    92,    96,    76,    40,    76,   163,
      76,    76,    92,    82,    96,    94,   137,    77,    77,    83,
      83,   140,    72,   118,   141,    28,    77,    77,   118,    81,
     105,    79,    82,   152,    83,    77,    79,   113,   114,    96,
      92,   156,   156,   121,   163,    94,   120,    94,   120,    96,
     156,   161,    57,   147,    40,   118,    79,    79,   118,   151,
     150,   118,   120,   156,    36,   163,    94,    97,    77,   120,
      79,    79,    82,    83,    97,    76,    94,    96,    77,   156,
      97,    82,    92,    96,   163,   163,    96,    77,    96,   120,
      77,    97,   156,    96,   116,    97,   156,    94,    97,   156,
      77,    96,    12,    94,   163,    96,    97,   156,    77,    96,
     156
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    98,    98,    98,    98,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   120,   120,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   150,   150,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   158,   159,   159,   160,   160,   161,   161,   162,
     163,   163,   164,   164,   164,   165,   165,   165,   165,   166,
     166,   166,   166,   167,   167,   168,   168,   169,   170,   170,
     171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     6,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     0,     1,     3,     5,     6,     6,     5,
       4,     4,     1,     0,     1,     0,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     1,     0,     1,     3,     1,     1,     2,
       1,     0,    11,     7,     5,     8,    10,    14,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     4,     1,     0,
       1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 66 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
	(yyval.instr) = nextinstr;
}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 71 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
	(yyval.nextlist) = makelist(nextinstr);
	quad.emit(o_GOTO, -1);
}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Check if function name*/
									symtabelem * check_func = globalST->search(*(yyvsp[0].idAttr).name);
									if(check_func == NULL)
									{
										(yyval.expAttr).loc 	=  currST->lookup(*(yyvsp[0].idAttr).name);
										if((yyval.expAttr).loc->type != NULL && (yyval.expAttr).loc->type->baseType == t_ARRAY)
										{
											/*If array then store the expStruct.array and send a temporary variable with zero initial value*/
											(yyval.expAttr).array = (yyval.expAttr).loc;
											(yyval.expAttr).loc = currST->gentemp(new typeNode(t_INT));
											(yyval.expAttr).loc->initialValue.ival = 0;
											(yyval.expAttr).loc->isInitialized = true;
											quad.emit(o_COPY,0,(yyval.expAttr).loc->name);
											(yyval.expAttr).type = (yyval.expAttr).array->type;
										}
										else
										{
											// if not an array then a local variable
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											(yyval.expAttr).array = NULL;
											(yyval.expAttr).isPointer = false;
										}
									}
									else
									{
										// It is a function
										(yyval.expAttr).loc = check_func;
										(yyval.expAttr).type = check_func->type;
										(yyval.expAttr).array = NULL;
										(yyval.expAttr).isPointer = false;
									}
								}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									// Initialize the value of the temporary variable with the integer
									(yyval.expAttr).loc 	= currST->gentemp(new typeNode(t_INT));
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									(yyval.expAttr).loc->initialValue.ival = (yyvsp[0].intval);
									(yyval.expAttr).loc->isInitialized = true;
									(yyval.expAttr).array = NULL;
									quad.emit(o_COPY, (yyvsp[0].intval), (yyval.expAttr).loc->name);
								}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 119 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									// Initialize the value of the temporary variable with the floatval
									(yyval.expAttr).loc 	= currST->gentemp(new typeNode(t_DOUBLE));
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									(yyval.expAttr).loc->initialValue.dval = (yyvsp[0].floatval);
									(yyval.expAttr).loc->isInitialized = true;
									(yyval.expAttr).array = NULL;
									quad.emit(o_COPY, (yyvsp[0].floatval), (yyval.expAttr).loc->name);
								}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 128 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									// Initialize the value of the temporary variable with the character
									(yyval.expAttr).loc 	= currST->gentemp(new typeNode(t_CHAR));
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									(yyval.expAttr).loc->initialValue.cval = (yyvsp[0].charval);
									(yyval.expAttr).loc->isInitialized = true;
									(yyval.expAttr).array = NULL;
								quad.emit(o_COPY, (yyvsp[0].charval), (yyval.expAttr).loc->name);
								}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 137 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									// Simply copy the value
									(yyval.expAttr) = (yyvsp[-1].expAttr);
								}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 143 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 148 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Array Logic
									$$.array will store the base pointer
									$$.type will store the base type of the array
									$$.array->type has the full type of the array which will be used for size calculations*/
									(yyval.expAttr).loc = currST->gentemp(new typeNode(t_INT));
									symtabelem* temporary = currST->gentemp(new typeNode(t_INT));
									char temp[10];
									sprintf(temp,"%ld",(yyvsp[-3].expAttr).type->next->getSize());
									quad.emit(o_MULT,(yyvsp[-1].expAttr).loc->name,temp,temporary->name);
									quad.emit(o_PLUS,(yyvsp[-3].expAttr).loc->name,temporary->name,(yyval.expAttr).loc->name);
									// the new size will be calculated and the temporary variable storing the size will be passed on a $$.loc
									(yyval.expAttr).array = (yyvsp[-3].expAttr).array;
									(yyval.expAttr).type = (yyvsp[-3].expAttr).type->next;
								}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 163 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Function Call Logic*/
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[-3].expAttr).type));
									// Funciton call value will be stored in a temporary variable
									char str[10];
									if((yyvsp[-1].argsAttr).arguments == NULL)
									{
										/*No function Parameters directly call the function*/
										sprintf(str,"0");
										quad.emit(o_CALL,(yyvsp[-3].expAttr).loc->name,str,(yyval.expAttr).loc->name);
									}
									else
									{
										for(int i=0;i<(yyvsp[-1].argsAttr).arguments->size();i++)
										{
											// Print all the parameters one by one
											quad.emit(o_PARAM,(*(yyvsp[-1].argsAttr).arguments)[i]->loc->name);
											// Here parameter typechecking is not performed to reduce the complexity and also the input is considered to be accurate
										}
										sprintf(str,"%ld",(yyvsp[-1].argsAttr).arguments->size());
										quad.emit(o_CALL,(yyvsp[-3].expAttr).loc->name,str,(yyval.expAttr).loc->name);
									}
									(yyval.expAttr).array = NULL;
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 188 "ass5_12CS10012.y" /* yacc.c:1646  */
    {/*Struct Logic to be Skipped*/}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Pointer Dereference Logic*/
								}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
									if((yyvsp[-1].expAttr).array != NULL)
									{
										// Array element post increment logic
										symtabelem * temp_elem = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,temp_elem->name);
										quad.emit(o_PLUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[-1].expAttr).loc->name,temp_elem->name,(yyvsp[-1].expAttr).array->name);
										(yyval.expAttr).array = NULL;
									}
									else
									{
										// Simple post increment
										quad.emit(o_COPY,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_PLUS,(yyvsp[-1].expAttr).loc->name,"1",(yyvsp[-1].expAttr).loc->name);	
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;									
								}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 212 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
									if((yyvsp[-1].expAttr).array != NULL)
									{
										// Array element post decrement logic
										symtabelem * temp_elem = currST->gentemp(CopyType((yyvsp[-1].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_RINDEX,(yyvsp[-1].expAttr).array->name,(yyvsp[-1].expAttr).loc->name,temp_elem->name);
										quad.emit(o_MINUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[-1].expAttr).loc->name,temp_elem->name,(yyvsp[-1].expAttr).array->name);
										(yyval.expAttr).array = NULL;
									}
									else
									{
										// Simple post decrement
										quad.emit(o_COPY,(yyvsp[-1].expAttr).loc->name,(yyval.expAttr).loc->name);
										quad.emit(o_MINUS,(yyvsp[-1].expAttr).loc->name,"1",(yyvsp[-1].expAttr).loc->name);
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 232 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Type Conversion Logic*/
								}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 235 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Type Conversion Logic*/
								}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 239 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Arguments are to be handled in function calling*/
									(yyval.argsAttr).arguments = new vector<expStruct*>;
									expStruct * tex = new expStruct((yyvsp[0].expAttr));
									(yyval.argsAttr).arguments->push_back(tex);
								}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 245 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*List is to be handled in Function*/
									expStruct * tex = new expStruct((yyvsp[0].expAttr));
									(yyval.argsAttr).arguments->push_back(tex);
								}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 251 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*To be handled later*/
									(yyval.argsAttr) = (yyvsp[0].argsAttr);
								}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 255 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Default values to be set here*/
									(yyval.argsAttr).arguments = NULL;
								}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 260 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 263 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[0].expAttr).type);
									if((yyvsp[0].expAttr).array != NULL)
									{
										// Array element pre increment logic
										symtabelem * temp_elem = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,temp_elem->name);
										quad.emit(o_PLUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[0].expAttr).loc->name,temp_elem->name,(yyvsp[0].expAttr).array->name);
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
										(yyval.expAttr).array = NULL;
									}
									else
									{
										// Simple expression pre increment
										quad.emit(o_PLUS,(yyvsp[0].expAttr).loc->name,"1",(yyvsp[0].expAttr).loc->name);
										quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 283 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
									if((yyvsp[0].expAttr).array != NULL)
									{
										// Array Element pre decrement logica
										symtabelem * temp_elem = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,temp_elem->name);
										quad.emit(o_MINUS,temp_elem->name,"1",temp_elem->name);
										quad.emit(o_LINDEX,(yyvsp[0].expAttr).loc->name,temp_elem->name,(yyvsp[0].expAttr).array->name);
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
										(yyval.expAttr).array = NULL;
									}
									else
									{
										// Simple pre decrement
										quad.emit(o_MINUS,(yyvsp[0].expAttr).loc->name,"1",(yyvsp[0].expAttr).loc->name);
										quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									}
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
								}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 304 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typeNode * temp_type;
									switch((yyvsp[-1].charval))
									{
										case '&':
											/*copy the address in the temporary and append ptr to its type*/
											temp_type = new typeNode(t_PTR,1,(yyvsp[0].expAttr).type);
											(yyval.expAttr).loc = currST->gentemp(CopyType(temp_type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_ADDR,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											(yyval.expAttr).array = NULL;
											break;
										case '*':
											/*mark the output with isPointer=true*/
											(yyval.expAttr).isPointer = true;
											(yyval.expAttr).type = (yyvsp[0].expAttr).loc->type->next;
											(yyval.expAttr).loc = (yyvsp[0].expAttr).loc;
											(yyval.expAttr).array = NULL;
											break;
										case '+':
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											break;
										case '-':
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_UMINUS,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											break;
										case '~':
											/*Bitwise Not to be implemented Later on*/
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											quad.emit(o_BNOT,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
											break;
										case '!':
											(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
											(yyval.expAttr).type = (yyval.expAttr).loc->type;
											(yyval.expAttr).truelist = (yyvsp[0].expAttr).falselist;
											(yyval.expAttr).falselist = (yyvsp[0].expAttr).truelist;
											break;
										default:
											/*Error condition*/
											break;
									}
								}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 350 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 351 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 353 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '&';
								}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 356 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '*';
								}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 359 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '+';
								}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 362 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '-';
								}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 365 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '~';
								}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 368 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.charval) = '!';
								}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 372 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									if((yyvsp[0].expAttr).array != NULL && (yyvsp[0].expAttr).array->type != NULL)
									{
										/*RINDEX operation*/
										/*If the unary expression is moving to cast expression and still if it is array then is is surely a R-type indexing for the array element*/
										(yyval.expAttr).loc = currST->gentemp(new typeNode((yyvsp[0].expAttr).type->baseType));
										quad.emit(o_RINDEX,(yyvsp[0].expAttr).array->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
										(yyval.expAttr).array = NULL;
										(yyval.expAttr).type = (yyval.expAttr).loc->type;
									}
									else if((yyvsp[0].expAttr).isPointer == true)
									{
										/*If it is pointer after reaching cast expression then surely it is R-type dereferecing*/
										(yyval.expAttr).loc = currST->gentemp(CopyType((yyvsp[0].expAttr).type));
										(yyval.expAttr).isPointer = false;
										quad.emit(o_RDEREF,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									}
									else
										(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 392 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Cast Expression to be handled later*/
								}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 396 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 399 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_MULT,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 405 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_DIV,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 411 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_MOD,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 418 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 421 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_PLUS,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 427 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_MINUS,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 435 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 438 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_SHL,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 443 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_SHR,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 450 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 453 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JLT,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 461 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JGT,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 469 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JLE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 477 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JGE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 486 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 489 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 497 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = makelist(nextinstr);
									(yyval.expAttr).falselist = makelist(nextinstr+1);
									quad.emit(o_JNE,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,"-1");
									quad.emit(o_GOTO,"-1");
								}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 507 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 510 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_BAND,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 516 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 519 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_BXOR,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 525 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 528 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-2].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_BOR,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 534 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 537 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									if((yyvsp[-3].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[-3].expAttr));
									if((yyvsp[0].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[0].expAttr));
									backpatch((yyvsp[-3].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).falselist = merge((yyvsp[-3].expAttr).falselist,(yyvsp[0].expAttr).falselist);
									(yyval.expAttr).truelist = (yyvsp[0].expAttr).truelist;
								}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 548 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 551 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									if((yyvsp[-3].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[-3].expAttr));
									if((yyvsp[0].expAttr).type->baseType != t_BOOL)
										conv2Bool(&(yyvsp[0].expAttr));	
									backpatch((yyvsp[-3].expAttr).falselist,(yyvsp[-1].instr));
									(yyval.expAttr).type = new typeNode(t_BOOL);
									(yyval.expAttr).truelist = merge((yyvsp[-3].expAttr).truelist,(yyvsp[0].expAttr).truelist);
									(yyval.expAttr).falselist = (yyvsp[0].expAttr).falselist;
								}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 563 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 566 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = currST->gentemp((yyvsp[-4].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
									list* I = makelist(nextinstr);
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-3].nextlist),nextinstr);
									quad.emit(o_COPY,(yyvsp[-4].expAttr).loc->name,(yyval.expAttr).loc->name);
									I = merge(I,makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-7].nextlist),nextinstr);
									conv2Bool(&(yyvsp[-8].expAttr));
									backpatch((yyvsp[-8].expAttr).truelist,(yyvsp[-5].instr));
									backpatch((yyvsp[-8].expAttr).falselist,(yyvsp[-1].instr));
									backpatch(I,nextinstr);
								}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 596 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 599 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*If an unary_expression upto this point is an array or a pointer then surely it is a left indexing or left dereference respectively*/
									if((yyvsp[-2].expAttr).isPointer)
									{
										quad.emit(o_LDEREF,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).loc->name);
									}
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr),true);
									if((yyvsp[-2].expAttr).array != NULL)
									{
										/*To be assigned in an array*/
										quad.emit(o_LINDEX,(yyvsp[-2].expAttr).loc->name,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).array->name);
									}
									else if(!(yyvsp[-2].expAttr).isPointer)
										quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).loc->name);
									(yyval.expAttr).loc = currST->gentemp((yyvsp[0].expAttr).type);
									(yyval.expAttr).type = (yyval.expAttr).loc->type;
									quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyval.expAttr).loc->name);
								}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 619 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 623 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 626 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 632 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*If the declaration here is a function then we can surely say that it was a function prototype and not full function definition. Thus, we will clear the current symbol table for future function prototype/definition*/
									/*Assign Types to all the entities of init_declarator_list*/
									if((yyvsp[-1].expAttr).loc != NULL && (yyvsp[-1].expAttr).type != NULL && (yyvsp[-1].expAttr).type->baseType == t_FUNC)
									{
										/*Delete currST*/
										currST = new SymbolTable();
									}
								}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 642 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									if((yyvsp[0].expAttr).type != NULL && (yyvsp[0].expAttr).type->baseType == t_FUNC)
									{
										(yyval.expAttr) = (yyvsp[0].expAttr);
									}
								}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 648 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = NULL;
								}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 652 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 654 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 655 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 660 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Expecting only function declaration*/
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 666 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Nothing to be done here*/
									if((yyvsp[0].expAttr).type != NULL && (yyvsp[0].expAttr).type->baseType == t_FUNC)
									{
										(yyval.expAttr) = (yyvsp[0].expAttr);
									}
								}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 673 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Declarator is initialized with the proper value*/
									typecheck(&(yyvsp[-2].expAttr),&(yyvsp[0].expAttr),true);
									quad.emit(o_COPY,(yyvsp[0].expAttr).loc->name,(yyvsp[-2].expAttr).loc->name);
								}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 679 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 680 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 681 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 682 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 684 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_VOID);
								}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 687 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_CHAR);
								}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 690 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 691 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_INT);
								}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 694 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 695 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 696 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									t = new typeNode(t_DOUBLE);
								}
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 699 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 700 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 701 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 702 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 703 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 704 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 706 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Nothing to be done here as the type is already initialized globally*/
								}
#line 2857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 709 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 711 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 712 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 714 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 715 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 716 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 718 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc  = currST->lookup(*(yyvsp[0].idAttr).name);
									(yyval.expAttr).type = new typeNode(t->baseType);
								}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 722 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 724 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 725 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 727 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 728 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 730 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 731 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 732 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 734 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 736 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Append Pointers to the type*/
									if((yyvsp[-1].decAttr).type == NULL)
									{
										/*No Pointer for this direct_declarator*/
									}
									else
									{
										/*Append pointers to this direct_declarator*/
										if((yyvsp[0].expAttr).loc->type->baseType != t_PTR)
										{
											typeNode * test = (yyvsp[-1].decAttr).type;
											while(test->next != NULL)
											{
												test = test->next;
											}
											test->next = (yyvsp[0].expAttr).loc->type;
											(yyvsp[0].expAttr).loc->type = (yyvsp[-1].decAttr).type;
										}
									}

									if((yyvsp[0].expAttr).type != NULL && (yyvsp[0].expAttr).type->baseType == t_FUNC)
									{
										/*Function type*/

										(yyval.expAttr) = (yyvsp[0].expAttr);
										/*Adjust Offset*/
									}
									else
									{
										/*Not a function*/
										/*Update the size and offset*/
										(yyvsp[0].expAttr).loc->size = (yyvsp[0].expAttr).loc->type->getSize();
										(yyvsp[0].expAttr).loc->offset = currST->offset;
										currST->offset += (yyvsp[0].expAttr).loc->size;
										(yyval.expAttr) = (yyvsp[0].expAttr);
										(yyval.expAttr).type = (yyval.expAttr).loc->type;
									}
								}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 776 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.decAttr) = (yyvsp[0].decAttr);
								}
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 779 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*No pointer present*/
									(yyval.decAttr).type = NULL;
								}
#line 3017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 784 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Identifier will be added to current symbol table here*/
										(yyval.expAttr).loc = currST->lookup(*(yyvsp[0].idAttr).name);
										if((yyval.expAttr).loc->var_type == "")
										{
											(yyval.expAttr).loc->var_type = "local";
											/*Initialize type here*/
											(yyval.expAttr).loc->type = new typeNode(t->baseType);
										}
										else if((yyval.expAttr).loc->var_type == "return")
										{
											/*Already declared function change the symbol table*/

										}
										(yyval.expAttr).type = (yyval.expAttr).loc->type;
									
									/*Type of this variable is set here but the pointers are not appended*/
								}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 802 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[-1].expAttr);
								}
#line 3048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 805 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Append in type array and adjust the size*/
									if((yyvsp[-4].expAttr).type->baseType == t_ARRAY)
									{
										/*if type is already an array*/
										typeNode * typ1 = (yyvsp[-4].expAttr).type,*typ = (yyvsp[-4].expAttr).type;
										typ1 = typ1->next;
										while(typ1->next != NULL)
										{
											typ1 = typ1->next;
											typ = typ->next;
										}
										typ->next = new typeNode(t_ARRAY,(yyvsp[-1].expAttr).loc->initialValue.ival,typ1);
									}
									else
									{
										/*Append array type*/
										if((yyvsp[-1].expAttr).loc == NULL)
											(yyvsp[-4].expAttr).type = new typeNode(t_ARRAY,-1,(yyvsp[-4].expAttr).type);
										else
											(yyvsp[-4].expAttr).type = new typeNode(t_ARRAY,(yyvsp[-1].expAttr).loc->initialValue.ival,(yyvsp[-4].expAttr).type);
									}
									(yyval.expAttr) = (yyvsp[-4].expAttr);
									(yyval.expAttr).loc->type = (yyval.expAttr).type;
								}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 830 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 831 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 832 "ass5_12CS10012.y" /* yacc.c:1646  */
    {/*Not sure but mostly we don't have to implement this*/}
#line 3096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 833 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Function Declarator*/
									/*First Element of this table is Our Function and the rest of the elements are Params*/
									/*add a new entry in global symbol table*/
									symtabelem * new_func = globalST->search(currST->table[0]->name);
									if(new_func == NULL)
									{
										new_func = globalST->lookup(currST->table[0]->name);
										(yyval.expAttr).loc = currST->table[0];
										if(new_func->var_type == "")
										{
											/*Function is being declared here for the first time*/
											new_func->type = CopyType(currST->table[0]->type);
											new_func->var_type = "func";
											new_func->isInitialized = false;
											new_func->nestedTable = currST;
											/*Change the first element to retval and change the rest to param*/
											currST->name = currST->table[0]->name;
											//currST->table[0]->name = "retVal";
											currST->table[0]->var_type = "return";
											currST->table[0]->size = currST->table[0]->type->getSize();
											currST->table[0]->offset = 0;
											currST->offset = currST->table[0]->size;
											for(int i=1;i<currST->table.size();i++)
											{
												currST->table[i]->var_type = "param";
												currST->table[i]->offset += currST->table[0]->size;
												currST->offset += currST->table[i]->size;
											}
											/*After Function Declaration new Symbol Table is created*/
										}
									}
									else
									{
										// Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
										currST = new_func->nestedTable;
									}
									(yyval.expAttr).loc = new_func;
									(yyval.expAttr).type = new typeNode(t_FUNC);
								}
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 873 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*No Parameters for this function*/
									symtabelem * new_func = globalST->search(currST->table[0]->name);
									if(new_func == NULL)
									{
										new_func = globalST->lookup(currST->table[0]->name);
										(yyval.expAttr).loc = currST->table[0];
										if(new_func->var_type == "")
										{
											/*Function is being declared here for the first time*/
											new_func->type = CopyType(currST->table[0]->type);
											new_func->var_type = "func";
											new_func->isInitialized = false;
											new_func->nestedTable = currST;
											/*Change the first element to retval and change the rest to param*/
											currST->name = currST->table[0]->name;
											//currST->table[0]->name = "retVal";
											currST->table[0]->var_type = "return";
											currST->table[0]->size = currST->table[0]->type->getSize();
											currST->table[0]->offset = 0;
											currST->offset = currST->table[0]->size;
										}
									}
									else
									{
										// Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
										currST = new_func->nestedTable;
									}
									(yyval.expAttr).loc = new_func;
									(yyval.expAttr).type = new typeNode(t_FUNC);
								}
#line 3177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 905 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 906 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 908 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 911 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr).loc = NULL;
								}
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 918 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.decAttr).type = new typeNode(t_PTR);
								}
#line 3213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 921 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.decAttr).type = new typeNode(t_PTR,1,(yyvsp[0].decAttr).type);
								}
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 925 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 926 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 928 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*No need to store the List Explicitly since all the parameters are stored in the current symbol table by default*/
								}
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 931 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 933 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*First Parameter Added here*/
								}
#line 3255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 936 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*More Parameters are already added here*/
								}
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 940 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*The parameter is already added to the current Symbol Table*/
								}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 943 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 950 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 3285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 953 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 954 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 968 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 971 "ass5_12CS10012.y" /* yacc.c:1646  */
    {/*Switch Case*/}
#line 3309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 972 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 975 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = NULL;
								}
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 978 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 981 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 984 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 988 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 989 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 990 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 992 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[-1].nextlist);
								}
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 996 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 999 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = NULL;
								}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1003 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1006 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									backpatch((yyvsp[-2].nextlist),(yyvsp[-1].instr));
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1011 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = NULL;
								}
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1014 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.nextlist) = (yyvsp[0].nextlist);
								}
#line 3424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1018 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[-1].expAttr);
								}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1022 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									(yyval.expAttr) = (yyvsp[0].expAttr);
								}
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1025 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Initialize Expression to NULL*/
									(yyval.expAttr).loc = NULL;
								}
#line 3449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1030 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/* A dangling goto is present after expression just in case if the type of the expression is not boolean
									then a type conversion will be performed. But the code of the type conversion will be placed at the end.
									Therefore, this dangling pointer needs to be pointing the newly created if which checks whether the expression is zero or not.
									Another dangling goto after the statement of IF condition. That is also just for safety. It will be used if the nested statement will also have some conditional statements
									There are Ms in between to store the location / quad index of first list of statements and second list of statements
									*/
									(yyvsp[-4].nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[-3].nextlist));
									(yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-7].nextlist),nextinstr);

									conv2Bool(&(yyvsp[-8].expAttr));

									backpatch((yyvsp[-8].expAttr).truelist,(yyvsp[-5].instr));
									backpatch((yyvsp[-8].expAttr).falselist,(yyvsp[-1].instr));
									(yyval.nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[0].nextlist));
								}
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1048 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/* Very similar to IF and ELSE part. Here the else part is missing so we do not specifically need dangling goto for the statements list. We will however need dangling goto for expression (if it is not boolean)*/
									(yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(nextinstr));
									quad.emit(o_GOTO,"-1");
									backpatch((yyvsp[-3].nextlist),nextinstr);
									conv2Bool(&(yyvsp[-4].expAttr));
									backpatch((yyvsp[-4].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.nextlist) = merge((yyvsp[0].nextlist),(yyvsp[-4].expAttr).falselist);
								}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1057 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1059 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*The has to be goto which takes again to the beginning of the loop where we check the conditions. For storing that location we have a M in front of the expression. Also if the expression returns success then we have to jump to the statements list. Therefore, we again need to store the location of the beginning of the statement list. Thus, we have one more M in front of the statment list.
									*/
									quad.emit(o_GOTO,(yyvsp[-5].instr));
									backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr)); 			/*S.nextlist to M1.instr*/
									backpatch((yyvsp[-3].nextlist),nextinstr); 	/*N1.nextlist to nextinstr*/
									conv2Bool(&(yyvsp[-4].expAttr));
									backpatch((yyvsp[-4].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.nextlist) = (yyvsp[-4].expAttr).falselist;
								}
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1069 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*Here we don't have to by default jump to the start. The output of the condtion of the while will decide whether we have to jump to the beginning of the loop or to the next instruction.
									Thus, we have M in front of the statements to store its locaitons. We also have M in front of the expression because there can be conditional statements in statement block. So there must be a pointer which stores the location of the start of expression. Again we have a dangling goto after expression (if it is not boolean)
									*/
									backpatch((yyvsp[-2].nextlist),nextinstr);
									backpatch((yyvsp[-7].nextlist),(yyvsp[-4].instr));			/*S1.nextlist to M2.instr*/
									conv2Bool(&(yyvsp[-3].expAttr));
									backpatch((yyvsp[-3].expAttr).truelist,(yyvsp[-8].instr));	/*B.truelist to M1.instr*/
									(yyval.nextlist) = (yyvsp[-3].expAttr).falselist;
								}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1079 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									/*After the loop end there has to be a goto to 3rd expression. Thus, we have a M before the third expression. After the execution of the third expression we move to the middle condition. Dangling pointer is there if the expression is not boolean. If the condition is successful then we have to go to the statements list and therefore, we have a M before the statements list.*/
									backpatch((yyvsp[-3].nextlist),(yyvsp[-9].instr));			/*N2.nextlist to M1.instr*/
									backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));			/*S.nextlist to M2.instr*/
									quad.emit(o_GOTO,(yyvsp[-5].instr));
									backpatch((yyvsp[-7].nextlist),nextinstr);	/*N1.nextlist to nextinstr*/
									conv2Bool(&(yyvsp[-8].expAttr));
									backpatch((yyvsp[-8].expAttr).truelist,(yyvsp[-1].instr));
									(yyval.nextlist) = (yyvsp[-8].expAttr).falselist;
								}
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1089 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1091 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1092 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1093 "ass5_12CS10012.y" /* yacc.c:1646  */
    {}
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1094 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									if((yyvsp[-1].expAttr).loc == NULL)
										quad.emit(o_RET);
									else
									{
										expStruct * dummy = new expStruct();
										dummy->loc = currST->table[0];
										dummy->type = dummy->loc->type;
										typecheck(dummy,&(yyvsp[-1].expAttr),true);
										delete dummy;
										quad.emit(o_RET,(yyvsp[-1].expAttr).loc->name);
									}
								}
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1115 "ass5_12CS10012.y" /* yacc.c:1646  */
    {
									symtabelem * func = globalST->lookup((yyvsp[-2].expAttr).loc->name);
									/*The first entry of the current symbol table is the fucntion name. It has to be changes to retVal. Define the function and reinitialize the current symbol table so that it is ready to take new inputs of functions*/
									func->nestedTable->table[0]->type = CopyType(func->type);
									func->nestedTable->table[0]->name = "retVal";
									func->nestedTable->table[0]->offset = 0;
									/*Adjust offset and append current Symbol table to funciton symbol table*/
									/*If return type is pointer then change the offset*/
									if(func->nestedTable->table[0]->type->baseType == t_PTR)
									{
										int diff = size_of_ptr - func->nestedTable->table[0]->size;
										func->nestedTable->table[0]->size = size_of_ptr;
										for(int i=1;i<func->nestedTable->table.size();i++)
										{
											func->nestedTable->table[i]->offset += diff;
										}
									}
									int offset_size = 0;
									for(int i=0;i<func->nestedTable->table.size();i++)
									{
										offset_size += func->nestedTable->table[i]->size;
									}
									/*Function Definition Ended so Create a new Current Symbol Table*/
									currST = new SymbolTable();
								}
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3613 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1147 "ass5_12CS10012.y" /* yacc.c:1906  */

void yyerror(const char*s)
{
	printf("%s",s);
}
