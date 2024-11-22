/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "calc.y"

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<alloca.h>
#include<stddef.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>



extern char* yytext;
extern int yylineno;
extern int yyleng;


typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern YY_BUFFER_STATE yy_scan_string(const char *str);
extern void yy_switch_to_buffer(YY_BUFFER_STATE buffer);
extern void yy_delete_buffer(YY_BUFFER_STATE buffer);


int yylex(void);
int m=1;
int plot=0;
int count;
int flag=0;
int qtr=-1;
double arr[1000];
double x1[721];

double sym[52];         //a-z and A-Z

void yyerror(char* s)       //ERROR PRINTING
{
    printf("%s\n", s);
    flag=1;
}

void set_input(const char *input) {
    yytext = strdup(input);  // Set yytext to the new input string
    yyleng = strlen(yytext);  // Set the length of the input string
    yylineno = 1;             // Reset the line number for fresh parsing
}



#line 121 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 242 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PLOT = 3,                       /* PLOT  */
  YYSYMBOL_OPEN_BRACKET = 4,               /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 5,              /* CLOSE_BRACKET  */
  YYSYMBOL_ASSIGN = 6,                     /* ASSIGN  */
  YYSYMBOL_PRINT = 7,                      /* PRINT  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_num = 9,                        /* num  */
  YYSYMBOL_VARIABLE = 10,                  /* VARIABLE  */
  YYSYMBOL_ADD = 11,                       /* ADD  */
  YYSYMBOL_SUB = 12,                       /* SUB  */
  YYSYMBOL_MUL = 13,                       /* MUL  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_POW = 15,                       /* POW  */
  YYSYMBOL_EXP = 16,                       /* EXP  */
  YYSYMBOL_SQRT = 17,                      /* SQRT  */
  YYSYMBOL_MOD = 18,                       /* MOD  */
  YYSYMBOL_PI = 19,                        /* PI  */
  YYSYMBOL_E = 20,                         /* E  */
  YYSYMBOL_COS = 21,                       /* COS  */
  YYSYMBOL_SIN = 22,                       /* SIN  */
  YYSYMBOL_TAN = 23,                       /* TAN  */
  YYSYMBOL_ASIN = 24,                      /* ASIN  */
  YYSYMBOL_ACOS = 25,                      /* ACOS  */
  YYSYMBOL_ATAN = 26,                      /* ATAN  */
  YYSYMBOL_COT = 27,                       /* COT  */
  YYSYMBOL_SEC = 28,                       /* SEC  */
  YYSYMBOL_COSEC = 29,                     /* COSEC  */
  YYSYMBOL_LOG = 30,                       /* LOG  */
  YYSYMBOL_LN = 31,                        /* LN  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_ss = 33,                        /* ss  */
  YYSYMBOL_new = 34,                       /* new  */
  YYSYMBOL_expr = 35,                      /* expr  */
  YYSYMBOL_exp = 36,                       /* exp  */
  YYSYMBOL_constant = 37                   /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    87,   101,   112,   118,   125,   198,   202,
     206,   210,   214,   218,   222,   226,   231,   235,   239,   243,
     247,   255,   258,   282,   285,   309,   312,   336,   346,   378,
     381,   384,   394,   397,   400,   403,   406,   417,   420,   423,
     426,   429,   432,   442,   452,   458,   461,   464,   465,   468
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PLOT", "OPEN_BRACKET",
  "CLOSE_BRACKET", "ASSIGN", "PRINT", "COMMA", "num", "VARIABLE", "ADD",
  "SUB", "MUL", "DIV", "POW", "EXP", "SQRT", "MOD", "PI", "E", "COS",
  "SIN", "TAN", "ASIN", "ACOS", "ATAN", "COT", "SEC", "COSEC", "LOG", "LN",
  "$accept", "ss", "new", "expr", "exp", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      60,     4,    88,     5,   -40,    62,    88,     6,   -40,   -40,
      12,    13,    19,    28,    41,    54,    61,    67,    74,    89,
      92,    21,   -40,   318,   -40,    -3,   138,   143,    56,    88,
      84,    96,   111,   112,   324,    88,    88,   116,    88,    88,
      88,    88,    88,    88,    88,    88,    88,   -40,    88,    88,
      88,    88,    88,    88,    -3,   -40,   -40,    95,   120,   123,
     130,   149,   156,     0,   -40,   157,   318,   -40,   -40,   -40,
     -40,   154,   165,    17,   176,   187,   198,   209,   220,   231,
     242,   253,   264,   275,   324,   324,   148,   148,   -40,   148,
      90,    -3,    -3,    -3,    -3,    -3,    -3,   -40,    -3,    -3,
      -3,    -3,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   118,   286,   290,
     300,   304,   314,   -11,   -11,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    46,     5,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     4,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,    15,    14,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     2,    22,    24,    26,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    23,    25,    27,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     3,    34,    37,    36,    35,    38,    42,    43,
      44,    41,    40,    39,    32,    33,    20,     0,     0,     0,
       0,     0,     0,    16,    18,    17,    19,     9,     8,    10,
      11,    12,    13
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,   -39,    -2,   -40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    21,    22,    63,    23,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    54,   100,   101,    34,    97,    55,    56,    25,    28,
      35,    98,    99,   100,   101,    90,    36,    37,    57,    58,
      59,    47,   105,    38,    60,    61,    62,    66,    30,    31,
      32,    33,    39,    71,    72,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    40,    84,    85,    86,    87,
      88,    89,   117,   118,   119,   120,   121,   122,    41,   123,
     124,   125,   126,     1,     2,    42,    65,     3,    29,     4,
       5,    43,     6,    30,    31,    32,    33,     7,    44,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     2,    45,    67,   116,    46,     4,    26,    91,
       6,    98,    99,   100,   101,     7,    68,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       2,    69,    70,   127,    92,     4,    73,    93,     6,    98,
      99,   100,   101,     7,    94,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    64,    30,
      31,    32,    33,    95,    48,    49,    50,    51,    52,   103,
      96,    53,   102,    52,     0,    48,    49,    50,    51,    52,
     104,     0,    53,     0,     0,     0,    48,    49,    50,    51,
      52,   106,     0,    53,     0,     0,     0,    48,    49,    50,
      51,    52,   107,     0,    53,     0,     0,     0,    48,    49,
      50,    51,    52,   108,     0,    53,     0,     0,     0,    48,
      49,    50,    51,    52,   109,     0,    53,     0,     0,     0,
      48,    49,    50,    51,    52,   110,     0,    53,     0,     0,
       0,    48,    49,    50,    51,    52,   111,     0,    53,     0,
       0,     0,    48,    49,    50,    51,    52,   112,     0,    53,
       0,     0,     0,    48,    49,    50,    51,    52,   113,     0,
      53,     0,     0,     0,    48,    49,    50,    51,    52,   114,
       0,    53,     0,     0,     0,    48,    49,    50,    51,    52,
     115,     0,    53,     0,     0,     0,    48,    49,    50,    51,
      52,   128,     0,    53,     0,   129,     0,    98,    99,   100,
     101,    98,    99,   100,   101,   130,     0,     0,     0,   131,
       0,    98,    99,   100,   101,    98,    99,   100,   101,   132,
       0,     0,     0,     0,     0,    98,    99,   100,   101,    48,
      49,    50,    51,    52,     0,     0,    53,    50,    51,    52,
       0,     0,    53
};

