#include<iostream>
#include<time.h>
using namespace std;
void llenar(int *vec,int tam);
void imprimir(int *vec,int tam);
float Promedio;
void Condiciones(int *vec,int tam);
int main(){
	int*vec;
	int tam=10;
	vec=new int(tam);
	cout<<"***LLENE 10 DATOS PARA EL VECTOR ** "<<endl;
	llenar(vec,tam);
	
	cout<<"----------LOS VECTORES SON ---------"<<endl;
	imprimir(vec,tam);
	cout<<"EL PROMEDIO = "<<Promedio<<endl;
    Condiciones(vec,tam);
	return 0; 
}


void llenar(int *vec,int tam){
	float Sump=0;
	for(int i=0;i<tam;i++){
		cout<<"Ingrese el dato ["<<i<<"]  =";
		cin>>*(vec+i);
		Sump=Sump+*(vec+i);
		Promedio=Sump/10;
	}
}
void imprimir(int *vec,int tam){
	for(int i=0;i<tam;i++){
		cout<<*(vec+i)<<" | ";
	}
}
void Condiciones(int *vec,int tam){
	int may=0,men=0,ig=0;
	for(int i=0;i<tam;i++){
		if(*(vec+i)>Promedio){
		   may=may+1;
		}
		if(*(vec+i)<Promedio){
			men=men+1;
		}
		if(*(vec+i)==Promedio){
			ig=ig+1;
		}
	}
	cout<<"Cantidad de numeros mayores al promedio es = "<<may<<endl;
	cout<<"Cantidad de menores al Promedio ="<<men<<endl;
	cout<<"Cantidad iguales al Promedio ="<<ig<<endl;
}

		


