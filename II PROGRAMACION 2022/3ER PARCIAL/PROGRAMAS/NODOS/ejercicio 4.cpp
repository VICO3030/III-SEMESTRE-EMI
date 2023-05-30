#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


struct nodo{
	char dato;
	nodo *sig;//puntero al siguiente
};

//FUNCION QUE VERIFICA SI LA COLA ESTA VACIA
bool cola_vacia(nodo *&frente,nodo *&fin)
{
    if (frente==NULL) return true;
    else return false;
}

//PROCEDIMIENTO PARA AGREGAR DATOS A LA COLA
void push(nodo *&frente,nodo *&fin,char valor)
{
    nodo *nuevo_nodo=new nodo();//PASO1 CREAR UN ESPACIO
    nuevo_nodo->dato=valor; //PASO 2 PONER DATO AL NODO
    nuevo_nodo->sig=NULL;
    if (cola_vacia(frente,fin)==true) //PASO 3
    {
        frente=nuevo_nodo;//aASIGNAR AL NUEVO NODO PUNTERO FRENTE
    }
    else
    {
        fin->sig= nuevo_nodo;//CUANDO LA PILA NO ESTA VACIA
    }
    fin=nuevo_nodo;//ASIGNAR AL NUEVO NODO PUNTERO FIN

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

//Metodo para apilar
void apilar(nodo *&pila,char d)
{
	nodo *nuevo_nodo= new nodo(); //Paso 1 aignar un espacio de memoria 
	nuevo_nodo->dato=d; //Paso 2 poner dato al nodo
	nuevo_nodo->sig=pila;//Paso 3 
	pila=nuevo_nodo; //Paso 4 aignar el nuevo nodo a la pila
	
}


//Metodo para desapilar
void desapilar(nodo *&pila, char &d)
{	
	nodo *aux=pila;//Paso 1 que el nodo apunte a la cima;
	d=aux->dato; //Paso 2 resguardamos el dato en la variable d
	pila=aux->sig; //Paso 3
	delete aux;	
	
}

int main()
{
	nodo *pila=NULL;
	nodo *frente=NULL;
	nodo *fin=NULL;
	char dato[100];
	char principio,final;
	int n;
	bool palindromo=false;
	cout<<"Ingrese la palabra: "; 
	fflush(stdin);
    gets(dato);
    fflush(stdin);
    n=strlen(dato);
	for (int i=0;i<n;i++)
	{
		apilar(pila,dato[i]);
		push(frente,fin,dato[i]);
	}
	//desapilar
	while(pila!=NULL)
	{
		desapilar(pila,principio);
		pop(frente,fin,final);
		if (principio!=final)
		{
			palindromo=false;
			break;
		}
		else 
		{
			palindromo=true;
		}
	}
	if(palindromo==false) cout<<"LA PALABRA NO ES PALINDROMO"<<endl;
	else cout<<"LA PALABRA ES PALINDROMO"<<endl;
	return 0;
}
