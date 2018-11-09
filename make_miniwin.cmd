mkdir exe
flex lex/lexico.l
bison -yd lex/sintactico.y
g++.exe -Wall -g -DDEBUG y.tab.c lex.yy.c miniwin/miniwin.cpp -o exe/hola.exe -lgdi32 -luser32 -lkernel32 -mwindows -lfl

