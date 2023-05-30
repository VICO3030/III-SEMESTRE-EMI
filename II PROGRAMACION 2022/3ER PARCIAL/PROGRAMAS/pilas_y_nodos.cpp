#include<iostream>
using namespace std;
struct nodo{
	char dato;
	nodo *sig;
};
void apilar(nodo *&pila,char d){
	nodo *nuevo_nodo=new nodo();//paso 1
	nuevo_nodo-> dato=d;//paso 2
	nuevo_nodo-> sig=pila;//paso 3
	pila = nuevo_nodo;//paso 4
}
void desapilar(nodo *&pila,char &d){
	nodo *aux=pila;//paso1
	d=aux->dato;//paso2
	pila=aux->sig;//paso3
	delete aux;
	}
//PROGRAMA PRINCIPAL
int main()
{
	nodo *pila= NULL;
	char dato;
	cout<<" dato para la pila ; ";cin>>dato;
	apilar(pila,dato);
	cout<<" dato para la pila  : ";	cin>>dato;
	apilar(pila,dato);
	while (pila!=NULL){
		desapilar(pila,dato);
	if(pila!=NULL)
	cout<<dato<<"|";
	else
	cout<<dato<<"|";
	}
	return 0;
}


