/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <fstream>
#include "helper1.cpp"

using namespace std;

int yylex(void);
void yyerror(char *s){
    fprintf(stderr,"Unknown errors detected.\n");
    extern int lineno;
    }
    
    
extern int lineno;
extern int yylineno;

vector<function_struct> func_table;
struct function_struct *active_func_ptr;
struct function_struct call_name_ptr;
vector<val_type> args_list;
vector<variable> var_list;


string global_func_name = "Global";
struct function_struct global(global_func_name ,NONE);

int sem_flag=0,gen_flag=0,level=0,isvar=1;

#line 98 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    INT = 259,
    FLOAT = 260,
    FLOAT_CONST = 261,
    STRING = 262,
    STRING_CONST = 263,
    BOOL = 264,
    DEL = 265,
    ID = 266,
    COMPARATOR = 267,
    CLOSESQ = 268,
    OPENSQ = 269,
    OPENBR = 270,
    BOOL_CONST = 271,
    CLOSEBR = 272,
    OPENPR = 273,
    PROCESSORS = 274,
    ID1 = 275,
    CLOSEPR = 276,
    EQUAL = 277,
    QUOTES = 278,
    COMMA = 279,
    COLON = 280,
    DOT = 281,
    FOR = 282,
    WHILE = 283,
    IF = 284,
    ELSE = 285,
    IS_RUNNING = 286,
    SUBMIT_JOBS = 287,
    GET_CLOCK_SPEED = 288,
    DISCARD_JOB = 289,
    JOB_ID = 290,
    GET_AVAILABLE_MEMORY = 291,
    GET_MEMORY = 292,
    MEM_SIZE = 293,
    PROCESSOR = 294,
    ISA = 295,
    CLOCK_SPEED = 296,
    L1_MEM = 297,
    ARM = 298,
    AMD = 299,
    CDC = 300,
    MIPS = 301,
    MEMORY = 302,
    MEMORY_TYPE = 303,
    MEMORY_SIZE = 304,
    PRIMARY = 305,
    SECONDARY = 306,
    CACHE = 307,
    LINK = 308,
    START_POINT = 309,
    END_POINT = 310,
    BANDWIDTH = 311,
    JOB = 312,
    FLOPS_REQUIRED = 313,
    DEADLINE = 314,
    MEM_REQUIRED = 315,
    AFFINITY = 316,
    RUN = 317,
    WAIT = 318,
    CLUSTER = 319,
    TOPOLOGY = 320,
    NAME = 321,
    STAR = 322,
    RING = 323,
    BUS = 324,
    SUM = 325,
    VOID = 326,
    MULT = 327,
    RETURN = 328,
    UNARY_OP = 329
  };
#endif
/* Tokens.  */
#define NUM 258
#define INT 259
#define FLOAT 260
#define FLOAT_CONST 261
#define STRING 262
#define STRING_CONST 263
#define BOOL 264
#define DEL 265
#define ID 266
#define COMPARATOR 267
#define CLOSESQ 268
#define OPENSQ 269
#define OPENBR 270
#define BOOL_CONST 271
#define CLOSEBR 272
#define OPENPR 273
#define PROCESSORS 274
#define ID1 275
#define CLOSEPR 276
#define EQUAL 277
#define QUOTES 278
#define COMMA 279
#define COLON 280
#define DOT 281
#define FOR 282
#define WHILE 283
#define IF 284
#define ELSE 285
#define IS_RUNNING 286
#define SUBMIT_JOBS 287
#define GET_CLOCK_SPEED 288
#define DISCARD_JOB 289
#define JOB_ID 290
#define GET_AVAILABLE_MEMORY 291
#define GET_MEMORY 292
#define MEM_SIZE 293
#define PROCESSOR 294
#define ISA 295
#define CLOCK_SPEED 296
#define L1_MEM 297
#define ARM 298
#define AMD 299
#define CDC 300
#define MIPS 301
#define MEMORY 302
#define MEMORY_TYPE 303
#define MEMORY_SIZE 304
#define PRIMARY 305
#define SECONDARY 306
#define CACHE 307
#define LINK 308
#define START_POINT 309
#define END_POINT 310
#define BANDWIDTH 311
#define JOB 312
#define FLOPS_REQUIRED 313
#define DEADLINE 314
#define MEM_REQUIRED 315
#define AFFINITY 316
#define RUN 317
#define WAIT 318
#define CLUSTER 319
#define TOPOLOGY 320
#define NAME 321
#define STAR 322
#define RING 323
#define BUS 324
#define SUM 325
#define VOID 326
#define MULT 327
#define RETURN 328
#define UNARY_OP 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "parser.y" /* yacc.c:355  */

	node *Node;

