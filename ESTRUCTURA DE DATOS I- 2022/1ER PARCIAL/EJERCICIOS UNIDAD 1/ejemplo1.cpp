//pedir el carnet, la edad y el peso
#include <iostream>
using namespace std;
// seccion para declarar variables globales
int ci,edad;
float peso;
void entrada()
{	cout<<"Ingrese su carnet : ";
	cin>>ci;
	cout<<"Ingrese su edad : ";
	cin>>edad;
	cout<<"Ingrese su peso : ";
	cin>>peso;
	system("pause"); // parar la ejecucion hasta pulsar una tecla
}
void salida()
{	system("cls"); // limpiar la pantalla
	cout<<"Reporte de datos ingresados : "<<endl;
	cout<<"================================="<<endl;
	cout<<"Su carnet es : "<<ci<<endl;
	cout<<"Su edad es : "<<edad<<endl;
	cout<<"Su peso es : "<<peso;
}
int main()
{
	entrada(); 
	salida();
	return 0;
}
