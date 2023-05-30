#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
 //Prototipo de funciones y procedimientos 
 void cargar_datos(char estado[],int asiento[],string carnet[21],int libre[]);
 void mostrar_libres(char estado[],int libre[21]);
 void mostrar_planilla(char estado[],string carnet[21]);
 void reservar(char estado[],string carnet[10]);
 int busca_carnet(string carnet[10],char ci[]);
 
 //PROGRAMA PRINCIPAL
 int main(){
 	int asiento[21],op;
 	char estado[21];
 	int libre[21];
 	string carnet[21];
 	cargar_datos(estado,asiento,carnet,libre);
 	do{
 		cout<<"-----------*TRANZ VELOZ*--------------"<<endl;
 		cout<<"------------OPCIONES-------------------"<<endl;
 		cout<<"1.-MOSTRAR ASIENTOS LIBRES             "<<endl;
 		cout<<"2.-RESERVAR ASIETO                     "<<endl;
 		cout<<"3.-SALIR"<<endl;
 		cout<<"------------------------------------------\n"<<endl;
 		cin>>op;
 		switch(op){
 			case 1 : mostrar_libres(estado,libre);
 			       break;
 			case 2 :mostrar_planilla(estado,carnet);
 			        reservar(estado,carnet);
 			        break;
 			case 3: break;
		 }
	 }while(op!=3);
	 return 0;
 }
 void cargar_datos(char estado[],int asiento[],string carnet[21],int libre[]){
 	for (int i=0;i<20;i++){
 		libre[i]=i+1;		
		asiento[i]=i+1;
 		estado[i]='L';
 		carnet[i]=" ";
	 }
}
 void mostrar_libres(char estado[],int libre[21]){
 	int i=0;
 	cout<<"LISTA DE  ASISTENTES LIBRES :\n";
 	cout<<"[ESTADO]-[UBICACION]-"<<endl;
 	for(i=0;i<20;i++){
 		if(estado[i]=='L'){
 			
 			cout<<libre[i]<<" ";
 			if(libre[i]>=10){
 				cout<<"BAJO";
			 }
			 else cout<<"PANORAMICO";
			 cout<<endl;
		 }
	 }
 }
 
 void mostrar_planilla(char estado[],string carnet[21]){
 	int i=0;
 	cout<<" ********INGRESE NRO DE ASIENTO QUE DESEA RESERVAR***********"<<endl;
 	cout<<endl;
 	cout<<"[ESTADO]-[UBICACION]-----"<<endl;
 	for(i=0;i<20;i++){	
 		cout<<i+1<<" "<<estado[i]<<" ";
 		if(i+1>=10){
 			cout<<"BAJO";
 		}
 		else cout<<"PANAROMICO";
 		cout<<" "<<carnet[i]<<" ";
 		cout<<endl;
	 }
 }
 void reservar(char estado[],string carnet[10]){
 	int n;
 	char ci[30];
 	cout<<"Coloque el asiento que desea reservar  :  ";
 	cin>>n;
 	cout<<"Coloque su numero de carnet  : ";
 	cin>>ci;
 	carnet[n-1]=ci;
    estado[n-1]='R';
 	
 }
