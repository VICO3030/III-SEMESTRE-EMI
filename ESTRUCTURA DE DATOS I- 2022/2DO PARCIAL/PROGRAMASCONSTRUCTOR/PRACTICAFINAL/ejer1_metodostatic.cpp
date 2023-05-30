/* USANDO METODOS ESTATICOS  A-->15% ,B-->10%, C--> 8 %
    --Sueldo total
	--Sueldo 
	--Categoria
	--Incremento*/
	
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
using namespace std;

class Empleado
{   
    //metodos estaticos sin atributos
    public:
    	static int aleatorio(int li,int ls);
    	static void llenar(int cant,string *estEmpl,int *sueldo);
    	static void imprime(int cant,string *estEmpl,int *sueldo,int p);
		static float Incremento(string *estEmpl,int *sueldo, int p);
    	static float total(string *estEmpl,int *sueldo, int p);
};

static int aleatorio(int li, int ls)
{	return rand()%(ls+1-li)+li;
}
static void llenar(int cant,string *estEmpl,int *sueldo)
{	string estados[3]={"A","B","C"};
	int posicion;
	for (int p=0;p<cant;p++)
	{	posicion = aleatorio(0,2);
		estEmpl[p]=estados[posicion];
		sueldo[p]=5000+rand()%(5000-100);
	}
}
static float Incremento(string *estEmpl,int *sueldo, int p)
{	float plus;
	if (estEmpl[p]== "A") 	plus = 0.15; 
	if (estEmpl[p]== "B") 	plus = 0.10; 
	if (estEmpl[p]== "C") 	plus = 0.08;
	
	return sueldo[p]*plus;
}

static float total(string *estEmpl,int *sueldo, int p)
{
	float total;
	total = (Incremento(estEmpl,sueldo,p)+ sueldo[p]);
	return total;
}

static void imprime(int cant,string *estEmpl,int *sueldo,int p)
{	cout<<"             LA LISTA TIENE ["<<cant<<" ]EMPLEADOS EN LA PLANILLA "<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"    [ CATEGORIA ] "<<"\t[SUELDO ] "<<"\t[ INCREMENTO ]"<<"\t[ TOTAL ]"<<endl;
	for (int p=0;p<cant;p++)
	{	cout<<"---------------------------------------------------------------------"<<endl;
		cout<<"\t["<<estEmpl[p]<<"]\t\t"<<sueldo[p]<<"\t\t"<<Incremento(estEmpl,sueldo,p)<<"\t\t"<<total(estEmpl,sueldo,p)<<endl;
		cout<<" "<<endl;
	}
}
int main()
{
	srand(time(NULL));
	int cant,p;
	string *estTurno;  
	int *sueldo;
	estTurno=new string[cant];
	sueldo=new int[cant];
	
    cout<<"Ingrese la cantidad de empleados = ";
    cin>>cant;
	llenar(cant,estTurno,sueldo);
	Incremento(estTurno,sueldo,p);
	imprime(cant,estTurno,sueldo,p);
	
	return 0;
}
