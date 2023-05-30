#include <iostream>
#include <locale.h>
#include<stdlib.h>
#include<time.h>
//el mayor de cada columna anadir a un vector
using namespace std;
void llenarm(int **m,int f,int c)
{
	int i,j;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			*(*(m+i)+j)=1+rand()%(100-1+1);
		}
		cout<<endl;
	}
}

void mostrarm(int **m,int f,int c)
{
	int i,j;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<*(*(m+i)+j)<<"\t";//m[i][j]
		}
		cout<<endl;
	}
}
void buscador(int **m,int f,int c)
{
	int mayor;
	int i,j;
	for ( j=0;j<c;j++)
	{
		mayor=m[0][0];
		for (i=0;i<f;i++)
		{
			if(mayor<m[i][j])
			{
				mayor=m[i][j];
			}
				    
		}
		cout<<mayor<<"\t";
	}
	
}
int main()
{
	int fil,col,i,n;
	int **pmatriz;
	setlocale(LC_ALL,"spanish");
	cout<<"MATRICES DINÁMICAS"<<endl;
	cout<<"-------------------------------\n";
	cout<<"Numero de filas: ";
	cin>>fil;
	cout<<"Numero de columnas: ";
	cin>>col;
	
	pmatriz=new int* [fil]; //reserva de filas
	for(i=0;i<fil;i++)//reserva de columnas
	{
	   pmatriz[i]=new int(col);
    }
	llenarm(pmatriz,fil,col);
	mostrarm(pmatriz,fil,col);
	cout<<"---------VECTOR MAYORES COL ----------\n";
	buscador(pmatriz,fil,col);
	
	for(i=0;i<fil;i++)
	{
		delete[]pmatriz[i];
	}
	for(i=0;i<col;i++)
	{
		delete[]pmatriz[i];
	}
	return 0;
}
