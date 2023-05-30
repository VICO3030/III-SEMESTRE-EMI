//ordenamiento(metodo intercamio -directo)
#include<iostream>
using namespace std;

void llenar(int *vec,int tam);
void imprimir(int *vec,int tam);
void ordenamiento(int *v,int t);

int main(){
	
	int *vec,tam;
	cout<<"tamano del vector "<<endl;
	cin>>tam;
	//asignacion dinamica del vector 
	vec=new int(tam); 
	llenar(vec,tam); 
	cout<<"VECTOR DESORDENADO"<<endl;  //un bait tiene 8bits --asignacion dinamica de la memoria
	imprimir(vec,tam); 
	cout<<"\nVECTOR ORDENADO DE MENOR -MAYOR  "<<endl;
	ordenamiento(vec,tam);
	imprimir(vec,tam);
	return 0;
	
}
//procesos basicos llenar y imprimir 
void llenar(int *vec,int tam)
{
    for(int i =0;i<tam;i++){
    cout<<"Ingrese el dato ["<<i<<"] : ";
    cin>>*(vec+i);//vec[i];    //* sepuede ver como  indireccion o como puntero
	}
}
//proceso de imprimir 
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
			if(*(v+i)>*(v+j))
			{
				aux=*(v+i);
				*(v+i)=*(v+j);
				*(v+j)=aux;	
			}
		}
	}
}

