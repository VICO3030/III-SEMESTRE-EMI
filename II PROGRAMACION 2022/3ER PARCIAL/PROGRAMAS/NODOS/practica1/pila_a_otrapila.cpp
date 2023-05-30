#include<iostream>
#include "conio.h"
#include<stdlib.h>

using namespace std;
typedef struct nodo_s{
	int dato;
	struct nodo_s *siguiente;
} nodo_t;

typedef nodo_t *ptrNodo;
typedef nodo_t *ptrPila;

void push(ptrPila *pila , int x){
	ptrNodo nodo;
	nodo =(ptrNodo)malloc(sizeof(nodo_t));
	if(nodo != NULL){
		nodo->dato=x;
		nodo->siguiente = *pila;
		*pila=nodo;
		
	}
}
int pop (ptrPila *pila){
	ptrNodo nodo;
	int x=0;
	nodo = *pila;
	x=(*pila)->dato;
	*pila = (*pila)->siguiente;
	free(nodo);
	return x;
	
}
int pila_vacia(ptrPila *pila){
	return (*pila ==NULL? 1:0);
}

void clonar_pila(ptrNodo nodo1 , ptrNodo nodo2 , ptrNodo nodo3){
	if(nodo1 == NULL)
	cout<<"\tla pila esta vacia\n";
	else{
		while(nodo1 != NULL){
			push(&nodo2 ,nodo1->dato);
			nodo1= nodo1->siguiente;
			
		}
		while(nodo2 != NULL ){
			push( &nodo3, nodo2->dato);
			nodo2 = nodo2->siguiente;
		}
		while(nodo3!= NULL){
			cout<<"\tDato : "<<nodo3->dato<<endl;
			nodo3 =nodo3->siguiente;
			
		}
	}
}
int main()
{
	ptrPila pila1 =NULL , pila2 =NULL, pila3 =NULL;
	int dato,nro;
	cout<<"\tCuantos datos va ingresar a la pila ?";cin>>nro;
	for(int i=0 ;i<nro ;i++){
		cout<<"\tIngrese el dato : ";cin>>dato;
		push(&pila1,dato);
		cout<<"\tSe ingreso "<<dato<<" a la pila "<<endl;
	}
	if( !pila_vacia(&pila1)){
	clonar_pila(pila1,pila2,pila3);
	cout<<"\t[Pila clonada]";
	}

	getch();
}
