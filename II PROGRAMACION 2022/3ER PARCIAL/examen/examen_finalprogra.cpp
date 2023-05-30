#include<iostream>
#include <stdio.h>
#include <string.h>
#include<locale.h>
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

//PROCEDIMIENTO PARA AGREGAR DATOS A LA COLA
void push(nodo *&frente,nodo *&fin,char valor)
{
    nodo *nuevo_nodo=new nodo();
    nuevo_nodo->dato=valor;
    nuevo_nodo->sig=NULL;
    if (cola_vacia(frente,fin)==true) 
    {
        frente=nuevo_nodo	;
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
        frente=
		frente->sig;
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

void Menu()
{
	cout<<"\n\t\t__________________________________________________"<<endl;
	cout<<"\t\t		MENU DE OPCIONES "<<endl;
	cout<<"\t\t==========================================="<<endl;
	cout<<"\t\t1.- PALINDROMO "<<endl;
	cout<<"\t\t2.- BORRR DATO DE LA PILA "<<endl;
	cout<<"\t\t3.- SALIR"<<endl;
	cout<<"\t\t==========================================="<<endl;
	cout<<"\t\tELIJA UNA OPCION ....."<<endl;
	
}


int main(){
	setlocale(LC_ALL, "spanish");
	int op;
	//para la opcion 1 
	nodo *pila=NULL;
	nodo *frente=NULL;
	nodo *fin=NULL;
	char dato[100];
	char principio,final;
	bool palindromo=false;
	
	//para la opcion 2 
	nodo *auxiliar=NULL;
	char d;
	int n,c=1,pos;
	
	do{
		Menu();
		cout<<"\t\t";cin>>op;
		switch(op){
			case 1:
					cout<<"\t\t--------------------------------------------------------------------"<<endl;
					cout<<"\t\tIngrese la palabra->\t"; fflush(stdin); gets(dato); fflush(stdin);n=strlen(dato);
					for (int i=0;i<n;i++)
					{
						apilar(pila,dato[i]);
						push(frente,fin,dato[i]);
					}

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
					if(palindromo==false) cout<<"\n\t\t  ==>     [ LA PALABRA NO ES PALINDROMO ]"<<endl;
					else cout<<"\n\t\t ==>    [LA PALABRA ES PALINDROMO ]"<<endl;
					break;
			case 2:
						cout<<"\t\tIngrese la cantidad datos para la PILA : "; cin>>n;
						for (int i=0;i<n;i++)
						{
						cout<<"\n\t\tIngrese el dato "<<i+1<<": ";
						cin>>d;
						apilar(pila,d);
						cout<<"\t\tEl dato [ "<<d<<" ]Se añadio a la pila correctamente "<<endl;
						}
						cout<<"\t\tResultado"<<endl;

	
						while(pila!=NULL)
						{
						desapilar(pila,d);
						if(pila!=NULL)
						{cout<<"\t\t"<<d<<endl;
						cout<<"\t\t_"<<endl;
						 } 
						else {
						cout<<"\t\t"<<d<<endl;
						cout<<"\t\t_"<<endl;
						}
						apilar(auxiliar,d);
						}	
						while(auxiliar!=NULL)
						{
						desapilar(auxiliar,d);
						apilar(pila,d);
						}
						cout<<"\t\tIngrese la posicion de dato que desea eliminar: "; cin>>pos;
	
						while(pila!=NULL)
						{
						desapilar(pila,d);
						if (c!=pos) apilar(auxiliar,d);
						c++;
						}
						while(auxiliar!=NULL)
						{
						desapilar(auxiliar,d);
						apilar(pila,d);
						}
						cout<<"\t\tEL RESULTADO ES:"<<endl;
						while(pila!=NULL)
						{
								desapilar(pila,d);
							if(pila!=NULL) 
							{	cout<<"\t\t"<<d<<endl;
								cout<<"\t\t_"<<endl;
							}
							else
							{
							cout<<"\t\t"<<d<<endl;
							cout<<"\t\t_"<<endl;
							}
						}
			break;
			case 3:
				cout<<"\t\tSALIENDO DEL PROGRAMA ....!!!!"<<endl;
			break;
		}
	}while(op!=3);
	return 0;
}