static const yytype_int8 yycheck[] =
{
       2,     4,    13,    14,     6,     5,     9,    10,     4,     4,
       4,    11,    12,    13,    14,    54,     4,     4,    21,    22,
      23,     0,     5,     4,    27,    28,    29,    29,    11,    12,
      13,    14,     4,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     4,    48,    49,    50,    51,
      52,    53,    91,    92,    93,    94,    95,    96,     4,    98,
      99,   100,   101,     3,     4,     4,    10,     7,     6,     9,
      10,     4,    12,    11,    12,    13,    14,    17,     4,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     4,     4,    10,     5,     4,     9,    10,     4,
      12,    11,    12,    13,    14,    17,    10,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       4,    10,    10,     5,     4,     9,    10,     4,    12,    11,
      12,    13,    14,    17,     4,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     5,    11,
      12,    13,    14,     4,    11,    12,    13,    14,    15,     5,
       4,    18,     5,    15,    -1,    11,    12,    13,    14,    15,
       5,    -1,    18,    -1,    -1,    -1,    11,    12,    13,    14,
      15,     5,    -1,    18,    -1,    -1,    -1,    11,    12,    13,
      14,    15,     5,    -1,    18,    -1,    -1,    -1,    11,    12,
      13,    14,    15,     5,    -1,    18,    -1,    -1,    -1,    11,
      12,    13,    14,    15,     5,    -1,    18,    -1,    -1,    -1,
      11,    12,    13,    14,    15,     5,    -1,    18,    -1,    -1,
      -1,    11,    12,    13,    14,    15,     5,    -1,    18,    -1,
      -1,    -1,    11,    12,    13,    14,    15,     5,    -1,    18,
      -1,    -1,    -1,    11,    12,    13,    14,    15,     5,    -1,
      18,    -1,    -1,    -1,    11,    12,    13,    14,    15,     5,
      -1,    18,    -1,    -1,    -1,    11,    12,    13,    14,    15,
       5,    -1,    18,    -1,    -1,    -1,    11,    12,    13,    14,
      15,     5,    -1,    18,    -1,     5,    -1,    11,    12,    13,
      14,    11,    12,    13,    14,     5,    -1,    -1,    -1,     5,
      -1,    11,    12,    13,    14,    11,    12,    13,    14,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    11,
      12,    13,    14,    15,    -1,    -1,    18,    13,    14,    15,
      -1,    -1,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     7,     9,    10,    12,    17,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    33,    34,    36,    37,     4,    10,    36,     4,     6,
      11,    12,    13,    14,    36,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,    11,    12,
      13,    14,    15,    18,     4,     9,    10,    21,    22,    23,
      27,    28,    29,    35,     5,    10,    36,    10,    10,    10,
      10,    36,    36,    10,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      35,     4,     4,     4,     4,     4,     4,     5,    11,    12,
      13,    14,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,     5,     5,     5,
       5,     5,     5
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    33,    33,    33,    34,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    37,    37
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* ss: VARIABLE ASSIGN exp  */
#line 76 "calc.y"
                        {
    if(islower((yyvsp[-2].var)))
    {
        sym[(yyvsp[-2].var) - 97] = (yyvsp[0].val);
    }
    else
    {
        sym[(yyvsp[-2].var) - 39] = (yyvsp[0].val);
    }
    
}
#line 1379 "y.tab.c"
    break;

  case 3: /* ss: PRINT OPEN_BRACKET VARIABLE CLOSE_BRACKET  */
#line 87 "calc.y"
                                            {
    if(flag==0)
    {
        if(islower((yyvsp[-1].var)))
        {
            printf("Result: %.10f\n",sym[(yyvsp[-1].var)-97]);
        }
        else
        {
            printf("Result: %.10f\n",sym[(yyvsp[-1].var)-39]);
        }
        
    }
}
#line 1398 "y.tab.c"
    break;

  case 4: /* ss: exp  */
#line 101 "calc.y"
      {
    if(flag==0 && plot==0)
    {
        printf("Result: %.10f\n", (yyvsp[0].val));
    }
    if(plot==1)
    {
        arr[++qtr] = (yyvsp[0].val);
    }

}
#line 1414 "y.tab.c"
    break;

  case 5: /* ss: VARIABLE  */
#line 112 "calc.y"
           {
    if(flag==0)
    {
        printf("Result: %.10f\n", sym[(yyvsp[0].var)-97]);
    }
}
#line 1425 "y.tab.c"
    break;

  case 6: /* ss: new  */
#line 118 "calc.y"
      {
    if(flag==0)
    {
        printf("Result: %.10f\n", (yyvsp[0].val));
    }
}
#line 1436 "y.tab.c"
    break;

  case 7: /* new: PLOT OPEN_BRACKET expr CLOSE_BRACKET  */
#line 125 "calc.y"
                                          {

    if(flag == 0) {
        qtr = -1;
        printf("PLOTTING y=%s\n", (yyvsp[-1].str));
        plot = 1;
        // Define the range for 'x'
        int start_value = -360;  
        int end_value = 360;   
        int step = 1;  
        
        
        for (int current_value = start_value; current_value <= end_value; current_value += step) 
        {
            
            
            char input_with_x[1024];
            snprintf(input_with_x, sizeof(input_with_x), "%s", (yyvsp[-1].str)); 
            
            char *modified_expr = malloc(strlen(input_with_x) + 20);
            
            char *ptr = modified_expr;
            for (int i = 0; input_with_x[i] != '\0'; i++) 
            {
                if (input_with_x[i] == 'x') 
                {
                    
                    ptr += sprintf(ptr, "%d", current_value);
                } 
                else 
                {
                    *ptr++ = input_with_x[i];  
                }
            }
            *ptr = '\0'; 
            
            
            printf("Evaluating expression for x = %d: %s\n", current_value, modified_expr);
            
            
            YY_BUFFER_STATE my_string_buffer = yy_scan_string(modified_expr);
            yy_switch_to_buffer(my_string_buffer); 
            yyparse();  
            
        }
        for(int i=0; i<721;i++)
        {
            printf("%f\n",arr[i]);
        }
        FILE *gnuplot = popen("gnuplot -persistent", "w");

            if(gnuplot == NULL)
            {
                fprintf(stderr, "Error Opening gnuplot\n");
            }

            fprintf(gnuplot, "set xrange [-360:360]\n");  // x-axis range from 0 to 6
            fprintf(gnuplot, "set yrange [-2:2]\n");
            fprintf(gnuplot, "set grid\n");
            fprintf(gnuplot, "set xtics 60\n");
            fprintf(gnuplot, "plot '-' using 1:2 with lines smooth csplines\n");

            for(int i=0;i<721;i++)
            {
                fprintf(gnuplot, "%lf %lf\n", x1[i], arr[i]);
            }
            fprintf(gnuplot, "e\n");
            fclose(gnuplot);

    }
    plot = 0;
}
#line 1513 "y.tab.c"
    break;

  case 8: /* expr: SIN OPEN_BRACKET expr CLOSE_BRACKET  */
#line 198 "calc.y"
                                          {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "sin(%s)", (yyvsp[-1].str));  
}
#line 1522 "y.tab.c"
    break;

  case 9: /* expr: COS OPEN_BRACKET expr CLOSE_BRACKET  */
