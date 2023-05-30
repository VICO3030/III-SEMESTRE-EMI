//ejercicio1 buscar si esta en la cadena un caracter
#include<iostream>
#include<string.h>
using namespace std;
//procedimiento de busqueda
void bus_cadena(char cade[],int n);

//menu principal
int main(){
	char texto[30];
	int tam;
	cout<<"ingrese un texto "<<endl;
	fflush(stdin);
	gets(texto);
	fflush(stdin);
	tam=strlen(texto);
	
	bus_cadena(texto,tam);
	return 0;
	
}

void bus_cadena(char cade[],int n){
	char caracter;
	cout<<"ingrese el caracter que desea buscar ";
	cin>>caracter;
	for(int i=1;i<=n;i++){
		if(cade[i]==caracter){
			cout<<"EL caracter si esta en la cadena "<<endl;
			break;
		}
		else
		{   cout<<"El caracter no se encuentra en la cadena"<<endl;
		    break;
		}
	}
}


