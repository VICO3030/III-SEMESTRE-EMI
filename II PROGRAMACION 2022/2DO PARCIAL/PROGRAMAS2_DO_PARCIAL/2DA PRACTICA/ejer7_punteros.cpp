//ejercicio 7 buscar que numero se repite
#include<iostream>
using namespace std;
//prototipos de funciones de procedimientos 
void llenar_vector(int *vec,int tam);
void mostrar_vector(int *vec,int tam);
void repetido(int *vec,int tam,int rep);
int main()
{
	int *vec;   // declaracion del vector 
	int tam; //declaracion del tamano
	int rep;
	cout<<"tamano del vector "<<endl;
	cin>>tam;
	//asignacion dinamica del vector 
	vec=new int(tam);   
	llenar_vector(vec,tam);
	mostrar_vector(vec,tam); 
	repetido(vec,tam,rep);
	
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
void repetido(int *vec,int tam,int rep){
	for(int i=0;i<tam;i++){
		if(rep==*(vec+i))
		{
			cout<<"\nEL NUMERO SE REPITE EN LA POSICION ["<<i<<"]"<<endl;
		}
		else{
			cout<<"\nNO HAY NINGUN NUMERO QUE SE REPITE "<<endl;
		}
	}
}