#line 202 "calc.y"
                                      {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "cos(%s)", (yyvsp[-1].str));  
}
#line 1531 "y.tab.c"
    break;

  case 10: /* expr: TAN OPEN_BRACKET expr CLOSE_BRACKET  */
#line 206 "calc.y"
                                      {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "tan(%s)", (yyvsp[-1].str));  
}
#line 1540 "y.tab.c"
    break;

  case 11: /* expr: COT OPEN_BRACKET expr CLOSE_BRACKET  */
#line 210 "calc.y"
                                      {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "1/tan(%s)", (yyvsp[-1].str));  
}
#line 1549 "y.tab.c"
    break;

  case 12: /* expr: SEC OPEN_BRACKET expr CLOSE_BRACKET  */
#line 214 "calc.y"
                                      {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "1/cos(%s)", (yyvsp[-1].str));  
}
#line 1558 "y.tab.c"
    break;

  case 13: /* expr: COSEC OPEN_BRACKET expr CLOSE_BRACKET  */
#line 218 "calc.y"
                                        {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "1/sin(%s)", (yyvsp[-1].str));  
}
#line 1567 "y.tab.c"
    break;

  case 14: /* expr: VARIABLE  */
#line 222 "calc.y"
           {
    (yyval.str) = malloc(sizeof(char) * 10);
    sprintf((yyval.str), "%c", 'x');  
}
#line 1576 "y.tab.c"
    break;

  case 15: /* expr: num  */
