#include<iostream>
using namespace std;
void llenar(int*vec,int tam);
void imprimir(int *vec,int tam);
void contador(int *vec,int tam);


int main(){
	int *vec,tam;
	vec=new int(tam);
	cout<<"Ingrese el tamano del vector = ";cin>>tam;
	
	llenar(vec,tam);
	cout<<"_____VECTOR INGRESADO_______"<<endl;
	imprimir(vec,tam);
	
	contador(vec,tam);
	return 0;
}

void llenar(int*vec,int tam){
	for(int i=0;i<tam;i++)
	{
		cout<<"ingrese dato ["<<i<<"] = ";cin>>*(vec+i);
	}
}
void imprimir(int *vec,int tam){
	for(int i=0;i<tam;i++){
		cout<<*(vec+i)<<" | ";
	}
}

void contador(int *vec,int tam)
{   
    int un=0,dos=0,tres=0,cuatro=0,cinco=0;
	for(int i=0;i<tam;i++)
	{
		if(*(vec+i)>=0 && *(vec+i)<10){
			un++;
		}
		if(*(vec+i)>=10 &&  *(vec+i)<100){
			dos++;
		}
		if(*(vec+i)>=100 &&  *(vec+i)<1000){
			tres++;
		}
		if(*(vec+i)>=1000 &&  *(vec+i)<10000){
			cuatro++;
		}
		if(*(vec+i)>=10000 &&  *(vec+i)<100000){
			cinco++;
		}
	}
	cout<<"\nCantidad de numeros con un digito es : "<<un;
	cout<<"\nCantidad de numeros con dos digito es : "<<dos;
	cout<<"\nCantidad de numeros con tres digito es : "<<tres;
	cout<<"\nCantidad de numeros con cuatro digito es : "<<cuatro;
	cout<<"\nCantidad de numeros con cinco digito es : "<<cinco;
}
