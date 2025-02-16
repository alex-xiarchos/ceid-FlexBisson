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
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INT = 258,
     T_FLOAT = 259,
     T_QUOTE = 260,
     T_COLON = 261,
     T_COMMA = 262,
     T_LBRACKET = 263,
     T_RBRACKET = 264,
     T_LBRACE = 265,
     T_RBRACE = 266,
     T_WORD = 267,
     T_LAST = 268,
     T_ACTIVE = 269,
     T_GAME_ID = 270,
     T_DRAW_ID = 271,
     T_DRAW_TIME = 272,
     T_STATUS = 273,
     T_DRAW_BREAK = 274,
     T_VISUAL_DRAW = 275,
     T_PRICE_POINTS = 276,
     T_AMOUNT = 277,
     T_WINNING_NUMBERS = 278,
     T_LIST = 279,
     T_BONUS = 280,
     T_PRIZE_CATEGORIES = 281,
     T_ID = 282,
     T_DIVIDENT = 283,
     T_WINNERS = 284,
     T_DISTRIBUTED = 285,
     T_JACKPOT = 286,
     T_FIXED = 287,
     T_CATEGORY_TYPE = 288,
     T_GAME_TYPE = 289,
     T_MINIMUM_DISTRIBUTED = 290,
     T_WAGER_STATISTICS = 291,
     T_COLUMNS = 292,
     T_WAGERS = 293,
     T_ADD_ON = 294
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_FLOAT 259
#define T_QUOTE 260
#define T_COLON 261
#define T_COMMA 262
#define T_LBRACKET 263
#define T_RBRACKET 264
#define T_LBRACE 265
#define T_RBRACE 266
#define T_WORD 267
#define T_LAST 268
#define T_ACTIVE 269
#define T_GAME_ID 270
#define T_DRAW_ID 271
#define T_DRAW_TIME 272
#define T_STATUS 273
#define T_DRAW_BREAK 274
#define T_VISUAL_DRAW 275
#define T_PRICE_POINTS 276
#define T_AMOUNT 277
#define T_WINNING_NUMBERS 278
#define T_LIST 279
#define T_BONUS 280
#define T_PRIZE_CATEGORIES 281
#define T_ID 282
#define T_DIVIDENT 283
#define T_WINNERS 284
#define T_DISTRIBUTED 285
#define T_JACKPOT 286
#define T_FIXED 287
#define T_CATEGORY_TYPE 288
#define T_GAME_TYPE 289
#define T_MINIMUM_DISTRIBUTED 290
#define T_WAGER_STATISTICS 291
#define T_COLUMNS 292
#define T_WAGERS 293
#define T_ADD_ON 294




/* Copy the first part of user declarations.  */
#line 1 "myJSONbison.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define HISTORY_SIZE 200

    // Lex/Bison external variables
    extern int yylineno;
    extern int yylex();
    extern int yyparce();
    extern void yyerror(char *);
    extern char* yytext;
    extern FILE *yyin;
    extern FILE *yyout;

    // Flags
    static int last_was_found = 0;
    static int active_was_found = 0;
    int not_in_history = 0;

    // Counters
    int j = 0;
    static int i = 0;
    static int list_counter = 0;

    // Strings
    char* history[HISTORY_SIZE];
    char* temp_val = "";



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
#line 32 "myJSONbison.y"
{
    char*   strval;
    int     intval;
    float   flval;
}
/* Line 193 of yacc.c.  */
#line 211 "myJSONbison.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 224 "myJSONbison.tab.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   55

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNRULES -- Number of states.  */
#define YYNSTATES  61

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    14,    18,    22,    26,
      30,    34,    38,    41,    45,    49,    51,    55,    57,    61,
      65,    67,    69,    71,    73,    75,    77,    79,    81,    83,
      85,    87,    89,    91,    93,    95,    97,    99,   101,   103,
     105,   107,   109,   111,   113,   115,   117,   119
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    10,    11,    -1,    10,    43,
      11,    -1,    44,    -1,    44,     7,    43,    -1,    48,     6,
      48,    -1,    48,     6,     3,    -1,    48,     6,     4,    -1,
      48,     6,    42,    -1,    48,     6,    45,    -1,     8,     9,
      -1,     8,    47,     9,    -1,     8,    46,     9,    -1,    42,
      -1,    42,     7,    46,    -1,     3,    -1,     3,     7,    47,
      -1,     5,    49,     5,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    23,    -1,    26,    -1,    36,    -1,    22,
      -1,    24,    -1,    25,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1,    37,    -1,    38,    -1,    39,    -1,    12,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    56,    57,    60,    61,    64,   133,   222,
     299,   391,   456,   457,   458,   461,   462,   465,   469,   479,
     492,   492,   493,   493,   493,   493,   494,   494,   494,   495,
     495,   496,   497,   497,   497,   497,   498,   498,   498,   498,
     498,   499,   499,   499,   499,   499,   499,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_FLOAT", "T_QUOTE", "T_COLON",
  "T_COMMA", "T_LBRACKET", "T_RBRACKET", "T_LBRACE", "T_RBRACE", "T_WORD",
  "T_LAST", "T_ACTIVE", "T_GAME_ID", "T_DRAW_ID", "T_DRAW_TIME",
  "T_STATUS", "T_DRAW_BREAK", "T_VISUAL_DRAW", "T_PRICE_POINTS",
  "T_AMOUNT", "T_WINNING_NUMBERS", "T_LIST", "T_BONUS",
  "T_PRIZE_CATEGORIES", "T_ID", "T_DIVIDENT", "T_WINNERS", "T_DISTRIBUTED",
  "T_JACKPOT", "T_FIXED", "T_CATEGORY_TYPE", "T_GAME_TYPE",
  "T_MINIMUM_DISTRIBUTED", "T_WAGER_STATISTICS", "T_COLUMNS", "T_WAGERS",
  "T_ADD_ON", "$accept", "json", "object", "content", "pair", "table",
  "objects", "integers", "string", "keyword_tokens", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    44,
      44,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     3,     0,     5,     0,     1,
      47,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      32,    29,    33,    34,    30,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    31,    44,    45,    46,     0,     4,
       0,     0,    19,     6,     8,     9,     0,    10,    11,     7,
      17,    12,    15,     0,     0,     0,     0,    14,    13,    18,
      16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    52,     6,     7,    48,    53,    54,     8,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -12
