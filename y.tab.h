/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PLOT = 258,                    /* PLOT  */
    OPEN_BRACKET = 259,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 260,           /* CLOSE_BRACKET  */
    ASSIGN = 261,                  /* ASSIGN  */
    PRINT = 262,                   /* PRINT  */
    COMMA = 263,                   /* COMMA  */
    num = 264,                     /* num  */
    VARIABLE = 265,                /* VARIABLE  */
    ADD = 266,                     /* ADD  */
    SUB = 267,                     /* SUB  */
    MUL = 268,                     /* MUL  */
    DIV = 269,                     /* DIV  */
    POW = 270,                     /* POW  */
    EXP = 271,                     /* EXP  */
    SQRT = 272,                    /* SQRT  */
    MOD = 273,                     /* MOD  */
    PI = 274,                      /* PI  */
    E = 275,                       /* E  */
    COS = 276,                     /* COS  */
    SIN = 277,                     /* SIN  */
    TAN = 278,                     /* TAN  */
    ASIN = 279,                    /* ASIN  */
    ACOS = 280,                    /* ACOS  */
    ATAN = 281,                    /* ATAN  */
    COT = 282,                     /* COT  */
    SEC = 283,                     /* SEC  */
    COSEC = 284,                   /* COSEC  */
    LOG = 285,                     /* LOG  */
    LN = 286                       /* LN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PLOT 258
#define OPEN_BRACKET 259
#define CLOSE_BRACKET 260
#define ASSIGN 261
#define PRINT 262
#define COMMA 263
#define num 264
#define VARIABLE 265
#define ADD 266
#define SUB 267
#define MUL 268
#define DIV 269
#define POW 270
#define EXP 271
#define SQRT 272
#define MOD 273
#define PI 274
#define E 275
#define COS 276
#define SIN 277
#define TAN 278
#define ASIN 279
#define ACOS 280
#define ATAN 281
#define COT 282
#define SEC 283
#define COSEC 284
#define LOG 285
#define LN 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "calc.y"

    double val;
    char var;
    char* str;

#line 135 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
