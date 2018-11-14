%{
# include <cerrno>
#include <stdio.h>
#include <string>
#include "driver.h"
#include "parser.tab.hh"
#undef yywrap
#define yywrap() 1
static yy::location loc;
int linea=0;
%}
%option noyywrap nounput batch debug noinput
%option outfile="scanner.cpp"
DIGITO [0-9]
NUMERO {DIGITO}+("."{DIGITO}+)?
ID [A-Z][a-zA-Z0-9]*

DELIMITADOR [\t\r\f" "]
%%
{NUMERO}    {return yy::calculadora_parser::make_numero(strtol(yytext, NULL, 10),loc);}
{ID}        {return yy::calculadora_parser::make_id(yytext,loc);}
"rojo"      {return yy::calculadora_parser::make_rojo(loc);}
"verde"     {return yy::calculadora_parser::make_verde(loc);}
"azul"      {return yy::calculadora_parser::make_azul(loc);}
"amarillo"  {return yy::calculadora_parser::make_amarillo(loc);}
"blanco"    {return yy::calculadora_parser::make_blanco(loc);}
"aba"       {return yy::calculadora_parser::make_aba(loc);}
"arr"       {return yy::calculadora_parser::make_arr(loc);}
"izq"       {return yy::calculadora_parser::make_izq(loc);}
"der"       {return yy::calculadora_parser::make_der(loc);}
"davalor"   {return yy::calculadora_parser::make_davalor(loc);}
"("         {return yy::calculadora_parser::make_parabier(loc);}
")"         {return yy::calculadora_parser::make_paracer(loc);}
","         {return yy::calculadora_parser::make_coma(loc);}
"editar"    {return yy::calculadora_parser::make_editar(loc);}
"termino"   {return yy::calculadora_parser::make_termino(loc);}
"color"     {return yy::calculadora_parser::make_color(loc);}
"pos"  	    {return yy::calculadora_parser::make_pos(loc);}
"="         {return yy::calculadora_parser::make_igual(loc);}
"\n"        {linea++;}

{DELIMITADOR}   {}
.               {printf("ERROR LEXICO %s en linea %i\n",yytext,linea+1);}
<<EOF>>		{return yy::calculadora_parser::make_FIN(loc);}
%%
void calculadora_driver::iniciarScanner()
{
  yy_flex_debug = false;
  yyin = stdin;
}
void calculadora_driver::terminarScanner()
{
  fclose(yyin);
}
