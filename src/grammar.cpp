/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     BOOL = 261,
     STRING = 262,
     IDy = 263,
     SEMI = 264,
     COMMA = 265,
     ASSIGNOP = 266,
     RELOP = 267,
     PLUS = 268,
     MINUS = 269,
     STAR = 270,
     DIV = 271,
     AND = 272,
     OR = 273,
     NOT = 274,
     TYPE = 275,
     LPy = 276,
     RP = 277,
     LB = 278,
     RB = 279,
     LCy = 280,
     RCy = 281,
     RETURN = 282,
     IF = 283,
     ELSE = 284,
     WHILE = 285,
     BREAK = 286,
     LOWER_THAN_ELSE = 287
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define CHAR 260
#define BOOL 261
#define STRING 262
#define IDy 263
#define SEMI 264
#define COMMA 265
#define ASSIGNOP 266
#define RELOP 267
#define PLUS 268
#define MINUS 269
#define STAR 270
#define DIV 271
#define AND 272
#define OR 273
#define NOT 274
#define TYPE 275
#define LPy 276
#define RP 277
#define LB 278
#define RB 279
#define LCy 280
#define RCy 281
#define RETURN 282
#define IF 283
#define ELSE 284
#define WHILE 285
#define BREAK 286
#define LOWER_THAN_ELSE 287




