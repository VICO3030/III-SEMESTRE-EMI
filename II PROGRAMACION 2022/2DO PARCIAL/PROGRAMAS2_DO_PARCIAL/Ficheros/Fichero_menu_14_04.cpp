//programa para la creacion de un fichero con la lista de amigos
#include <iostream>
#include<stdio.h>
#include<locale.h>
//prototipo de funciones y procedimientos 

void menu(int &opcion);
void escribir_fichero(FILE*a);
void leer_fichero(FILE *a);


//programa princcipal


using namespace std;
int main(){
	
	FILE* archi;
	int op=0;
	setlocale(LC_ALL,"spanish");
	do{
		menu(op);
		switch(op){
				case 1: 
				system("cls");
				escribir_fichero(archi);break;
	          	case 2:  
	          	system("cls");
				leer_fichero(archi);break;
		        case 3: break;
		}
	
	}while(op!=3);

	return  0;
}
//procdeimiento menu
void menu(int &opcion)
{
	cout<<"__________________________________________"<<endl;
	cout<<"             MENU DE OPCIONES                          "<<endl;
	cout<<"__________________________________________"<<endl;
	cout<<"    1.- ESCRIBIR FICHERO                           "<<endl;
	cout<<"    2.- LEER FICHERO "<<endl;
	cout<<"    3.- SALIR"<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"ELIJA UNA OPCION DEL MENU "<<endl;
	cin>>opcion;
}
//Procedimiento de creacion y escritura en fichero
void escribir_fichero(FILE*a)
{
	char amigo[100];
	a=fopen("lista_amigos.txt","a");
	if(a==NULL){
		cout<<"Error en apertura fichero !!!";		
	}
	else{
		cout<<"Ingrese su dato(NOMBRE - TELEFONO) : "<<endl;
		cout<<"______________________________________________________________________"<<endl;
		cout<<" : ";
		fflush(stdin);
		gets(amigo);
		fflush(stdin);
		fputs(amigo,a);
		fputc('\n',a);
		
	}
	fclose(a);
}
//lectura de datos del fichero
void leer_fichero(FILE *a)
{
	char amigo[100];
	a=fopen("lista_amigos.txt","r");
	if(a==NULL){
		cout<<"Error en apertura fichero !!!";		
	}
	else{
		cout<<"LISTA DE AMIGOS "<<endl;
		fgets(amigo,25,a);
		while(!feof(a)){//verificando si estoy llegando al final del archivo feof
			cout<<amigo;
			fgets(amigo,25,a);
     	}
	}
	fclose(a);
}

