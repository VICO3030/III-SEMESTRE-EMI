#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class FiguraGeometrica{
	float alto,ancho;
	protected : 
	FiguraGeometrica( float _alto,float _ancho){
		alto=_alto;
		ancho=_ancho;
	}
	float getAlto(){
		return alto;
	}
	float getAncho(){
		return ancho;
	}
};

class CostoPintar{
	protected:
		costoPintar(){
	}
	float costo(float area){
		return area*70;
	}
	
};

class Rectangulo:FiguraGeometrica, CostoPintar{
	public:
		Rectangulo(float al, float an):FiguraGeometrica(al,an),CostoPintar()
		{
		}
		float area()
		{
			return getAlto()*getAncho();
		}
		float Cuesta(){
			return costo(area());
		}
		void reporte ()
		{
			cout<<"Alto del Rectangulo :"<<getAlto()<<endl;
			cout<<"Ancho del Rectangulo :"<<getAncho()<<endl;
			cout<<"Area del Rectangulo :"<<area()<<endl;
			cout<<"Costo del pintado : "<<costo(area())<<endl;
		}
};

void crear(Rectangulo *v[],int n )
{
	float high , width;
	cout<<"Se crearan "<<n<<" Rectangulos "<<endl;
    for (int i =0 ;i<n ;i++)
	{
	high= 1 +  rand()% (101-1)+(10+rand()%(100-10))/100.0;         //1 a 100
	width= 1 +  rand()% (101-1)+(10+rand()%(100-10))/100.0;         //1 a 100
	v[i]=new Rectangulo(high,width);
	
    }

}

void mostrar(Rectangulo *v[],int n )
{
	cout<<"REPORTE DE FIGURAS CREADAS  "<<endl;
    for (int i =0 ;i<n ;i++)
	{
		v[i]->reporte();
    }

}
int CantiFiguras( Rectangulo *v[], int dim, int cont, int k){
	float valor;
	if(k<dim)
	{	valor=v[k]->Cuesta();	
		if(valor>=100 && valor <= 100000) cont ++;
		return CantiFiguras(v,dim,cont,k+1);
	}
    else return cont;
}
int main()
{
	
	int n ;
	Rectangulo *rectangle[40];
    n=1+rand()%(41-1);  
    crear(rectangle,n);
	mostrar(rectangle,n);
	
	
	
    return 0;
}
