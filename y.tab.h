/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 33 "parser.y" /* yacc.c:1909  */

	node *Node;

#line 206 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