#line 226 "calc.y"
      {
    
    (yyval.str) = malloc(sizeof(char) * 10);
    sprintf((yyval.str), "%f", (yyvsp[0].val));  
}
#line 1586 "y.tab.c"
    break;

  case 16: /* expr: expr ADD expr  */
#line 231 "calc.y"
                {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "(%s + %s)", (yyvsp[-2].str), (yyvsp[0].str));  
}
#line 1595 "y.tab.c"
    break;

  case 17: /* expr: expr MUL expr  */
#line 235 "calc.y"
                {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "(%s * %s)", (yyvsp[-2].str), (yyvsp[0].str));
}
#line 1604 "y.tab.c"
    break;

  case 18: /* expr: expr SUB expr  */
#line 239 "calc.y"
                {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "(%s - %s)", (yyvsp[-2].str), (yyvsp[0].str));
}
#line 1613 "y.tab.c"
    break;

  case 19: /* expr: expr DIV expr  */
#line 243 "calc.y"
                {
    (yyval.str) = malloc(sizeof(char) * 100);
    sprintf((yyval.str), "(%s / %s)", (yyvsp[-2].str), (yyvsp[0].str));
}
#line 1622 "y.tab.c"
    break;

  case 20: /* expr: OPEN_BRACKET expr CLOSE_BRACKET  */
