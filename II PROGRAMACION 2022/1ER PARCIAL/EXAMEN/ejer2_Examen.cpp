#include<iostream>
#include<iostream>
#include<string.h>
#include"CADENAS.h"
using namespace std;
//prototipo de funciones
bool EsCapicua(char texto[]);
int main(){
	char texto[255];
	int vocales[6];
	cout<<"Escriba una frase : ";
	fflush(stdin);
	gets(texto);
	fflush(stdin);
	if(EsCapicua(texto)){
		 EsCapicua(char texto[]);
		cout<<"LA CANTIDAD DE PALABRAS DEL TEXTO ES = "<<ContarPalabras(texto)<<endl;
	}
	else{
		cout<<"EL TEXTO NO ES CAPICUA !!"<<endl;
		cout<<"______________________________"<<endl;
		tam=strlen(texto);
        invertirCadena(texto,tam);//llamado del void 
        cout<<"el texto invertido es "<<texto; 
		invertir(texto);
	}
}
bool EsCapicua(char texto[]){
	 texto= true;
	int longitud,i=0;
	numero=strlen(texto);
	while(i <= longitud && texto)	{
		if(numero[i] != numero[longitud]){
			texto = false;
		}
		i++;
		longitud--;
	}
	if(capicua){
		cout("El numero es Capicua!\n");
	}