static const yytype_int8 yypact[] =
{
      23,    32,    35,   -12,   -11,   -12,    31,    33,    38,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,    40,   -12,
      41,    26,   -12,   -12,   -12,   -12,    29,   -12,   -12,   -12,
      42,   -12,    43,    39,    44,    48,    23,   -12,   -12,   -12,
     -12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -12,   -12,     0,     7,   -12,   -12,    -4,    -1,    14,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       3,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    44,
      45,     4,    50,     1,    46,     9,     1,     4,    51,     1,
      40,    47,    39,     5,    41,    42,     4,    43,    57,    55,
      56,    50,    60,    58,    59,    49
};

static const yytype_uint8 yycheck[] =
{
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     3,
       4,     5,     3,    10,     8,     0,    10,     5,     9,    10,
       7,    41,    11,    11,     6,     5,     5,    40,     9,     7,
       7,     3,    56,     9,    55,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    41,    42,     5,    11,    43,    44,    48,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    49,    11,
       7,     6,     5,    43,     3,     4,     8,    42,    45,    48,
       3,     9,    42,    46,    47,     7,     7,     9,     9,    47,
      46
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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
        case 4:
#line 57 "myJSONbison.y"
    {(yyval.strval) = (yyvsp[(2) - (3)].strval);;}
    break;

  case 5:
#line 60 "myJSONbison.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 6:
#line 61 "myJSONbison.y"
    {(yyval.strval) = (yyvsp[(1) - (3)].strval);;}
    break;

  case 7:
#line 64 "myJSONbison.y"
    { (yyval.strval) = (yyvsp[(1) - (3)].strval);

            /* Έλεγχος άκυρων στοιχείων */
            if (!((strcmp((yyvsp[(1) - (3)].strval), "status") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "gameType") == 0))) {
                yyerror("Δεν υπάρχει αυτό το στοιχείο.");
            }

            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            // Το i είναι +1 λόγω του δεύτερου string
            if (strcmp((yyvsp[(1) - (3)].strval), "status") == 0) {
                if (i != 6 && i != 97)
                    yyerror("Το \"status\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameType") == 0) {
                if (i != 23 && i != 33 && i != 42 && i != 51 && i != 60 && i != 69 && i != 78 && i != 87 && i != 111
                    && i != 121 && i != 130 && i != 139 && i != 128 && i != 148 && i != 157 && i != 166 && i != 175)
                    yyerror("Το \"gameType\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος τύπου στοιχείων */
            if (strcmp((yyvsp[(1) - (3)].strval), "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είνα`ι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου string");
            else if (strcmp((yyvsp[(1) - (3)].strval), "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου string.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου string.");

        ;}
    break;

  case 8:
#line 133 "myJSONbison.y"
    { (yyval.strval) = (yyvsp[(1) - (3)].strval);

            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            if (strcmp((yyvsp[(1) - (3)].strval), "gameId") == 0) {
                if (i != 2 && i != 93)
                    yyerror("Το \"gameId\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawId") == 0) {
                if (i != 3 && i != 94)
                        yyerror("Το \"drawId\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawTime") == 0) {
                if (i != 4 && i != 95)
                        yyerror("Το \"drawTime\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawBreak") == 0) {
                if (i != 7 && i != 98)
                    yyerror("Το \"drawBreak\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "visualDraw") == 0) {
                if (i != 8 && i != 99)
                        yyerror("Το \"visualDraw\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "id") == 0) {
                if (i != 15 && i != 25 && i != 34 && i != 43 && i != 52 && i != 61 && i != 70 && i != 79 && i != 103
                    && i != 113 && i != 122 && i != 131 && i != 140 && i != 149 && i != 158 && i != 167 && i != 175)
                        yyerror("Το \"id\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "winners") == 0) {
                if (i != 17 && i != 27 && i != 36 && i != 45 && i != 54 && i != 63 && i != 72 && i != 81 && i != 105
                    && i != 115 && i != 124 && i != 133 && i != 142 && i != 151 && i != 160 && i != 169)
                        yyerror("Το \"winners\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "columns") == 0) {
                if (i != 89 && i != 177)
                        yyerror("Το \"columns\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagers") == 0) {
                if (i != 90 && i != 178)
                        yyerror("Το \"wagers\" δεν ανήκει εδώ.");
            }


            /* Έλεγχος τύπου στοιχείων */
            if (strcmp((yyvsp[(1) - (3)].strval), "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου int");
            else if (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου int");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου int");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου int");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου int");
            else if (strcmp((yyvsp[(1) - (3)].strval), "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "id") == 0) {
                if (((yyvsp[(3) - (3)].intval) > 8) || ((yyvsp[(3) - (3)].intval) < 1))   //έλεγχος εύρος id
                    yyerror("Το \"id\" δεν περιλαμβάνει σωστό εύρος ακεραίων.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "categoryType") == 0) {
                if (((yyvsp[(3) - (3)].intval) > 2) || ((yyvsp[(3) - (3)].intval) < 0))   //έλεγχος εύρος categoryType
                    yyerror("Το \"categoryType\" δεν περιλαμβάνει σωστό εύρος ακεραίων.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου int.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου int.");

            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp((yyvsp[(1) - (3)].strval), "gameId") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "drawId") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "drawTime") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "drawBreak") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "visualDraw") == 0)
                    || (strcmp((yyvsp[(1) - (3)].strval), "id") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "winners") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "categoryType") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "columns") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "wagers") == 0) ))
                yyerror("Δεν υπάρχει αυτό το int στοιχείο.");
        ;}
    break;

  case 9:
