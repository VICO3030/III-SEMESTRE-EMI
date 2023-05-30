#include<iostream>
#include<stdlib.h>
using namespace std;

class Telefono
{
	private:
		int Tipo;
		float precio;
	public:
		//switch tipo 1,2,3;
		Telefono(int, float);
		void descuento();
		
};
Telefono::Telefono(int _Tipo,float _precio)
{
	Tipo= _Tipo;
	precio=_precio;
}

void Telefono::descuento()
{
    precio=500+rand()%(500+600);
    Tipo=1+rand()%(1+3);
    switch(Tipo)
    {
    	case 1: 
    	cout<<"El celular es de tipo = "<<Tipo;
    	cout<<"El precio del celular es de : "<<precio<<endl;
		cout<<"El precio TOTAL  a pagar es de  : "<<(precio*0.10)-precio;
    	case 2: 
		cout<<"El celular es de tipo = "<<Tipo;
    	cout<<"El precio del celular es de : "<<precio<<endl;
    	cout<<"El precio TOTAL  a pagar es de  : "<<(precio*0.13)-precio;
    	case 3: 
       cout<<"El celular es de tipo = "<<Tipo;
    	cout<<"El precio del celular es de : "<<precio<<endl;
		cout<<"El precio de pagar es de "<<(precio*0.15)-precio;
	}
}


int main()
{
	Telefono mostrar();
	mostrar.descuento();
	return 0;
}
