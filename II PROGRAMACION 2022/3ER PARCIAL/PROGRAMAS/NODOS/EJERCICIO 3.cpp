#include <iostream>
using namespace std;
//Crear un menu con apilar, desapilar
//datos de una pila de documentos organizados por codig numerico
//realizar el siguiente proceso sacar datos de la pila y guardar
//otra pila en el orden que se genere

struct nodo{
	char dato;
	nodo *sig;//puntero al siguiente
};

//Metodo para apilar
void apilar(nodo *&pila, char d)
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
	nodo *auxiliar=NULL;
	nodo *auxiliar2=NULL;
	char dato;
	int n;
	cout<<"Ingrese la cantidad datos para apilar: "; cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese el dato "<<i+1<<": ";
		cin>>dato;
		apilar(pila,dato);
	}
	//desapilar
	while(pila!=NULL)
		{
			desapilar(pila,dato);
			apilar(auxiliar,dato);
		}
	while(auxiliar!=NULL)
		{
			desapilar(auxiliar,dato);
			apilar(pila,dato);
			apilar(auxiliar2,dato);
		}
	cout<<"LA PILA ORIGINAL:"<<endl;
	while(pila!=NULL)
		{
			desapilar(pila,dato);
			if(pila!=NULL) cout<<dato<<" | ";
			else cout<<dato<<endl;
		}	
	cout<<"LA COPIA:"<<endl;
	while(auxiliar2!=NULL)
		{
			desapilar(auxiliar2,dato);
			if(auxiliar2!=NULL) cout<<dato<<" | ";
			else cout<<dato<<endl;
		}
	
}
