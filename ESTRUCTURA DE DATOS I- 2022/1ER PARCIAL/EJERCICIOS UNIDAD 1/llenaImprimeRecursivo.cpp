#include <iostream>
using namespace std;
void datos(float v[],int tam)  // parametros LLENADO EN CICLO DE VUELTA
{	if (tam>=0)
	{	datos(v,tam-1);
		cout<<"Ingrese elemento posicion [ "<<tam<<" ] : ";
		cin>>v[tam];
	}
}
void llenado(float v[], int tam, int i)  // llenado con CICLO DE IDA
{	if (i<tam)
	{	cout<<"Ingrese elemento posicion [ "<<i<<" ] : ";
		cin>>v[i];
		llenado(v,tam,i+1);
	}
}
void mostrar(float v[],int p,int tam) // MOSTRAR CON EL CICLO DE IDA
{	if (p<tam)
	{	cout<<v[p]<<"   ";
		mostrar(v,p+1,tam);
	}
}
void mostrarVuelta(float v[],int tam)  // MOSTRAR CON EL CICLO DE VUELTA
{	if (tam>=0)
	{	mostrarVuelta(v,tam-1);
		cout<<" vector [ "<<tam<<" ] : "<<v[tam]<<endl;
	}
}
float sumaTodo(float v[],int tam, int i,float ac)
{	if(i<tam)
	{	ac=ac+v[i];
		return sumaTodo(v,tam,i+1,ac);
	}
	else
	{	return ac;
	}
}
int main()
{	float vec[20];
	int tam;
	cout<<"Cantidad de elementos para el vector : ";
	cin>>tam;
	//datos(vec,tam-1);
	llenado(vec,tam,0);
	mostrar(vec,0,tam);
	cout<<endl;
	mostrarVuelta(vec,tam-1);
	cout<<"Suma total = "<<sumaTodo(vec,tam,0,0);
}