#line 290 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 307 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    84,    89,    95,   100,   105,   110,   115,
     120,   127,   132,   138,   157,   162,   168,   172,   175,   179,
     185,   197,   212,   216,   222,   242,   245,   259,   260,   263,
     267,   272,   278,   286,   292,   298,   304,   313,   348,   354,
     359,   364,   371,   377,   393,   401,   402,   405,   407,   409,
     410,   413,   426,   442,   474,   505,   538,   555,   568,   593,
     604,   619,   625,   634,   640,   646
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "INT", "FLOAT", "FLOAT_CONST",
  "STRING", "STRING_CONST", "BOOL", "DEL", "ID", "COMPARATOR", "CLOSESQ",
  "OPENSQ", "OPENBR", "BOOL_CONST", "CLOSEBR", "OPENPR", "PROCESSORS",
  "ID1", "CLOSEPR", "EQUAL", "QUOTES", "COMMA", "COLON", "DOT", "FOR",
  "WHILE", "IF", "ELSE", "IS_RUNNING", "SUBMIT_JOBS", "GET_CLOCK_SPEED",
  "DISCARD_JOB", "JOB_ID", "GET_AVAILABLE_MEMORY", "GET_MEMORY",
  "MEM_SIZE", "PROCESSOR", "ISA", "CLOCK_SPEED", "L1_MEM", "ARM", "AMD",
  "CDC", "MIPS", "MEMORY", "MEMORY_TYPE", "MEMORY_SIZE", "PRIMARY",
  "SECONDARY", "CACHE", "LINK", "START_POINT", "END_POINT", "BANDWIDTH",
  "JOB", "FLOPS_REQUIRED", "DEADLINE", "MEM_REQUIRED", "AFFINITY", "RUN",
  "WAIT", "CLUSTER", "TOPOLOGY", "NAME", "STAR", "RING", "BUS", "SUM",
  "VOID", "MULT", "RETURN", "UNARY_OP", "$accept", "program",
  "statement_list", "statement", "func_dec", "func_head", "result_id",
  "decl_plist", "decl_list", "return_type", "return_statement",
  "return_value", "function_call", "func_call", "parameter_list", "param",
  "parameter", "constants", "var_decl", "var_type", "variable", "array",
  "loop", "for_loop", "while_loop", "ifstmnt", "expr", "condition",
  "arithmatic_op", "mul", "factor", YY_NULLPTR
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
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -49

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-49)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      29,   -49,   -49,   -49,   -49,   -12,     9,    21,    25,     1,
     -49,    45,   -49,    29,   -49,    33,    32,    31,    44,   -49,
      49,    50,   -49,   -49,   -49,   -49,    52,     0,    91,    56,
      19,   -49,   -49,    41,   -49,    19,    80,   -49,    48,    61,
      -2,   -48,   -49,   -49,    29,    37,   -49,   -49,   -49,   -49,
     -49,    80,   -49,   -49,    61,   -49,   -49,   -49,    41,   -49,
      55,    54,   -49,   -49,   -49,   -49,    57,    70,    64,    79,
      66,     3,   -49,    29,    80,    80,    80,   -49,    15,    68,
     -49,    71,    50,    83,    34,   -49,    91,    19,    19,    88,
      92,    89,   -49,    93,   -49,   -49,   -49,    91,    94,   -49,
      37,   -49,   102,    29,   -49,    29,   -49,   103,   -49,   -49,
     -49,   -49,    56,    97,    98,   -49,    95,   -49,    87,   104,
     105,    29,    29,   101,   106,   -49,   -49
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    38,    41,    39,    40,     0,     0,     0,     0,     0,
      18,     0,     2,     4,     9,     0,     0,     0,     0,    25,
       0,    19,     6,    45,    46,     7,     0,     0,    28,     0,
       0,    62,    63,    60,    64,     0,     0,    65,     0,     0,
      57,    59,     1,     3,     4,    15,    13,    10,     5,    37,
       8,     0,    24,    51,    52,    33,    34,    35,    43,    36,
       0,    27,    30,    32,    31,    42,     0,     0,     0,     0,
       0,     0,    54,     4,     0,     0,     0,    55,    21,     0,
      14,    17,     0,     0,    59,    26,     0,     0,     0,     0,
       0,     0,    61,     0,    53,    56,    58,     0,     0,    12,
       0,    29,     0,     4,    44,     4,    50,     0,    23,    22,
      11,    16,     0,     0,     0,    20,     0,    48,     0,     0,
       0,     4,     4,     0,     0,    47,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -49,   -49,   -13,   -49,   -49,   -49,   -49,   -49,    22,   -49,
     -49,   -49,   -49,    99,   -49,   -49,    35,    27,   -36,   -31,
      28,   -20,   -49,   -49,   -49,   -49,   -28,    -7,   -22,    51,
      -4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    16,    79,    80,    17,
      98,   107,    18,    19,    60,    61,    62,    63,    20,    21,
      64,    37,    22,    23,    24,    25,    26,    53,    39,    40,
      41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    67,    38,    31,    31,    54,    32,    32,    65,    81,
      27,    33,    33,    71,    82,    74,    34,    34,    51,    35,
       6,    92,    31,    68,    76,    32,    77,    28,    70,    83,
      33,    78,    72,     1,     2,    34,     3,    51,     4,    29,
       5,     1,     2,    30,     3,    42,     4,    84,    44,     6,
      45,    46,    94,    95,    47,    69,     7,     8,     9,    48,
      93,    49,    50,    73,    81,    54,    65,    66,    75,    82,
      84,    84,    84,    74,    36,    36,    85,    65,    86,    87,
      88,   102,    90,    31,   116,    89,    32,    91,    97,    99,
     113,    33,   114,    36,    55,   100,    34,    56,    51,    57,
      10,    92,    58,   103,   105,   104,    76,    59,   123,   124,
     106,   110,   112,   115,   117,   118,   119,   120,   125,   121,
     122,   101,   111,   126,   108,   109,    52,    96
};

