	//programa para la creacion de un fichero con la lista de amigos


#include <iostream>
#include<stdio.h>
#include<locale.h>
//prototipo de funciones y procedimientos 

void menu(int &opcion);
void escribir_fichero(FILE*a);
void leer_fichero(FILE *a);
void copia_fichero(FILE *a,FILE*b);

//programa princcipal


using namespace std;
int main(){
	
	FILE *archi,*copia;
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
		        case 3:copia_fichero(archi,copia);break;
			    case 4: break;
		}
	
	}while(op!=4);

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
	cout<<"    3.- COPIA DE FICHERO "<<endl;
	cout<<"    4.- SALIR"<<endl;
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




// procedimiento para copiar fichero ;
void copia_fichero(FILE *a,FILE*b)
{
	char dato;
	a=fopen("lista_amigos.txt","r");
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


