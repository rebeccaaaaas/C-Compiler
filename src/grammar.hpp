/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "grammar.y"
{
    struct Node* label_tree;
}
/* Line 1529 of yacc.c.  */
#line 117 "grammar.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
