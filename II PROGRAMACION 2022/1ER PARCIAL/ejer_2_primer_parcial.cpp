#include <stdio.h>
#include <iostream>
#include <string.h>
#include "CADENAS.h"
using namespace std;
bool EsCapicua(char texto[]);
int main()
{
    char texto[255];
    int vocales[6];
    int t;
    cout<<"Escriba un Frase: ";
    fflush(stdin);
    gets(texto);
    fflush(stdin);
    t=strlen(texto);
    if (EsCapicua(texto))
    {
    cout<<"EL TEXTO ES CAPICUA!!"<<endl;
    cout<<"___________________________"<<endl;
     cout<<"LA CANTIDAD DE PALABRAS DEL TEXTO ES="<<ContarPalabras(texto)<<endl;
    }
    else
    {
    cout<<"EL TEXTO NO ES CAPICUA!!"<<endl;
    cout<<"___________________________"<<endl;
    cout<<"LA CADENA INVERTIDA ES:"<<endl;
    cout<<"___________________________"<<endl;
    Invertir_Cadena(texto,t);
    cout<<texto;
    }
    return 0;
}

bool EsCapicua(char texto[])
{
   int p = 0;
   int q = strlen(texto)-1;
   bool band = true;
   while (p<q) {
   if(texto[p]!=texto[q]){
   if(texto[p]==' '){
    p++;
    }
    else {
    if(texto[q]==' '){
    q--;
    }
    else{
    band = false;
    p++;
    q--;
       }
   }
 }
    else{
    p++;
    q--;
   }
   }
 return band;
}
