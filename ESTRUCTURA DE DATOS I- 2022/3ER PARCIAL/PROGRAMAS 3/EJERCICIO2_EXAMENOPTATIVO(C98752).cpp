//TAREA 8_SOBRECARGA DE CONSTRUCTORES
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int menu();
void operaciones(int op);
class Persona
{	
    int cant;
    int *edad;
	float *peso;  
	float *altura;
	public:
		Persona();
		Persona(int n);
		void llenar();
		void imprime();
	private: 
	   
		void llenarTotal();	
		int aleatorio(int li, int ls);
};

Persona::Persona(int n)
{	cant = n;
    edad = new int [n];
	peso=new float[n];
	altura=new float[n];

}
int Persona::aleatorio(int li, int ls)
{
   return rand()%(ls+1-li)+li;
}
void Persona::llenar()
{	
	int posicion;
	for (int p=0;p<edad;p++)
	{	posicion = aleatorio(0,3);
		//dieta[p]=estados[posicion];
		altura[p]=aleatorio(1.30,2.00)+ aleatorio(1,99)/100.0;
	}
}
void Persona::imprime()
{	cout<<" El total de personas son: "<<cant<<endl;
	llenarTotal();
	for (int p=0;p<cant;p++)
	{
	    cout<<"----------------------------------------------"<<endl;
	    cout<<"  Person Numero: "<<(p+1)<<endl;
		cout<<"  Edad: "<<edad<<endl;
		cout<<"  Altura: "<<altura<<endl;
		cout<<"  Peso: "<<altura<<endl;

		cout<<"----------------------------------------------\n";
	}
}
/*class Mujer :Persona(){
	
	
}*/
int main()
{	int opcion;
	srand(time(NULL));	
	opcion=menu();
	operaciones(opcion);
}

void operaciones(int op)
{	
	
        do
		{	
		    cout<<"Ingrese un numero: ";
			cin>>cantidad;
			if(cantidad<=0);
		}
		while(cantidad<=0);
		Persona employee(cantidad);
		employee.llenar();
		employee.imprime();	
	
}
