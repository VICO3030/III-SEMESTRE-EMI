#include<iostream>
#include<stdlib.h>

using namespace std;
void imprimir(int *vec,int tam);
void llenar(int *vec,int tam);
void mayor_menor(int *vec,int tam);
void intercambio(int *v, int tam);
int main(){
	int *vec;
	int tam=10;
	vec=new int(tam);
	llenar(vec,tam);
	cout<<"LLENADO DE LOS VECTORES "<<endl;
	imprimir(vec,tam);
    mayor_menor(vec,tam);
    cout<<"----------------------------"<<endl;
    cout<<"VECTOR INTERCAMBIADO DE VALORES "<<endl;
    intercambio(vec,tam);
    imprimir(vec,tam);
    return 0;
}
 
 
void llenar(int *vec,int tam){
	for(int i=0;i<tam;i++){
		*(vec+i)=1+rand()%(100-1);
	}
}

void imprimir(int *vec,int tam){
	for(int i=0;i<tam;i++){
		cout<<*(vec+i)<<" | ";
	}
}

void mayor_menor(int *vec,int tam){
	float menor=*(vec+0),mayor=*(vec+0);
	for(int i=0;i<tam;i++){
		if(menor>*(vec+i)){
			menor=*(vec+i);
		}
		if(mayor<*(vec+i)){
			mayor=*(vec+i);
		}
	}
	cout<<"\nEL MENOR DEL ARREGLO ES = "<<menor<<endl;
	cout<<"EL MAYOR DEL ARRELGO ES = "<<mayor<<endl;
}

void intercambio(int *v, int tam){
	int aux;
	for(int i=0;i<tam;i++){
		for(int j=i+1;j<tam;j++){
			aux=*(v+i);
			*(v+i)=*(v+j);
			*(v+j)=aux;
		}
	}
}