/* Copy the first part of user declarations.  */
#line 2 "grammar.y"

    #include <stdio.h>
    #include "ast.h"
    #include "type.h"
    int yylex(void);
    int mistakeRecord[4096]={0};
    int mistake = 0;
    extern Node *ROOT;
    void yyerror (char const *s) {
        fprintf (stderr, "%s\n", s);
    }


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "grammar.y"
{
    struct Node* label_tree;
}
/* Line 193 of yacc.c.  */
#line 177 "grammar.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 202 "grammar.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  147

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    17,    19,    23,
      25,    27,    32,    36,    41,    46,    50,    55,    59,    63,
      65,    68,    73,    77,    80,    81,    84,    87,    89,    93,
      96,    99,   105,   113,   118,   124,   128,   132,   135,   137,
     140,   141,   144,   148,   152,   156,   159,   161,   165,   169,
     173,   177,   181,   185,   189,   193,   197,   201,   204,   207,
     212,   216,   221,   225,   227,   229,   231,   233,   235,   237,
     242,   247,   252,   257,   262,   267,   272,   277,   282,   287,
     291
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    35,    -1,    36,    35,    -1,    -1,    38,
      37,     9,    -1,    38,    40,    43,    -1,    39,    -1,    39,
      10,    37,    -1,    20,    -1,     8,    -1,     8,    23,     3,
      24,    -1,     8,    23,    24,    -1,     8,    23,     1,    24,
      -1,     8,    21,    41,    22,    -1,     8,    21,    22,    -1,
       8,    21,     1,    22,    -1,     8,     1,    22,    -1,    42,
      10,    41,    -1,    42,    -1,    38,    39,    -1,    25,    46,
      44,    26,    -1,    25,    46,    44,    -1,     1,    26,    -1,
      -1,    45,    44,    -1,    49,     9,    -1,    43,    -1,    27,
      49,     9,    -1,    27,     9,    -1,    31,     9,    -1,    28,
      21,    49,    22,    45,    -1,    28,    21,    49,    22,    45,
      29,    45,    -1,    28,     1,    29,    45,    -1,    30,    21,
      49,    22,    45,    -1,    30,     1,    22,    -1,    30,     1,
      26,    -1,     1,     9,    -1,    49,    -1,    27,    49,    -1,
      -1,    47,    46,    -1,    38,    48,     9,    -1,    38,     1,
       9,    -1,     1,    48,     9,    -1,    38,    48,    -1,    39,
      -1,    39,    10,    48,    -1,    49,    11,    49,    -1,    49,
      17,    49,    -1,    49,    18,    49,    -1,    49,    12,    49,
      -1,    49,    13,    49,    -1,    49,    14,    49,    -1,    49,
      15,    49,    -1,    49,    16,    49,    -1,    21,    49,    22,
      -1,    14,    49,    -1,    19,    49,    -1,     8,    21,    50,
      22,    -1,     8,    21,    22,    -1,     8,    23,    49,    24,
      -1,     8,    23,    24,    -1,     8,    -1,     3,    -1,     4,
      -1,     6,    -1,     5,    -1,     7,    -1,    49,    11,     1,
       9,    -1,    49,    17,     1,     9,    -1,    49,    18,     1,
       9,    -1,    49,    12,     1,     9,    -1,    49,    13,     1,
       9,    -1,    49,    14,     1,     9,    -1,    49,    15,     1,
       9,    -1,    49,    16,     1,     9,    -1,     8,    21,     1,
       9,    -1,    49,    23,     1,    24,    -1,    49,    10,    50,
      -1,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    65,    68,    74,    77,    83,    86,    92,
      98,   102,   106,   109,   119,   122,   125,   132,   142,   145,
     151,   157,   160,   167,   179,   182,   188,   191,   194,   197,
     200,   203,   206,   209,   216,   219,   226,   233,   240,   247,
     258,   261,   267,   270,   277,   284,   294,   297,   303,   307,
     311,   315,   319,   323,   327,   331,   335,   339,   343,   347,
     351,   356,   360,   364,   368,   372,   376,   381,   385,   389,
     396,   403,   410,   417,   424,   431,   438,   445,   452,   462,
     465
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "BOOL", "STRING",
  "IDy", "SEMI", "COMMA", "ASSIGNOP", "RELOP", "PLUS", "MINUS", "STAR",
  "DIV", "AND", "OR", "NOT", "TYPE", "LPy", "RP", "LB", "RB", "LCy", "RCy",
  "RETURN", "IF", "ELSE", "WHILE", "BREAK", "LOWER_THAN_ELSE", "$accept",
  "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "VarDec",
  "FunDec", "VarList", "ParamDec", "CompSt", "StmtList", "Stmt", "DefList",
  "Def", "DecList", "Exp", "Args", 0
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
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    37,    38,
      39,    39,    39,    39,    40,    40,    40,    40,    41,    41,
      42,    43,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    47,    47,    47,    47,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      50
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     3,     1,
       1,     4,     3,     4,     4,     3,     4,     3,     3,     1,
       2,     4,     3,     2,     0,     2,     2,     1,     3,     2,
       2,     5,     7,     4,     5,     3,     3,     2,     1,     2,
       0,     2,     3,     3,     3,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     4,
       3,     4,     3,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     9,     0,     2,     4,     0,     1,     3,     0,     0,
       7,     0,     0,     0,     0,     5,     0,     0,     0,     6,
      17,     0,    15,     0,     0,    19,     0,     0,    12,    10,
       8,    23,     0,     0,     0,     0,    16,    20,    14,     0,
      13,    11,    46,     0,     0,    45,     0,    64,    65,    67,
      66,    68,    63,     0,     0,     0,     0,     0,     0,     0,
      27,    22,     0,    38,    41,    18,     0,    44,    43,    42,
      37,     0,     0,    57,    58,     0,    29,    39,     0,     0,
       0,     0,    30,    21,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    60,    80,     0,
      62,     0,    56,    28,     0,     0,    35,    36,     0,     0,
      48,     0,    51,     0,    52,     0,    53,     0,    54,     0,
      55,     0,    49,     0,    50,     0,    77,     0,    59,    61,
      33,     0,     0,    69,    72,    73,    74,    75,    76,    70,
      71,    78,    79,    31,    34,     0,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     9,     5,    42,    11,    24,    25,
      60,    61,    62,    34,    35,    43,    63,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
      -4,  -101,    48,  -101,    -4,    14,  -101,  -101,    83,    53,
      42,     4,    51,    43,     6,  -101,    64,    68,    50,  -101,
    -101,    78,  -101,    64,    93,    88,    81,   104,  -101,   106,
    -101,  -101,    64,    60,    82,    50,  -101,  -101,  -101,    -4,
    -101,  -101,   120,   122,   126,   127,    40,  -101,  -101,  -101,
    -101,  -101,    76,   357,   357,   357,   338,    22,    26,   128,
    -101,   116,    82,   368,  -101,  -101,    64,  -101,  -101,  -101,
    -101,   144,   164,    44,   123,   422,  -101,   381,   124,   357,
      69,   357,  -101,  -101,  -101,  -101,   186,   205,   224,   243,
     262,   281,   300,   319,   138,  -101,   150,  -101,   395,   139,
    -101,   408,  -101,  -101,   113,   435,  -101,  -101,   448,   151,
     461,   153,   141,   165,    44,   166,    44,   167,   123,   168,
     123,   170,   110,   171,    -2,   149,  -101,   357,  -101,  -101,
    -101,   113,   113,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,   152,  -101,   113,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,   178,  -101,   179,     7,     1,  -101,   145,  -101,
     175,   134,  -100,   162,  -101,   -25,   -53,    71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -41
