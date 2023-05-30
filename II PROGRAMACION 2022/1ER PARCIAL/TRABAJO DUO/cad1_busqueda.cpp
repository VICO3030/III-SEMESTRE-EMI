//ejercicio 1 hacer una busqueda de un caracter de una cadena 
#include <iostream >
#include<string.h>
using namespace std;
int busqueda(char cad[],char ca);
//menu principal
int main(){
	char cad1[30],ca1;
	cout<<"\nIngrese un texto = ";
	fflush(stdin);
	gets(cad1);
	fflush(stdin);
	
	//busqueda
	cout<<"ingrese el caracter que desea buscar =";
	cin>>ca1;
	
	if(busqueda(cad1,ca1)==-1){
		cout<<"el caracter no  se encuentra  en la cadena ";
	}
	else
	{
		cout<<"el caracter si se encuentra en la cadena y esta en la posicion  ["<<busqueda(cad1,ca1)<<"]";
	}
	return 0;
}
//funcion de busqueda
int busqueda(char cad[],char ca){
	int i;
	for( i=0; i<strlen(cad); i++){
		if(cad[i]==ca){
			return i;
			break;
		}
	}
	return -1;
}


