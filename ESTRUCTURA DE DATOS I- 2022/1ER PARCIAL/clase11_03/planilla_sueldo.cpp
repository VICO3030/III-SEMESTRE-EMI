//CUANTOS EMPLEADOS TIENEN MAYORES A 200BS
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class Trabajador{
	float sueldo[50];
	int turno[50],tam;
	public:
	    void pedirTam(int val);
		void llenar(int i);
	    void imprimir(int i,float des[],float ben[]);
	    void  descuento(int i,float desc[]);
	    void beneficio(int i, float benef[]);
	    void reporte();
		int cuentaEmpleados(int i,float desc[]) ;  //recursivo
};
//imp

void Trabajador::pedirTam(int val){
	    	if (val>0){
	    		tam=val;
			}
			else
			{
				cout<<"ingrese un valor mayor a 0 para la cantidad de trabajadores  : ";
				cin>>val;
				pedirTam(val);
			}
}
void Trabajador::llenar(int i){
	if(i<tam){
		turno[i]=1+rand()%(2+1-1) ;   //valores de 1 a 2
		sueldo[i]= (1000+rand()%(5000+1-1000))+(0+rand()%(99+1-0))/100.0; //de 1000 a 5000
		// de 1000 a 5000 con dos decimales
		llenar(i+1);
	}
}
void  Trabajador::descuento(int i,float desc[]){ //1=5%   2=3%
	   if(i<tam){
	   	if (turno[i]==1){
	   		desc[i]=sueldo[i]*0.05;
	   }
	   else
	   {
	   	desc[i]=sueldo[i]*0.03;
	   }
	   descuento(i+1,desc);
	   }
}
void Trabajador::beneficio(int i, float benef[]){
	if(i<tam){
		if(turno[i]==1){
			benef[i]=sueldo[i]/3;      
		}
		else
		{
			benef[i]=sueldo[i]/5;
		}
	    beneficio(i+1,benef); //ciclo recursivo
	}
}
void Trabajador::imprimir(int i , float des[],float ben[]){
	if(i<tam){
		cout<<"**********************Trabajador #"<<(i+1)<<"*******************\n";
		cout<<"su turno es : ";
		if(turno[i]==1){
			cout<<"Mañana\n";
		}
		else
	    {
	    	cout<<"Tarde\n";		
		}
		cout<<"Su sueldo es :"<<sueldo[i]<<endl;
	    	cout<<"su beneficio es :"<<ben[i]<<"bs"<<endl;
			cout<<"su descuento es :"<<des[i]<<"Bs"<<endl;
			cout<<"SUELDO TOTAL ES "<<sueldo[i]+ben[i]-des[i]<<"Bs"<<endl;
	    imprimir(i+1,des,ben);
	}  
	    
}
void Trabajador::reporte(){
	float desc[50],benef[50];
	pedirTam(-1)  ;   //cualquier valor negativo
	llenar(0);
	descuento(0,desc);
	beneficio(0,benef);
	cout<<"RESPORTE DE SUELDOS DE TRABAJADORES\n=================\n";
	imprimir(0,desc,benef);
	cout<<"se encontraron "<<cuentaEmpleados(0,desc);
}
int Trabajador::cuentaEmpleados(int i,float desc[]){
	if(i<tam){
		if(desc[i]>200)
		{return cuentaEmpleados(i+1,desc)+1;  //ciclo recursivo
		}
		else
		{return cuentaEmpleados(i+1,desc)+0;
		}
	}
	else
	{  if (desc[i]>200)
	  {return  1;      } //caso de fin 
	  else
	  { return 0;    }
    }
}
int main(){
	Trabajador worker;
	srand(time(NULL));  //distintos sueldos
	worker.reporte();
	return 0;
}
