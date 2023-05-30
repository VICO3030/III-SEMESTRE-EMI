/* ejer 2 Crear una estructura pila para que represente una pila de documentos 
almacenados en una oficina legal, se debe atender los documentos de la forma 
LIFO, se lee como entrada nombre del documento.*/
#include<iostream>
#include<string.h>
using namespace std;
struct Nodo{
	string nombre;
	Nodo *siguiente;
};
//prototipo
void agregarPila(Nodo *&, string);
void sacaPila(Nodo *&pila, string &);
int main(){
	Nodo *pila = NULL;
	string nom;
	int nro;
	cout<<"Cuantos documentos deseara guardar ? " ;cin>>nro;
	for(int i=0 ;i<nro ; i++){
		cout<<"Ingrese el nombre del documento : ";cin>>nom;
		agregarPila(pila,nom);
	}
	cout<<"\tSe atiende los documentos en el Orden "<<endl;
	while(pila !=NULL){
		sacaPila(pila,nom);
		if(pila !=NULL){
			cout<<nom<<" | ";
		}
		else{
			cout<<nom<<" | ";
		}
	}
	return 0;
}

void agregarPila(Nodo *&pila,string Nombre ){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->nombre=Nombre;
	nuevo_nodo->siguiente = pila;
	pila=nuevo_nodo;
	cout<<"Se agrego ["<<Nombre <<"]a la pila :"<<endl;
	
};
void sacaPila(Nodo *&pila, string &Nombre){
	Nodo *aux =pila;
	Nombre=aux->nombre;
	pila=aux->siguiente;
	delete aux;
}
