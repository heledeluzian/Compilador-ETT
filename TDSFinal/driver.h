#ifndef DRIVER
# define DRIVER
# include <string>
# include "parser.tab.hh"
#define YY_DECL \
yy::trayect_parser::symbol_type yylex (trayect_driver& driver)
YY_DECL;

class trayect_driver
{
public:
  float resultado;
  void iniciarScanner();
  void terminarScanner();
  
  int parse(const std::string& archivo);
  
  std::string file;
};
#endif
