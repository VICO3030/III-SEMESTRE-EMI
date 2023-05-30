#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 1000
using namespace std;
//llenar el vector aleatoriamente
void leer (int v[], int tam){
	for(int i=0 ;i<tam ; i++ ){
		v[i]=10+rand()%(10+100);
		
	}
}
//impresion del vector 
void imprimir(int v[], int tam){
	for(int i =0 ; i<tam ; i++)
	{
		cout<<" | "<<v[i];
	}
}

//metodo de ordenamiento quickSort 1 
void quickSort(int a[], int n)
{
    int tope, ini, fin, pos;
    int may[MAX], menor[MAX];
    tope = 0;
    menor[tope] = 0;
    may[tope] = n - 1;
    while (tope >= 0)
    {
        ini = menor[tope];
        fin = may[tope];
        tope--;

        int izq, der, aux;
        bool band;
        izq = ini;
        der = fin;
        pos = ini;

        band = true;

        while (band == true)
        {
            while ((a[pos] < a[der]) && (pos != der))
                der--;

            if (pos == der)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[der];
                a[der] = aux;
                pos = der;
            }

            while ((a[pos] > a[izq]) && (pos != izq))
                izq++;

            if (pos == izq)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[izq];
                a[izq] = aux;
                pos = izq;
            }
        }

        if (ini <= (pos - 1))
        {
            tope++;
            menor[tope] = ini;
            may[tope] = pos - 1;
        }

        if (fin >= (pos + 1))
        {
            tope++;
            menor[tope] = pos + 1;
            may[tope] = fin;
        }
    }
}
//METODO BURBUJA
void intercambiar(int v[],int pos1, int pos2)
{
	float aux;
	aux=v[pos1];
	v[pos1]=v[pos2];
	v[pos2]=aux;
}
void burbuja(int v[],int t)
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

//metodo shell
void Shell( int v[], int tam)
{
	int j,k,salt,aux;
	bool fin;
	salt =tam;
	while(salt > 0){
		salt=salt/2;
		do
		{
			fin=true;
			k= tam-salt;
			for(int i=0;i<k;i++)
			{
				j=i+salt;
				if(v[i]>v[j])
				{
					aux =v[i];
					v[i]=v[j];
					v[j]=aux;
					fin = false;
					
				}
			}
		}
		while( fin!=true);
	}
}
