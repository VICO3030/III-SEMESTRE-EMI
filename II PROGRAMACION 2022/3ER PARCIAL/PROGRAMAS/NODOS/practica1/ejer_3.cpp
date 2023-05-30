//clonar una pila
#include<iostream>
using namespace std;

struct nodo{
	char dato;
	nodo *sig;
};

void apilar(nodo *&pila, char d)
{
	nodo *nuevo_nodo= new nodo(); 
	nuevo_nodo->dato=d; 
	nuevo_nodo->sig=pila;
	pila=nuevo_nodo; 
	
}

void desapilar(nodo *&pila, char &d)
{	
	nodo *aux=pila;
	d=aux->dato; 
	pila=aux->sig; 
	delete aux;	
	
}

int main()
{
	nodo *pila=NULL;
	nodo *aux=NULL;
	nodo *aux2=NULL;
	char dato;
	int n;
	cout<<"cuantos datos va ingresar ? : "; cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese el dato "<<i+1<<": ";
		cin>>dato;
		apilar(pila,dato);
	}
	while(pila!=NULL)
		{
			desapilar(pila,dato);
			apilar(aux,dato);
		}
	while(aux!=NULL)
		{
			desapilar(aux,dato);
			apilar(pila,dato);
			apilar(aux2,dato);
		}
	cout<<"\tLA PILA CREADA ES : "<<endl;
	while(pila!=NULL)
		{
			desapilar(pila,dato);
			if(pila!=NULL) 
			{
			cout<<"\t"<<dato<<endl;
			cout<<"\t_"<<endl;
			}
			else{
			cout<<"\t"<<dato<<endl;
			cout<<"\t_"<<endl;
			}
		}	
	cout<<"\tPILA CLONADA "<<endl;
	while(aux2!=NULL)
		{
			desapilar(aux2,dato);
			if(aux2!=NULL) 
			{cout<<"\t"<<dato<<endl;
			cout<<"\t_"<<endl;
			}
			else {
			cout<<"\t"<<dato<<endl;
			cout<<"\t_"<<endl;	
			}

		}
	
}
