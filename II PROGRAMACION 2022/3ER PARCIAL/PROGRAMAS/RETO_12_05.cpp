#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void llenar( int v[], int tam);
void imprimir(int v[],int tam);
void descuento(int v[],int v2[],int tam,int n);
float total(int v[],int tam);
int main()
{
	srand(time(NULL));
	int vec[30],tam,n,vec2[30];

		cout<<"ingrese n = ";cin>>n;
		cout<<"Ingrese la cantidad de productos = ";cin>>tam;

	    if(tam>n){
	    llenar(vec,tam);
	    imprimir(vec,tam);
	    }
	    else{
	    	cout<<"La cantidad no es valida intetelo de nuevo!!"<<endl;
		}
		cout<<"El total es= "<<total(vec,tam)<<endl;
//	descuento(vec,vec2,tam,n);
	imprimir(vec2,tam);

	return 0;
	
}


void llenar( int v[], int tam)
{
	for(int i=0;i<tam ;i++)
	{
		v[i]=500+rand()%(500-1000);
	}
}

void imprimir(int v[], int tam)
{
	for(int i=0;i <tam; i++)
	{
		cout<<"Precio del producto es = "<<v[i]<<endl;
	}
}
float total(int v[],int tam){
	float total=0;
	for(int i =0 ;i<tam ;i++)
	{
		total=total+v[i];
	}
	return total;
}

void descuento(int v[],int v2[],int tam,int n)
{
	int j=0;
	for(int i=0 ;i<tam ; i++){
		if (i+1 <= n )
		{
			v2[j]=v[i]*0.20;
			v[i]=v[i]-v2[j];
		}
		else{
			if(i+1<=n*2)
			{
				v2[j]=v[i]*0.1;
				v[i]=v[i]-v2[j];
			}
			else{
				if( i+1 =n*3)
				{
				v2[j]=v[i]*0.05;
				v[i]=v[i]-v2[j];
				}
			}
		}
		j++;

	}
}

