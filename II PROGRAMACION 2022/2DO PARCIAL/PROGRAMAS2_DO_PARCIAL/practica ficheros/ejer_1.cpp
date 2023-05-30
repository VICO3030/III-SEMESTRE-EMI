#include<iostream>
#include<stdio.h>
#include<locale.h>
using namespace std;

void menu(int &opcion);
void escribir(FILE*archi);
void leer_fichero(FILE *a);
void copia_fichero(FILE *a,FILE*b);
int main()
{
	FILE *archi,*copia;
	int op=0;
	do{
		menu(op);
		switch(op)
		{
			case 1: 
			system("cls");
			escribir(archi);
			case 2:  
	        system("cls");
			leer_fichero(archi);break;
		    case 3:
			
			copia_fichero(archi,copia);break;
			case 4: break;
		}
	}while(op!=4);
	return 0;
}
 

void menu(int &opcion)
{
	cout<<"__________________________________________"<<endl;
	cout<<"             MENU DE OPCIONES                          "<<endl;
	cout<<"__________________________________________"<<endl;
	cout<<"    1.- ESCRIBIR FICHERO                           "<<endl;
	cout<<"    2.- LEER FICHERO "<<endl;
	cout<<"    3.- COPIA DE FICHERO "<<endl;
	cout<<"    4.- SALIR"<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"ELIJA UNA OPCION DEL MENU "<<endl;
	cin>>opcion;
}

void escribir(FILE*archi)
{
	char plana[100];
	archi=fopen("EJERCICIO1.txt","a");
	if(archi==NULL){
		cout<<"ERROR NO SE PUDO CREAR EL FICHERO!!!!1....";
	}
	else{
		cout<<"Escriba algo ....." <<endl;
		fflush(stdin);gets(plana);fflush(stdin);fputs(plana,archi);fputc('\n',archi);
	}
	fclose(archi);
}

void leer_fichero(FILE *a)
{
	char amigo[100];
	a=fopen("EJERCICIO1.txt","r");
	if(a==NULL){
		cout<<"Error en apertura fichero !!!";		
	}
	else{
		cout<<" PLANILLA ESCRITA "<<endl;
		fgets(amigo,25,a);
		while(!feof(a)){//verificando si estoy llegando al final del archivo feof
			cout<<amigo;
			fgets(amigo,25,a);
     	}
	}
	fclose(a);
}

void copia_fichero(FILE *a,FILE*b)
{
	char dato;
	a=fopen("EJERCICIO1.txt","r");
	b=fopen("Lsta-amgios_copia.txt","a");
	if(a==NULL|| b==NULL){
		cout<<"Error en apertura fichero !!!";		
	}
	else{
		dato=fgetc(a);
	while(dato!=EOF){
		fputc(dato,b);
		dato=fgetc(a);
		
	}
	}
	fclose(a);
	fclose(b);
}


