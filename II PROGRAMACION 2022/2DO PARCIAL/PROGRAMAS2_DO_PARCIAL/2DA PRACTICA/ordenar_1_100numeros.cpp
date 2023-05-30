//ordenamiento(metodo intercamio -directo)
#include<iostream>
using namespace std;

void llenar(int *vec,int t,int n);
void imprimir(int *vec,int tam);
void ordenamiento(int *v,int t);

int main(){
	
	int *vec;
	int t=100;
	int num=1;
	vec=new int(t);
	cout<<"Numeros de 1-100"<<endl;
	llenar(vec,t,num); 
	imprimir(vec,t);
	cout<<"\nOrdenamiento descendente"<<endl;
	ordenamiento(vec,t);
	imprimir(vec,t);

	return 0;
	
}
//procesos basicos llenar y imprimir 
void llenar(int v[],int t,int n)
{
    for(int i=1;i<t;i++){ 
    *(v+i)=n;
    n++;
	}
}

void imprimir(int *vec,int tam)
{
	for(int i =0;i<tam;i++){
	cout<<*(vec+i)<<" | ";
	} 
}

void ordenamiento(int *v, int t)
{
	int i,j,aux;
	for(i=0;i<t;i++){
		for(j=i+1;j<t;j++)
		{
			if(*(v+i)<*(v+j))
			{
				aux=*(v+i);
				*(v+i)=*(v+j);
				*(v+j)=aux;	
			}
		}
	}
}

