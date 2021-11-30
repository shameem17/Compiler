
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "tem.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int arr[105];


/* Line 189 of yacc.c  */
#line 81 "tem.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DATA = 258,
     VARIABLE = 259,
     IF = 260,
     ELSE = 261,
     MAIN = 262,
     INT = 263,
     FLOAT = 264,
     CHAR = 265,
     START = 266,
     END = 267,
     SWITCH = 268,
     CASE = 269,
     DEFAULT = 270,
     BREAK = 271,
     PRIME = 272,
     LOOP = 273,
     SHOW = 274,
     COMMENT = 275,
     RLOOP = 276,
     WHILE = 277,
     INC = 278,
     DEC = 279,
     CIN = 280,
     CLASS = 281,
     ADD = 282,
     SUB = 283,
     MUL = 284,
     DIV = 285,
     POW = 286,
     MOD = 287,
     SQRT = 288,
     STRING = 289,
     FLT = 290,
     LCM = 291,
     GCD = 292,
     FIB = 293,
     IFX = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 162 "tem.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   473

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,     2,     2,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    43,
      40,    44,    41,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    17,    19,    24,
      27,    30,    35,    45,    55,    65,    75,    85,    95,   103,
     111,   119,   128,   142,   148,   154,   162,   168,   176,   184,
     190,   192,   195,   199,   207,   214,   217,   219,   221,   223,
     227,   229,   231,   233,   235,   239,   243,   247,   251,   255,
     259,   263,   267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     7,    42,    11,    50,    12,    -1,    -1,
      50,    51,    -1,    43,    -1,    20,    -1,    16,    -1,    26,
      11,    51,    12,    -1,    55,    43,    -1,    58,    43,    -1,
       4,    44,    58,    43,    -1,    18,    45,    58,    40,    58,
      46,    11,    51,    12,    -1,    18,    45,    58,    41,    58,
      46,    11,    51,    12,    -1,    21,    45,    58,    41,    58,
      46,    11,    51,    12,    -1,    21,    45,    58,    40,    58,
      46,    11,    51,    12,    -1,    22,    45,    58,    41,    58,
      46,    11,    51,    12,    -1,    22,    45,    58,    40,    58,
      46,    11,    51,    12,    -1,    23,    45,     4,    47,     3,
      46,    43,    -1,    24,    45,     4,    47,     3,    46,    43,
      -1,    13,    45,    58,    46,    11,    52,    12,    -1,     5,
      45,    58,    46,    11,    58,    43,    12,    -1,     5,    45,
      58,    46,    11,    58,    43,    12,     6,    11,    58,    43,
      12,    -1,    19,    45,    58,    46,    43,    -1,    17,    45,
      58,    46,    43,    -1,    25,    45,     4,    47,     3,    46,
      43,    -1,    33,    45,    58,    46,    43,    -1,    37,    45,
      58,    47,    58,    46,    43,    -1,    36,    45,    58,    47,
      58,    46,    43,    -1,    38,    45,    58,    46,    43,    -1,
      53,    -1,    53,    54,    -1,    53,    27,    53,    -1,    14,
       3,    42,    58,    43,    16,    43,    -1,    15,    42,    58,
      43,    16,    43,    -1,    56,    57,    -1,     8,    -1,     9,
      -1,    10,    -1,    57,    47,     4,    -1,     4,    -1,     3,
      -1,    35,    -1,     4,    -1,    58,    27,    58,    -1,    58,
      28,    58,    -1,    58,    29,    58,    -1,    58,    30,    58,
      -1,    58,    32,    58,    -1,    58,    31,    58,    -1,    58,
      40,    58,    -1,    58,    41,    58,    -1,    45,    58,    46,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    25,    25,    28,    29,    32,    33,    34,    35,    36,
      37,    38,    40,    48,    56,    64,    73,    81,    89,    91,
      93,    95,   103,   111,   112,   114,   117,   118,   129,   142,
     156,   157,   159,   160,   162,   164,   168,   169,   170,   175,
     176,   179,   180,   181,   183,   185,   187,   189,   197,   205,
     206,   207,   208
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DATA", "VARIABLE", "IF", "ELSE", "MAIN",
  "INT", "FLOAT", "CHAR", "START", "END", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "PRIME", "LOOP", "SHOW", "COMMENT", "RLOOP", "WHILE", "INC",
  "DEC", "CIN", "CLASS", "ADD", "SUB", "MUL", "DIV", "POW", "MOD", "SQRT",
  "STRING", "FLT", "LCM", "GCD", "FIB", "IFX", "'<'", "'>'", "':'", "';'",
  "'='", "'('", "')'", "','", "$accept", "program", "arg", "statement",
  "B", "C", "D", "declaration", "TYPE", "ID1", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      60,    62,    58,    59,    61,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    53,    53,    54,    55,    56,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     1,     1,     4,     2,
       2,     4,     9,     9,     9,     9,     9,     9,     7,     7,
       7,     8,    13,     5,     5,     7,     5,     7,     7,     5,
       1,     2,     3,     7,     6,     2,     1,     1,     1,     3,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    41,    43,     0,
      36,    37,    38,     2,     0,     7,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     5,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     9,    40,    35,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,    44,    45,    46,    47,    49,
      48,    50,    51,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,    39,     0,     0,    24,    50,    51,    23,    50,
      51,    50,    51,     0,     0,     0,    26,     0,     0,    29,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
      31,     0,     0,     0,     0,     0,     0,    18,    19,    25,
      28,    27,    21,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,    15,    14,    17,
      16,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    33,   132,   133,   150,    34,    35,    57,
      36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -48