#line 247 "calc.y"
                                  {
    (yyval.str) = (yyvsp[-1].str); 
}
#line 1630 "y.tab.c"
    break;

  case 21: /* exp: exp ADD exp  */
#line 255 "calc.y"
                 {
    (yyval.val) = (yyvsp[-2].val) + (yyvsp[0].val);
}
#line 1638 "y.tab.c"
    break;

  case 22: /* exp: VARIABLE ADD VARIABLE  */
#line 258 "calc.y"
                       {
    double x,y;
    if(islower((yyvsp[-2].var)))
    {
        x = sym[(yyvsp[-2].var)-97];

    }
    else
    {
        x = sym[(yyvsp[-2].var)-39];
    }
    if(islower((yyvsp[0].var)))
    {
        y = sym[(yyvsp[0].var)-97];

    }
    else
    {
        y = sym[(yyvsp[0].var)-39];
    }

    (yyval.val) = x + y;
}
#line 1666 "y.tab.c"
    break;

  case 23: /* exp: exp SUB exp  */
#line 282 "calc.y"
              {
    (yyval.val) = (yyvsp[-2].val) - (yyvsp[0].val);
}
#line 1674 "y.tab.c"
    break;

  case 24: /* exp: VARIABLE SUB VARIABLE  */
#line 285 "calc.y"
                       {
    double x,y;
    if(islower((yyvsp[-2].var)))
    {
        x = sym[(yyvsp[-2].var)-97];

    }
    else
    {
        x = sym[(yyvsp[-2].var)-39];
    }
    if(islower((yyvsp[0].var)))
    {
        y = sym[(yyvsp[0].var)-97];

    }
    else
    {
        y = sym[(yyvsp[0].var)-39];
    }

    (yyval.val) = x - y;
}
#line 1702 "y.tab.c"
    break;

  case 25: /* exp: exp MUL exp  */
#line 309 "calc.y"
              {
    (yyval.val) = (yyvsp[-2].val) * (yyvsp[0].val);
}
#line 1710 "y.tab.c"
    break;

  case 26: /* exp: VARIABLE MUL VARIABLE  */
#line 312 "calc.y"
                       {
    double x,y;
    if(islower((yyvsp[-2].var)))
    {
        x = sym[(yyvsp[-2].var)-97];

    }
    else
    {
        x = sym[(yyvsp[-2].var)-39];
    }
    if(islower((yyvsp[0].var)))
    {
        y = sym[(yyvsp[0].var)-97];

    }
    else
    {
        y = sym[(yyvsp[0].var)-39];
    }

    (yyval.val) = x * y;
}
#line 1738 "y.tab.c"
    break;

  case 27: /* exp: exp DIV exp  */
#line 336 "calc.y"
              {                      
    if ((yyvsp[0].val) != 0) 
    {                   
        (yyval.val) = (yyvsp[-2].val) / (yyvsp[0].val);                
    } 
    else 
    {
        yyerror("Divide Error: Cannot divide by 0\n"); 
    }
}
#line 1753 "y.tab.c"
    break;

  case 28: /* exp: VARIABLE DIV VARIABLE  */
