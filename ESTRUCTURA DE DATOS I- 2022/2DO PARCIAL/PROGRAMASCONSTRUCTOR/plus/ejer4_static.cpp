/*Modo static probelma 4 de ejercicios */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

using namespace std;


int menu();
void operaciones(int op);
// creacion de la clase
class Empleado
{	/*int cant;
	string *estEmpl;  
	int *sueldo;*/
	public:
		static int aleatorio(int li, int ls);
		static void llenar(string *estEmpl,int *sueldo);
		static void imprime(int cant,string *estEmpl,int *sueldo,int p);
		static float afp(string *estEmpl,int *sueldo, int p);
		
};
static int aleatorio(int li, int ls)
{	return rand()%(ls+1-li)+li;
}
static void llenar(int cant,string *estEmpl,int *sueldo)
{	string estados[3]={"Mañana","Tarde","Noche"};
	int posicion;
	for (int p=0;p<cant;p++)
	{	posicion = aleatorio(0,2);
		estEmpl[p]=estados[posicion];
		sueldo[p]=5000+rand()%(5000-100);
	}
}

static float afp(string *estEmpl,int *sueldo, int p)
{	float porc;
	if (estEmpl[p]== "Mañana") 	porc = 0.05; 
	if (estEmpl[p]== "Tarde") 	porc = 0.03; 
	if (estEmpl[p]== "Noche") 	porc = 0.04;
	 	
	return sueldo[p]*porc;
}

static void imprime(int cant,string *estEmpl,int *sueldo,int p)
{	cout<<" Se tienen "<<cant<<" empleados en planilla "<<endl;
	for (int p=0;p<cant;p++)
	{	cout<<"-----------Empleado # "<<(p+1)<<"-------------"<<endl;
		cout<<"TURNO DE TRABAJO   "<<" SUELDO   "<<"   BONO  "<<endl;
		cout<<" "<<endl;
		cout<<"   [ "<<estEmpl[p]<<" ]        "<<sueldo[p]<<"      "<<afp(estEmpl,sueldo,p)<<endl;
		cout<<"=============================================\n";
		cout<<" "<<endl;
	}
}


int main()
{
	int cant,p;
	string *estEmpl;  
	int *sueldo;
	estEmpl=new string[cant];
	sueldo=new int[cant];
    cout<<"Ingrese la cantidad de empleados "<<endl;
    cin>>cant;
	llenar(cant,estEmpl,sueldo);
	afp(estEmpl,sueldo,p);
	imprime(cant,estEmpl,sueldo,p);
	return 0;
}
