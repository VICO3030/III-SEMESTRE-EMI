#include<iostream>
#include<string.h>
using namespace std;
//prototipos 
void strlen1(char texto[]);
void strcmp1(char cad1[],char cad2[]);
void strcat1(char nombre[],char apellido[]);
void strcpy1(char tex[],char destino[]);
void menu();

//funcion de menu
void menu(){
	cout<<"------MENU DE FUNCIONES-------"<<endl;
	cout<<"1.-____strlen--Longitud de cadena___"<<endl;
	cout<<"2.-____strcmp--Comparacion de cadenas___"<<endl;
	cout<<"3.-____strcat--Concatenar_____"<<endl;
	cout<<"4.-____strcpy--Copiar de cadena 2 en cad.1________"<<endl;
}

int main(){
	int op;
	char texto1[20];
	char cad1[20],cad2[20];
	char nom[30],apel[30];
	char tex[30],destino[30];
	menu();
	cout<<"Ingrese un numero de opcion : ";
	cin>>op;
	switch(op){
		case 1 :  strlen1(texto1);
		          break;
		case 2 :  strcmp1(cad1,cad2);
		          break;
		case 3 :  strcat1(nom,apel);
	            	break;
		case 4 :  strcpy1(tex,destino);
		           break;
	}
	return 0;
	
}

void strlen1(char texto[]){
	int longitud;
	cout<<"Escriba un texto : ";
	fflush(stdin);
	gets(texto);
	fflush(stdin);
	longitud=strlen(texto);
	cout<<"El texto es : "<<texto<<"Y su longitud es "<<longitud;
}

void strcmp1(char cad1[],char cad2[]){
	int resp;
	cout<<"Escriba PALABRA 1 : ";
	fflush(stdin);
	gets(cad1);
	fflush(stdin);
	cout<<"Escriba la PALABRA 2 : " ;
	fflush(stdin);
	gets(cad2);
	resp=strcmp(cad1,cad2);
	cout<<"El valor que retorna es : "<<resp;
}

void strcat1(char nombre[],char apellido[]){
	cout<<"Escribe tu NOMBRE : ";
	fflush(stdin);
	gets(nombre);
	cout<<"Escribe tu APELLIDO : ";
	fflush(stdin);
	gets(apellido);
	strcat(nombre," ");   //aumento un espacio blanco
	strcat(nombre,apellido);
	cout<<"El nombre completo ahora es :"<<nombre;
}

void strcpy1(char tex[],char destino[]){
	int longitud;
	cout<<"Escribe algo: ";
	fflush(stdin);
	gets(tex);
	strcpy(destino,tex);
	cout<<"El destino ahora igual al texto: "<<destino;
}