static const yytype_int16 yytable[] =
{
      73,    74,    75,    77,   130,    17,    10,    26,    45,    27,
      87,    88,    89,    90,    91,    92,     1,    10,    98,   101,
      23,    94,     8,    78,    37,    33,   105,    80,   108,    18,
      28,   143,   144,   110,   112,   114,   116,   118,   120,   122,
     124,    95,    33,    79,    21,   146,    23,    81,     6,    70,
     -40,    32,    16,   -40,   -40,   -40,   -40,   -40,   -40,    90,
      91,    44,    15,     1,   -40,    22,    31,    94,    29,   -40,
       1,   -40,    29,    20,    98,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -24,    46,    12,    47,    48,    49,    50,    51,
      52,   106,   -10,   -10,    31,   107,    53,    71,    39,    72,
      36,    54,   -24,    55,    13,    40,    14,    18,   -24,    56,
      57,   -24,    58,    59,    46,    38,    47,    48,    49,    50,
      51,    52,    87,    88,    89,    90,    91,    53,    41,    14,
      66,    67,    54,    94,    55,    68,    69,    82,    18,   125,
      56,    57,    83,    58,    59,    96,    94,    47,    48,    49,
      50,    51,    52,   104,    88,    89,    90,    91,    53,   126,
     133,   128,   134,    54,    94,    55,    97,    47,    48,    49,
      50,    51,    52,   141,   135,   136,   137,   138,    53,   139,
     140,   145,     7,    54,    65,    55,    19,   109,   100,    47,
      48,    49,    50,    51,    52,    30,    84,    64,   142,     0,
      53,     0,     0,     0,     0,    54,   111,    55,    47,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,    54,   113,    55,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,    54,   115,    55,    47,    48,    49,    50,
      51,    52,     0,     0,     0,     0,     0,    53,     0,     0,
       0,     0,    54,   117,    55,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,    54,   119,    55,    47,    48,    49,    50,    51,    52,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
      54,   121,    55,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,    54,
     123,    55,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,    54,     0,
      55,    47,    48,    49,    50,    51,    52,    76,     0,     0,
       0,     0,    53,     0,     0,     0,     0,    54,     0,    55,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     0,    54,    85,    55,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
     103,    94,    86,    87,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,    94,   127,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,     0,     0,    94,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,    94,   129,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,   102,    94,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,     0,   131,    94,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
     132,    94,    86,    87,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,    94
};

