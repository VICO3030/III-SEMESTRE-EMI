#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Persona
{	int pers[100],n;
	public:
		void llenar();
		void imprimir();
		string estadoCivil(int estado);
		float promEdad(int i, int t, int c,int s, int civil);
};
// IMPLEMENTACION DE LOS METODOS
void Persona::llenar()
{	n= 1+rand()%(41-1);    // 1 a 40
	cout<<"La cantidad de personas es = "<<n;
	for(int j=0;j<n*2;j=j+2)
	{	pers[j]= 1+ rand()%(4+1-1);//civil
		pers[j+1]= 1+ rand()%(100+1-1);   //edad
	}
}
string Persona::estadoCivil(int estado)
{	switch (estado)
	{	case 1: return "soltero";
		case 2: return "casado";
		case 3: return "divorciado";
		case 4: return "viudo";
	}
}
void Persona::imprimir()
{	int pe=1;
	float prom;
	for(int j=0;j<n*2;j=j+2)
	{	cout<<"\nPersona # "<<pe<<endl;
		cout<<"Su estado civil es : "<<estadoCivil(pers[j])<<endl;
		cout<<"Su edad es : "<<pers[j+1]<<" anios"<<endl;
		pe++;
	}
	// Realizar la impresion de los promedios de cada estado civil
	cout<<"********************************\n";
	prom=promEdad(0,n,0,0,1);
	cout<<"Promedio de edades de solteros = "<<prom<<endl;
	prom=promEdad(0,n,0,0,2);
	cout<<"Promedio de edades de casados = "<<prom<<endl;
	prom=promEdad(0,n,0,0,3);
	cout<<"Promedio de edades de divorciados = "<<prom<<endl;
	prom=promEdad(0,n,0,0,4);
	cout<<"Promedio de edades de viudos = "<<prom<<endl;
}
float Persona::promEdad(int i, int t, int c,int s, int civil)
{	if (i<t*2)
	{	if (pers[i]==civil)
		{	c++;
			s=s+pers[i+1];
		}
		return promEdad(i+2,t,c,s,civil);
	}
	else
	{	if (c==0)
		{	return 0;
		}
		else
		{	return (float)s/c;
		}
	}
}
int main()
{	Persona worker;
	srand(time(NULL));
	worker.llenar();
	worker.imprimir();
	return 0;
}
