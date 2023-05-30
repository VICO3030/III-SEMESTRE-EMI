#include<iostream>
#include<stdlib.h>//para numeros aletorios
#include<time.h>
using namespace std;
class Persona{
	int pers[100],n;
	public:
		void llenar();
		void imprimir();
		string estadocivil(int estado);
		float promEdad(int i ,int t, int s,int civil);		
};
//implementaicion de los metodos
void Persona::llenar(){
	n=1+rand()%(41-1);  //1a49
	cout<<"La cantidad de persona es "<<n;
	for(int j=0;j<=n;j=j+2){
		pers[j]=1+rand(4+1-1);//civil
		pers[j+1]=1+ rand()%(100+1-1);   //edad	
	}
}
string Persona::estadoCivill(int estado){
	switch(estado){
		case 1: return "soltero";
		case 2: return "casado";
		case 3: return "divorciado";
		case 4: return "viudo";
	}
}
void Persona::imprimir(){
	float prom;
	int pe=1;
	for(int j=0;j<n*2;j=j+2){
		cout<<"persona # "<<pe<<endl;
		cout<<"su estado civil es : "<<estadocivil(pers[j])<<endl;
		cout<<"Su edad es : "<<pers[j+1]<<"anios"<<endl;
		pe++;
	}
	//realizar la impresion delos promedios de cada estado civil
	prom=promEdad(0,n,0,0,1);
	cout<<"promedio de edades solteros ="<<prom<<endl;
	prom=promEdad(0,n,0,0,2);
	cout<<"promedio de edades casados ="<<prom<<endl;
	prom=promEdad(0,n,0,0,3);
	cout<<"promedio de edades divorciados ="<<prom<<endl;
	prom=promEdad(0,n,0,0,4);
	cout<<"promedio de edades viudos ="<<prom<<endl;	
}
float Persona::promEdad(int i,int t,int s,int civil){
	if(i<t*2){
		if(pers[i]==civil){
			c++;
			s=s+pers[i+1];
		}
		return promEdad(i+2,t,c,s,civil);
	}
	else
	{
		if(c==0){
			return 0;
		}
		else
		{  return (float)s/c;
		}
	}	
}
int main(){
	Persona worker;
	worker.llenar();
	worker.imprimir();
	worker.promEdad();
	return 0;
	}