static const yytype_int16 yypact[] =
{
      18,   -27,    41,    31,   -48,   -48,   117,   -48,     1,    -2,
     -48,   -48,   -48,   -48,     2,   -48,     5,     6,     7,   -48,
       9,    11,    12,    13,    22,    35,    29,   -48,    30,    43,
      52,   -48,    -1,   -48,    10,    72,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    94,    95,   160,    -1,
      -1,    -1,    -1,   -48,    55,   -48,   -48,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   -48,   357,   179,   186,
     206,    62,   213,    83,   420,    69,    70,    71,   107,   233,
       8,    32,   240,   -48,   124,    -8,    -8,   -18,   -18,   426,
     426,   441,   441,   -48,   133,   134,   103,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   145,   148,   153,   -48,   114,    -1,
      -1,   115,   -48,    -1,   147,   -48,   287,   293,   -48,   299,
     319,   325,   331,   113,   120,   121,   -48,   260,   267,   -48,
     374,   168,   162,   -11,   161,   164,   176,   177,   178,   180,
     149,   151,   156,   157,   158,   190,   170,   -48,   181,   147,
     -48,   160,   160,   160,   160,   160,   160,   -48,   -48,   -48,
     -48,   -48,   184,    -1,    -1,   -48,   192,   209,   210,   212,
     216,   217,   219,   380,   397,   -48,   -48,   -48,   -48,   -48,
     -48,    -1,   215,   223,   403,   205,   207,   237,   -48,   -48,
     -48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -48,   -47,   -48,   102,   -48,   -48,   -48,   -48,
     -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      54,    78,     7,    53,   148,    67,    68,    69,    70,    71,
      72,    73,    74,    62,    63,     3,   149,    79,    80,    81,
      82,    60,    61,    62,    63,     1,    85,    86,    87,    88,
      89,    90,    91,    92,    27,    58,    59,    60,    61,    62,
      63,     4,     5,    38,    32,    37,    48,    39,    64,    65,
      40,    41,    42,    55,    43,   109,    44,    45,    46,    58,
      59,    60,    61,    62,    63,   116,   117,    47,   119,   120,
     121,   122,    64,    65,    49,    50,    56,   127,   128,   110,
      75,   130,    58,    59,    60,    61,    62,    63,    51,    58,
      59,    60,    61,    62,    63,    64,    65,    52,    76,    77,
      84,    83,    97,    98,   166,   167,   168,   169,   170,   171,
      58,    59,    60,    61,    62,    63,   104,   105,   106,   107,
       7,     8,     9,   100,   101,    10,    11,    12,   112,    13,
      14,   173,   174,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   113,   114,   115,   118,   123,   184,
      26,   124,    27,    28,    29,    30,   125,   126,   129,   140,
      31,   131,    32,     7,     8,     9,   141,   142,    10,    11,
      12,   146,   151,    14,   147,   152,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   153,   154,   155,
     172,   156,   157,    26,   158,    27,    28,    29,    30,   159,
     160,   161,   162,    31,   175,    32,    58,    59,    60,    61,
      62,    63,   163,    58,    59,    60,    61,    62,    63,    64,
      65,   176,   177,   164,   178,    94,    64,    65,   179,   180,
     181,   185,    95,    58,    59,    60,    61,    62,    63,   186,
      58,    59,    60,    61,    62,    63,    64,    65,   188,   190,
     189,   165,    96,    64,    65,     0,     0,     0,     0,    99,
      58,    59,    60,    61,    62,    63,     0,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   108,
      64,    65,     0,     0,     0,     0,   111,    58,    59,    60,
      61,    62,    63,     0,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,   143,    64,    65,     0,
       0,     0,     0,   144,    58,    59,    60,    61,    62,    63,
      58,    59,    60,    61,    62,    63,    58,    59,    60,    61,
      62,    63,     0,   134,     0,     0,     0,     0,     0,   135,
       0,     0,     0,     0,     0,   136,    58,    59,    60,    61,
      62,    63,    58,    59,    60,    61,    62,    63,    58,    59,
      60,    61,    62,    63,     0,   137,     0,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,   139,    58,    59,
      60,    61,    62,    63,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,     0,     0,    64,    65,     0,
      93,    58,    59,    60,    61,    62,    63,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,   145,     0,     0,
      64,    65,     0,   182,    58,    59,    60,    61,    62,    63,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
     183,     0,     0,    64,    65,     0,   187,    58,    59,    60,
      61,    62,    63,    58,    59,    60,    61,    62,    63,     0,
     102,   103,     0,     0,     0,     0,    64,    65,    58,    59,
      60,    61,    62,    63
};

