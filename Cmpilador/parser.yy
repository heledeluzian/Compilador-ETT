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
void dibujoamarillo();
void dibujoazul();
void dibujoblanco();
void posicion(float x,float y);
void arriba(float dir);
void derecha(float dir);
void abajo(float dir);
void izquierda(float dir);
}
%param { calculadora_driver& driver }
%locations
%define parse.trace
%define parse.error verbose
%code
{
#include "driver.h"
#include <iostream>

int posx,posy;
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
%type <float> VAR_C
%type <float> EXP
%type <float> VAR
%type <float> INST_MOVER

%printer { yyoutput << $$; } <*>;
%%



INST : editar INST_T termino

INST_T : INST_T INST_T
        | INST_MOVER
        | pos parabier VAR coma VAR paracer {posicion($3,$5);}
        | color parabier VAR_C paracer
        | davalor EXP
        ;

INST_MOVER: aba parabier VAR paracer  {abajo($3);}
        | arr parabier VAR paracer {arriba($3);}
        | izq parabier VAR paracer  {izquierda($3);}
        | der parabier VAR paracer  {derecha($3);}
        ;

VAR_C : rojo {dibujorojo();}
        | verde {dibujoverde();}
        | azul {dibujoazul();}
        | amarillo  {dibujoamarillo();}
        | blanco  {dibujoblanco();}
        | id
        ;

EXP : id igual VAR_C
      | id igual numero 
      ;

VAR : numero {$$=$1;}
      | id   
      ;

%%
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
