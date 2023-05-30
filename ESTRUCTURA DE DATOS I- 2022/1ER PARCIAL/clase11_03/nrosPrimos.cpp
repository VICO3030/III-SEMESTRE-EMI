//ejercicios 2 numeros primos 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Primo{
	int nros[30],dim;
	public:
		void llenar(int i );
		int pedirNro(int val);
		bool averiguaPrimo(int nro,int cont);
		void imprimir(int i);
		int sumarPrimos(int i);
		void iniciar();
};
int Primo::pedirNro(int val){
	if(val<=0){
		cout<<"ingrese un numero mayor a 0 : ";
		cin>>val;
		return pedirNro(val);   //ciclo recursivo
	}
	else
	{  return val;
	}
}
void Primo::iniciar(){
	dim=1+rand()%(10+1-1);
}

void Primo::llenar(int i ){
	if(i<dim){
		nros[i]=pedirNro(-85);
		llenar(i+1);//cilco recursivo	
	}
	
}
bool Primo::averiguaPrimo(int nro, int cont){
	if(cont<=nro/2){
		if(nro%cont==0){
			return false;
		else
		  { averiguaPrimo(nro,cont+1);
		  }
		}
	}
	else
	{ return true;  }	
}
void Primo::imprimir(int i )
{   if(i<dim)
    {
    	if(averiguarPrimo(nros[i],1)==false){
    		cout<<nros[i]<<"No es primo "<<endl;
    		else
    		{cout<<nros[i]<<"si es primo "<<endl;
			}
			imprimir (i+1);
		}
	}

}
int Primo::sumarPrimos(int i)
{  if(i<dim)
   {   if(averiguarPrimo(nros[i],2)==false)
	   {  return sumaPrimos(i+1)+nros[i];
	   }
	   else
	   {  return sumaPrimos(i+1);  //ciclo recursivo
	   }  
   }
   else
   {  return 0; //caso fin 
   }
}
int main(){
	Primo prim
	prim.iniciar();
	prim.llenar();
	prim.imprimir();
	cout<<prim.sumaPrimos(0);
	//aleatoriomente
}
