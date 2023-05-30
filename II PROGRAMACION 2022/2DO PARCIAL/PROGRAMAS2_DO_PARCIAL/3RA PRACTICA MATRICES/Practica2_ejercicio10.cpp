#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

void llenarm(int **m,int f,int c)
{
	int i,j;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"elemento["<<i<<"] ["<<j<<"] = ";
			cin>>*(*(m+i)+j);//m[i][j]
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

void suma(int **m,int f,int c){
	int i,j;
	int negativos=0,positivos=0;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			if((*(*(m+i)+j))<0){
				negativos=negativos+(*(*(m+i)+j));
			}
			else{
				positivos=positivos+(*(*(m+i)+j));
			}
		}
	}
	cout<<"La suma de los numeros negativos es ="<<negativos;
	cout<<"\nLa suma de los numeros positivos es ="<<positivos;
}


int main()
{
	
	int fil,col,i,n;
	int **pmatriz; // la direccion de otro puntero
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
	cout<<"\nLlenado de matriz\n";
	cout<<"-----------------\n";
	llenarm(pmatriz,fil,col);
	cout<<"\nImpresion de matriz\n";
	cout<<"-----------------\n";
	mostrarm(pmatriz,fil,col);
	suma(pmatriz,fil,col);
	cout<<endl;
	
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
