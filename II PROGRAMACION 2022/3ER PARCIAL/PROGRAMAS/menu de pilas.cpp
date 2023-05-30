#include <iostream>
using namespace std;
struct nodo {
	char dato;
	nodo *sig;
};
struct nodoAux {
	char dato;
	nodoAux *sig;
};
void apilar(nodo *&pila,char d) {
	nodo *nuevo_nodo=new nodo(); // paso 1 asignar memoria
	nuevo_nodo->dato=d;// paso 2
	nuevo_nodo->sig=pila; // paso 3
	pila=nuevo_nodo;//paso4
}
void desapilar(nodo *&pila,char &d) {
	nodo *aux=pila;
	d=aux->dato;
	pila=aux->sig;
	delete aux;
}
void vaciar(nodoAux *&pila,char d) {
	nodoAux *nuevo_nodo=new nodoAux(); // paso 1 asignar memoria
	nuevo_nodo->dato=d;// paso 2
	nuevo_nodo->sig=pila; // paso 3
	pila=nuevo_nodo;//paso4
}
void menu() {
	cout<<" ----------------------------"<<endl;
	cout<<" |      MENU DE PILAS       |"<<endl;
	cout<<" | 1.- APILAR               |"<<endl;
	cout<<" | 2.- DESAPILAR            |"<<endl;
	cout<<" | 3.- VACIAR PILA          |"<<endl;
	cout<<" | 4.- SALIR                |"<<endl;
	cout<<" | Elija su opcion          |"<<endl;
	cout<<" ----------------------------"<<endl;
}
int main () {
	nodo *pila=NULL;
	nodoAux *pila2=NULL;
	char dato;
	int n;
	int op;
	do {
		menu();
		cin>>op;
		switch(op) {
			case 1:
				cout<<" Ingrese la cantidad de datos que desea almacenar"<<endl;
				cin>>n;
				for(int i = 0; i < n ; i++) {
					cout<<" dato para la pila "<<endl;
					cin>>dato;
					apilar(pila,dato);
				}
				cout<<"\n los datos fueron apilados \n";
				break;
			case 2:
				if(pila==NULL) {
					cout<<"\n no puedes utilizar la opcion 2 por que no llenaste la pila ponga la opcion 1 \n";
				} else {
					cout<<"\n los datos fueron desapilados \n";
					while(pila != NULL) {
						desapilar(pila,dato);
						if(pila!=NULL) {
							cout<<dato<<" | ";
						} else {
							cout<<dato<<" | "<<endl;
						}
					}
				}
				break;
			case 3:
				if(pila==NULL) {
					cout<<"\n no puedes utilizar la opcion 3 por que ya utilizaste la opcion 2 vuelva llenar la pila \n";

				} else {
					cout<<"\n los datos fueron vaciados enviados a una nueva pila \n";
					while(pila != NULL) {
						desapilar(pila,dato);
						if(pila!=NULL) {
							cout<<dato<<" | ";
							vaciar(pila2,dato);

						} else {
							cout<<dato<<" | "<<endl;
							vaciar(pila2,dato);
						}
					}
				}
				break;
		}
	} while(op!=4);
	cout<<"\n SALIO DEL SISTEMA !!!";
	return 0;
}