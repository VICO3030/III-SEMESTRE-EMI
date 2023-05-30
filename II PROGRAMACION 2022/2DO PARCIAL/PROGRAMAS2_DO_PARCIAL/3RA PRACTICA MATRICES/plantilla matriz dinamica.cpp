
#include <iostream>
#include <locale.h>
#include<stdlib.h>
using namespace std;

void llenarm(int **m,int f,int c)
{
	int i,j;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			
			*(*(m+i)+j)=5+rand()%(5+1);
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
void  recorrido(int **m,int f,int c){
	int  i,j;
	for(i=0;i<f;i++){
		if(i%2==0){//cuado la fila es par 
			for(j=0;j<c;j++){
				cout<<*(*(m+i)+j)<<" | ";
			}
		}
		else 
		{
			for (j=c-1;j>=0;j--){//el otro ciclo va ir de izquierda a derecha
			cout<<*(*(m+i)+j)<<" | ";
		    }	
		}
	}
}


int main()
{
	
	int fil=5,col=4,i,n;
	int **pmatriz; // la direccion de otro puntero
	setlocale(LC_ALL,"spanish");
	cout<<"MATRICES DINÁMICAS"<<endl;
	cout<<"-------------------------------\n";
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
	cout<<endl;
	cout<<"----RECORRIDO DE LA MATRIZ++++ "<<endl;
	recorrido(pmatriz,fil,col);
	

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

