#include<string.h>
#include<iostream>
using namespace std;
/**Funcion cortar palabras*/
int ContarPalabras(char texto[]){
	int longitud;
	longitud=strlen(texto);
	return longitud;
}

/**Procedimiento invertir cadena */
void invertir(char texto[],int t){
	int i,j,cade;
	j=t-1;
	char aux;
	for(i=0;i<t/2;i++){
	aux=cade[i];
	cade[i]=cade[j];
	cade[j]=aux;
	j--;
	}
}
	
