#include <iostream>
#include <locale.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void llenarm(int **m,int f,int c)
{
	int i,j;
	for(j=0;j<f;j++)
	{	
		for(i=0;i<c;i++)
		{
			*(*(m+j)+i)=1+rand()%(1+10-1);//m[i][j]	
		}
	
	}
}
void mostrarm(int **m,int f,int c)
{
	int i,j;
	for(j=0;j<f;j++)
	{ 
		for(i=0;i<c;i++)
		{
			cout<<*(*(m+j)+i)<<"\t";//m[i][j]
		}
		cout<<endl;
		
	}
}
void promedio(int**m,int f,int c){
	int i,j;
	for(i=0;i<f;i++)
	{ float ac=0;
		for(j=0;j<c;j++)
		{
			ac=ac+*(*(m+i)+j);
		}
	 cout<<" el promedio de la nota del estudiante ["<<i<<"] = "<<ac/3<<endl;
   }
}

int main()
{
	srand(time(NULL));
	int fil=12,col=3,i,n;
	int **pmatriz;
	setlocale(LC_ALL,"spanish");
	cout<<"MATRICES DINAMICAS"<<endl;
	cout<<"-------------------------------\n";

	pmatriz=new int* [fil]; //reserva de filas
	for(i=0;i<fil;i++)//reserva de columnas
	{
		pmatriz[i]=new int(col);
	}
	llenarm(pmatriz,fil,col);
	mostrarm(pmatriz,fil,col);
	
	cout<<"\nPromedio de las notas "<<endl;
	promedio(pmatriz,fil,col);
	//liberar memoria
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
