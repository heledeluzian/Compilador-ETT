// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.tab.hh"

// User implementation prologue.

#line 51 "parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 35 "parser.yy" // lalr1.cc:413

#include "driver.h"
#include <iostream>

int posx,posy;
std::vector<std::pair<std::string, float> > v;

#line 61 "parser.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 6 "parser.yy" // lalr1.cc:479
namespace yy {
#line 147 "parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  calculadora_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  calculadora_parser::calculadora_parser (calculadora_driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  calculadora_parser::~calculadora_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  calculadora_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  calculadora_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  calculadora_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  calculadora_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  calculadora_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  calculadora_parser::symbol_number_type
  calculadora_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  calculadora_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  calculadora_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 3: // numero
      case 25: // INST_T
      case 26: // INST_MOVER
      case 27: // VAR_C
      case 28: // EXP
      case 29: // VAR
        value.move< float > (that.value);
        break;

      case 18: // id
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  calculadora_parser::stack_symbol_type&
  calculadora_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 3: // numero
      case 25: // INST_T
      case 26: // INST_MOVER
      case 27: // VAR_C
      case 28: // EXP
      case 29: // VAR
        value.copy< float > (that.value);
        break;

      case 18: // id
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  calculadora_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  calculadora_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
            case 3: // numero

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 340 "parser.tab.cc" // lalr1.cc:636
        break;

      case 18: // id

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< std::string > (); }
#line 347 "parser.tab.cc" // lalr1.cc:636
        break;

      case 25: // INST_T

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 354 "parser.tab.cc" // lalr1.cc:636
        break;

      case 26: // INST_MOVER

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 361 "parser.tab.cc" // lalr1.cc:636
        break;

      case 27: // VAR_C

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 368 "parser.tab.cc" // lalr1.cc:636
        break;

      case 28: // EXP

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 375 "parser.tab.cc" // lalr1.cc:636
        break;

      case 29: // VAR

#line 79 "parser.yy" // lalr1.cc:636
        { yyoutput << yysym.value.template as< float > (); }
#line 382 "parser.tab.cc" // lalr1.cc:636
        break;


      default:
        break;
    }
    yyo << ')';
  }
#endif

  inline
  void
  calculadora_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  calculadora_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  calculadora_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  calculadora_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  calculadora_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  calculadora_parser::debug_level_type
  calculadora_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  calculadora_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline calculadora_parser::state_type
  calculadora_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  calculadora_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  calculadora_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  calculadora_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 3: // numero
      case 25: // INST_T
      case 26: // INST_MOVER
      case 27: // VAR_C
      case 28: // EXP
      case 29: // VAR
        yylhs.value.build< float > ();
        break;

      case 18: // id
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 5:
#line 88 "parser.yy" // lalr1.cc:859
    {posicion(yystack_[3].value.as< float > (),yystack_[1].value.as< float > ());}
#line 615 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 93 "parser.yy" // lalr1.cc:859
    {abajo(yystack_[1].value.as< float > ());}
#line 621 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 94 "parser.yy" // lalr1.cc:859
    {arriba(yystack_[1].value.as< float > ());}
#line 627 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 95 "parser.yy" // lalr1.cc:859
    {izquierda(yystack_[1].value.as< float > ());}
#line 633 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 96 "parser.yy" // lalr1.cc:859
    {derecha(yystack_[1].value.as< float > ());}
#line 639 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 99 "parser.yy" // lalr1.cc:859
    {dibujorojo();}
#line 645 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 100 "parser.yy" // lalr1.cc:859
    {dibujoverde();}
#line 651 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 101 "parser.yy" // lalr1.cc:859
    {dibujoazul();}
#line 657 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 102 "parser.yy" // lalr1.cc:859
    {dibujoamarillo();}
#line 663 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 103 "parser.yy" // lalr1.cc:859
    {dibujoblanco();}
#line 669 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 108 "parser.yy" // lalr1.cc:859
    {guardarnum(yystack_[2].value.as< std::string > (),yystack_[0].value.as< float > ());}
#line 675 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 111 "parser.yy" // lalr1.cc:859
    {yylhs.value.as< float > ()=yystack_[0].value.as< float > ();}
#line 681 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 112 "parser.yy" // lalr1.cc:859
    {yylhs.value.as< float > ()=buscarnum(yystack_[0].value.as< std::string > ());}
#line 687 "parser.tab.cc" // lalr1.cc:859
    break;


