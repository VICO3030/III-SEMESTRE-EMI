#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
 class Figura{
 	private:
 		float bas,alt;
 	protected :
 		Figura(float _bas,float _alt){
 			bas=_bas;
 			alt=_alt;
		 }
 		float getBase(){
 			return bas;
		 }
 		float getAlt(){
 			return alt;
		 }
 		virtual void imprimeSup()   {};
 			
 	
 };
 //clase derivada del cuadrado
 class Cuadrado:Figura{
   public:
   		Cuadrado (float b , float h):Figura (b,h){}
	    float superf(){
		return getBase()*getAlt();	
    	}
	//para el POLIMORFISMO
	void imprimeSup(){
		cout<<"Superficie cuadrado = "<<superf()<<endl;
	}
 };
 
 
 //clase derivada del  triangulo 
 class Triangulo:Figura{
 	public:
 		Triangulo(float b , float h):Figura(b,h){}
		 float Superficie(){
		 	return (getBase()*getAlt())/2;
		 }
		 //para el POLIMORFISMO
		 void imprimeSup(){
		 	cout<<"superficie del triangulo"<<Superficie()<<endl;
		 }	 
 };
float numeroDecimal(){
	float nro, dec;
    nro=10+rand()%(101-10);//valores de 10 a 100
	dec=(float)(1+rand()%(101-1))/100;
	return nro+dec;
		 	
}
 int main(){
 	
 	float base, alt, dec;
 	srand(time(0));
 	base=numeroDecimal();
 	alt=base;
 	cout<<"la figura tiene base : "<<base<<" Y altura "<<alt<<endl;
 	Cuadrado square(base,base);
 	square.imprimeSup();
 	base=numeroDecimal();
 	alt=numeroDecimal();
 	cout<<endl;
	cout<<"La figura tiene base  "<<base<<" y altura "<<alt<<endl;
	Triangulo mostrar(base, alt);
	mostrar.imprimeSup();
	//getch(); 	
 	
 	
 	
 	return 0;
 	
 }