#line 346 "calc.y"
                       {
    double x,y;
    if(islower((yyvsp[-2].var)))
    {
        x = sym[(yyvsp[-2].var)-97];

    }
    else
    {
        x = sym[(yyvsp[-2].var)-39];
    }
    if(islower((yyvsp[0].var)))
    {
        y = sym[(yyvsp[0].var)-97];

    }
    else
    {
        y = sym[(yyvsp[0].var)-39];
    }

    if(y!=0)
    {
        (yyval.val) = x / y;
    }
    else
    {
        yyerror("Divide Error: Cannot divide by 0\n");
        
    }
    
}
#line 1790 "y.tab.c"
    break;

  case 29: /* exp: SUB exp  */
#line 378 "calc.y"
          {                          
    (yyval.val) = -(yyvsp[0].val);                        
}
#line 1798 "y.tab.c"
    break;

  case 30: /* exp: exp POW exp  */
#line 381 "calc.y"
              {                      
    (yyval.val) = pow((yyvsp[-2].val), (yyvsp[0].val));                
}
#line 1806 "y.tab.c"
    break;

  case 31: /* exp: exp MOD exp  */
#line 384 "calc.y"
              {                      
    if ((yyvsp[0].val) != 0) 
    {                   
        (yyval.val) = fmod((yyvsp[-2].val), (yyvsp[0].val));           
    } 
    else 
    {
        yyerror("Modulo Error: Cannot divide by 0\n"); 
    }
}
#line 1821 "y.tab.c"
    break;

  case 32: /* exp: LOG OPEN_BRACKET exp CLOSE_BRACKET  */
#line 394 "calc.y"
                                     {   
    (yyval.val) = log10((yyvsp[-1].val));                    
}
#line 1829 "y.tab.c"
    break;

  case 33: /* exp: LN OPEN_BRACKET exp CLOSE_BRACKET  */
#line 397 "calc.y"
                                    {    
    (yyval.val) = log((yyvsp[-1].val));                      
}
#line 1837 "y.tab.c"
    break;

  case 34: /* exp: SQRT OPEN_BRACKET exp CLOSE_BRACKET  */
#line 400 "calc.y"
                                      {  
    (yyval.val) = sqrt((yyvsp[-1].val));                    
}
#line 1845 "y.tab.c"
    break;

  case 35: /* exp: SIN OPEN_BRACKET exp CLOSE_BRACKET  */
#line 403 "calc.y"
                                     {   
    (yyval.val) = m == 1 ? sin((yyvsp[-1].val) * M_PI / 180) : sin((yyvsp[-1].val)); 
}
#line 1853 "y.tab.c"
    break;

  case 36: /* exp: SIN OPEN_BRACKET VARIABLE CLOSE_BRACKET  */
#line 406 "calc.y"
                                          {
    if(islower((yyvsp[-1].var)))
    {
        (yyval.val) = m == 1 ? sin(sym[(yyvsp[-1].var)-97] * M_PI / 180) : sin((yyvsp[-1].var));
    }
    else
    {
        (yyval.val) = m == 1 ? sin(sym[(yyvsp[-1].var)-39] * M_PI / 180) : sin((yyvsp[-1].var));
    }
    
}
#line 1869 "y.tab.c"
    break;

  case 37: /* exp: COS OPEN_BRACKET exp CLOSE_BRACKET  */
#line 417 "calc.y"
                                     {   
    (yyval.val) = m == 1 ? cos((yyvsp[-1].val) * M_PI / 180) : cos((yyvsp[-1].val)); 
}
#line 1877 "y.tab.c"
    break;

  case 38: /* exp: TAN OPEN_BRACKET exp CLOSE_BRACKET  */
#line 420 "calc.y"
                                     {   
    (yyval.val) = m == 1 ? tan((yyvsp[-1].val) * M_PI / 180) : tan((yyvsp[-1].val)); 
}
#line 1885 "y.tab.c"
    break;

  case 39: /* exp: COSEC OPEN_BRACKET exp CLOSE_BRACKET  */
#line 423 "calc.y"
                                       { 
    (yyval.val) = m == 1 ? 1 / sin((yyvsp[-1].val) * M_PI / 180) : 1 / sin((yyvsp[-1].val)); 
}
#line 1893 "y.tab.c"
    break;

  case 40: /* exp: SEC OPEN_BRACKET exp CLOSE_BRACKET  */
