/*realizar un programa para calcular los desceuntos en una tienda si las compras son mayor
 1000> descuento 15%
 si es menor el descuento es de  5% */
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//mi funcion
float descuento(float compra){
	float des=0;
	if(compra>=1000){
		des=compra*0.15;
	}
	else
	{
		des=compra*0.5;
	}
	return des;
}

int main(){
	float compra,desc;
	int op=1;
	do{
		cout<<"Ingrese el monto de la compra del producto : "; cin>>compra;
	    desc=descuento(compra);
	    cout<<"\nEl descuento de la compra es de : "<<desc;
	    cout<<" \n************elija una opcion***************   ";
	    cout<<"\nDesea seguir con la compra   1.- SI 2.-NO "<<endl;
	    cin>>op;
	}while(op!=1);
	return 0;
}
