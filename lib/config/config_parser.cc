/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */


/* Line 268 of yacc.c  */
#line 71 "../../../lib/config/config_parser.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 288 of yacc.c  */
#line 1 "config_parser.yy"

/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#include "i2-config.h"
#include "config/expression.h"
#include "config/expressionlist.h"
#include "config/configitembuilder.h"
#include "config/configcompiler.h"
#include "config/configcompilercontext.h"
#include "config/typerule.h"
#include "config/typerulelist.h"
#include "base/value.h"
#include "base/utility.h"
#include "base/array.h"
#include "base/scriptvariable.h"
#include <sstream>
#include <stack>
#include <boost/smart_ptr/make_shared.hpp>
#include <boost/exception/diagnostic_information.hpp>
#include <boost/foreach.hpp>

using namespace icinga;

#define YYLTYPE icinga::DebugInfo




/* Line 288 of yacc.c  */
#line 141 "../../../lib/config/config_parser.cc"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_STRING = 258,
     T_STRING_ANGLE = 259,
     T_NUMBER = 260,
     T_NULL = 261,
     T_IDENTIFIER = 262,
     T_EQUAL = 263,
     T_PLUS_EQUAL = 264,
     T_MINUS_EQUAL = 265,
     T_MULTIPLY_EQUAL = 266,
     T_DIVIDE_EQUAL = 267,
     T_SET = 268,
     T_SHIFT_LEFT = 269,
     T_SHIFT_RIGHT = 270,
     T_TYPE_DICTIONARY = 271,
     T_TYPE_ARRAY = 272,
     T_TYPE_NUMBER = 273,
     T_TYPE_STRING = 274,
     T_TYPE_SCALAR = 275,
     T_TYPE_ANY = 276,
     T_TYPE_NAME = 277,
     T_VALIDATOR = 278,
     T_REQUIRE = 279,
     T_ATTRIBUTE = 280,
     T_TYPE = 281,
     T_ABSTRACT = 282,
     T_OBJECT = 283,
     T_TEMPLATE = 284,
     T_INCLUDE = 285,
     T_LIBRARY = 286,
     T_INHERITS = 287,
     T_PARTIAL = 288
   };
#endif
/* Tokens.  */
#define T_STRING 258
#define T_STRING_ANGLE 259
#define T_NUMBER 260
#define T_NULL 261
#define T_IDENTIFIER 262
#define T_EQUAL 263
#define T_PLUS_EQUAL 264
#define T_MINUS_EQUAL 265
#define T_MULTIPLY_EQUAL 266
#define T_DIVIDE_EQUAL 267
#define T_SET 268
#define T_SHIFT_LEFT 269
#define T_SHIFT_RIGHT 270
#define T_TYPE_DICTIONARY 271
#define T_TYPE_ARRAY 272
#define T_TYPE_NUMBER 273
#define T_TYPE_STRING 274
#define T_TYPE_SCALAR 275
#define T_TYPE_ANY 276
#define T_TYPE_NAME 277
#define T_VALIDATOR 278
#define T_REQUIRE 279
#define T_ATTRIBUTE 280
#define T_TYPE 281
#define T_ABSTRACT 282
#define T_OBJECT 283
#define T_TEMPLATE 284
#define T_INCLUDE 285
#define T_LIBRARY 286
#define T_INHERITS 287
#define T_PARTIAL 288




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 54 "config_parser.yy"

	char *text;
	double num;
	icinga::Value *variant;
	icinga::ExpressionOperator op;
	icinga::TypeSpecifier type;
	std::vector<String> *slist;
	Expression *expr;
	ExpressionList *exprl;
	Array *array;



/* Line 293 of yacc.c  */
#line 238 "../../../lib/config/config_parser.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
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

/* Line 343 of yacc.c  */
#line 119 "config_parser.yy"


int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, void *scanner);

void yyerror(YYLTYPE *locp, ConfigCompiler *, const char *err)
{
	std::ostringstream message;
	message << *locp << ": " << err;
	ConfigCompilerContext::GetInstance()->AddError(false, message.str());
}

int yyparse(ConfigCompiler *context);

static std::stack<Array::Ptr> m_Arrays;
static bool m_Abstract;

static std::stack<TypeRuleList::Ptr> m_RuleLists;
static ConfigType::Ptr m_Type;

