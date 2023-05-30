/*METODOS ESTATICOS 
1.- CLASE
   -->SIN ATRIBUTIOS
   -->Todos los metodos son de tipo estatic
   
2.- LA IMPLEMENTACION DE LOS METODOS NO LLEVA EL NOMBRE DE LA CLASE
    -->No lleva nombre el nombre de la clase
3.-NO SE CREA OBJETO
   -->NombreClase.nombremetodo(parametro)
   quitar la clase

*/
#include <iostream>
#include<stdlib.h >
#include<time.h>
using namespace std;


class Vector
{ public: 
       static void llenar (float v[], int ta);
       static void imprime (float v[],int ta);
       static void burbuja(float v[],int t);
       static void intercambiar(float v[],int pos1, int pos2); 
	   static void positivos(float v[],int t);

       
};
static void llenar (float v[],int ta)
{
	for (int i=0;i<ta;i++)
	{
	
		v[i]=-10+rand()%(-10+50);
	}
	//cout<<endl;
}
static void imprime (float v[],int ta)
{
	for (int i =0 ;i<ta;i++)
	{ cout<<v[i]<<"\t";
	}
}
static void intercambiar(float v[],int pos1, int pos2)
{
	float aux;
	aux=v[pos1];
	v[pos1]=v[pos2];
	v[pos2]=aux;
}
 static void burbuja(float v[],int t)
{
	int i, j,temp;
	for(i=1;i<t ;i++)
	{
		for (j=0;j<t-1;j++)
		{
			if (v[j]>v[j+1])
			{
				intercambiar(v,j,j+1); // llamada al metodo para intercambiar los valores de la posicion j con la j+1
			}	
		}
	}
}
 static void positivos(float v[],int t)
{

	float cont=0,prome;
	for(int i=0;i<t;i++)
	{
		if(v[i]>0){
			cont=cont+v[i];
			
		}
	}
	prome=cont/t;
	cout<<"\nEL PROMEDIO DE LOS POSITIVOS ES DE ="<<prome;
}



int main()
{
	float vec[20];
	int tam;
	do{
		cout<<"Ingree el tamano del arreglo : ";
		cin>>tam;
	}while(tam<=0);
	llenar(vec,tam);
	imprime(vec,tam);
	cout<<" \nMETODO DE BURBUJA "<<endl;
	burbuja(vec,tam);
	imprime(vec,tam);
	positivos(vec,tam);
}