#line 222 "myJSONbison.y"
    {
            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            if (strcmp((yyvsp[(1) - (3)].strval), "amount") == 0) {
                if (i != 10 && i != 101)
                    yyerror("Το \"amount\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "divident") == 0) {
                if (i != 16 && i != 26 && i != 35 && i != 44 && i != 53 && i != 62 && i != 71 && i != 80 && i != 104
                    && i != 114 && i != 123 && i != 132 && i != 141 && i != 150 && i != 159 && i != 168)
                    yyerror("Το \"divident\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "distributed") == 0) {
                if (i != 18 && i != 28 && i != 37 && i != 46 && i != 55 && i != 64 && i != 73 && i != 82 && i != 106
                    && i != 116 && i != 125 && i != 134 && i != 143 && i != 152 && i != 161 && i != 170)
                    yyerror("Το \"distributed\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "jackpot") == 0) {
                if (i != 19 && i != 29 && i != 38 && i != 47 && i != 56 && i != 65 && i != 74 && i != 83 && i != 107
                    && i != 117 && i != 126 && i != 135 && i != 144 && i != 153 && i != 162 && i != 171)
                    yyerror("Το \"jackpot\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0) {
                if (i != 20 && i != 30 && i != 39 && i != 48 && i != 57 && i != 66 && i != 75 && i != 84 && i != 108
                    && i != 118 && i != 127 && i != 136 && i != 145 && i != 154 && i != 163 && i != 172)
                    yyerror("Το \"fixed\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "minimumDistributed") == 0) {
                if (i != 24 && i != 112)
                    yyerror("Το \"amount\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος τύπου δεδομένων */
            if (strcmp((yyvsp[(1) - (3)].strval), "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου float");
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου float");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου float");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου float");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είναι τύπου float");
            else if (strcmp((yyvsp[(1) - (3)].strval), "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου float");
            else if (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "prizeCategories") == 0)
                yyerror("Το \"prizeCategories\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου float.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου float.");
            
            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp((yyvsp[(1) - (3)].strval), "amount") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "divident") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "distributed") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "jackpot") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "minimumDistributed") == 0)))
                yyerror("Δεν υπάρχει αυτό το float στοιχείο.");
        ;}
    break;

  case 10:
