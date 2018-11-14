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
#include <utility> 
#include <vector>
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
void guardarnum(std::string h,float k);
float buscarnum(std::string h);
void guardarcolor(std::string h, std::string k);
std::string buscarcolor(std::string h);
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
std::vector<std::pair<std::string, float> > v;
std::vector<std::pair<std::string, std::string> > cl;
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
%type <float> TER
%type <float> INST_MOVER

%printer { yyoutput << $$; } <*>;
%%



INST : editar INST_T TER

TER: termino {exit(0);}

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
        | id  {buscarcolor($1);}
        ;

EXP : id igual rojo    {guardarcolor($1,"ROJO");}
      | id igual verde {guardarcolor($1,"VERDE");}
      | id igual azul  {guardarcolor($1,"AZUL");}
      | id igual amarillo {guardarcolor($1,"AMARILLO");}
      | id igual blanco    {guardarcolor($1,"BLANCO");}
      | id igual numero  {guardarnum($1,$3);}  
      ;

VAR : numero {$$=$1;}
      | id    {$$=buscarnum($1);}
      ;

%%
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
void guardarcolor(std::string h, std::string k){
	std::pair<std::string,std::string> j;
	j.first=h;
	j.second=k;
	cl.push_back(j);
}
std::string buscarcolor(std::string h){
	int l=cl.size();
	for(int i=0;i<l;i++){
		if(cl[i].first == h){
      std::cout<<cl[i].second<<std::endl;
      if(cl[i].second == "ROJO"){
        dibujorojo();
      }
      else if(cl[i].second == "VERDE"){
        dibujoverde();
      }
      else if(cl[i].second == "AMARILLO"){
        dibujoamarillo();   
      }
      else if(cl[i].second == "AZUL"){
        dibujoazul();
      }
      else if(cl[i].second == "BLANCO"){
        dibujoblanco();
      }
      return(cl[i].second);
		}
	}
  return("0");
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
