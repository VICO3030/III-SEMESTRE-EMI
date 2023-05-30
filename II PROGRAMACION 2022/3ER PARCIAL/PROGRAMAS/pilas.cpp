
/*pilas y nodos  un nodo es una struct
 -- > pasos para declarar a una pila 
1.- crear un espacio en memoria
2.- poner dato al nodo
3.- cargar al puntero  pila del nodo siguiente
4.-asignar al nuevo nodo a la pila
siempre vamos a estar desafilar y afilar*/

#include<iostream>

using namespace std;


struct nodo{
	char dato;
	nodo *sig;
	
};

void apilar  (nodo  *&pila ,char d ){
	nodo *nuevo_nodo=new nodo(); //paso1 asignar memoria 
	nuevo_nodo->dato=d; //paso 2poner dato al nodo
	nuevo_nodo->sig=NULL; //Paso 3
    pila = nuevo_nodo; //paso 4 asignar 
    /*proceso se usa siempre */
}
/*1.- crear un auxiliar 
2.-*/
void desapilar (nodo *&pila , char &d  ){
	nodo *aux=pila ; //paso 1
	d=aux->dato ;//paso 2
	pila=aux->sig; //paso  3 
	delete aux; //eleminar al auxiliar 

}


int main () 
{
	nodo *pila=NULL;
	char d;
	cout<<"Dato para la pila    : ";cin>>d;
	apilar(pila,d);
	cout<<"Dato para la pila    : ";cin>>d;
	apilar(pila,d);
	while ( pila!=NULL){
			desapilar(pila,d); 
			if(pila!=NULL)
			cout<<d<<" | ";
			else
			cout<<d<<" | ";
	}
	return 0;
}

