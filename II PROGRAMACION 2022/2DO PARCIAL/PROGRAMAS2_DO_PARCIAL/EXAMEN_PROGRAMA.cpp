#include<iostream>
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

			*(*(m+i)+j)=20+rand()%(20+100);//m[i][j]
		
		}
	}
}

void mostrarm(int **m,int f,int c)
{
	int i,j;
	for(i=0;i<f;i++)
	{
		cout<<"\t\t ";
		for(j=0;j<c;j++)
		{
			cout<<*(*(m+i)+j)<<"\t\t";//m[i][j]
		}
		cout<<endl;
	}
}

void total_votos(int **m,int f,int c)
{

	for(int j=0;j<c;j++)
	{
	float ac=0;
		for(int i=0;i<f;i++)
		{
		ac=ac+(*(*(m+i)+j));
		}
	cout<<"LA CANTIDAD DE VOTOS PARA EL CANDIDATO "<<j<<"  ES ="<<ac<<endl;
   }

}

int main()
{
	setlocale(LC_ALL,"spanish");
	srand(time(NULL));
	
	int fil=5,col=4,i,n;
	int **pmatriz; // la direccion de otro puntero
	pmatriz=new int* [fil]; //reserva de filas
//	int vec[5]={1,2,3,4,5};

	for(i=0;i<fil;i++)//reserva de columnas
	{
		pmatriz[i]=new int(col);
	}
	llenarm(pmatriz,fil,col);
	
	cout<<"---------------CUADRO DE ELECCIONES ----------------"<<endl;
	cout<<endl;
	cout<<"DISTRITO\t";cout<<"Candidato\tCandidato\tCandidato\tCandidato\t"<<endl;
	cout<<"\t\t";        cout<<"  A\t\t B\t\t C\t\t D\t\t"<<endl;
	mostrarm(pmatriz,fil,col);
	cout<<endl;
    total_votos(pmatriz,fil,col);


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
