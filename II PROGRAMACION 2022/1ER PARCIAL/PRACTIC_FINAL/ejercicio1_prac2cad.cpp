//ejercicio 1
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void sustituir(char origen[]);
int main(){
	char cad[30],ori[30];
	cout<<"ingrese una letra o frase : "<<endl;
	fflush(stdin);
	gets(cad);
	fflush(stdin);
	cout<<"Cadena resultante : "<<sustituir(ori);
	getch();
	return 0;
	
}
int sustituir(char origen[])
{
	int a,tam;
	tam=strlen(origen);
	for(a=0;a<tam;a++){
		if(toupper(origen[a]=='a'&& origen[a]=='e'&& origen[a]=='i'&&origen[a]=='o'&&origen[a]=='u'){
	      origen[a]='*';
		}
		return origen[a];
    }
}

