#include<iostream>
#include<stdio.h>//necesaria para manejo de ficheros
using namespace std;

/*DECLARACION DEL FICHERO*/
//FILE *"nombre";

/*MODOS DEL FICHERO*/
//r-> solo lectura del fichero
//w-> solo escritura
//a-> abre un fichero, escritura el final del fichero
//+-> lectura y escritura 
//t-> por defecto, tipo texto
//b-> tipo binario

/*LECTURA Y ESCRITURA DE UN FICHERO*/
// fgetc -fputc___character
// fgets - fputs___string
// fread -fwrite
// fscanf -fprintf

int main(){
	FILE *file;
	
	//apertura del fichero en modo escritura;
	file=fopen("mydata.txt","w");
	char dato;
	if(file==NULL){
		cout<<"Error en la apertura del fichero, posibilidad de inexistencia.";
	}else{
		//escribir en el fichero
		int t;
		cout<<"Numero de caracteres a ingresar : ";cin>>t;
		for(int i=0;i<t;i++){
			cout<<"Caracter ["<<i+1<<"] : ";cin>>dato;
			fputc(dato,file);
		}
		fclose(file);
		
		//leer fichero
		//apertura en modo lectura;
		file=fopen("mydata.txt","r");
		if(file==NULL){
			cout<<"Error en la lectura del fichero, posible danio.";
		}else{
			dato=fgetc(file);
			cout<<dato<<endl;
			while(dato!=EOF){
				cout<<dato<<endl;
				dato=fgetc(file);
			}
		}
		//cerrar fichero
		fclose(file);
	}
	
	return 0;
}
