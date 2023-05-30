// ejercicio 3 programa para eleminar espacios de una cadena 
#include<iostream>
#include<string.h>
using namespace std;
//declaracion de mi procedimiento 
void espacio(char cade[]);
//programa de borrar espacios
void espacio(char cade[]){
	int i,n;
	n=strlen(cade);
	for (i=0;i<n;i++){
		if(cade[i]==' '){
			for(int j=i;j<n;j++){
				cade[j]=cade[j+1];
			}
		}
	}
}
int main(){
	char cade1[30];
	cout<<"Ingrese el texto : "<<endl;
	fflush(stdin);
	gets(cade1);
	fflush(stdin);
	cout<<"El texto actual es de "<<cade1<<endl;
	
	espacio(cade1);
	cout<<"El texto sin espacios es de "<<cade1<<endl;
	return 0;
}
