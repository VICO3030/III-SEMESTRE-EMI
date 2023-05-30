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
	int *entradas;
	public:
		Empleado();
		Empleado(int num);
		void llenar();
		void lista_impresion();
		void Resultado();
	private:
		int aleatorio(int li, int ls);
};
/*Sobre carga de constructores*/
Empleado::Empleado()  //1
{	cant=aleatorio(3,10);
	Estado=new string[cant];
	entradas=new int [cant];
}

Empleado::Empleado(int num) //2
{	cant=num;
	Estado=new string[cant];
	entradas=new int[cant];

}
// metodo para el aleatorio
int Empleado::aleatorio(int li, int ls)
{	return rand()%(ls+1-li)+li;
}

void Empleado::llenar()
{	
    int posicion,i;
    string estados[2]={"Por internet","De teatro"};
	for (int p=0;p<cant;p++)
	{	 
    	posicion = aleatorio(0,1);
		Estado[p]=estados[posicion];
		entradas[p]=5+rand()%(5+10);
	}
}
void Empleado::Resultado()
{   int cont1=0,cont2=0;
    float inter,teatro;
    for(int i=0 ;i<cant;i++){
    
       if (Estado[i]== "Por internet"){
		   cont1=entradas[i]+cont1;
       }
	   if(Estado[i]=="De teatro"){
		  cont2=entradas[i]+cont2;
	    }
   }
	cout<<"Cantidad de entradas por internet es de ="<<cont1<<endl;
	cout<<"Cantidad de entradas de teatro es de ="<<cont2<<endl;
	
	cout<<"      MONTO TOTAL RECAUDADO    "<<endl;
	inter=cont1*(4500);
	teatro=cont2*(5500);
	cout<<"internet Total= "<<inter<<endl;
	cout<<"teatro total= "<<teatro<<endl;
	cout<<"MONTO TOTAL DE AMBAS COMPRAS ="<<inter+teatro<<" $"<<endl;
}

void Empleado::lista_impresion()
{	cout<<"Datos [TIPOS DE COMPRA ]==[Por internet ,De teatro]"<<endl;
    cout<<"Datos [PRECIOS ]      =   [    4.500    , 5.500]"<<endl;
    cout<<"  SE TIENEN [ "<<cant<<"] VENTAS EN LA PLANILLA "<<endl;
    cout<<endl;

    	cout<<"--------------------------------------------------\n";
	for (int p=0;p<cant;p++)
	{   cout<<"=====COMPRA ["<<p<<"]========"<<endl;
     	cout<<"Ingrese el tipo de compra : "<<Estado[p]<<endl;
     	cout<<"Numero de estradas es de "<<entradas[p]<<endl;
     	
	}
	cout<<endl;
	cout<<" INTERNET Y TEATRO"<<endl;
    Resultado();
	
}
//menu 
int Menu_opciones()
{	int valor;
	do
	{	cout<<"********MENU DE OPCIONES*************"<<endl;
	    cout<<"------------------------------------------"<<endl;
		cout<<"1. CANTIDAD DE ALEATORIO DE COMPRAS \n";
		cout<<"2. CANTIDAD DESDE TECLADO DE COMPRAS \n";
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
		{	cout<<"Ingrese un numero para la cantidad : ";
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

