
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
			*(*(m+i)+j)=1+rand()%(100+1-1);//m[i][j]
		}
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

void mayor(int **m,int f,int c){
	
	for(int i=0;i<f;i++)
	{ int mayor=*(*(m+i)+0);
	
		for(int j=0;j<c;j++)
		{
			if(mayor<*(*(m+i)+j)){
				mayor=*(*(m+i)+j);
			}
		
		}
		cout<<"El numero mayor de la fila ["<<i<<"] es ="<<mayor<<endl;
   }
		
	
}


int main()
{
	
	int fil=3,col=3,i,n;
	int **pmatriz; // la direccion de otro puntero
	setlocale(LC_ALL,"spanish");
	srand(time(NULL));
	pmatriz=new int* [fil]; //reserva de filas
	for(i=0;i<fil;i++)//reserva de columnas
	{
		pmatriz[i]=new int(col);
	}
	llenarm(pmatriz,fil,col);
	
	cout<<"MATRICES DINÁMICAS"<<endl;
	cout<<"Impresion de matriz\n";
	cout<<"-----------------\n";
	mostrarm(pmatriz,fil,col);
	cout<<endl;
	cout<<"NUMEROS MAYORES DE CADA FILA "<<endl;
	mayor(pmatriz,fil,col);






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

