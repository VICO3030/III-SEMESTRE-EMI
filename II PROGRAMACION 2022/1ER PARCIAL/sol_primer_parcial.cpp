#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
/*PROTOTIPO DE FUNCIONES Y PROCEDIMIENTOS*/
void cargar_datos(char estado[],int asiento[],string carnet[21]);
void mostrar_libres(char estado[],int libre[21]);
void mostrar_planilla(char estado[],string carnet[21]);
void reservar(char estado[],string carnet[10]);
int busca_carnet(string carnet[10],char ci[]);
/*PROGRAMA PRINCIPAL*/
int main()
{
int asiento[21],op;
char estado[21];
int libre[21];
string carnet[21];
system("color 1e");
cargar_datos(estado,asiento,carnet);
do{
 cout<< "--------*TRANS BOLIVIA*-----------"<<endl;
 cout<< "-----------OPCIONES---------------"<< endl;
 cout<< "1. MOSTRAR ASIENTOS LIBRES "<< endl;
 cout<< "2. RESERVAR ASIENTO "<< endl;
 cout<< "3. Salir "<< endl;
 cout<< "--------------------------------\n"<< endl;
 cin >> op;
 switch(op){
 case 1 : mostrar_libres(estado,libre);
 break;
 case 2 : reservar(estado,carnet);
 mostrar_planilla(estado,carnet);
 break;
 case 3 :break;
 }
}while(op!=4);
return 0;
}
//PROCEDIMIENTO CARGA DE DATOS AL PROGRAMA
void cargar_datos(char estado[],int asiento[],string carnet[]){
int i;
for( i=0;i<20;i++){
 asiento[i]=i+1;
 estado[i]='L';
 carnet[i]=" ";
 }
}
//PROCEDIMIENTO QUE MUESTRA ASIENTOS LIBRE
void mostrar_libres(char estado[],int libre[]){
int i;
int j=0;
cout<<"--------------------------------------------------"<<endl;
cout<<"\nLOS ASIENTOS LIBRES DEL BUS SON:\n";
cout<<"--------------------------------------------------"<<endl;
 for(i=0;i<20;i++){
 if(estado[i]=='L'){
 libre[j]=i+1;
 j++;
 }
 }
 cout<<"ASIENTO\tESTADO\tUBICACION\tCI"<<endl;
 for(int i=0;i<j;i++){
 int asientoReser=libre[i];
 cout<<asientoReser<<"\t"<<estado[asientoReser-1]<<"\t";
if (i<10 )
cout<<"Panoramico"<<endl;
else
cout<<"Bajo"<<endl;
 }
 cout << endl;
}
//PROCEDIMIENTO MOSTRAR PLANILLA
void mostrar_planilla(char estado[],string carnet[]){
cout<<"--------------------------------------------------"<<endl;
cout<<"\nLOS ASIENTOS LIBRES Y RESERVADOS DEL BUS SON:\n";
cout<<"--------------------------------------------------"<<endl;
 cout<<"ASIENTO\tESTADO\tUBICACION\tCI"<<endl;
 for(int i=0;i<20;i++){
 cout<<i+1<<"\t"<<estado[i]<<"\t";
 if (i<10 )
cout<<"Panoramico"<<"\t";
else
cout<<"Bajo"<<"\t";
cout<<carnet[i]<<endl;
 }
 cout << endl;
}
//FUNCION QUE BUSCA CARNET
int busca_carnet(string carnet[],char ci[]){
bool band=false;
int i,posi;
for(i=0;i<=20;i++){
 if(carnet[i]== ci){
 band=true;
 posi=i;
 }
}
if (band==true)
 return posi;
 else
 return -1;
}
//PROCEDIMIENTO RESERVA DE PASAJE
void reservar(char estado[],string carnet[]){
 int r,asi;
 char ci[10];
 cout << "Ingrese el CI para la reserva" << endl;
 cin>>ci;
 cout << endl;
 r=busca_carnet(carnet,ci);
 if(r == -1)
 {
 cout<<"Que numero de asiento desea ";
 cin>>asi;
 estado[asi-1]='R';
 carnet[asi-1]=ci;
 cout<<"Felicidades ya tiene reservado su boleto!!!"<<endl;
 }
 else
 {
 cout << "Error de reserva Numero de CI ya fue usado\n" << endl;
 }
}
