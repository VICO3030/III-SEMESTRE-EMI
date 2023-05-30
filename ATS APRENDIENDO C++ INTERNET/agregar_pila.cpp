//insertar elementos a la pila
#include<iostream>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, char );//prototipo
void sacaPila(Nodo *&pila, char &Dato);
int main(){
	Nodo *pila = NULL;
	char dato;
	
	for(int i=0 ;i<5 ; i++){
		cout<<"Digite un Dato  : ";cin>>dato;
		agregarPila(pila,dato);
	}
	while(pila !=NULL){
		sacaPila(pila,dato);
		if(pila !=NULL){
			cout<<dato<<" | ";
		}
		else{
			cout<<dato<<".";
		}
	}
	return 0;
}

void agregarPila(Nodo *&pila,char Dato ){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=Dato;
	nuevo_nodo->siguiente = pila;
	pila=nuevo_nodo;
	cout<<"Se agrego "<<Dato <<"a la pila :"<<endl;
	
};
void sacaPila(Nodo *&pila, char &Dato){
	Nodo *aux =pila;
	Dato=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
