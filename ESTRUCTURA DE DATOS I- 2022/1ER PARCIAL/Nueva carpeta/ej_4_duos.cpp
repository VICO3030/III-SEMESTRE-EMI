//ejercicio 4 unir cadenas
#include <iostream>
#include <string.h>
using namespace std;
//Procedimientos
void invertir_cadena(char cade[],int t);
//funcion principal
int main(){
    char texto1[30];
    char texto2[30];	
	int tam;
	cout<<"EJERCICIO 4 LA (UNION DE DOS CADENAS INVERTIDAS)"<<endl;
	cout<<"INGRESE UN TEXTO: "<<endl;
	fflush(stdin);//LIBERA LA MEMORIA
	gets(texto1);
	fflush(stdin);//LIBERA LA MEMORIA
	tam=strlen(texto1);
	invertir_cadena(texto1 , tam);
	cout<<"INGRESE OTRO TEXTO: "<<endl;
	fflush(stdin);//LIBERA LA MEMORIA
	gets(texto2);
	fflush(stdin);//LIBERA LA MEMORIA
	tam=strlen(texto2);
	invertir_cadena(texto2 , tam);
	cout<<strcat(texto1,texto2);
	return 0;
}
void invertir_cadena (char cade[],int t){
	int j;
	j=t-1;
	char aux;
	for(int i=0;i<t/2;i++){
		aux=cade[i];
		cade[i]=cade[j];
		cade[j]=aux;
		j--;
	}
}
