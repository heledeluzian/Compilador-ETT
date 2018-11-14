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
ID [a-z][a-zA-Z0-9]*

DELIMITADOR [\t\r\f" "]
%%
{NUMERO}    {return yy::calculadora_parser::make_numero(strtol(yytext, NULL, 10),loc);}
{ID}        {return yy::calculadora_parser::make_id(yytext,loc);}
"Rojo"      {return yy::calculadora_parser::make_rojo(loc);}
"Verde"     {return yy::calculadora_parser::make_verde(loc);}
"Azul"      {return yy::calculadora_parser::make_azul(loc);}
"Amarillo"  {return yy::calculadora_parser::make_amarillo(loc);}
"Blanco"    {return yy::calculadora_parser::make_blanco(loc);}
"Aba"       {return yy::calculadora_parser::make_aba(loc);}
"Arr"       {return yy::calculadora_parser::make_arr(loc);}
"Izq"       {return yy::calculadora_parser::make_izq(loc);}
"Der"       {return yy::calculadora_parser::make_der(loc);}
"Davalor"   {return yy::calculadora_parser::make_davalor(loc);}
"("         {return yy::calculadora_parser::make_parabier(loc);}
")"         {return yy::calculadora_parser::make_paracer(loc);}
","         {return yy::calculadora_parser::make_coma(loc);}
"Editar"    {return yy::calculadora_parser::make_editar(loc);}
"Termino"   {return yy::calculadora_parser::make_termino(loc);}
"Color"     {return yy::calculadora_parser::make_color(loc);}
"Pos"  	    {return yy::calculadora_parser::make_pos(loc);}
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