void ConfigCompiler::Compile(void)
{
	try {
		yyparse(this);
	} catch (const std::exception& ex) {
		ConfigCompilerContext::GetInstance()->AddError(false, boost::diagnostic_information(ex));
	}
}

#define scanner (context->GetScanner())



/* Line 343 of yacc.c  */
#line 296 "../../../lib/config/config_parser.cc"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,     2,
      43,    44,    36,    34,    42,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    39,    41,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      20,    23,    26,    31,    33,    35,    36,    43,    44,    46,
      47,    52,    54,    57,    58,    60,    64,    67,    70,    74,
      81,    86,    87,    90,    92,    94,    96,    98,   100,   102,
     104,   105,   112,   115,   117,   118,   121,   123,   124,   126,
     130,   131,   134,   138,   140,   143,   144,   146,   150,   154,
     161,   163,   165,   167,   169,   171,   175,   177,   180,   181,
     183,   187,   189,   191,   193,   195,   199,   201,   203,   207,
     211,   215,   219,   223,   227,   231,   235,   239,   241,   243
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    48,    49,    -1,    63,    -1,    54,
      -1,    50,    -1,    51,    -1,    52,    -1,    30,     3,    -1,
      30,     4,    -1,    31,     3,    -1,    13,    53,     8,    81,
      -1,     7,    -1,     3,    -1,    -1,    56,    26,    53,    55,
      62,    57,    -1,    -1,    33,    -1,    -1,    40,    58,    59,
      41,    -1,    60,    -1,    60,    42,    -1,    -1,    61,    -1,
      60,    42,    61,    -1,    24,     3,    -1,    23,     3,    -1,
      25,    54,     3,    -1,    25,    22,    43,    53,    44,     3,
      -1,    25,    54,     3,    57,    -1,    -1,    32,    53,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,
      21,    -1,    22,    -1,    -1,    64,    65,    53,     3,    69,
      70,    -1,    66,    28,    -1,    29,    -1,    -1,    66,    67,
      -1,    27,    -1,    -1,     3,    -1,    68,    42,     3,    -1,
      -1,    32,    68,    -1,    40,    71,    41,    -1,    72,    -1,
      72,    42,    -1,    -1,    73,    -1,    72,    42,    73,    -1,
      53,    74,    81,    -1,    53,    45,     3,    46,    74,    81,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    45,    76,    46,    -1,    77,    -1,    77,    42,    -1,
      -1,    81,    -1,    77,    42,    81,    -1,     3,    -1,     5,
      -1,     6,    -1,    75,    -1,    43,    80,    44,    -1,     5,
      -1,    53,    -1,    80,    34,    80,    -1,    80,    35,    80,
      -1,    80,    36,    80,    -1,    80,    37,    80,    -1,    80,
      38,    80,    -1,    80,    39,    80,    -1,    80,    14,    80,
      -1,    80,    15,    80,    -1,    43,    80,    44,    -1,    78,
      -1,    70,    -1,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   153,   156,   156,   156,   156,   156,   159,
     164,   170,   176,   183,   184,   191,   190,   220,   223,   230,
     229,   241,   242,   244,   245,   246,   249,   254,   259,   266,
     274,   283,   284,   291,   292,   293,   294,   295,   296,   297,
     304,   304,   345,   346,   351,   352,   355,   362,   365,   371,
     384,   387,   393,   399,   403,   409,   412,   418,   430,   436,
     450,   451,   452,   453,   454,   460,   466,   470,   476,   479,
     494,   514,   519,   523,   527,   537,   542,   546,   551,   555,
     559,   563,   567,   571,   575,   579,   583,   589,   590,   595
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRING", "T_STRING_ANGLE", "T_NUMBER",
  "T_NULL", "T_IDENTIFIER", "\"= (T_EQUAL)\"", "\"+= (T_PLUS_EQUAL)\"",
  "\"-= (T_MINUS_EQUAL)\"", "\"*= (T_MULTIPLY_EQUAL)\"",
  "\"/= (T_DIVIDE_EQUAL)\"", "\"set (T_SET)\"", "\"<< (T_SHIFT_LEFT)\"",
  "\">> (T_SHIFT_RIGHT)\"", "\"dictionary (T_TYPE_DICTIONARY)\"",
  "\"array (T_TYPE_ARRAY)\"", "\"number (T_TYPE_NUMBER)\"",
  "\"string (T_TYPE_STRING)\"", "\"scalar (T_TYPE_SCALAR)\"",
  "\"any (T_TYPE_ANY)\"", "\"name (T_TYPE_NAME)\"",
  "\"%validator (T_VALIDATOR)\"", "\"%require (T_REQUIRE)\"",
  "\"%attribute (T_ATTRIBUTE)\"", "\"type (T_TYPE)\"",
  "\"abstract (T_ABSTRACT)\"", "\"object (T_OBJECT)\"",
  "\"template (T_TEMPLATE)\"", "\"include (T_INCLUDE)\"",
  "\"library (T_LIBRARY)\"", "\"inherits (T_INHERITS)\"",
  "\"partial (T_PARTIAL)\"", "'+'", "'-'", "'*'", "'/'", "'&'", "'|'",
  "'{'", "'}'", "','", "'('", "')'", "'['", "']'", "$accept", "statements",
  "statement", "include", "library", "variable", "identifier", "type",
  "$@1", "partial_specifier", "typerulelist", "$@2", "typerules",
  "typerules_inner", "typerule", "type_inherits_specifier", "object",
  "$@3", "object_declaration", "attributes", "attribute",
  "object_inherits_list", "object_inherits_specifier", "expressionlist",
  "expressions", "expressions_inner", "expression", "operator", "array",
  "array_items", "array_items_inner", "simplevalue", "constterm",
  "constexpression", "value", 0
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
     285,   286,   287,   288,    43,    45,    42,    47,    38,   124,
     123,   125,    44,    40,    41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    49,    50,
      50,    51,    52,    53,    53,    55,    54,    56,    56,    58,
      57,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    54,    54,    54,    54,    54,    54,    54,
      64,    63,    65,    65,    66,    66,    67,    68,    68,    68,
      69,    69,    70,    71,    71,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    75,    76,    76,    77,    77,
      77,    78,    78,    78,    78,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     4,     1,     1,     0,     6,     0,     1,     0,
       4,     1,     2,     0,     1,     3,     2,     2,     3,     6,
       4,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     2,     1,     0,     2,     1,     0,     1,     3,
       0,     2,     3,     1,     2,     0,     1,     3,     3,     6,
       1,     1,     1,     1,     1,     3,     1,     2,     0,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    40,     1,     0,    33,    34,    35,    36,    37,    38,
      39,     0,     0,    18,     3,     6,     7,     8,     5,     0,
       4,    44,    14,    13,     0,     9,    10,    11,     0,    43,
       0,     0,     0,    15,     0,    46,    42,    45,    71,    72,
      73,    55,     0,    68,    88,    74,    87,    89,    12,    31,
      50,     0,     0,    53,    56,    76,     0,    77,     0,     0,
      66,    69,     0,     0,    47,     0,    60,    61,    62,    63,
      64,     0,     0,    52,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    65,    67,    32,    19,    16,
      48,    51,    41,     0,    58,    57,    86,    84,    85,    78,
      79,    80,    81,    82,    83,    70,    23,     0,     0,     0,
       0,    17,     0,    21,    24,    49,     0,    27,    26,    39,
       0,    20,    22,    59,     0,    28,    25,     0,    30,     0,
      29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    14,    15,    16,    17,    57,    18,    49,    19,
      89,   106,   112,   113,   114,    63,    20,    21,    30,    31,
      37,    91,    65,    44,    52,    53,    54,    72,    45,    59,
      60,    46,    47,    58,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const yytype_int8 yypact[] =
{
     -43,    35,   -43,     1,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,    20,    -1,   -43,   -43,   -43,   -43,   -43,   -43,   -16,
     -43,   -17,   -43,   -43,    18,   -43,   -43,   -43,     1,   -43,
       1,     6,     0,   -43,    28,   -43,   -43,   -43,   -43,   -43,
     -43,     1,     4,     0,   -43,   -43,   -43,   -43,   -43,     9,
      10,     5,    -9,    -6,   -43,   -43,     4,   -43,    48,    -7,
      16,   -43,     1,    24,    34,    27,   -43,   -43,   -43,   -43,
     -43,    46,     0,   -43,     1,    61,     4,     4,     4,     4,
       4,     4,     4,     4,   -43,   -43,     0,   -43,   -43,   -43,
     -43,    30,   -43,    43,   -43,   -43,   -43,    88,    88,    92,
      92,    55,    55,     7,    14,   -43,    -5,    57,    69,    70,
      87,   116,    50,    59,   -43,   -43,     0,   -43,   -43,    73,
     101,   -43,    -5,   -43,     1,    24,   -43,    74,   -43,   114,
     -43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,   -43,   -43,   -43,   -43,   -43,    -3,     8,   -43,   -43,
      15,   -43,   -43,   -43,    -2,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,    76,   -43,   -43,    65,    36,   -43,   -43,
     -43,   -43,   -43,    32,   -42
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -18
static const yytype_int16 yytable[] =
{
      24,    61,    27,    38,    22,    39,    40,    22,    23,    55,
      28,    23,    29,    66,    67,    68,    69,    70,   109,   110,
     111,    76,    77,    25,    26,    33,    32,    34,    76,    77,
      94,    50,    73,    35,    36,     2,    74,    90,    51,    85,
      41,    62,    64,    42,   105,    43,    83,    56,     3,    93,
      71,     4,     5,     6,     7,     8,     9,    10,    86,    87,
     115,   -17,    76,    77,    88,    11,    12,    41,    13,    76,
      77,    51,   107,   117,   123,    76,    77,    66,    67,    68,
      69,    70,    78,    79,    80,    81,    82,    83,    75,   108,
     118,   121,    84,    82,    83,    78,    79,    80,    81,    82,
      83,   122,    76,    77,   125,    96,    76,    77,    97,    98,
      99,   100,   101,   102,   103,   104,   124,   130,   129,   120,
     126,   127,    78,    79,    80,    81,    82,    83,    80,    81,
      82,    83,     4,     5,     6,     7,     8,     9,   119,    95,
     128,    92,     0,     0,   116,     0,     0,     0,     0,    13
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-43))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       3,    43,     3,     3,     3,     5,     6,     3,     7,     5,
      26,     7,    29,     8,     9,    10,    11,    12,    23,    24,
      25,    14,    15,     3,     4,    28,     8,    30,    14,    15,
      72,     3,    41,    27,    28,     0,    42,     3,    41,    46,
      40,    32,    32,    43,    86,    45,    39,    43,    13,     3,
      45,    16,    17,    18,    19,    20,    21,    22,    42,    62,
       3,    26,    14,    15,    40,    30,    31,    40,    33,    14,
      15,    74,    42,     3,   116,    14,    15,     8,     9,    10,
      11,    12,    34,    35,    36,    37,    38,    39,    56,    46,
       3,    41,    44,    38,    39,    34,    35,    36,    37,    38,
      39,    42,    14,    15,     3,    44,    14,    15,    76,    77,
      78,    79,    80,    81,    82,    83,    43,     3,    44,   111,
     122,   124,    34,    35,    36,    37,    38,    39,    36,    37,
      38,    39,    16,    17,    18,    19,    20,    21,    22,    74,
     125,    65,    -1,    -1,   108,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,    13,    16,    17,    18,    19,    20,    21,
      22,    30,    31,    33,    49,    50,    51,    52,    54,    56,
      63,    64,     3,     7,    53,     3,     4,     3,    26,    29,
      65,    66,     8,    53,    53,    27,    28,    67,     3,     5,
       6,    40,    43,    45,    70,    75,    78,    79,    81,    55,
       3,    53,    71,    72,    73,     5,    43,    53,    80,    76,
      77,    81,    32,    62,    32,    69,     8,     9,    10,    11,
      12,    45,    74,    41,    42,    80,    14,    15,    34,    35,
      36,    37,    38,    39,    44,    46,    42,    53,    40,    57,
       3,    68,    70,     3,    81,    73,    44,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    58,    42,    46,    23,
      24,    25,    59,    60,    61,     3,    74,     3,     3,    22,
      54,    41,    42,    81,    43,     3,    61,    53,    57,    44,
       3
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
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
		  Type, Value, Location, context); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ConfigCompiler *context)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ConfigCompiler *context;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ConfigCompiler *context)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ConfigCompiler *context;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ConfigCompiler *context)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, context)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    ConfigCompiler *context;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, context); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ConfigCompiler *context)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, context)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    ConfigCompiler *context;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

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
int yyparse (ConfigCompiler *context);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


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
yyparse (ConfigCompiler *context)
#else
int
yyparse (context)
    ConfigCompiler *context;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
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
        case 9:

