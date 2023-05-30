#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED
#include <string.h>
using namespace std;
/**funcion contar palabras*/
int ContarPalabras(char texto[])
{
 int cont = 0;
 int espacio = 1;
 int i,tam=strlen(texto);
 for(i=0; i < tam; i++)
 {
 if ( (texto[i]==' ') && (i > 0) && (texto[i-1]!=' ') )
 {
 cont++;
 espacio = 1;
}
else
 espacio = 0;
 }
 if (espacio==0) cont++;
 return cont;
}
/**procedimiento invertir caena*/
void Invertir_Cadena(char cade[],int t){
int i,j;
j=t-1;
char aux;
for(i=0;i<t/2;i++){
 aux=cade[i];
 cade[i]=cade[j];
 cade[j]=aux;
 j--;
}
 }
#endif // CADENAS_H_INCLUDED
