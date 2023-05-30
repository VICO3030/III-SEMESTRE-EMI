#include<iostream>
using namespace std;
//prototipos de funciones de procedimientos 
void llenar_vector(int *vec,int tam);
void mostrar_vector(int *vec,int tam);

int main()
{
	int *vec;   // declaracion del vector 
	int tam; //declaracion del tamano
	
	cout<<"tamano del vector "<<endl;
	cin>>tam;
	//asignacion dinamica del vector 
	vec=new int(tam);    //un bait tiene 8bits --asignacion dinamica de la memoria
	llenar_vector(vec,tam);
	mostrar_vector(vec,tam); 
	return 0;
	
}
	//procesos basicos llenar y imprimir 
	void llenar_vector(int *vec,int tam){
		for(int i =0;i<tam;i++){
			cout<<"Ingrese el dato ["<<i<<"] : ";
			cin>>*(vec+i);//vec[i];    //* sepuede ver como  indireccion o como puntero
		}
	}
	//proceso de imprimir 
	void mostrar_vector(int *vec,int tam)
	{
		for(int i =0;i<tam;i++){
			cout<<*(vec+i)<<" | ";
	} 
}

	
	