/* Line 1806 of yacc.c  */
#line 160 "config_parser.yy"
    {
		context->HandleInclude((yyvsp[(2) - (2)].text), false, yylloc);
		free((yyvsp[(2) - (2)].text));
	}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 165 "config_parser.yy"
    {
		context->HandleInclude((yyvsp[(2) - (2)].text), true, yylloc);
		free((yyvsp[(2) - (2)].text));
	}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 171 "config_parser.yy"
    {
		context->HandleLibrary((yyvsp[(2) - (2)].text));
		free((yyvsp[(2) - (2)].text));
	}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 177 "config_parser.yy"
    {
		ScriptVariable::Set((yyvsp[(2) - (4)].text), *(yyvsp[(4) - (4)].variant));
		free((yyvsp[(2) - (4)].text));
		delete (yyvsp[(4) - (4)].variant);
	}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 185 "config_parser.yy"
    {
		(yyval.text) = (yyvsp[(1) - (1)].text);
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 191 "config_parser.yy"
    {
		String name = String((yyvsp[(3) - (3)].text));
		free((yyvsp[(3) - (3)].text));

		m_Type = ConfigType::GetByName(name);

		if (!m_Type) {
			if ((yyvsp[(1) - (3)].num))
				BOOST_THROW_EXCEPTION(std::invalid_argument("Partial type definition for unknown type '" + name + "'"));

			m_Type = boost::make_shared<ConfigType>(name, yylloc);
			m_Type->Register();
		}
	}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 206 "config_parser.yy"
    {
		TypeRuleList::Ptr ruleList = *(yyvsp[(6) - (6)].variant);
		m_Type->GetRuleList()->AddRules(ruleList);
		m_Type->GetRuleList()->AddRequires(ruleList);

		String validator = ruleList->GetValidator();
		if (!validator.IsEmpty())
			m_Type->GetRuleList()->SetValidator(validator);

		delete (yyvsp[(6) - (6)].variant);
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 220 "config_parser.yy"
    {
		(yyval.num) = 0;
	}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 224 "config_parser.yy"
    {
		(yyval.num) = 1;
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 230 "config_parser.yy"
    {
		m_RuleLists.push(boost::make_shared<TypeRuleList>());
	}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 235 "config_parser.yy"
    {
		(yyval.variant) = new Value(m_RuleLists.top());
		m_RuleLists.pop();
	}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 250 "config_parser.yy"
    {
		m_RuleLists.top()->AddRequire((yyvsp[(2) - (2)].text));
		free((yyvsp[(2) - (2)].text));
	}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 255 "config_parser.yy"
    {
		m_RuleLists.top()->SetValidator((yyvsp[(2) - (2)].text));
		free((yyvsp[(2) - (2)].text));
	}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 260 "config_parser.yy"
    {
		TypeRule rule((yyvsp[(2) - (3)].type), String(), (yyvsp[(3) - (3)].text), TypeRuleList::Ptr(), yylloc);
		free((yyvsp[(3) - (3)].text));

		m_RuleLists.top()->AddRule(rule);
	}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 267 "config_parser.yy"
    {
		TypeRule rule((yyvsp[(2) - (6)].type), (yyvsp[(4) - (6)].text), (yyvsp[(6) - (6)].text), TypeRuleList::Ptr(), yylloc);
		free((yyvsp[(4) - (6)].text));
		free((yyvsp[(6) - (6)].text));

		m_RuleLists.top()->AddRule(rule);
	}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 275 "config_parser.yy"
    {
		TypeRule rule((yyvsp[(2) - (4)].type), String(), (yyvsp[(3) - (4)].text), *(yyvsp[(4) - (4)].variant), yylloc);
		free((yyvsp[(3) - (4)].text));
		delete (yyvsp[(4) - (4)].variant);
		m_RuleLists.top()->AddRule(rule);
	}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 285 "config_parser.yy"
    {
		m_Type->SetParent((yyvsp[(2) - (2)].text));
		free((yyvsp[(2) - (2)].text));
	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 298 "config_parser.yy"
    {
		(yyval.type) = (yyvsp[(1) - (1)].type);
	}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 304 "config_parser.yy"
    {
		m_Abstract = false;
	}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 308 "config_parser.yy"
    {
		ConfigItemBuilder::Ptr item = boost::make_shared<ConfigItemBuilder>(yylloc);

		item->SetType((yyvsp[(3) - (6)].text));

		if (strchr((yyvsp[(4) - (6)].text), ':') != NULL) {
			std::ostringstream msgbuf;
			msgbuf << "Name for object '" << (yyvsp[(4) - (6)].text) << "' of type '" << (yyvsp[(3) - (6)].text) << "' is invalid: Object names may not contain ':'";
			free((yyvsp[(3) - (6)].text));
			BOOST_THROW_EXCEPTION(std::invalid_argument(msgbuf.str()));
		}

		free((yyvsp[(3) - (6)].text));

		item->SetName((yyvsp[(4) - (6)].text));
		free((yyvsp[(4) - (6)].text));

		if ((yyvsp[(5) - (6)].slist)) {
			BOOST_FOREACH(const String& parent, *(yyvsp[(5) - (6)].slist)) {
				item->AddParent(parent);
			}

			delete (yyvsp[(5) - (6)].slist);
		}

		if ((yyvsp[(6) - (6)].exprl)) {
			ExpressionList::Ptr exprl = ExpressionList::Ptr((yyvsp[(6) - (6)].exprl));
			item->AddExpressionList(exprl);
		}

		item->SetAbstract(m_Abstract);

		item->Compile()->Register();
		item.reset();
	}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 347 "config_parser.yy"
    {
		m_Abstract = true;
	}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 356 "config_parser.yy"
    {
		m_Abstract = true;
	}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 362 "config_parser.yy"
    {
		(yyval.slist) = NULL;
	}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 366 "config_parser.yy"
    {
		(yyval.slist) = new std::vector<String>();
		(yyval.slist)->push_back((yyvsp[(1) - (1)].text));
		free((yyvsp[(1) - (1)].text));
	}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 372 "config_parser.yy"
    {
		if ((yyvsp[(1) - (3)].slist))
			(yyval.slist) = (yyvsp[(1) - (3)].slist);
		else
			(yyval.slist) = new std::vector<String>();

		(yyval.slist)->push_back((yyvsp[(3) - (3)].text));
		free((yyvsp[(3) - (3)].text));
	}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 384 "config_parser.yy"
    {
		(yyval.slist) = NULL;
	}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 388 "config_parser.yy"
    {
		(yyval.slist) = (yyvsp[(2) - (2)].slist);
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 394 "config_parser.yy"
    {
		(yyval.exprl) = (yyvsp[(2) - (3)].exprl);
	}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 400 "config_parser.yy"
    {
		(yyval.exprl) = (yyvsp[(1) - (1)].exprl);
	}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 404 "config_parser.yy"
    {
		(yyval.exprl) = (yyvsp[(1) - (2)].exprl);
	}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 409 "config_parser.yy"
    {
		(yyval.exprl) = NULL;
	}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 413 "config_parser.yy"
    {
		(yyval.exprl) = new ExpressionList();
		(yyval.exprl)->AddExpression(*(yyvsp[(1) - (1)].expr));
		delete (yyvsp[(1) - (1)].expr);
	}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 419 "config_parser.yy"
    {
		if ((yyvsp[(1) - (3)].exprl))
			(yyval.exprl) = (yyvsp[(1) - (3)].exprl);
		else
			(yyval.exprl) = new ExpressionList();

		(yyval.exprl)->AddExpression(*(yyvsp[(3) - (3)].expr));
		delete (yyvsp[(3) - (3)].expr);
	}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 431 "config_parser.yy"
    {
		(yyval.expr) = new Expression((yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].op), *(yyvsp[(3) - (3)].variant), yylloc);
		free((yyvsp[(1) - (3)].text));
		delete (yyvsp[(3) - (3)].variant);
	}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 437 "config_parser.yy"
    {
		Expression subexpr((yyvsp[(3) - (6)].text), (yyvsp[(5) - (6)].op), *(yyvsp[(6) - (6)].variant), yylloc);
		free((yyvsp[(3) - (6)].text));
		delete (yyvsp[(6) - (6)].variant);

		ExpressionList::Ptr subexprl = boost::make_shared<ExpressionList>();
		subexprl->AddExpression(subexpr);

		(yyval.expr) = new Expression((yyvsp[(1) - (6)].text), OperatorPlus, subexprl, yylloc);
		free((yyvsp[(1) - (6)].text));
	}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 455 "config_parser.yy"
    {
		(yyval.op) = (yyvsp[(1) - (1)].op);
	}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 461 "config_parser.yy"
    {
		(yyval.array) = (yyvsp[(2) - (3)].array);
	}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 467 "config_parser.yy"
    {
		(yyval.array) = (yyvsp[(1) - (1)].array);
	}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 471 "config_parser.yy"
    {
		(yyval.array) = (yyvsp[(1) - (2)].array);
	}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 476 "config_parser.yy"
    {
		(yyval.array) = NULL;
	}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 480 "config_parser.yy"
    {
		(yyval.array) = new Array();

		if ((yyvsp[(1) - (1)].variant)->IsObjectType<ExpressionList>()) {
			ExpressionList::Ptr exprl = *(yyvsp[(1) - (1)].variant);
			Dictionary::Ptr dict = boost::make_shared<Dictionary>();
			exprl->Execute(dict);
			delete (yyvsp[(1) - (1)].variant);
			(yyvsp[(1) - (1)].variant) = new Value(dict);
		}

		(yyval.array)->Add(*(yyvsp[(1) - (1)].variant));
		delete (yyvsp[(1) - (1)].variant);
	}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 495 "config_parser.yy"
    {
		if ((yyvsp[(1) - (3)].array))
			(yyval.array) = (yyvsp[(1) - (3)].array);
		else
			(yyval.array) = new Array();

		if ((yyvsp[(3) - (3)].variant)->IsObjectType<ExpressionList>()) {
			ExpressionList::Ptr exprl = *(yyvsp[(3) - (3)].variant);
			Dictionary::Ptr dict = boost::make_shared<Dictionary>();
			exprl->Execute(dict);
			delete (yyvsp[(3) - (3)].variant);
			(yyvsp[(3) - (3)].variant) = new Value(dict);
		}

		(yyval.array)->Add(*(yyvsp[(3) - (3)].variant));
		delete (yyvsp[(3) - (3)].variant);
	}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 515 "config_parser.yy"
    {
		(yyval.variant) = new Value((yyvsp[(1) - (1)].text));
		free((yyvsp[(1) - (1)].text));
	}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 520 "config_parser.yy"
    {
		(yyval.variant) = new Value((yyvsp[(1) - (1)].num));
	}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 524 "config_parser.yy"
    {
		(yyval.variant) = new Value();
	}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 528 "config_parser.yy"
    {
		if ((yyvsp[(1) - (1)].array) == NULL)
			(yyvsp[(1) - (1)].array) = new Array();

		Array::Ptr array = Array::Ptr((yyvsp[(1) - (1)].array));
		(yyval.variant) = new Value(array);
	}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 538 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(2) - (3)].num);
	}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 543 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(1) - (1)].num);
	}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 547 "config_parser.yy"
    {
		(yyval.num) = ScriptVariable::Get((yyvsp[(1) - (1)].text));
		free((yyvsp[(1) - (1)].text));
	}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 552 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num);
	}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 556 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num);
	}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 560 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);
	}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 564 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num);
	}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 568 "config_parser.yy"
    {
		(yyval.num) = (long)(yyvsp[(1) - (3)].num) & (long)(yyvsp[(3) - (3)].num);
	}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 572 "config_parser.yy"
    {
		(yyval.num) = (long)(yyvsp[(1) - (3)].num) | (long)(yyvsp[(3) - (3)].num);
	}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 576 "config_parser.yy"
    {
		(yyval.num) = (long)(yyvsp[(1) - (3)].num) << (long)(yyvsp[(3) - (3)].num);
	}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 580 "config_parser.yy"
    {
		(yyval.num) = (long)(yyvsp[(1) - (3)].num) >> (long)(yyvsp[(3) - (3)].num);
	}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 584 "config_parser.yy"
    {
		(yyval.num) = (yyvsp[(2) - (3)].num);
	}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 591 "config_parser.yy"
    {
		ExpressionList::Ptr exprl = ExpressionList::Ptr((yyvsp[(1) - (1)].exprl));
		(yyval.variant) = new Value(exprl);
	}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 596 "config_parser.yy"
    {
		(yyval.variant) = new Value((yyvsp[(1) - (1)].num));
	}
    break;



/* Line 1806 of yacc.c  */
#line 2381 "../../../lib/config/config_parser.cc"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
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
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc, context);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, context);
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



/* Line 2067 of yacc.c  */
#line 600 "config_parser.yy"


