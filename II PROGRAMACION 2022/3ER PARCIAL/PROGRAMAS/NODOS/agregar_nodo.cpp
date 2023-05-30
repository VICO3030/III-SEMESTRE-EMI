/*LIFO (LAST IN FIRST OUT)
FIFO(FIRST I FIRST OUT)
1 Crear un espacio en memoria crear nuevo nodo
2 Poner dato al nodo
3 Verificar cola (si está vacía o no) y asignar valores a entrada y salida
*/
#include<iostream>
using namespace std;
struct nodo{
	char dato;
	nodo *sig;
	
};

//funcion que verifica si la cola esta vacia 
bool cola_vacia(nodo *&frente , nodo *&fin)
{
	if(frente == fin )return true ;
	else return false;
}

//void para agregar datos a la cola
void push(nodo *&frente , nodo *&fin, char valor)
{
	nodo *nuevo_nodo=new nodo();//paso 1 espacio
	nuevo_nodo->dato=valor; //paso 2
	nuevo_nodo->sig=NULL;
	if(cola_vacia(frente,fin))
	{   //asignar al nuevo nodo puntero frente 
		frente=nuevo_nodo;
	}
	else
	{
		nuevo_nodo->sig= frente ;
	}
	fin=nuevo_nodo;
	//asignar al nuevo nodo el puntero
	
}
void pop(nodo *&frente , nodo *&fin, char & valor)
{
	nodo *aux=frente ; //nodo auxiliar 
	valor = aux->dato;
	
	//caso de 1 solo nodo en la cola 
	if(frente==fin)
	{
		 frente =NULL;
		 fin=NULL;
	}
	else
	{
	//caso 2 mas de 1 nodo en la cola 
	frente=frente->sig;
	
	}
	delete aux;
}





int main()
{
	//cuando tenemos un nodo realimos el puntero
	nodo *frente=NULL;
	nodo *fin=NULL;
	int n;
	char valor;
	cout<<"Cuantos datos para la cola  : ";cin>>n;
	for(int i =0 ;i<n;i++)
	{
		cout<<"Dato para la cola : ";cin>>valor;
	    push(frente,fin ,valor);
	}
	while(frente !=NULL)
	{
		pop(frente, fin, valor );
		if(frente!=NULL)
		cout<<valor<<" | "<<endl;
		else
		cout<<valor<<".";
	}

	return 0;
		
}
