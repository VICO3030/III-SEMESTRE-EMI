#include <iostream>
#include <math.h>
using namespace std;
void Menu1()
{	cout<<"----------------------------------------"<<endl;
	cout<<"---------        MENU         ----------"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<" Que tipo de asistentes eres seleccione: \n ";
	cout<<" 1.- Estudiante EMI \n ";
	cout<<" 2.- Estudiante externo \n ";
	cout<<" 3.- Profesional \n ";
	cout<<" 4.- salir \n ";
	cout<<"----------------------------------------"<<endl;
}

void tutorial(int costo)
{	cout<<" El costo por tutorial es "<<costo<<" $us \n ";
	cout<<" Hay un maximo de 5 tutoriales \n";
	cout<<" ¿Cuantos tutoriales va a tomar? \n ";
}

float costototal(int b,int costo)
{	float total;
	total=costo*b*6.96;
	if (b==5)
		{total=total*0.9;
		}
	return total;
}

int main()
{
	int a,b,cont1=0,cont2=0,cont3=0,conttotal=0;
	float total,acutotal=0,acu1=0,acu2=0,acu3=0;
	Menu1();
	cin>>a;
	while(a!=4)
	{
	if (a==1)
		{tutorial(10);
		cin>>b;
		total=costototal(b,10);
		cont1++;
		acu1=total+acu1;
		cout<<"El total a cancelar es: "<<total<<"Bs"<<endl;
		}
	if (a==2)
		{tutorial(15);
		cin>>b;
		total=costototal(b,15);
		cont2++;
		acu2=total+acu2;
		cout<<"El total a cancelar es: "<<total<<"Bs"<<endl;
		}
	if (a==3)
	{	tutorial(20);
		cin>>b;
		total=costototal(b,20);
		cont3++;
		acu3=total+acu3;
		cout<<"El total a cancelar es: "<<total<<"Bs"<<endl;
	}
	conttotal=cont1+cont2+cont3;
	acutotal=acu1+acu2+acu3;
	Menu1();
	cin>>a;
	}
	cout<<"La cantidad de dinero recaudado en "<<cont1<<" estudiantes de la emi es: "<<acu1<<"Bs"<<endl;
	cout<<"La cantidad de dinero recaudado en "<<cont2<<" estudiantes de externos es: "<<acu2<<"Bs"<<endl;
	cout<<"La cantidad de dinero recaudado en "<<cont3<<" profecionales es: "<<acu3<<"Bs"<<endl;
	cout<<"La cantidad de dinero recaudado en TOTAL de "<<conttotal<<" inscritos es: "<<acutotal<<"Bs"<<endl;
	return 0;
 } 
 

