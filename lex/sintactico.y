%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  extern int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);
%}

%union

{
  float real;
}

%start INST

%token <real> NUMERO

%token editar
%token terminar
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
%token id
%token numero
%token davalor
%token coma
%token color
%token pos

// %type <real> Exp
// %type <reafl> Calc
// %type <real> Exp_l

%left MAS MENOS   /* AQUI COLOCAMOS PARA EL MAS Y MENOS */
%left POR DIV	  /* AQUI COLOCAMOS PARA LA MULTIPLICACION Y DIVISION */

%%

INST : editar INST_T terminar

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

VAR_C : rojo
        | verde
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
void yyerror(char *s)
{
  printf("Error sintactico %s",s);
}
int main(int argc,char **argv)
{
  if (argc>1)
                yyin=fopen(argv[1],"rt");
  else
                yyin=stdin;
  yyparse();
  return 0;
}