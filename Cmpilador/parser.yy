%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.0.2"
%defines
%define parser_class_name {calculadora_parser}
%define api.token.constructor
%define api.namespace {yy}
%define api.value.type variant
%define parse.assert
%code requires
{
#include <string>
#include <stdio.h>
#include "miniwin.h"
class calculadora_driver;
void dibujorojo();
void dibujoverde();
}
%param { calculadora_driver& driver }
%locations
%define parse.trace
%define parse.error verbose
%code
{
#include "driver.h"
#include <iostream>
}
%define api.token.prefix {TOK_}

//Listadode Terminales
%start INST

%token <float> numero

%token editar
%token termino
%token aba
%token arr
%token izq
%token der
%token parabier
%token paracer
%token igual
%token rojo
%token verde
%token amarillo
%token azul
%token blanco
%token <std::string> id
%token numero
%token davalor
%token coma
%token color
%token pos
%token FIN 0 "eof"


//Listado de No Terminales
%type <float> INST_T
%type <float> DIR
%type <float> VAR_C
%type <float> EXP
%type <float> VAR

%printer { yyoutput << $$; } <*>;
%%



INST : editar INST_T termino

INST_T : INST_T INST_T
        | DIR parabier VAR paracer
        | pos parabier VAR coma VAR paracer
        | color parabier VAR_C paracer
        | davalor EXP
        ;

DIR : aba
      | arr
      | izq
      | der
      ;

VAR_C : rojo {dibujorojo();}
        | verde {dibujoverde();}
        | azul
        | amarillo
        | blanco
        | id
        ;

EXP : id igual VAR_C
      | id igual VAR
      ;

VAR : numero
      | id
      ;

%%
void dibujorojo(){
	miniwin::color(miniwin::ROJO);
	miniwin::linea(0,0,100,100);
   	miniwin::refresca();

}
void dibujoverde(){
	miniwin::color(miniwin::VERDE);
	miniwin::linea(100,100,200,200);
   	miniwin::refresca();

}
void yy::calculadora_parser::error(const location_type& lugar, const std::string& lexema)
{
  std::cout << "Error Sintactico " << lexema << std::endl;
}
