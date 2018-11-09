%{

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "y.tab.h"
  #undef yywrap
  #define yywrap() 1
  int linea=0;
%}

DIGITO [0-9]
NUMERO {DIGITO}+{DIGITO}*
ID [a-z][a-zA-Z0-9]*

%%

{NUMERO}    {return(numero);}
{ID}        {return(id);}
"Rojo"      {return(rojo);}
"Verde"     {return(verde);}
"Azul"      {return(azul);}
"Amarillo"  {return(amarillo);}
"Blanco"    {return(blanco);}
"Aba"       {return(aba);}
"Arr"       {return(arr);}
"Izq"       {return(izq);}
"Der"       {return(der);}
"Davalor"   {return(davalor);}
"("         {return(parabier);}
")"         {return(paracer);}
","         {return(coma);}
"Editar"    {return(editar);}
"Termino"   {return(terminar);}
"Color"     {return(color);}
"Pos"  {return(pos);}
"="         {return(igual);}
"\n"        {linea++;}
[\t\r\f] {}
" "                          {}

.            {printf("Error lexico en linea %d",linea+1);}
%%