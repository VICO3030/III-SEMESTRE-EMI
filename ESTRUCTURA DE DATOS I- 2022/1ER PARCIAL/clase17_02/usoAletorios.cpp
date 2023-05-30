#include <iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;
int numReal(int limiteInf, int limSup)
{	return limiteInf+ rand()%(limSup+1-limiteInf);
}
void llenar(float v[],int t)
{	for (int j=0;j<=t-1;j++)
	{	v[j]=numReal(-150,550)+numReal(0,999)/100.0;  
	// -150 a 700  ANOTAR EL LIMITE SUPERIOR RESTANDO EL INFERIOR
	// PARA POSITIVOS NO SE DEBE RESTAR NADA SOLO ANOTAR LOS LIMITES EJ/ 1 A 559
	}
}
void imprimir(float v[],int t)
{	for (int j=0;j<t;j++)
	{	cout<<v[j]<<"\t";
		if((j+1)%10 ==0)
		{	cout<<endl;
		}
	}
}
int secuencial(float v[],int t, float dato)
{	int i,pos=-1;
	for(i=0;i<=t-1;i++)
	{	if(v[i]==dato)
		{	pos=i;
			i=t;  // forzar la salida
		}
	}
	return pos;
}
int secuencial2(float v[],int t, float dato)
{	int i=0;
	v[t]=dato;
	cout<<"El nuevo arreglo donde se busca :"<<endl;
	imprimir(v,t+1);
	while(v[i]!=dato)
	{	i++;
	}
	if (i==t)
	{	return -1;
	}
	else
	{	return i;
	}
}

int buscaBinaria(float v[],int bajo,int alt, float dato)
{	int central=(bajo+alto)/2;
	while(bajo<=alto && v[central]!=dato)
	{	if (dato<v[central])
		{	alto=central-1;
		}
		else
		{	bajo=central +1;
		}
		central=(bajo+alto)/2;
	}
	if (dato==v[central])
	{	return central;
	}
	else
	{	return -1;
	}
}
int main()
{	float vector[250],busca;
	int tam,posicion;
	srand(time(NULL));
	cout<<"Numero de elementos : ";
	cin>>tam;
	//para SIN centinela
	cout<<endl<<"BUSQUEDA SIN CENTINELA...."<<endl;
	llenar(vector,tam);
	imprimir(vector,tam);
	cout<<endl<<"Que dato quiere buscar ?, anotalo ";
	cin>>busca;
	posicion=secuencial(vector,tam,busca);
	if (posicion == -1)
	{	cout<<"El dato "<<busca<<" no se encuentra en el vector";
	}
	else
	{	cout<<"El dato "<<busca<<" se encuentra en la posicion [ "<<posicion<<" ]";
	}
	llenar(vector,tam);
	cout<<endl;
	//para con centinela
	cout<<endl<<"BUSQUEDA CON CENTINELA...."<<endl;
	imprimir(vector,tam);
	cout<<endl<<"Que dato quiere buscar ?, anotalo ";
	cin>>busca;
	posicion=secuencial2(vector,tam,busca);
	cout<<endl;
	if (posicion==-1)
	{	cout<<"El dato "<<busca<<" no se encuentra en el vector";
	}
	else
	{	cout<<"El dato "<<busca<<" se encuentra en la posicion [ "<<posicion<<" ]";
	}
	//busqueda binaria
	cout<<endl<<"BUSQUEDA BINARIA..."<<endl;
	llenar(vector,tam);
	imprimir(vector,tam);
	cout<<endl<<"Que dato quiere buscar ?, anotalo ";
	cin>>busca;
	//CUMPLIR CONDICION DEBES ORDENAR
	// LLAMAR AL PROCESO DE ORDENAR
	posicion=buscarBinaria(vector,0,tam-1,busca);
	cout<<endl;
	if (posicion==-1)
	{	cout<<"El dato "<<busca<<" no se encuentra en el vector";
	}
	else
	{	cout<<"El dato "<<busca<<" se encuentra en la posicion [ "<<posicion<<" ]";
	}
	return 0;
}
