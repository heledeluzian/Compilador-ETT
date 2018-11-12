all:
	flex lexico.l
	bison -d parser.yy
	g++ -Wall -g -DDEBUG main.cpp driver.cpp parser.tab.cc scanner.cpp miniwin.cpp -o prog -pthread -lX11 -lfl -std=c++11
