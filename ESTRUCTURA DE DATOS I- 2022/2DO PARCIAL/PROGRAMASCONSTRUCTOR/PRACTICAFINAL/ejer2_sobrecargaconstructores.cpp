/*ingreso turno M=manana , T=tarde ,N=noche si es T O M Y <7000 O SECCION 4 ENTONCES ES PROMOVIDO
 de lo contrario NO ES PROMOVIDO   */
 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

using namespace std;
//procedimientos
int Menu_opciones();
void Eleccion(int op);
class Empleado
{	int cant;
	string *Estado;  // este almacena los textos: mañana,tarde,noche
	string *seccion;
	int *sueldo;
	public:
		Empleado();
		Empleado(int num);
		void llenar();
		void lista_impresion();
		void Resultado(int p);
	private:
		int aleatorio(int li, int ls);
};
/*Sobre carga de constructores*/
Empleado::Empleado()  //1
{	cant=aleatorio(3,10);
	Estado=new string[cant];
	sueldo=new int [cant];
	seccion=new string[cant];
}

Empleado::Empleado(int num) //2
{	cant=num;
	Estado=new string[cant];
	sueldo=new int[cant];
	seccion=new string[cant];
}
// metodo para el aleatorio
int Empleado::aleatorio(int li, int ls)
{	return rand()%(ls+1-li)+li;
}

void Empleado::llenar()
{	
    int posicion,i;
    string estados[3]={"M","T","N"};
    string tipo[4]={"1","2","3","4"};
	
	for (int p=0;p<cant;p++)
	{	posicion = aleatorio(0,2);
     	i=aleatorio(0,3);
		seccion[p]=tipo[i];
		Estado[p]=estados[posicion];
		sueldo[p]=5000+rand()%(5000-100);
	}
}
void Empleado::Resultado(int p)
{	
	if (Estado[p]== "M" || Estado[p]== "T" || seccion[p]== "4 " && sueldo[p]<7000){
		cout<<"PROMOVIDO";}
	else{ cout<<"NO PROMOVIDO";} 
}

void Empleado::lista_impresion()
{	cout<<"  SE TIENEN [ "<<cant<<"] EMPLEADOS EN LA PLANILLA "<<endl;
    cout<<endl;
    cout<<"  TURNO DE TRABAJO   "<<" SUELDO  "<<"\t\tSECCION  "<<"\tRESULTADO"<<endl;
	for (int p=0;p<cant;p++)
	{
	cout<<"------------------------------------------------------------------------\n";
	cout<<"     [  "<<Estado[p]<<"  ]\t\t"<<sueldo[p]<<"\t\t"<<seccion[p]<<"\t\t";Resultado(p); cout<<endl;
	}
}
//menu 
int Menu_opciones()
{	int valor;
	do
	{	cout<<"********MENU DE OPCIONES*************"<<endl;
	    cout<<"------------------------------------------"<<endl;
		cout<<"1. Cantidad aleatorio de empleados \n";
		cout<<"2. Cantidad desde el teclado \n";
		cout<<"Elija una opcion  : ";
		cin>>valor;
		cout<<"========================================="<<endl;
		if (valor!=1 && valor!=2)  cout<<"Incorrecto, vuelva a elegir\n";
	}while (valor!=1 && valor!=2) ;
	return valor;
}
void Eleccion(int op)
{	int cantidad;
	if (op==1)
	{	Empleado trabajador;
		trabajador.llenar();
		trabajador.lista_impresion();
	}
	else
	{	do
		{	cout<<"Ingrese nro positivo para cantidad : ";
			cin>>cantidad;
			if(cantidad<=0)	cout<<"Error en el ingreso, vuelva a intentar\n";
		}while(cantidad<=0);
		Empleado mostrar(cantidad);
		mostrar.llenar();
		mostrar.lista_impresion();
	}
}
int main()
{	
    setlocale(LC_ALL,"spanish");
    int opcion;
	srand(time(NULL));	
	opcion=Menu_opciones();
	Eleccion(opcion);
	return 0;
}