#line 299 "myJSONbison.y"
    { (yyval.strval) = (yyvsp[(1) - (3)].strval);
            /* Έλεγχος προτεραιότητας last - active */
            if (strcmp((yyvsp[(1) - (3)].strval), "last") == 0) {
                if (active_was_found == 1 && last_was_found == 0)
                    yyerror("Έχει προηγηθεί το \"active\".");
                last_was_found = 1;
            }
            if (strcmp((yyvsp[(1) - (3)].strval), "active") == 0) {
                if (active_was_found == 1)
                    yyerror("Έχει προηγηθεί το \"active\".");
                else if (last_was_found == 0 && active_was_found == 0)
                    yyerror("Κανονικά προηγείται το \"last\".");
                active_was_found = 1;
            }

            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            //Το i είναι το τελευταίο στοιχείο του { }
            if (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0) {
                if (i != 10 && i != 101)
                    yyerror("Το \"pricePoints\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0) {
                if (i != 13)
                    yyerror("Το \"winningNumbers\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagerStatistics") == 0) {
                if (i != 91 && i != 179)
                    yyerror("Το \"wagerStatistics\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος περιεχομένων pricePoints */
            if (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0)
                if (strcmp((yyvsp[(3) - (3)].strval), "amount") != 0)
                    yyerror("To \"pricePoints\" περιλαμβάνει μόνο το amount.");
            
            /* Έλεγχος περιεχομένων winningNumbers */
            // if (strcmp($1, "winningNumbers") == 0) {
            //     if ( strcmp(pair, "list") != 0 || (strcmp(content, "bonus") != 0) )
            //         yyerror("To winningNumbers περιλαμβάνει μόνο το list και το bonus.");
            // }

            /* Έλεγχος τύπου δεδομένων */
            if (strcmp((yyvsp[(1) - (3)].strval), "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου object");
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου object");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου object");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου object");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είναι τύπου object");
            else if (strcmp((yyvsp[(1) - (3)].strval), "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου object");
            else if (strcmp((yyvsp[(1) - (3)].strval), "list") == 0)
                yyerror("Το \"list\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "bonus") == 0)
                yyerror("Το \"bonus\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου object.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "addOn") == 0)
                yyerror("Το \"addOn\" δεν είναι τύπου object.");
            
            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp((yyvsp[(1) - (3)].strval), "last") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "wagerStatistics") == 0)
                            || (strcmp((yyvsp[(1) - (3)].strval), "active") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0))) {
                yyerror("Δεν υπάρχει αυτό το object στοιχείο.");
            }

        ;}
    break;

  case 11:
#line 391 "myJSONbison.y"
    { (yyval.strval) = (yyvsp[(1) - (3)].strval); 
            /* Έλεγχος τοποθέτησης στοιχείων στο σωστό μέρος */
            if (strcmp((yyvsp[(1) - (3)].strval), "bonus") == 0) {
                if (i != 12)
                    yyerror("Το \"bonus\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "list") == 0) {
                if (i != 13)
                    yyerror("Το \"list\" δεν ανήκει εδώ.");
            }
            else if (strcmp((yyvsp[(1) - (3)].strval), "addOn") == 0) {
                if (i != 91 && i != 179)
                    yyerror("Το \"addOn\" δεν ανήκει εδώ.");
            }

            /* Έλεγχος τύπου στοιχείων */
            if (strcmp((yyvsp[(1) - (3)].strval), "status") == 0)
                yyerror("Το \"status\" δεν είναι τύπου table");
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameId") == 0)
                yyerror("Το \"gameId\" δεν είναι τύπου table");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawId") == 0)
                yyerror("Το \"drawId\" δεν είναι τύπου table");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawTime") == 0)
                yyerror("Το \"drawTime\" δεν είναι τύπου table");
            else if (strcmp((yyvsp[(1) - (3)].strval), "drawBreak") == 0)
                yyerror("Το \"drawBreak\" δεν είναι τύπου table");
            else if (strcmp((yyvsp[(1) - (3)].strval), "visualDraw") == 0)
                yyerror("Το \"visualDraw\" δεν είναι τύπου table");
            else if (strcmp((yyvsp[(1) - (3)].strval), "pricePoints") == 0)
                yyerror("Το \"pricePoints\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winningNumbers") == 0)
                yyerror("Το \"winningNumbers\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagerStatistics") == 0)
                yyerror("Το \"wagerStatistics\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "amount") == 0)
                yyerror("Το \"amount\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "id") == 0)
                yyerror("Το \"id\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "divident") == 0)
                yyerror("Το \"divident\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "winners") == 0)
                yyerror("Το \"winners\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "distributed") == 0)
                yyerror("Το \"distributed\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "jackpot") == 0)
                yyerror("Το \"jackpot\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "fixed") == 0)
                yyerror("Το \"fixed\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "categoryType") == 0)
                yyerror("Το \"categoryType\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "gameType") == 0)
                yyerror("Το \"gameType\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "minimumDistributed") == 0)
                yyerror("Το \"minimumDistributed\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "columns") == 0)
                yyerror("Το \"columns\" δεν είναι τύπου table.");
            else if (strcmp((yyvsp[(1) - (3)].strval), "wagers") == 0)
                yyerror("Το \"wagers\" δεν είναι τύπου table.");
            
            /* Έλεγχος άκυρων στοιχείων */
            else if (!((strcmp((yyvsp[(1) - (3)].strval), "list") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "bonus") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "prizeCategories") == 0) || (strcmp((yyvsp[(1) - (3)].strval), "addOn") == 0)))
                yyerror("Δεν υπάρχει αυτό το table στοιχείο.");
        ;}
    break;

  case 15:
#line 461 "myJSONbison.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 16:
#line 462 "myJSONbison.y"
    {(yyval.strval) = (yyvsp[(1) - (3)].strval);;}
    break;

  case 17:
#line 465 "myJSONbison.y"
    {
            if ((yyvsp[(1) - (1)].intval) < 1 || (yyvsp[(1) - (1)].intval) > 45)
                yyerror("Κάποιο στοιχείο του \"list\" δεν ανήκει στο [1,45] ");
        ;}
    break;

  case 18:
#line 469 "myJSONbison.y"
    {
            if ((yyvsp[(1) - (3)].intval) < 1 || (yyvsp[(1) - (3)].intval) > 45)
                yyerror("Κάποιο στοιχείο του \"list\" δεν ανήκει στο [1,45] ");

            if (list_counter > 4)
                yyerror("Το \"list\" περιέχει παραπάνω από 5 στοιχεία");
            list_counter++
        ;}
    break;

  case 19:
#line 479 "myJSONbison.y"
    { (yyval.strval) = (yyvsp[(2) - (3)].strval);
            temp_val = (yyvsp[(2) - (3)].strval);
            for (j = 0; j < i + 1; j++)
                if (strcmp(history[j], temp_val) != 0)
                    not_in_history = 1;
            if (not_in_history == 1) {
                strcpy(history[i++], temp_val);
                not_in_history = 0;
            }
            // printf("(i=%d)", i);
        ;}
    break;

  case 20:
#line 492 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 21:
#line 492 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 22:
#line 493 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 23:
#line 493 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 24:
#line 493 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 25:
#line 493 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 26:
#line 494 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 27:
#line 494 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 28:
#line 494 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 29:
#line 495 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 30:
#line 495 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 31:
#line 496 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 32:
#line 497 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 33:
#line 497 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 34:
#line 497 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 35:
#line 497 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 36:
#line 498 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 37:
#line 498 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 38:
#line 498 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 39:
#line 498 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 40:
#line 498 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 41:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 42:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 43:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 44:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 45:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 46:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;

  case 47:
#line 499 "myJSONbison.y"
    {(yyval.strval) = strdup(yytext);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2080 "myJSONbison.tab.c"
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
		      yytoken, &yylval);
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

  if (yyn == YYFINAL)
    YYACCEPT;

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


#line 503 "myJSONbison.y"

/* ========[ C ]======== */

int main(int argc, char **argv) {
    for (j = 0; j < HISTORY_SIZE; j++)
        history[j] = (char*)calloc(HISTORY_SIZE, sizeof(char));

    /* What's the input? */
    ++argv; --argc;
    if (argc > 0) {
        printf("Input from %s:\n", argv[0]);
        yyin = fopen(argv[0], "r");
    } else yyin = stdin;

    do {
        yyparse();        
    } while (!feof(yyin));
    printf("\n");
    return 0;
}
 
void yyerror(char *s) {
    fprintf(stderr, "==[LINE %d: %s]==\n", yylineno/2+1, s);
}

