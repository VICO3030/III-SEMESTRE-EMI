#include<iostream>
#include<locale.h>
using namespace std;


int main(){
	setlocale(LC_ALL,"spanish");
	char cadena[30];
	cout<<"QUE HARAS EN LOS CARNAVALES"<<endl;
	//cin>>cadena;
	fflush(stdin);
	gets(cadena);
	//cin.getline(cadena,30);
	fflush(stdin);
	cout<<"\nsu respuesta es = "<<cadena;
	return 0;
}
