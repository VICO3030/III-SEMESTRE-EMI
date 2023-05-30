//ejercicio 4 practica final
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char cadena[10];
	do{
		cout<<"Ingrese una palabra : ";
		cin>>cadena;
		 if(strlen(cadena)<1||strlen(cadena)>9)  cout<<"Cadena fuera de rango\n";
	}while(strlen(cadena)<1||strlen(cadena>9));
	int i ,j;
	for (i=0;i<strlen(cadena);i++){
		for(j=0;j<strlen(cadena);j++){
			if(j==0||i==strlen(cadena)-1){
				cout<<"%c ",cadena[ i - j];		
			}else if(j==strlen(cadena)-1){
				cout<<" %c",cadena[j-i];
			}else if (i==0){
				cout<<"%c ",cadena[j];
			}else{
				cout<<"  ";
			}
		}
	}
}
