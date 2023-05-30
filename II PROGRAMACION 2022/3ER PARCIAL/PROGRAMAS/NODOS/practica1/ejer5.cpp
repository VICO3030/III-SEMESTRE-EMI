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
void apilar(nodo *&pila,char d)
{
	nodo *nuevo_nodo= new nodo(); 
	nuevo_nodo->dato=d; 
	nuevo_nodo->sig=pila; 
	pila=nuevo_nodo; 
	
}


//Metodo para desapilar
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
	nodo *auxiliar=NULL;
	char dato;
	int n,c=1,pos;
	cout<<"Ingrese la cantidad datos para la PILA : "; cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese el dato "<<i+1<<": ";
		cin>>dato;
		apilar(pila,dato);
	}
	cout<<"Resultado:"<<endl;
	while(pila!=NULL)
	{
		desapilar(pila,dato);
		if(pila!=NULL)
		{cout<<"\t"<<dato<<endl;
		cout<<"\t_"<<endl;
		 } 
		else {
		cout<<"\t"<<dato<<endl;
		cout<<"\t_"<<endl;
		}
		
		apilar(auxiliar,dato);
	}
	while(auxiliar!=NULL)
	{
		desapilar(auxiliar,dato);
		apilar(pila,dato);
	}
	cout<<"Ingrese la posicion de dato que desea eliminar: "; cin>>pos;
	
	while(pila!=NULL)
	{
		desapilar(pila,dato);
		if (c!=pos) apilar(auxiliar,dato);
		c++;
	}
	while(auxiliar!=NULL)
	{
		desapilar(auxiliar,dato);
		apilar(pila,dato);
	}
	
	cout<<"EL RESULTADO ES:"<<endl;
	while(pila!=NULL)
	{
		desapilar(pila,dato);
		if(pila!=NULL) 
		{cout<<"\t"<<dato<<endl;
		cout<<"\t_"<<endl;
		}
		else
		{
		cout<<"\t"<<dato<<endl;
		cout<<"\t_"<<endl;
		}
		
		
	}
	return 0;
}