#line 426 "calc.y"
                                     {   
    (yyval.val) = m == 1 ? 1 / cos((yyvsp[-1].val) * M_PI / 180) : 1 / cos((yyvsp[-1].val)); 
}
#line 1901 "y.tab.c"
    break;

  case 41: /* exp: COT OPEN_BRACKET exp CLOSE_BRACKET  */
#line 429 "calc.y"
                                     {   
    (yyval.val) = m == 1 ? 1 / tan((yyvsp[-1].val) * M_PI / 180) : 1 / tan((yyvsp[-1].val)); 
}
#line 1909 "y.tab.c"
    break;

  case 42: /* exp: ASIN OPEN_BRACKET exp CLOSE_BRACKET  */
#line 432 "calc.y"
                                      {  
    if ((yyvsp[-1].val) <= 1 && (yyvsp[-1].val) >= -1) 
    {           
        (yyval.val) = m == 1 ? asin((yyvsp[-1].val)) * 180 / M_PI : asin((yyvsp[-1].val)); 
    } 
    else 
    {
        yyerror("ASIN ERROR: Out of Range\n"); 
    }
}
#line 1924 "y.tab.c"
    break;

  case 43: /* exp: ACOS OPEN_BRACKET exp CLOSE_BRACKET  */
#line 442 "calc.y"
                                      {  
    if ((yyvsp[-1].val) <= 1 && (yyvsp[-1].val) >= -1) 
    {           
        (yyval.val) = m == 1 ? acos((yyvsp[-1].val)) * 180 / M_PI : acos((yyvsp[-1].val)); 
    } 
    else 
    {
        yyerror("ACOS ERROR: Out of Range\n"); 
    }
}
#line 1939 "y.tab.c"
    break;

  case 44: /* exp: ATAN OPEN_BRACKET exp CLOSE_BRACKET  */
#line 452 "calc.y"
                                      {  
    if ((yyvsp[-1].val) <= 1 && (yyvsp[-1].val) >= -1) 
    {           
        (yyval.val) = m == 1 ? atan((yyvsp[-1].val)) * 180 / M_PI : atan((yyvsp[-1].val)); 
    }
}
#line 1950 "y.tab.c"
    break;

  case 45: /* exp: OPEN_BRACKET exp CLOSE_BRACKET  */
#line 458 "calc.y"
                                 {       
    (yyval.val) = (yyvsp[-1].val);                            
}
#line 1958 "y.tab.c"
    break;

  case 46: /* exp: num  */
#line 461 "calc.y"
      {                                 
    (yyval.val) = (yyvsp[0].val);                            
}
#line 1966 "y.tab.c"
    break;

  case 48: /* constant: PI  */
#line 465 "calc.y"
              {                         
    (yyval.val) = M_PI;                          
}
#line 1974 "y.tab.c"
    break;

  case 49: /* constant: E  */
#line 468 "calc.y"
    {                                   
    (yyval.val) = M_E;                           
}
#line 1982 "y.tab.c"
    break;


#line 1986 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 474 "calc.y"

void main() {
    for(int i=0;i<721;i++)
    {
        x1[i] = i-360;
    }
    do {
        flag = 0; count = 0;               
        printf("-> ");       

        // Read input from stdin (terminal)
        char input[1024];  // Adjust size as needed
        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("Error reading input");
            break;
        }

        // Strip newline character if it's present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Create a new buffer for the terminal input
        YY_BUFFER_STATE buffer = yy_scan_string(input);
        if (!buffer) {
            perror("Error scanning input");
            continue;
        }

        // Switch to the newly created buffer for stdin
        yy_switch_to_buffer(buffer);

        // Parse the terminal input
        int result = yyparse();
        if (result != 0) {
            printf("Parsing failed.\n");
        } else {
            printf("Parsing succeeded.\n");
        }

        // Delete the buffer after parsing
        yy_delete_buffer(buffer);

        if (flag == -1) {                  // Check for errors
            flag = 0;
            yyparse();                     // Retry parsing
        }

    } while (1);                            
}


