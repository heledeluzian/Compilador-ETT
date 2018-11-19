#include <stdio.h>
#include "driver.h"
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  cout<<"*************************************************************************"<<endl;
  cout<<"Bienvenido al traductor dirigido por sintaxis 'Super ultimate TDS'."<<endl;
  cout<<"Escriba las instrucciones en consola, las trayectorias se harán visibles"<<endl;
  cout<<"en la ventana negra..."<<endl;
  cout<<"*************************************************************************"<<endl<<endl;
  trayect_driver driver;
  driver.parse("f");
  return 0;
}
