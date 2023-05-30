#include <iostream>
using namespace std;
// programación modular
void llenar(int arr[],int num)
{	int pos;
	for(pos=0;pos<num;pos++)
	{	cout<<"Persona # "<<(pos+1)<<" : ";
		cin>>arr[pos];
	}
}
int mayores(int a[],int num)
{	int pos,contMay=0;
	for(pos=0;pos<num;pos++)
	{	if (a[pos]>17)
		{	contMay++;
		}
	}
	return contMay;
}
float promedio(int arr[],int num)
{	int pos,sumaRango=0,contRango=0;
	for(pos=0;pos<num;pos++)
	{	if (arr[pos]>=20 && arr[pos]<=45)
		{	sumaRango=sumaRango+arr[pos];
			contRango++;
		}
	}
	if (sumaRango==0)
	{	return 0;
	}
	else
	{	return sumaRango/(float)contRango;
	}
}
int main()
{	int edad[30];
	int cant,mayor;
	float porcMen,prom;
	//llenar las edades
	cout<<"Ingrese cantidad de personas :";
	cin>>cant;
	llenar(edad,cant);  // llamada al proceso de llenado
	//Mayores de edad
	mayor=mayores(edad,cant);
	//Promedio de las edades en el rango de 20 a 45
	prom=promedio(edad,cant);
	// porcentaje de menores de edad
	porcMen=(float)(cant-mayor)/cant;
	// Reporte de resultados
	cout<<"Mayores de edad = "<<mayor<<endl;
	if (prom==0)
	{	cout<<"No existe promedio para el rango de edades de 20 a 45"<<endl;
	}
	else
	{	cout<<"Promedio de edades en el rango de 20 a 45 = "<<prom<<endl;
	}	
	cout<<"Porcentaje de menores de edad = "<<porcMen * 100<<" % ";
	return 0;
}
