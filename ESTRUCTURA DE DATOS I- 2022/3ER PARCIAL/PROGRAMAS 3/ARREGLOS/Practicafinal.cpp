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
 		virtual int mayor50()  {};
		 
 	
 };
 //clase derivada del cuadrado
 class Cuadrado:Figura{
   public:
   		Cuadrado (float b , float h):Figura (b,h){}
	    float superf(){
		return getBase()*getAlt();	
    	}
    	int mayor50(){
    		if(superf()>50){
    			return 1;
			}
			else{
				return 0;
			}
		}
	//para el POLIMORFISMO
	void imprimeSup(){
		cout<<"------------------------------------------------"<<endl;
		cout<<"El lado 1 del cuadrado es de ="<<getBase()<<endl;
		cout<<"El lado 2 del cuadrado es de = "<<getAlt()<<endl;
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
		int mayor50(){
    		if(Superficie()>50){
    			return 1;
			}
			else{
				return 0;
			}
		}
		 void imprimeSup(){
		 	cout<<"------------------------------------------------"<<endl;
		    cout<<"La base del triangulo es ="<<getBase()<<endl;
		    cout<<"La altura del triangulo es = "<<getAlt()<<endl;
		 	cout<<"superficie del triangulo = "<<Superficie()<<endl;
		 	
		 }
		

 };
 

void llenarC(Cuadrado *v[],int n )
{
	int cont=0;
	float high , width;
	cout<<"Se crearan "<<n<<" Cuadrados "<<endl;
    for (int i =0 ;i<n ;i++)
	{
	high= 1 +  rand()% (101-1)+(10+rand()%(100-10))/100.0;         //1 a 100
	width= 1 +  rand()% (101-1)+(10+rand()%(100-10))/100.0;         //1 a 100
	v[i]=new Cuadrado(high,width);
	cont=cont+v[i]->mayor50();
    }
     cout<<"La cantidad de superficies del CUADRADO  mayor a 50 son:"<<cont<<endl;

}
void llenarT(Triangulo *ar[], int cant)
{
	int cont=0;
	float high , width;
	cout<<"Se crearan "<<cant<<" Triangulos "<<endl;
    for (int i =0 ;i<cant ;i++)
	{
	high= 1 +  rand()% (101-1)+(10+rand()%(100-10))/100.0;         //1 a 100
	width= 1 +  rand()% (101-1)+(10+rand()%(100-10))/100.0;         //1 a 100
	ar[i]=new Triangulo(high,width);
	cont=cont+ar[i]->mayor50();
    }
    cout<<"La cantidad de superficies del TRIANGULO mayor a 50 son:"<<cont<<endl;

}
void imprimeC(Cuadrado *arr[], int cant, int pos)
{
	
	if(pos<cant)
	{	
		arr[pos]->imprimeSup();
		cout<<endl;
		imprimeC(arr, cant, pos+1);
	}
}
void imprimeT(Triangulo *arr[], int cant, int pos)
{

	if(pos<cant)
	{
		arr[pos]->imprimeSup();
		cout<<endl;
		imprimeT(arr, cant, pos+1);
	}
}


 int main(){
 	srand(time(NULL));
 	Triangulo *vec[35];
	Cuadrado *vec2[35];
	int cant,cant2;
	cout<<"Ingrese la cantida de figuras de Cuadrado = ";cin>>cant;
	llenarC(vec2,cant);
	cout<<"Ingrese la cantidad de figuras de Triangulo = ";cin>>cant2;
	llenarT(vec,cant2);
	cout<<"\t\t\tREPORTE DE FIGURAS CUADRADAS "<<endl;
	imprimeC(vec2,cant,0);
	cout<<"\t\t\tREPORTE DE FIGURAS TRIANGULARE"<<endl;
	imprimeT(vec,cant2,0);
//	cout<<"La cantidad e superficies que tienen mayor a 50 son : "<<c3<<endl;
 	
 	return 0;
 	
 }
