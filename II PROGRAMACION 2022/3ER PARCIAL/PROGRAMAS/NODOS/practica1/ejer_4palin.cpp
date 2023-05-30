//si es palindroma 
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct nodo{
	char dato;
	nodo *sig;
};
bool cola_vacia(nodo *&frente,nodo *&fin)
{
    if (frente==NULL) return true;
    else return false;
}
void push(nodo *&frente,nodo *&fin,char valor)
{
    nodo *nuevo_nodo=new nodo();
    nuevo_nodo->dato=valor; 
    nuevo_nodo->sig=NULL;
    if (cola_vacia(frente,fin)==true)
    {
        frente=nuevo_nodo;
    }
    else
    {
        fin->sig= nuevo_nodo;
    }
    fin=nuevo_nodo;

}

void pop(nodo *&frente,nodo *&fin,char &valor)
{
    nodo *aux=frente;
    valor=aux->dato;
    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }
    else{
        frente=frente->sig;
    }

    delete aux;
}

void apilar(nodo *&pila,char d)
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
	nodo *frente=NULL;
	nodo *fin=NULL;
	char dato[100],primero, final;
	int tam;
	//bandera palindroma
	bool palindroma=false;
	cout<<endl;
	cout<<endl;
	cout<<"\tINGRESE UNA PALABRA "; fflush(stdin);gets(dato); fflush(stdin);
    tam=strlen(dato);
	for (int i=0;i<tam;i++)
	{
		apilar(pila,dato[i]);
		push(frente,fin,dato[i]);
	}

	while(pila!=NULL)
	{
		desapilar(pila,primero);
		pop(frente,fin,final);
		if (primero!=final)
		{
			palindroma=false;
			break;
		}
		else 
		{
			palindroma=true;
		}
	}
	if(palindroma==false) 
	{
		cout<<"\n\t[LA PALABRA NO ES PALINDROMA ]"<<endl;
	}
	else
	{
		cout<<"\n\t[LA PALABRA ES PALINDROMA ]"<<endl;
	} 
	return 0;
}
