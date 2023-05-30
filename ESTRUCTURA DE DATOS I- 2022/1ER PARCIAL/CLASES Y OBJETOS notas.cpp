#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Calificar
{ 
	string *name;
	int *notas;
	public:
		Calificar()
		{	name=new string [20];
			notas=new int[20];
			for (int i=0;i<20;i++)
			{	*(notas+i)=rand()%(101);
			}
			name[0]="Pablo Sanabria";
			name[1]="TE DESEO LO MEJOR";
			name[2]="CALLAITA";
			name[3]="VOLVI";
			name[4]="IGNORANTES";
			name[5]="SANTA";
			name[6]="A TU MERCED";
			name[7]="AMORFODA";
			name[8]="LO SIENTO BB";
			name[9]="SAFAERA";
			name[10]="VETE";
			name[11]="X ULTIMA VEZ";
			name[12]="UN PESO";
			name[13]="YO PERREO SOLA";
			name[14]="TRELLAS";
			name[15]="BOOKER T";
			name[16]="SI VEO A TU MAMA";
			name[17]="LA DIFICIL";
			name[18]="YONAGUNI";
			name[19]="DAKITI";	
		}
		void imprimir(string m[],int n[],int t)
		{	for (int i=0;i<t;i++)
			{	cout<<m[i]<<" tiene la nota de: "<<*(n+i)<<endl;
			}
		}
		void aprobados(string nom[],int e[],int &tama)
		{
			for (int i=0;i<20;i++)
			{
				if(notas[i]>50)
				{
					e[tama]=notas[i];
					nom[tama]=name[i]; tama++;
				}
			}
		}
		void reprobados(string nom[],int e[],int &tama)
		{
			for (int i=0;i<20;i++)
			{
				if(notas[i]<50)
				{
					e[tama]=notas[i];
					nom[tama]=name[i]; tama++;
				}
			}
		}
		int mayornot()
		{
			int mayor;
			mayor=notas[0];
			for (int i=0;i<20;i++)
			{
				if (mayor<notas[i])
				{	mayor=notas[i];
				}
			}
			return mayor;
		}
		int menornot()
		{
			int menor;
			menor=notas[0];
			for (int i=0;i<20;i++)
			{
				if (menor>notas[i])
				{	menor=notas[i];
				}
			}
			return menor;
		}
		float promedio(int ap[],int tam)
		{	float acu=0;
			for (int i=0;i<tam;i++)
			{	acu=ap[i]+acu;
			}
			return acu/tam;
		}
		void mayores80(string na[],int no[],int tam)
		{
			for (int i=0;i<tam;i++)
			{
				if(no[i]>80)
				{
					cout<<na[i]<<" con nota de: "<<no[i]<<endl;
				}
			}
		}
		void reporte()
		{	int tamap=0,tamarep=0;
			string *nomap=new string [20];
			string *nomrep=new string [20];
			int *ap=new int [20];
			int *rep=new int [20];
			cout<<"LAS NOTAS SON:"<<endl;
			imprimir(name,notas,20);
			aprobados(nomap,ap,tamap);
			reprobados(nomrep,rep,tamarep);
			cout<<endl;
			cout<<"LAS NOTAS DE LOS APROBADOS SON:"<<endl;
			imprimir(nomap,ap,tamap);
			cout<<endl;
			cout<<"LAS NOTAS DE LOS REPROBADOS SON:"<<endl;
			imprimir(nomrep,rep,tamarep);
			cout<<endl;
			cout<<"La mayor nota es: "<<mayornot()<<endl;
			cout<<endl;
			cout<<"La menor nota es: "<<menornot()<<endl;
			cout<<endl;
			cout<<"El promedio de aprobados es de: "<<promedio(ap,tamap)<<endl;
			cout<<endl;
			cout<<"LOS QUE TIENEN NOTA MAYOR A 80 SON:"<<endl;
			mayores80(nomap,ap,tamap);
		}
		
	
};

main()
{
	srand(time(NULL));
	Calificar notas;
	notas.reporte();
	return 0;
}
