#include<iostream>
#include<string.h>
using namespace std;

int main(){
 char cade1[20];
 char cade2[20];
 int valor;
 cout<<"INGRESE VALOR DE LA PRIMERIA MATERIA"<<endl;
 fflush(stdin);
 gets(cade1);
 cout<<"INGRESE VALOR DE LA SEGUNDA  MATERIA"<<endl;
 fflush(stdin);
 gets(cade2);
 fflush(stdin);
 valor=strcmp(cade1,cade2);//llamada invocando a la funcion 
 if(valor==0){
 	cout<<"Las cadenas son iguales  "<<valor;
 }
 else{
 	if(valor==-1){
 		cout<<"la cadena 1 es menor que la cadena 2"<<endl;
		 cout<<"valor de "<<valor<<endl;
	 }
	 else{
	 	cout<<"la cadena 2 es menor que la cadena 1"<<endl;
		 cout<<"Valor de "<<valor<<endl;
	 }
 }
 
 return 0;
}