static const yytype_uint8 yycheck[] =
{
      13,    29,     9,     3,     3,    27,     6,     6,    28,    45,
      22,    11,    11,    35,    45,    12,    16,    16,    18,    18,
      20,    18,     3,    30,    72,     6,    74,    18,    35,    51,
      11,    44,    36,     4,     5,    16,     7,    18,     9,    18,
      11,     4,     5,    18,     7,     0,     9,    51,    15,    20,
      18,    20,    74,    75,    10,    14,    27,    28,    29,    10,
      73,    11,    10,    15,   100,    87,    86,    11,    70,   100,
      74,    75,    76,    12,    74,    74,    21,    97,    24,    22,
      10,    88,     3,     3,   112,    21,     6,    21,    73,    21,
     103,    11,   105,    74,     3,    24,    16,     6,    18,     8,
      71,    18,    11,    15,    15,    13,    72,    16,   121,   122,
      17,    17,    10,    10,    17,    17,    21,    30,    17,    15,
      15,    86,   100,    17,    97,    97,    27,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     7,     9,    11,    20,    27,    28,    29,
      71,    76,    77,    78,    79,    80,    81,    84,    87,    88,
      93,    94,    97,    98,    99,   100,   101,    22,    18,    18,
      18,     3,     6,    11,    16,    18,    74,    96,   102,   103,
     104,   105,     0,    77,    15,    18,    20,    10,    10,    11,
      10,    18,    88,   102,   103,     3,     6,     8,    11,    16,
      89,    90,    91,    92,    95,    96,    11,   101,   102,    14,
     102,   103,   105,    15,    12,    70,    72,    74,    77,    82,
      83,    93,    94,   103,   105,    21,    24,    22,    10,    21,
       3,    21,    18,    77,   103,   103,   104,    73,    85,    21,
      24,    91,   102,    15,    13,    15,    17,    86,    92,    95,
      17,    83,    10,    77,    77,    10,   101,    17,    17,    21,
      30,    15,    15,    77,    77,    17,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    79,    80,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    93,    94,    94,
      94,    94,    95,    95,    96,    97,    97,    98,    99,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     2,     1,
       2,     5,     4,     2,     1,     0,     3,     1,     1,     1,
       3,     0,     1,     1,     3,     1,     4,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     4,     1,     1,    11,     7,    11,
       5,     3,     3,     3,     2,     2,     3,     1,     3,     1,
       1,     3,     1,     1,     1,     1
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
#line 55 "parser.y" /* yacc.c:1646  */
    {
	
	printf("program : statement_list\n\n\n");
	(yyval.Node) = add_node("program",(yyvsp[0].Node));
    //$$->code = $1->code;
    //$$->code = generate_final_code($$->code,global_var_table);
    if( gen_flag==0 && sem_flag==0){
        printf("Compilation successful.\n");
        //print_nodes($$);
        //ofstream output;
	    //output.open("tree.txt");
        //print_nodes($$,output);
        //print_symbol(global_var_table);
        //print_func(func_table);
        //output.close();
        //fprintf(fout,$$->code.c_str());
        //printf("ASM file generated.\n");
    }
    else if( gen_flag==1 && sem_flag==0){
        printf("Syntax errors found.\n");
    }
    else if(gen_flag==0 && sem_flag==1){
        printf("Semantic errors found.\n");
    }
    print_func(func_table);

}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "parser.y" /* yacc.c:1646  */
    {
		printf("statement_list : statement statement_list\n");
		(yyval.Node) = add_node("statement_list",(yyvsp[-1].Node),(yyvsp[0].Node));
	    //$$->code = $1->code + $2->code;
    }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 89 "parser.y" /* yacc.c:1646  */
    {
		printf(" matched epsilon\n");
		(yyval.Node) = NULL;
	}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "parser.y" /* yacc.c:1646  */
    {
		printf("statement : var_decl DEL\n");
		(yyval.Node) = add_node("statement",(yyvsp[-1].Node),(yyvsp[0].Node));
   		//$$->code = $1->code + $2->code;
   		}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 100 "parser.y" /* yacc.c:1646  */
    {
		printf("statement : loop\n");
		(yyval.Node) = add_node("statement",(yyvsp[0].Node));
   		//$$->code = $1->code;
   		}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "parser.y" /* yacc.c:1646  */
    {
		printf("statement : ifstmnt \n");
		(yyval.Node) = add_node("statement",(yyvsp[0].Node));
	   	//$$->code = $1->code;
   		}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "parser.y" /* yacc.c:1646  */
    {
		printf("statement : expr DEL\n");
		(yyval.Node) = add_node("statement",(yyvsp[-1].Node),(yyvsp[0].Node));
	   	//$$->code = $1->code + $2->code;
   		}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 115 "parser.y" /* yacc.c:1646  */
    {
		printf("statement : func_dec \n");
		(yyval.Node) = add_node("statement",(yyvsp[0].Node));
   		//$$->code = $1->code;
   		}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "parser.y" /* yacc.c:1646  */
    {
		printf("statement : func_call \n");
		(yyval.Node) = add_node("statement",(yyvsp[-1].Node),(yyvsp[0].Node));
   		//$$->code = $1->code + $2->code;
   		}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 127 "parser.y" /* yacc.c:1646  */
    {
	printf("func_dec : func_head {statement_list} \n");
	}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "parser.y" /* yacc.c:1646  */
    {
printf("func_head : result_id ( decl_plist ) \n");
			level=level+1;
			}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 138 "parser.y" /* yacc.c:1646  */
    {
			printf("result_id : return_type ID \n");
			if( check_func_name(func_table,(yyvsp[0].Node)->name)){
				printf("1\n");
				function_struct cur_func((yyvsp[0].Node)->name ,(yyvsp[-1].Node)->type);
		        func_table.push_back(cur_func);
		        active_func_ptr = &func_table.back();
		        cout<<"Active function: "<<active_func_ptr->name<< " type: " <<active_func_ptr->return_type<<endl;
		    }
		    else{
		    	printf("2\n");
			    cout<<"Function name: "<<(yyvsp[0].Node)->name<<" already exists"<<endl;
			    (yyval.Node)->type=ERROR;
			    sem_flag=1;
		    }
		    isvar=0;
		}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 157 "parser.y" /* yacc.c:1646  */
    {
			printf("decl_plist : decl_list \n");
			(yyval.Node) = add_node("decl_plist",(yyvsp[0].Node));
			isvar=1;
			}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 162 "parser.y" /* yacc.c:1646  */
    {
			printf("EPSILON IN decl_plist \n");
			isvar=1;
			}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 168 "parser.y" /* yacc.c:1646  */
    {
			printf("decl_list : var_decl COMMA decl_list \n");
			//checked automatically in var decl of repitition
			}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("decl_list : var_decl \n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 175 "parser.y" /* yacc.c:1646  */
    {
			printf("return_type : VOID \n");
			(yyval.Node)->type=NONE;
			}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 179 "parser.y" /* yacc.c:1646  */
    {
			printf("return_type : var_type \n");
			(yyval.Node)->type=(yyvsp[0].Node)->type;
			}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "parser.y" /* yacc.c:1646  */
    {
					printf("return_statement: RETURN return_value DEL \n");
					level = level-1;
					cout<<"Active func return type: "<<active_func_ptr->return_type<<" variable type: "<<(yyvsp[-1].Node)->type<<endl;
					if(active_func_ptr->return_type!=(yyvsp[-1].Node)->type){
						sem_flag=1;
						(yyval.Node)->type=ERROR;
						cout<<"ERROR: Return type mismatch of function "<<active_func_ptr->name<<endl;
					}
					active_func_ptr=&global;

				}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 197 "parser.y" /* yacc.c:1646  */
    {
					printf("MATCHED EPSILON IN RETURN STMNT \n");
					level = level-1;
					cout<<"Active func return type: "<<active_func_ptr->return_type<<" variable type: NONE"<<endl;
					/*if(active_func_ptr->return_type!=NONE){
							sem_flag=1;
							$$->type=ERROR;

							printf("no return expected for function %s at line no %d",active_func_ptr->name,yylineno);
						}*/
					active_func_ptr=&global;

				}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 212 "parser.y" /* yacc.c:1646  */
    {
			printf("return_value: variable \n");
			(yyval.Node)->type=(yyvsp[0].Node)->type;
			}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "parser.y" /* yacc.c:1646  */
    {
			printf("return_value: constants \n");
			(yyval.Node)->type=(yyvsp[0].Node)->type;
			}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 222 "parser.y" /* yacc.c:1646  */
    {
				struct variable *temp=find_var(&global,&global,(yyvsp[-2].Node)->name);
				if( temp!=NULL ){
					(yyvsp[-2].Node)->type = temp->type;

					if((yyvsp[-2].Node)->type !=(yyvsp[0].Node)->type){
						cout<<"ERROR: Type mismatch for function call"<<endl;
						sem_flag = 1;
					}
					else{

					}
				}
				else{
					(yyval.Node)->type=ERROR;
					cout<<"ERROR: Variable "<< (yyvsp[-2].Node)->name<<" not declared"<<endl;
					sem_flag=1;
				}
				printf("function_call: ID EQUAL func_call \n");
				}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 242 "parser.y" /* yacc.c:1646  */
    {printf("function_call: func_call \n");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 245 "parser.y" /* yacc.c:1646  */
    {
			printf("func_call : ID1 OPENPR parameter_list CLOSEPR\n");
			function_struct * temp = find_function(func_table,(yyvsp[-2].Node)->name);
			
			if(!temp ){
				(yyval.Node)->type = temp->return_type;

			}
			else{
				printf("Error at line %d: Function not declared.\n",yylineno);
				sem_flag = 1;
			}
			}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("parameter_list: param \n");}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("parameter_list: epsilon \n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "parser.y" /* yacc.c:1646  */
    {
		printf("param: param COMMA parameter \n");

		}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 267 "parser.y" /* yacc.c:1646  */
    {
		printf("param: parameter \n");
		}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 272 "parser.y" /* yacc.c:1646  */
    {
		printf("parameter : variable \n");
		(yyval.Node)->type=(yyvsp[0].Node)->type;
		(yyval.Node)->val=(yyvsp[0].Node)->val;
		add_node("parameter",(yyvsp[0].Node));
		}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 278 "parser.y" /* yacc.c:1646  */
    {
		printf("parameter : constants \n");
		(yyval.Node)->type=(yyvsp[0].Node)->type;
		(yyval.Node)->val=(yyvsp[0].Node)->val;
		add_node("parameter",(yyvsp[0].Node));
		}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 286 "parser.y" /* yacc.c:1646  */
    {
		printf("constants : NUM\n");
		(yyval.Node)->type=(yyvsp[0].Node)->type;
		(yyval.Node)->val=(yyvsp[0].Node)->val;
		add_node("constants",(yyvsp[0].Node));
		}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 292 "parser.y" /* yacc.c:1646  */
    {
		printf("parameter_list: FLOAT_CONST\n");
		(yyval.Node)->type=(yyvsp[0].Node)->type;
		(yyval.Node)->val=(yyvsp[0].Node)->val;
		add_node("constants",(yyvsp[0].Node));
		}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 298 "parser.y" /* yacc.c:1646  */
    {
		printf("parameter_list: STRING_CONST\n");
		(yyval.Node)->type=(yyvsp[0].Node)->type;
		(yyval.Node)->val=(yyvsp[0].Node)->val;
		add_node("constants",(yyvsp[0].Node));
		}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 304 "parser.y" /* yacc.c:1646  */
    {
		printf("parameter_list: BOOL_CONST\n");
		(yyval.Node)->type=(yyvsp[0].Node)->type;
		(yyval.Node)->val=(yyvsp[0].Node)->val;
		add_node("constants",(yyvsp[0].Node));
		}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 313 "parser.y" /* yacc.c:1646  */
    {
	printf("var_decl : var_type variable\n");
	if(isvar==0){
		printf("the given id is a parameter\n");
		if(check_func_varlist(active_func_ptr,(yyvsp[0].Node)->name)){
			variable newvar=variable((yyvsp[0].Node)->name,(yyvsp[-1].Node)->type,(yyvsp[0].Node)->type1,level);
			newvar.dim=(yyvsp[0].Node)->dim;
			active_func_ptr->params.push_back(newvar);
		}
		else{
		 (yyval.Node)->type=ERROR;
		 printf("ERROR: Redeclaration of parameter ");
		 cout<<(yyvsp[0].Node)->name<<endl;
		 printf(" line: %d\n", yylineno);
		 sem_flag=1;
		}
	}
	else{
		printf("The given id is a variable\n");
		if(check_func_varlist(active_func_ptr,(yyvsp[0].Node)->name)){
			variable newvar=variable((yyvsp[0].Node)->name,(yyvsp[-1].Node)->type,(yyvsp[0].Node)->type1,level);
			newvar.dim=(yyvsp[0].Node)->dim;
			active_func_ptr->local_var.push_back(newvar);
		}
		else{
		 (yyval.Node)->type=ERROR;
		 printf("ERROR: Redeclaration of variable ");
		 cout<<(yyvsp[0].Node)->name<<endl;
		 printf(" line: %d\n", yylineno);
		 sem_flag=1;
		}
	}
    }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 348 "parser.y" /* yacc.c:1646  */
    {
		printf("var_type : INT\n");
		(yyval.Node) = add_node("var_type",(yyvsp[0].Node));
	    (yyval.Node)->type = INT1;
	    printf("$$-type = int\n");
	    }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 354 "parser.y" /* yacc.c:1646  */
    {
		printf("var_type : STRING\n");
		(yyval.Node) = add_node("var_type",(yyvsp[0].Node));
	    (yyval.Node)->type = STRING1;
	    }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 359 "parser.y" /* yacc.c:1646  */
    {
		printf("var_type : BOOL\n");
		(yyval.Node) = add_node("var_type",(yyvsp[0].Node));
	    (yyval.Node)->type = BOOL1;
	    }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 364 "parser.y" /* yacc.c:1646  */
    {
		printf("var_type : FLOAT\n");
		(yyval.Node) = add_node("var_type",(yyvsp[0].Node));
		(yyval.Node)->type = FLOAT1;
		}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 371 "parser.y" /* yacc.c:1646  */
    {
			printf("variable : ARRAY \n");
			(yyval.Node)->type1=ARRAY1;
			(yyval.Node)->name=(yyvsp[0].Node)->name;
			(yyval.Node)->dim=(yyvsp[0].Node)->dim;
		}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 377 "parser.y" /* yacc.c:1646  */
    {
			printf("variable : ID \n");
			(yyval.Node)->name=(yyvsp[0].Node)->name;
			struct variable *temp=find_var(active_func_ptr,&global,(yyvsp[0].Node)->name);
			if( temp!=NULL ){
				(yyval.Node)->val=temp->val;
				(yyval.Node)->type = temp->type;
			}
			else{
				(yyval.Node)->type=ERROR;
				printf("ERROR: variable in use is not declared at line no %d\n",yylineno);
				sem_flag=1;
			}
		}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 393 "parser.y" /* yacc.c:1646  */
    {
		printf("array: ID OPENSQ NUM CLOSESQ \n");
		(yyval.Node)->dim=(yyvsp[-1].Node)->val;
		(yyval.Node)->name=(yyvsp[-3].Node)->name;
		(yyval.Node)->type1=ARRAY1;
	}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("loop : for_loop\n");}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("loop : while_loop\n");}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("for_loop\n");}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("while_loop\n");}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("ifstmnt\n");}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("ifstmnt\n");}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 413 "parser.y" /* yacc.c:1646  */
    {
		printf("expr : ID EQUAL condition\n");
	 	(yyval.Node) = add_node("expr",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));
	 	struct variable *temp=find_var(active_func_ptr,&global,(yyvsp[-2].Node)->name);
		if( temp!=NULL ){
			temp->val=(yyvsp[0].Node)->val;
		}
		else{
			(yyval.Node)->type=ERROR;
			printf("variable in use is not declared, error at line no %d\n",yylineno);
			sem_flag=1;
		}
	}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 426 "parser.y" /* yacc.c:1646  */
    {
	 	(yyval.Node) = add_node("expr",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));
        //print_nodes($$);
	 	printf("expr : ID EQUAL  arithmatic_op\n");
	 	/*struct variable *temp=find_var(active_func_ptr,&global,$1->name);
		if( temp!=NULL ){
			temp->val=$3->val;
		}
		else{
			$$->type=ERROR;
			printf("variable in use is not declared, error at line no %d\n",yylineno);
			sem_flag=1;
		}*/
	}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 442 "parser.y" /* yacc.c:1646  */
    {
			printf("condition : arithmatic_op COMPARATOR arithmatic_op\n");
			(yyval.Node) = add_node("condition",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));
			if( ((yyvsp[-2].Node)->type==INT1 || (yyvsp[-2].Node)->type==FLOAT1) && ((yyvsp[0].Node)->type==INT1 || (yyvsp[0].Node)->type==FLOAT1) ){
				(yyval.Node)->type = BOOL1;
			}
            else if ((yyvsp[-2].Node)->type ==BOOL1 && (yyvsp[0].Node)->type==BOOL1 && ((yyvsp[-1].Node)->name=="==" || (yyvsp[-1].Node)->name=="!=") ) 
        		(yyval.Node)->type = BOOL1;
        	else 
        		(yyval.Node)->type = ERROR;

			if((yyval.Node)->type == ERROR){
				sem_flag=1;
				cout<<"type mismatch at line no: "<<endl;
				printf(" %d\n", yylineno);
			}
			else{
				if( (yyvsp[-1].Node)->name==">" )
					(yyval.Node)->val =( (yyvsp[-2].Node)->val > (yyvsp[0].Node)->val);
				else if( (yyvsp[-1].Node)->name==">=" )
					(yyval.Node)->val =( (yyvsp[-2].Node)->val >= (yyvsp[0].Node)->val);
				else if( (yyvsp[-1].Node)->name=="<" )
					(yyval.Node)->val = ((yyvsp[-2].Node)->val < (yyvsp[0].Node)->val);
				else if( (yyvsp[-1].Node)->name=="<=" )
					(yyval.Node)->val =( (yyvsp[-2].Node)->val <= (yyvsp[0].Node)->val);
				else if( (yyvsp[-1].Node)->name=="==" )
					(yyval.Node)->val = ((yyvsp[-2].Node)->val == (yyvsp[0].Node)->val);
				else if( (yyvsp[-1].Node)->name=="!=" )
					(yyval.Node)->val = ((yyvsp[-2].Node)->val != (yyvsp[0].Node)->val);
			}
			printf("$$->value : %f\n", (yyval.Node)->val);
		}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 474 "parser.y" /* yacc.c:1646  */
    {
			printf("condition : UNARY_OP factor\n");
			(yyval.Node) = add_node("condition",(yyvsp[-1].Node),(yyvsp[0].Node));
			if((yyvsp[0].Node)->type!=STRING1){
				if((yyvsp[0].Node)->type!=BOOL1){
					if((yyvsp[-1].Node)->name=="!")
						(yyval.Node)->val=!(yyvsp[0].Node)->val;
					else if((yyvsp[-1].Node)->name=="++"){
						(yyvsp[0].Node)->val=(yyvsp[0].Node)->val+1;
						(yyval.Node)->val=(yyvsp[0].Node)->val;
					}
					else if((yyvsp[-1].Node)->name=="--"){
						(yyvsp[0].Node)->val=(yyvsp[0].Node)->val-1;
						(yyval.Node)->val=(yyvsp[0].Node)->val;
					}
				}
				else if((yyvsp[-1].Node)->name == "!")
					(yyval.Node)->val=!(yyvsp[0].Node)->val;
				else{
					sem_flag=1;
					cout<<"unsuported operand with bool at line no: "<<yylineno<<endl;
					(yyval.Node)->type=ERROR;
				}
			}
			else{
				sem_flag=1;
				cout<<"unsuported operand with string at line no: "<<yylineno<<endl;
				(yyval.Node)->type=ERROR;
			}
			printf("$$->value : %f\n", (yyval.Node)->val);
		}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 505 "parser.y" /* yacc.c:1646  */
    {
			printf("condition : arithmatic_op UNARY_OP\n");
			(yyval.Node) = add_node("condition",(yyvsp[-1].Node),(yyvsp[0].Node));
				if((yyvsp[-1].Node)->type!=STRING1){
					if((yyvsp[-1].Node)->type!=BOOL1){
						if((yyvsp[0].Node)->name=="!")
							(yyval.Node)->val=!(yyvsp[-1].Node)->val;
						else if((yyvsp[0].Node)->name=="++"){
							(yyvsp[-1].Node)->val=(yyvsp[-1].Node)->val+1;
							(yyval.Node)->val=(yyvsp[-1].Node)->val;
						}
						else if((yyvsp[0].Node)->name=="--"){
							(yyvsp[-1].Node)->val=(yyvsp[-1].Node)->val-1;
							(yyval.Node)->val=(yyvsp[-1].Node)->val;
						}
					}
					else if((yyvsp[0].Node)->name == "!")
						(yyval.Node)->val=!(yyvsp[-1].Node)->val;
					else{
						sem_flag=1;
						cout<<"unsuported operand with bool at line no: "<<yylineno<<endl;
						(yyval.Node)->type=ERROR;
					}
				}
				else{
					sem_flag=1;
					cout<<"unsuported operand with string at line no: "<<yylineno<<endl;
					(yyval.Node)->type=ERROR;
				}
				printf("$$->value : %f\n", (yyval.Node)->val);
		}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 538 "parser.y" /* yacc.c:1646  */
    {
				printf("mul : mul SUM arithmatic_op\n");
			    (yyval.Node) = add_node("arithmatic_op",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));
				(yyval.Node)->type=coercible((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
				cout<<"types "<<(yyval.Node)->type<<" "<<(yyvsp[-2].Node)->type<<" "<<(yyvsp[0].Node)->type<<endl;
				if((yyval.Node)->type == ERROR){
					sem_flag=1;
					cout<<"type mismatch at yyline no: "<<yylineno<<endl;
				}
				else{
					if( (yyvsp[-1].Node)->name=="+" )
						(yyval.Node)->val = (yyvsp[-2].Node)->val + (yyvsp[0].Node)->val;
					else
						(yyval.Node)->val = (yyvsp[-2].Node)->val - (yyvsp[0].Node)->val;
				}
				printf("$$->value : %f\n", (yyval.Node)->val);
			}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 555 "parser.y" /* yacc.c:1646  */
    {
		      	printf("arithmatic_op : mul\n");
		      	(yyval.Node) = add_node("arithmatic_op",(yyvsp[0].Node));
				(yyval.Node)->val = (yyvsp[0].Node)->val;
				(yyval.Node)->type = (yyvsp[0].Node)->type;
				cout<<"types "<<(yyval.Node)->type<<" "<<(yyvsp[0].Node)->type<<endl;
				printf("$$->val: %f\n", (yyval.Node)->val);
        		//print_nodes($$);


		    }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 568 "parser.y" /* yacc.c:1646  */
    {
		printf("mul : factor MULT mul\n");
	    (yyval.Node) = add_node("mul",(yyvsp[-2].Node),(yyvsp[-1].Node),(yyvsp[0].Node));
		(yyval.Node)->type=coercible((yyvsp[-2].Node)->type,(yyvsp[0].Node)->type);
		cout<<"types "<<(yyval.Node)->type<<" "<<(yyvsp[-2].Node)->type<<" "<<(yyvsp[0].Node)->type<<endl;

		if((yyval.Node)->type == ERROR){
			sem_flag=1;
			cout<<"type mismatch at yyline no: "<<yylineno<<endl;
		}
		else{
			if( (yyvsp[-1].Node)->name=="*" )
				(yyval.Node)->val = (yyvsp[-2].Node)->val * (yyvsp[0].Node)->val;
			else{
				if((yyvsp[0].Node)->val==0){
					sem_flag=1;
					(yyval.Node)->type=ERROR;
					cout<<"error division by 0 at line no: "<<yylineno<<endl;
				}
				else
					(yyval.Node)->val = (yyvsp[-2].Node)->val / (yyvsp[0].Node)->val;
			}
		}
	}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 593 "parser.y" /* yacc.c:1646  */
    {
	    (yyval.Node) = add_node("mul",(yyvsp[0].Node));
		printf("mul : factor\n");
		(yyval.Node)->val = (yyvsp[0].Node)->val;
		(yyval.Node)->type = (yyvsp[0].Node)->type;
		cout<<"types "<<(yyval.Node)->type<<" "<<(yyvsp[0].Node)->type<<endl;
		printf("$$->val: %f\n", (yyval.Node)->val);

		}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 604 "parser.y" /* yacc.c:1646  */
    {
			printf("factor : ID \n");
	    	(yyval.Node) = add_node("factor",(yyvsp[0].Node));
			struct variable *temp=find_var(active_func_ptr,&global,(yyvsp[0].Node)->name);
			if( temp!=NULL ){
				(yyval.Node)->val=temp->val;
				(yyval.Node)->type = temp->type;
			}
			else{
				(yyval.Node)->type=ERROR;
				printf("variable in use is not declared, error at line no %d\n",yylineno);
				sem_flag=1;
			}

		}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 619 "parser.y" /* yacc.c:1646  */
    {
	    	(yyval.Node) = add_node("factor",(yyvsp[-2].Node));
		    printf("factor : OPENPR arithmatic_op OPENPR \n");
		    (yyval.Node)->type = (yyvsp[-1].Node)->type;
		    (yyval.Node)->val = (yyvsp[-1].Node)->val;
	  		}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 625 "parser.y" /* yacc.c:1646  */
    {
		    printf("factor : NUM \n");
	    	(yyval.Node) = add_node("factor",(yyvsp[0].Node));
		    (yyval.Node)->type = INT1;
			cout<<"types "<<(yyval.Node)->type<<" "<<(yyvsp[0].Node)->type<<endl;
		    (yyval.Node)->val=(yyvsp[0].Node)->val ;
			cout<<"val "<<(yyval.Node)->val<<" "<<(yyvsp[0].Node)->val<<endl;

		    }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 634 "parser.y" /* yacc.c:1646  */
    {
		    printf("factor : FLOAT_CONST \n");
			(yyval.Node) = add_node("factor",(yyvsp[0].Node));
		    (yyval.Node)->type = FLOAT1;
		   	(yyval.Node)->val=(yyvsp[0].Node)->val ;
	   		}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 640 "parser.y" /* yacc.c:1646  */
    {
		   printf("factor : BOOL_CONST \n");
	       (yyval.Node) = add_node("factor",(yyvsp[0].Node));
		   (yyval.Node)->val=(yyvsp[0].Node)->val ;
		   (yyval.Node)->type = BOOL1;
	  	 }
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 646 "parser.y" /* yacc.c:1646  */
    {
	  	 	printf("factor : ID \n");
	    	(yyval.Node) = add_node("factor",(yyvsp[0].Node));
			(yyval.Node)->type = (yyvsp[0].Node)->type;
			(yyval.Node)->type1 = (yyvsp[0].Node)->type1;
		    (yyval.Node)->val = (yyvsp[0].Node)->val;
	  	 }
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2345 "y.tab.c" /* yacc.c:1646  */
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
#line 655 "parser.y" /* yacc.c:1906  */

int main(){
	active_func_ptr = &global;
    func_table.push_back(global);
    yyparse();
    return 0 ;
    

}
