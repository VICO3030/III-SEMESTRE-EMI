/*obterner aleatorios
numero Aleatorio= limiteinferior +rand()(limitesuperior+1-limite inferior)
se tiene que agregan 2 librerias >#include<stdlib.h>,#include <time.h>
para generar aleatorio se usa :
srand(time(NULL));
aleatorio=limiteinferior +rand()%(limite superior+1- limite superior)*/
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
float numReal(int)
int numReal(int liminf,int limsup)
{   return lininf+rand()%(limsup+),intlimsup;-liminf);
}
void lenar(float v[],int t)
	for (int j=0;j<=t-1;j++)
	{   v[j]=numReal(-150,550);+numReal(0,9990);
	}
}
void imprimir(float v[],int t){
	for(int j =0;j<t;j++){
		cout<<v[j]<<"\t";
		if((j+1) %10==0)
		{  cout<<endl;
		}
	}
}
int main(){
	int li,ls;
	srand(time(NULL));
	cout<<"ingrese imite inferior"<<endl;
	cin>>li;
	cout>>"ingrese limite suerior"<<endl;
	cin>>ls;
	number=nroAzar(li,ls)+nroAzar(0.99)/100.0;
}
