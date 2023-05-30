#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void llenado(int *ventas,int tam);


int main(){
	int *ventas,tam=7;
	ventas=new int(tam);
	cout<<"---------VENTAS-----------------"<<endl;
	llenado(ventas,tam);
	return 0;
}

void llenado(int *ventas,int tam){
	string *vec= {'lunes','martes', 'miercoles','jueves' ,'viernes','sabado','domingo'};
	for(int i=0;i<tam;i++){
		cout<<"Ingrese el numero de ventas del dia "<<*(vec+i)<<endl;
		cin>>*(vec+i);
		cout<<*(vec+i)<<" | "<<endl;
	}
}