#line 691 "parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  calculadora_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  calculadora_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char calculadora_parser::yypact_ninf_ = -15;

  const signed char calculadora_parser::yytable_ninf_ = -1;

  const signed char
  calculadora_parser::yypact_[] =
  {
       1,     6,     4,     7,     9,    10,    16,    -2,    20,    34,
       2,   -15,   -15,     0,     0,     0,     0,    17,   -15,    25,
       0,   -15,     6,   -15,   -15,    35,    36,    37,    38,    19,
     -15,   -15,   -15,   -15,   -15,   -15,    39,    31,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,     0,    41,   -15
  };

  const unsigned char
  calculadora_parser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     1,     0,     0,     0,     0,     0,     7,     0,
       0,     2,     3,    20,    21,     0,     0,     0,     0,     0,
      12,    13,    15,    14,    16,    17,     0,     0,     8,     9,
      10,    11,    19,    18,     6,     0,     0,     5
  };

  const signed char
  calculadora_parser::yypgoto_[] =
  {
     -15,   -15,    44,   -15,    24,   -15,   -14
  };

  const signed char
  calculadora_parser::yydefgoto_[] =
  {
      -1,     2,    22,    11,    36,    18,    25
  };

  const unsigned char
  calculadora_parser::yytable_[] =
  {
      26,    27,    28,    23,    12,     1,    37,    21,     3,     4,
       5,     6,     3,     4,     5,     6,    17,    13,    24,    14,
      15,     7,    42,     8,     9,     7,    16,     8,     9,    29,
      19,    46,    30,    31,    32,    33,    34,    35,    30,    31,
      32,    33,    34,    35,    20,    10,    38,    39,    40,    41,
      44,    45,    47,    43
  };

  const unsigned char
  calculadora_parser::yycheck_[] =
  {
      14,    15,    16,     3,     0,     4,    20,     5,     6,     7,
       8,     9,     6,     7,     8,     9,    18,    10,    18,    10,
      10,    19,     3,    21,    22,    19,    10,    21,    22,    12,
      10,    45,    13,    14,    15,    16,    17,    18,    13,    14,
      15,    16,    17,    18,    10,     1,    11,    11,    11,    11,
      11,    20,    11,    29
  };

  const unsigned char
  calculadora_parser::yystos_[] =
  {
       0,     4,    24,     6,     7,     8,     9,    19,    21,    22,
      25,    26,     0,    10,    10,    10,    10,    18,    28,    10,
      10,     5,    25,     3,    18,    29,    29,    29,    29,    12,
      13,    14,    15,    16,    17,    18,    27,    29,    11,    11,
      11,    11,     3,    27,    11,    20,    29,    11
  };

  const unsigned char
  calculadora_parser::yyr1_[] =
  {
       0,    23,    24,    25,    25,    25,    25,    25,    26,    26,
      26,    26,    27,    27,    27,    27,    27,    27,    28,    28,
      29,    29
  };

  const unsigned char
  calculadora_parser::yyr2_[] =
  {
       0,     2,     3,     2,     1,     6,     4,     2,     4,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const calculadora_parser::yytname_[] =
  {
  "\"eof\"", "error", "$undefined", "numero", "editar", "termino", "aba",
  "arr", "izq", "der", "parabier", "paracer", "igual", "rojo", "verde",
  "amarillo", "azul", "blanco", "id", "davalor", "coma", "color", "pos",
  "$accept", "INST", "INST_T", "INST_MOVER", "VAR_C", "EXP", "VAR", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned char
  calculadora_parser::yyrline_[] =
  {
       0,    84,    84,    86,    87,    88,    89,    90,    93,    94,
      95,    96,    99,   100,   101,   102,   103,   104,   107,   108,
     111,   112
  };

  // Print the state stack on the debug stream.
  void
  calculadora_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  calculadora_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 6 "parser.yy" // lalr1.cc:1167
} // yy
#line 1084 "parser.tab.cc" // lalr1.cc:1167
#line 115 "parser.yy" // lalr1.cc:1168

void guardarnum(std::string h,float k){
	std::pair<std::string,float> j;
	j.first=h;
	j.second=k;
	v.push_back(j);
}
float buscarnum(std::string h){
	int l=v.size();
	for(int i=0;i<l;i++){
		if(v[i].first == h){
			return v[i].second;
		}
	
	}
	return -1;
}
void dibujorojo(){
	miniwin::color(miniwin::ROJO);
  miniwin::refresca();
}
void dibujoverde(){
	miniwin::color(miniwin::VERDE);
  miniwin::refresca();
}
void dibujoazul(){
	miniwin::color(miniwin::AZUL);
  miniwin::refresca();
}
void dibujoamarillo(){
	miniwin::color(miniwin::AMARILLO);
  miniwin::refresca();
}
void dibujoblanco(){
	miniwin::color(miniwin::BLANCO);
  miniwin::refresca();
}
void arriba(float dir){
  dir=dir*30;
	miniwin::linea(posx,posy,posx,posy-dir);
	miniwin::refresca();
	posy=posy-dir;
}
void derecha(float dir){
  dir=dir*30;
  miniwin::linea(posx,posy,posx+dir,posy);
  miniwin::refresca();
  posx=posx+dir;
}
void izquierda(float dir){
  dir=dir*30;
  miniwin::linea(posx,posy,posx-dir,posy);
  miniwin::refresca();
  posx=posx-dir;  
}
void abajo(float dir){
  dir=dir*30;
  miniwin::linea(posx,posy,posx,posy+dir);
  miniwin::refresca();
  posy=posy+dir;
    
}
void posicion(float x,float y){
  posx=x;
  posy=y;
}
void yy::calculadora_parser::error(const location_type& lugar, const std::string& lexema)
{
  std::cout << "Error Sintactico " << lexema << std::endl;
}
