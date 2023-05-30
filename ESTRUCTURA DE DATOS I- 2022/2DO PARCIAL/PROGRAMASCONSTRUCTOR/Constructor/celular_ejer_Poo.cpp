#include<iostream>
using namespace std;

class Celular
{  
   private :
       int tipo;
       float precio;
   public: 
        Celular(float p, int t);
        float descuento();
        float aPagar();      
};
Celular::Celular(float p, int t)
{    tipo=t;
    precio=p;
}

float Celular::descuento()
{ 
    cout<<"ingrese el tipo de celular <I , II, II> = ";cin>>tipo;
    cout<<"Ingrese el precio del celular = ";cin>>precio;
     switch (tipo)
     {   case 1 : return precio*0.10;
         case 2 : return precio*0.13;
         case 3 :  return precio*0.15;
	 }
}
float Celular::aPagar()
{   return precio-descuento();
}

int main(){

	Celular compra ();
	compra.descuento();
	compra.aPagar();
	return 0;
	
}