static const yytype_int16 yycheck[] =
{
      53,    54,    55,    56,   104,     1,     5,     1,    33,     3,
      12,    13,    14,    15,    16,    17,    20,    16,    71,    72,
      13,    23,     8,     1,    23,    18,    79,     1,    81,    25,
      24,   131,   132,    86,    87,    88,    89,    90,    91,    92,
      93,    66,    35,    21,     1,   145,    39,    21,     0,     9,
       0,     1,    10,     3,     4,     5,     6,     7,     8,    15,
      16,     1,     9,    20,    14,    22,    26,    23,     8,    19,
      20,    21,     8,    22,   127,    25,    26,    27,    28,    29,
      30,    31,     0,     1,     1,     3,     4,     5,     6,     7,
       8,    22,     9,    10,    26,    26,    14,    21,    10,    23,
      22,    19,    20,    21,    21,    24,    23,    25,    26,    27,
      28,    29,    30,    31,     1,    22,     3,     4,     5,     6,
       7,     8,    12,    13,    14,    15,    16,    14,    24,    23,
      10,     9,    19,    23,    21,     9,     9,     9,    25,     1,
      27,    28,    26,    30,    31,     1,    23,     3,     4,     5,
       6,     7,     8,    29,    13,    14,    15,    16,    14,     9,
       9,    22,     9,    19,    23,    21,    22,     3,     4,     5,
       6,     7,     8,    24,     9,     9,     9,     9,    14,     9,
       9,    29,     4,    19,    39,    21,    11,     1,    24,     3,
       4,     5,     6,     7,     8,    16,    62,    35,   127,    -1,
      14,    -1,    -1,    -1,    -1,    19,     1,    21,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    19,     1,    21,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,     1,    21,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    19,     1,    21,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    19,     1,    21,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      19,     1,    21,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,
       1,    21,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    -1,
      21,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    -1,    21,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    19,     9,    21,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
       9,    23,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    23,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    23,    24,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    22,    23,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    22,    23,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    34,    35,    36,    38,     0,    35,     8,    37,
      39,    40,     1,    21,    23,     9,    10,     1,    25,    43,
      22,     1,    22,    38,    41,    42,     1,     3,    24,     8,
      37,    26,     1,    38,    46,    47,    22,    39,    22,    10,
      24,    24,    39,    48,     1,    48,     1,     3,     4,     5,
       6,     7,     8,    14,    19,    21,    27,    28,    30,    31,
      43,    44,    45,    49,    46,    41,    10,     9,     9,     9,
       9,    21,    23,    49,    49,    49,     9,    49,     1,    21,
       1,    21,     9,    26,    44,     9,    11,    12,    13,    14,
      15,    16,    17,    18,    23,    48,     1,    22,    49,    50,
      24,    49,    22,     9,    29,    49,    22,    26,    49,     1,
      49,     1,    49,     1,    49,     1,    49,     1,    49,     1,
      49,     1,    49,     1,    49,     1,     9,    10,    22,    24,
      45,    22,    22,     9,     9,     9,     9,     9,     9,     9,
       9,    24,    50,    45,    45,    29,    45
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 59 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Program", 1, (yyvsp[(1) - (1)].label_tree));
		ROOT = (yyval.label_tree);
	;}
    break;

  case 3:
#line 65 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "ExtDefList", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
	;}
    break;

  case 4:
#line 68 "grammar.y"
    {
		(yyval.label_tree) = nullptr;
	;}
    break;

  case 5:
#line 74 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "ExtDef", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 6:
#line 77 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "ExtDef", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 7:
#line 83 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "ExtDecList", 1, (yyvsp[(1) - (1)].label_tree));
	;}
    break;

  case 8:
#line 86 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "ExtDecList", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 9:
#line 92 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Specifier", 1, (yyvsp[(1) - (1)].label_tree));
	;}
    break;

  case 10:
#line 98 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "VarDec", 1, (yyvsp[(1) - (1)].label_tree));
	;}
    break;

  case 11:
#line 102 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "VarDec", 4, (yyvsp[(1) - (4)].label_tree), (yyvsp[(2) - (4)].label_tree), (yyvsp[(3) - (4)].label_tree), (yyvsp[(4) - (4)].label_tree));
	;}
    break;

  case 12:
#line 106 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "VarDec", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 13:
#line 109 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
        	printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 14:
#line 119 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "FunDec", 4, (yyvsp[(1) - (4)].label_tree), (yyvsp[(2) - (4)].label_tree), (yyvsp[(3) - (4)].label_tree), (yyvsp[(4) - (4)].label_tree));
	;}
    break;

  case 15:
#line 122 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "FunDec", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 16:
#line 125 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 17:
#line 132 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (3)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (3)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (3)]).first_line);
        }
    ;}
    break;

  case 18:
