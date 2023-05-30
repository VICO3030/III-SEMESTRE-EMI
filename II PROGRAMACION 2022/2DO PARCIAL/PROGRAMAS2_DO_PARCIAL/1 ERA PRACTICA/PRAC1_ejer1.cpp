#include <stdio.h> 
#include<iostream>
using namespace std;
int main() 
{ 
   int *p = NULL, a = 0; 
   *p = 101; 
    a = *p; 
   cout<<"%d\n",a; 
   return 0;
}
//d) No se puede ejecutar porque hay errores durante la ejecución.
