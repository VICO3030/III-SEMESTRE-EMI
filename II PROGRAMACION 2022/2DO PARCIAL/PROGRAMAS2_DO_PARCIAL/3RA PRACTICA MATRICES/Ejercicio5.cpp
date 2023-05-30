#include <iostream>
#include <locale.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void llenarm(int **m,int f,int c)
{
	int i,j;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			*(*(m+i)+j)=1+rand()%(100+1-1);
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

void mayor_fila(int *vec,int f,int c,int **m){
	for(int i=0;i<f;i++)
	{
		int mayor=*(*(m+i)+0);
		for(int j=0;j<c;j++){
			if(mayor<*(*(m+i)+j))
			{
				mayor=*(*(m+i)+j);
				
			}
			
		}
    cout<<"El mayor de las filas son : "<<mayor;
	}
	
}


int main()
{
	srand(time(NULL));
	int fil,col,i,n;
	int **pmatriz; // la direccion de otro puntero
	int *vec;
	vec=new int(fil);
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
	cout<<"\nImpresion de matriz\n";
	cout<<"-----------------\n";
	mostrarm(pmatriz,fil,col);
	cout<<endl;

	mayor_fila(pmatriz,fil,col);

	//liberar memoria
	for(i=0;i<fil;i++)  //si o si para librerar la memoria 
	{
		delete[]pmatriz[i];
	}
	for(i=0;i<col;i++)
	{
		delete[]pmatriz[i];
	}
	
	
	
	return 0;
}