static const yytype_int16 yycheck[] =
{
      32,    48,     3,     4,    15,    37,    38,    39,    40,    41,
      42,    43,    44,    31,    32,    42,    27,    49,    50,    51,
      52,    29,    30,    31,    32,     7,    58,    59,    60,    61,
      62,    63,    64,    65,    35,    27,    28,    29,    30,    31,
      32,     0,    11,    45,    45,    44,    11,    45,    40,    41,
      45,    45,    45,    43,    45,    47,    45,    45,    45,    27,
      28,    29,    30,    31,    32,    97,    98,    45,   100,   101,
     102,   103,    40,    41,    45,    45,     4,   109,   110,    47,
       4,   113,    27,    28,    29,    30,    31,    32,    45,    27,
      28,    29,    30,    31,    32,    40,    41,    45,     4,     4,
      47,    46,    40,    41,   151,   152,   153,   154,   155,   156,
      27,    28,    29,    30,    31,    32,    47,    47,    47,    12,
       3,     4,     5,    40,    41,     8,     9,    10,     4,    12,
      13,   163,   164,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    11,    11,    43,    43,     3,   181,
      33,     3,    35,    36,    37,    38,     3,    43,    43,    46,
      43,    14,    45,     3,     4,     5,    46,    46,     8,     9,
      10,     3,    11,    13,    12,    11,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    11,    11,    11,
       6,    11,    43,    33,    43,    35,    36,    37,    38,    43,
      43,    43,    12,    43,    12,    45,    27,    28,    29,    30,
      31,    32,    42,    27,    28,    29,    30,    31,    32,    40,
      41,    12,    12,    42,    12,    46,    40,    41,    12,    12,
      11,    16,    46,    27,    28,    29,    30,    31,    32,    16,
      27,    28,    29,    30,    31,    32,    40,    41,    43,    12,
      43,   149,    46,    40,    41,    -1,    -1,    -1,    -1,    46,
      27,    28,    29,    30,    31,    32,    -1,    27,    28,    29,
      30,    31,    32,    40,    41,    -1,    -1,    -1,    -1,    46,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    27,    28,    29,    30,    31,    32,
      40,    41,    -1,    -1,    -1,    -1,    46,    40,    41,    -1,
      -1,    -1,    -1,    46,    27,    28,    29,    30,    31,    32,
      27,    28,    29,    30,    31,    32,    27,    28,    29,    30,
      31,    32,    -1,    46,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    27,    28,    29,    30,    31,    32,    27,    28,
      29,    30,    31,    32,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    27,    28,    29,    30,    31,    32,
      -1,    40,    41,    -1,    43,    -1,    -1,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    27,    28,    29,
      30,    31,    32,    -1,    40,    41,    -1,    43,    -1,    -1,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      27,    28,    29,    30,    31,    32,    -1,    40,    41,    -1,
      43,    -1,    -1,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    27,    28,    29,    30,    31,    32,    -1,
      40,    41,    -1,    -1,    -1,    -1,    40,    41,    27,    28,
      29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    49,    42,     0,    11,    50,     3,     4,     5,
       8,     9,    10,    12,    13,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    33,    35,    36,    37,
      38,    43,    45,    51,    55,    56,    58,    44,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    11,    45,
      45,    45,    45,     4,    58,    43,     4,    57,    27,    28,
      29,    30,    31,    32,    40,    41,    43,    58,    58,    58,
      58,    58,    58,    58,    58,     4,     4,     4,    51,    58,
      58,    58,    58,    46,    47,    58,    58,    58,    58,    58,
      58,    58,    58,    43,    46,    46,    46,    40,    41,    46,
      40,    41,    40,    41,    47,    47,    47,    12,    46,    47,
      47,    46,     4,    11,    11,    43,    58,    58,    43,    58,
      58,    58,    58,     3,     3,     3,    43,    58,    58,    43,
      58,    14,    52,    53,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    43,     3,    12,    15,    27,
      54,    11,    11,    11,    11,    11,    11,    43,    43,    43,
      43,    43,    12,    42,    42,    53,    51,    51,    51,    51,
      51,    51,     6,    58,    58,    12,    12,    12,    12,    12,
      12,    11,    43,    43,    58,    16,    16,    43,    43,    43,
      12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 33 "tem.y"
    { printf("//This is comment\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 34 "tem.y"
    { break;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 35 "tem.y"
    { printf("Class %s created\n",(yyvsp[(2) - (4)]));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 36 "tem.y"
    { printf("This is a Declaration\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 37 "tem.y"
    {   printf("The value of expression= %d\n", (yyvsp[(1) - (2)])); (yyval)=(yyvsp[(1) - (2)]);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 38 "tem.y"
    {  arr[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); printf("Value of the variable= %d\t\n",(yyvsp[(3) - (4)])); (yyval)=(yyvsp[(3) - (4)]);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 40 "tem.y"
    {
	                                   if((yyvsp[(3) - (9)])>(yyvsp[(5) - (9)]))
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                       int i; for(i=(yyvsp[(3) - (9)]) ; i<=(yyvsp[(5) - (9)]) ; i++) {printf("value of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));} }
									;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 48 "tem.y"
    {
	                                   if((yyvsp[(5) - (9)])>(yyvsp[(3) - (9)]))
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                       int i; for(i=(yyvsp[(5) - (9)]) ; i<=(yyvsp[(3) - (9)]) ; i++) {printf("value of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));} }
									;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 56 "tem.y"
    {
	                                   if((yyvsp[(5) - (9)])>(yyvsp[(3) - (9)]))
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=(yyvsp[(3) - (9)]) ; i>=(yyvsp[(5) - (9)]) ; i--) {printf("value of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));} }
									;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 64 "tem.y"
    {
	                                   if((yyvsp[(3) - (9)])>(yyvsp[(5) - (9)]))
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=(yyvsp[(3) - (9)]) ; i<=(yyvsp[(5) - (9)]) ; i++) {printf("value of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));} }
									;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 73 "tem.y"
    {
	                                   if((yyvsp[(5) - (9)])>(yyvsp[(3) - (9)]))
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=(yyvsp[(3) - (9)]) ; i>=(yyvsp[(5) - (9)]) ; i--) {printf("value of the while loop: %d\n", i);} }
									;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 81 "tem.y"
    {
	                                   if((yyvsp[(3) - (9)])>(yyvsp[(5) - (9)]))
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=(yyvsp[(3) - (9)]) ; i<=(yyvsp[(5) - (9)]) ; i++) {printf("value of the while loop: %d\n", i);} }
									;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 89 "tem.y"
    { arr[(yyvsp[(3) - (7)])] = arr[(yyvsp[(3) - (7)])] + (yyvsp[(5) - (7)]);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 91 "tem.y"
    { arr[(yyvsp[(3) - (7)])]=arr[(yyvsp[(3) - (7)])]- (yyvsp[(5) - (7)]); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 95 "tem.y"
    {
								if((yyvsp[(3) - (8)])){
									printf("\nvalue of expression in condition: %d\n",(yyvsp[(6) - (8)]));
								}
								else{
									printf("\ncondition value zero in the block\n");
								}
							;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 103 "tem.y"
    {
								if((yyvsp[(3) - (13)])){
									printf("\nvalue of expression in condition: %d\n",(yyvsp[(6) - (13)]));
								}
								else{
									printf("value of expression in or: %d\n",(yyvsp[(11) - (13)]));
								}
							;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 111 "tem.y"
    {printf("Printing Value %d\n",(yyvsp[(3) - (5)]));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 112 "tem.y"
    { int c=1; for(int i=2;i*i<=(yyvsp[(3) - (5)]);i++){ if((yyvsp[(3) - (5)]) % i==0){ printf("\n%d is not prime\n",(yyvsp[(3) - (5)])); c=0; break;}}
	                                    if(c){ printf("\n%d is prime\n",(yyvsp[(3) - (5)]));};}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 114 "tem.y"
    {  arr[(yyvsp[(3) - (7)])]=(yyvsp[(5) - (7)]);
                                     printf("input done. Value =%d \n",arr[(yyvsp[(3) - (7)])]);   
    									 ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 117 "tem.y"
    {   printf("Value of root=%lf\n", sqrt((yyvsp[(3) - (5)])*1.0)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 118 "tem.y"
    { int n1=(yyvsp[(3) - (7)]),n2=(yyvsp[(5) - (7)]),g;
	                                            for(int i=1;i<=n1&&i<=n2;i++)
												{
												  if(n1%i==0&&n2%i==0)
												  {
												     g=i;
												
												 }
												 }
											printf("Gcd of %d and %d = %d\n",(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),g);
										;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 129 "tem.y"
    { int n1=(yyvsp[(3) - (7)]),n2=(yyvsp[(5) - (7)]),g;
	                                            for(int i=1;i<=n1&&i<=n2;i++)
												{
												  if(n1%i==0&&n2%i==0)
												  {
												     g=i;
												
												 }
												 }
												 int x=n1/g*n2;
											printf("Lcm of %d and %d = %d\n",(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),x);
	
	                                    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 142 "tem.y"
    { int n=(yyvsp[(3) - (5)]); int fibo[n+6]; fibo[0]=0; fibo[1]=1; 
	                              printf("The fibonacci series is= %d %d ",fibo[0],fibo[1]);
	                               for(int i=2;i<=n;i++)
								   {
								     fibo[i]=fibo[i-1]+fibo[i-2];
									 printf("%d ",fibo[i]);
								   }
								   printf("\n");
								   
								   ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 160 "tem.y"
    {printf("Case %d executed and the expression value is=%d\n",(yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 162 "tem.y"
    {printf("Default Case executed and the expression value=%d\n",(yyvsp[(3) - (6)]));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 179 "tem.y"
    { (yyval) = (yyvsp[(1) - (1)]); 	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 180 "tem.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 181 "tem.y"
    { (yyval) = arr[(yyvsp[(1) - (1)])]; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 183 "tem.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 185 "tem.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 187 "tem.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 189 "tem.y"
    { if((yyvsp[(3) - (3)])){
				     					(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  					}
				  					else{
										(yyval) = 0;
										printf("\ndividing by zero\t");
				  					} 	
				    			;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 197 "tem.y"
    { if((yyvsp[(3) - (3)])){
				     					(yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]);
				  					}
				  					else{
										(yyval) = 0;
										printf("\nMOD by zero\t");
				  					} 	
				    			;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 205 "tem.y"
    { (yyval) = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)]));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 206 "tem.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 207 "tem.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 208 "tem.y"
    { (yyval) = (yyvsp[(2) - (3)]);	;}
    break;



/* Line 1455 of yacc.c  */
#line 1915 "tem.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 210 "tem.y"