#line 142 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "VarList", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 19:
#line 145 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "VarList", 1, (yyvsp[(1) - (1)].label_tree));
	;}
    break;

  case 20:
#line 151 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "ParamDec", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
	;}
    break;

  case 21:
#line 157 "grammar.y"
    {	
		(yyval.label_tree) = new Node("", "CompSt", 4, (yyvsp[(1) - (4)].label_tree), (yyvsp[(2) - (4)].label_tree), (yyvsp[(3) - (4)].label_tree), (yyvsp[(4) - (4)].label_tree));
	;}
    break;

  case 22:
#line 160 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (3)]).last_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (3)]).last_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (3)]).last_line);
        }
    ;}
    break;

  case 23:
#line 167 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(1) - (2)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(1) - (2)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(1) - (2)]).first_line);
        }
    ;}
    break;

  case 24:
#line 179 "grammar.y"
    {
		(yyval.label_tree) = nullptr;
	;}
    break;

  case 25:
#line 182 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "CompSt", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
	;}
    break;

  case 26:
#line 188 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Stmt", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
	;}
    break;

  case 27:
#line 191 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Stmt", 1, (yyvsp[(1) - (1)].label_tree));
	;}
    break;

  case 28:
#line 194 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Stmt", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 29:
#line 197 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Stmt", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
    ;}
    break;

  case 30:
#line 200 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Stmt", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
    ;}
    break;

  case 31:
#line 203 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Stmt", 5, (yyvsp[(1) - (5)].label_tree), (yyvsp[(2) - (5)].label_tree), (yyvsp[(3) - (5)].label_tree), (yyvsp[(4) - (5)].label_tree), (yyvsp[(5) - (5)].label_tree));
	;}
    break;

  case 32:
#line 206 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Stmt", 7, (yyvsp[(1) - (7)].label_tree), (yyvsp[(2) - (7)].label_tree), (yyvsp[(3) - (7)].label_tree), (yyvsp[(4) - (7)].label_tree), (yyvsp[(5) - (7)].label_tree), (yyvsp[(6) - (7)].label_tree), (yyvsp[(7) - (7)].label_tree));
	;}
    break;

  case 33:
#line 209 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (4)]).first_line);
        }
    ;}
    break;

  case 34:
#line 216 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Stmt", 5, (yyvsp[(1) - (5)].label_tree), (yyvsp[(2) - (5)].label_tree), (yyvsp[(3) - (5)].label_tree), (yyvsp[(4) - (5)].label_tree), (yyvsp[(5) - (5)].label_tree));
	;}
    break;

  case 35:
#line 219 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (3)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (3)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (3)]).first_line);
        }
    ;}
    break;

  case 36:
#line 226 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (3)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (3)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (3)]).first_line);
        }
    ;}
    break;

  case 37:
#line 233 "grammar.y"
    {
    	if(mistakeRecord[(yylsp[(1) - (2)]).first_line-1] == 0){
    	    mistakeRecord[(yylsp[(1) - (2)]).first_line-1] = 1;
    	    mistake++;
    	    printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(1) - (2)]).first_line);
    	}
    ;}
    break;

  case 38:
#line 240 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(1) - (1)]).last_line-1] == 0){
            mistakeRecord[(yylsp[(1) - (1)]).last_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(1) - (1)]).last_line);
        }
    ;}
    break;

  case 39:
#line 247 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (2)]).last_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (2)]).last_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (2)]).last_line);
        }
    ;}
    break;

  case 40:
#line 258 "grammar.y"
    {
		(yyval.label_tree) = nullptr;
	;}
    break;

  case 41:
#line 261 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "DefList", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
	;}
    break;

  case 42:
#line 267 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Def", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
    ;}
    break;

  case 43:
#line 270 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (3)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (3)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (3)]).first_line);
        }
    ;}
    break;

  case 44:
#line 277 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(1) - (3)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(1) - (3)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(1) - (3)]).first_line);
        }
    ;}
    break;

  case 45:
