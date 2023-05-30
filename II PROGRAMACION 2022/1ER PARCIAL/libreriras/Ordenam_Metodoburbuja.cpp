//metodo burbuja
#include<iostream>
#include<conio.h>
using namespace std;
class Burbuja{
	int tam;
	float num[30];
	int a,b,aux;
	public: 
	       void llenar();
	       void imprimir();
	       void ordenar();
};
//implementacion de los metodos
void Burbuja::llenar(){
	int i=0;
	cout<<"ingrese el tamano del vector :  ";
    cin>>tam;
    for(i=0;i<tam;i++){
	      cout<<"ingrese un numero  =  ";
	      cin>>num[i];
    }
    cout<<"el arreglo ingresado es : "<<num[i]<<endl;
}
int main(){
	Burbuja mostrar;
	mostrar.llenar();
	//mostrar.imprimir;
	return 0;
}
