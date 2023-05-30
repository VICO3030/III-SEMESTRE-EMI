#include <iostream>
using namespace std;
// variables globales
float puntuacion[30];
int q,indice;
float salario;
void datos()
{
	cout<<"Numero de empleados : ";
	cin>>q;
	for(indice=0;indice<=q-1;indice++)
	{	cout<<"Puntuacion del empleado # "<<(indice+1)<<" : ";
		cin>>puntuacion[indice];
	}
}
void reporte()
{	float valor=0.4;
	cout<<" EMPLEADO     NIVEL        PUNTUACION        SALARIO"<<endl;
	cout<<"********************************************************"<<endl;
	for(indice=0;indice<q;indice++)
	{	
		if(puntuacion[indice]==0)
		{	cout<<(indice+1)<<"       Inaceptable           0         0 Bs."<<endl;
			
		}
		if (puntuacion[indice]==valor)
	 	{	cout<<(indice+1)<<"		Aceptable	  0.4       "<<(valor*2400)<<" Bs."<<endl;
		}
	
		if (puntuacion[indice]>=0.6)
	 			{	cout<<(indice+1)<<"		Meritorio		"<<puntuacion[indice]<<"        "<<(puntuacion[indice]*2400)<<" Bs."<<endl;
				}
	}
}
int main()
{	datos();
	reporte();
	return 0;
}
