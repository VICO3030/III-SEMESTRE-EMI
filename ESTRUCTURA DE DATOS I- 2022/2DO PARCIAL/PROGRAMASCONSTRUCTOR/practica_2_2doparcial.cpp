/*VICTOR MANUEL CACERES PACO  crear un programa donde seleccione su turno de trabajo el empleado */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<locale.h>
using namespace std;

int menu();
void operaciones(int op);
// creacion de la clase
class Empleado
{	int cant;
	string *estEmpl;  // este almacena los textos: mañana,tarde,noche
	int *sueldo;
	public:
		Empleado();
		Empleado(int n);
		void llenar();
		void imprime();
		float afp(int p);
	private:
		int aleatorio(int li, int ls);
};
//PRIMER CONSTRUCTOR 1
Empleado::Empleado()
{	cant=aleatorio(3,10);
	estEmpl=new string[cant];
	sueldo=new int [cant];
}
//SEGUNDO CONSTRUCTOR 2
Empleado::Empleado(int n)
{	cant=n;
	estEmpl=new string[cant];
	sueldo=new int[cant];
}
// metodo para el aleatorio
int Empleado::aleatorio(int li, int ls)
{	return rand()%(ls+1-li)+li;
}
void Empleado::llenar()
{	string estados[3]={"Mañana","Tarde","Noche"};
	int posicion;
	for (int p=0;p<cant;p++)
	{	posicion = aleatorio(0,2);
		estEmpl[p]=estados[posicion];
		sueldo[p]=5000+rand()%(5000-100);
	}
}
void Empleado::imprime()
{	cout<<" Se tienen "<<cant<<" empleados en planilla "<<endl;
	for (int p=0;p<cant;p++)
	{	cout<<"-----------Empleado # "<<(p+1)<<"-------------"<<endl;
		cout<<"TURNO DE TRABAJO   "<<" SUELDO   "<<"   BONO  "<<endl;
		cout<<" "<<endl;
		cout<<"   [ "<<estEmpl[p]<<" ]        "<<sueldo[p]<<"      "<<afp(p)<<endl;
		cout<<"=============================================\n";
		cout<<" "<<endl;
	}
}

float Empleado::afp(int p)
{	float porc;
	if (estEmpl[p]== "Mañana") 	porc = 0.05; 
	if (estEmpl[p]== "Tarde") 	porc = 0.03; 
	if (estEmpl[p]== "Noche") 	porc = 0.04;
	 	
	return sueldo[p]*porc;
}

// procesos del MAIN
int menu()
{	int valor;
	do
	{	cout<<"=====OPCIONES DEL MENU====="<<endl;
		cout<<"1. Cantidad aleatorio de empleados \n";
		cout<<"2. Cantidad desde el teclado \n";
		cout<<"Elija una opcion  : ";
		cin>>valor;
		cout<<"========================================="<<endl;
		if (valor!=1 && valor!=2)  cout<<"Incorrecto, vuelva a elegir\n";
	}while (valor!=1 && valor!=2) ;
	return valor;
}

void operaciones(int op)
{	int cantidad;
	if (op==1)
	{	Empleado trabajador;
		trabajador.llenar();
		trabajador.imprime();
	}
	else
	{	do
		{	cout<<"Ingrese nro positivo para cantidad : ";
			cin>>cantidad;
			if(cantidad<=0)	cout<<"Error en el ingreso, vuelva a intentar\n";
		}while(cantidad<=0);
		Empleado mostrar(cantidad);
		mostrar.llenar();
		mostrar.imprime();
	}
}


int main()
{	
    setlocale(LC_ALL,"spanish");
    int opcion;
	srand(time(NULL));	
	opcion=menu();
	operaciones(opcion);
	
}