#line 284 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(2) - (2)]).last_line-1] == 0){
            mistakeRecord[(yylsp[(2) - (2)]).last_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(2) - (2)]).last_line);
        }
    ;}
    break;

  case 46:
#line 294 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "DecList", 1, (yyvsp[(1) - (1)].label_tree));
	;}
    break;

  case 47:
#line 297 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "DecList", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
	;}
    break;

  case 48:
#line 303 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(3) - (3)].label_tree)->getValueType());
	;}
    break;

  case 49:
#line 307 "grammar.y"
    {
		(yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
	;}
    break;

  case 50:
#line 311 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 51:
#line 315 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 52:
#line 319 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 53:
#line 323 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 54:
#line 327 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 55:
#line 331 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 56:
#line 335 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(2) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 57:
#line 339 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(2) - (2)].label_tree)->getValueType());
    ;}
    break;

  case 58:
#line 343 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 2, (yyvsp[(1) - (2)].label_tree), (yyvsp[(2) - (2)].label_tree));
        (yyval.label_tree)->setValueType(TYPE_BOOL);
    ;}
    break;

  case 59:
#line 347 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 4, (yyvsp[(1) - (4)].label_tree), (yyvsp[(2) - (4)].label_tree), (yyvsp[(3) - (4)].label_tree), (yyvsp[(4) - (4)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (4)].label_tree)->getValueType());
    ;}
    break;

  case 60:
#line 351 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType());
    ;}
    break;

  case 61:
#line 356 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 4, (yyvsp[(1) - (4)].label_tree), (yyvsp[(2) - (4)].label_tree), (yyvsp[(3) - (4)].label_tree), (yyvsp[(4) - (4)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (4)].label_tree)->getValueType() - ARRAY);
    ;}
    break;

  case 62:
#line 360 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (3)].label_tree)->getValueType() + ARRAY);
    ;}
    break;

  case 63:
#line 364 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 1, (yyvsp[(1) - (1)].label_tree));
        (yyval.label_tree)->setValueType((yyvsp[(1) - (1)].label_tree)->getValueType());
    ;}
    break;

  case 64:
#line 368 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 1, (yyvsp[(1) - (1)].label_tree));
        (yyval.label_tree)->setValueType(TYPE_INT);
    ;}
    break;

  case 65:
#line 372 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 1, (yyvsp[(1) - (1)].label_tree));
        (yyval.label_tree)->setValueType(TYPE_FLOAT);
    ;}
    break;

  case 66:
#line 376 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 1, (yyvsp[(1) - (1)].label_tree));
        (yyval.label_tree)->setValueType(TYPE_BOOL);
    ;}
    break;

  case 67:
#line 381 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 1, (yyvsp[(1) - (1)].label_tree));
        (yyval.label_tree)->setValueType(TYPE_CHAR);
    ;}
    break;

  case 68:
#line 385 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Exp", 1, (yyvsp[(1) - (1)].label_tree));
        (yyval.label_tree)->setValueType(TYPE_CHAR_ARRAY);
    ;}
    break;

  case 69:
#line 389 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 70:
#line 396 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 71:
#line 403 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 72:
#line 410 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 73:
#line 417 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 74:
#line 424 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 75:
#line 431 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 76:
#line 438 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 77:
#line 445 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 78:
#line 452 "grammar.y"
    {
        if(mistakeRecord[(yylsp[(3) - (4)]).first_line-1] == 0){
            mistakeRecord[(yylsp[(3) - (4)]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: wrong expression between \"[\" and \"]\".\n", (yylsp[(3) - (4)]).first_line);
        }
    ;}
    break;

  case 79:
#line 462 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Args", 3, (yyvsp[(1) - (3)].label_tree), (yyvsp[(2) - (3)].label_tree), (yyvsp[(3) - (3)].label_tree));
    ;}
    break;

  case 80:
#line 465 "grammar.y"
    {
        (yyval.label_tree) = new Node("", "Args", 1, (yyvsp[(1) - (1)].label_tree));
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2288 "grammar.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 470 "grammar.y"

