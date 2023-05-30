//realizar un prgrama para invertir una cadena 
#include<iostream>
#include<string.h>
using namespace std;
//prototipo
void invertir_cadena(char cade[],int t);

int main(){
	int tam;
	char texto [25];
	cout<<"  ingrese un texto  "  <<endl;
	fflush(stdin);
	gets(texto);
	fflush(stdin);
	tam=strlen(texto);
	cout<<"el texto es "<<texto<<endl;
    invertir_cadena(texto,tam);//llamado del void 
    cout<<"el texto invertido es "<<texto;
	return 0;
}
//definir funcion  ha funcion
void invertir_cadena(char cade[],int t){
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
