//ejercicio1 en clase
#include<iostream>
using namespace std;
//resolver sin modulos
int main()
//declarar un vector ,vamos utilizar para las edades
{   int edad[30];
	//variables que voya utilizar decalarar,llenar las edades
	int cant_per,contMay=0,sumaRango=0,contRango=0,pos;
	float porcmen;
	//lenar las edades
	cout<<"ingrese cantidad de personas:";cin>>cant_per;
	for (pos=0;pos<cant_per;pos++)
	{   cout<<"persona # "<<(pos+1)<<"  : ";
	    cin>>edad[pos];
	} //hasta aqui tenemos el llenado de las edades
	//mayores de edad
	for(pos=0;pos<cant_per;pos++)
	{   if(edad[pos]>17)  
	    {  contMay++;
		   }  
	}
	//hallar el promedio de las edades en el rango 20 a 45 anios
	for(pos=0;pos<cant_per;pos++)
	{  if (edad[pos]>=20 && edad[pos]<=45)
	   {   sumaRango=sumaRango+edad[pos];
	       contRango++;
       }	   
	}
	//porcentaje de menores de edad
	porcmen=(float)(cant_per-contMay)/cant_per;
	
	
	//reporte resultados 
	cout<<"mayores de edad ="<<contMay<<endl;
	if (sumaRango==0)
	{   cout<<"No existe promedio para el rango de edades de 20 a 45"<<endl;
	}
	else
	{    cout<<"promedio de edades en el rango de 20 a 45 ="<<((float)sumaRango/contRango)<<endl;
	}
	cout<<"mayores de edad ="<<contMay<<endl;
	cout<<"promedio de edades en el rango de edades de 20 a 45"<<((float)sumaRango/contRango)
	cout<<"el porcentaje de menores de edad es de ="<<porcmen * 100 <<" % ";
	return 0;
}

