//Encapsulacion>clase->objeto
//+ Herencia -> jerarquia: Simple y Multiple
//+polimorfismo
//
//la herencia-> captura cosas comunes-> factorizar
//
//Simple->base->factoriza atributos o metodos->polimorfismo
//HERENCIA.-
//La herencia tambien se puede decir que es la reutilizacion de codigo
//*se crean clases derivadas a partir de la clase base.
//*la clase base debe proteger sus metodos(usar protected).
//HERENCIA SIMPLE.-
//*una sola clase base tiene varias clases derivadas 
//*Se tienen atributos y metodos comunes a las derivadas
//Como se aplica a la programacion.
/*
public class Figura
{
 protected:
  float bas,alt;
 public:
  Figura(float b,float h);
  float getBase();
  float getAlt();
};esta mal
el siguiente esta bien

clase derivada cuadrado
public class Cuadrado:Figura //se crea derivada
{
   public cuadrado(float b, float h);
   float superf();
};
Cuadrado:: Cuadrado(float a, float b):float h):Figura(b,h) //derivadas sin atributos extras
{
}
*/
#include<iostream>
using namespace std;

class Boleto
{
	float precio;
	protected:
		Boleto(float p)
		{
			precio= p;
		} 
		float obtPrecioB()
		{
			return precio;
		}
};
class Hotel
{
	float hosp;
	protected:
		Hotel(float h)
		{
			hosp=h;
		}
		float obtPrecioH()
		{
			return hosp;
		}
};
class Vacacion:Boleto,Hotel
{
	public:
		Vacacion(float precioBo, float precioHo):Boleto(precioBo),Hotel(precioHo)
		{
		}
	void resultado()
	{
		if(obtPrecioB()<100 && obtPrecioH()<200)
		{
			cout<<"Una semana de vacaciones";
		}
		if(obtPrecioB()>=100 && obtPrecioH()<200)
		{
			cout<<" 2 dias de vacacion ";
		}
		if(obtPrecioH()>=200)
		{
			cout<<"No tiene vacaciones";
		}
	}
};
int main()
{
	int bol;
	float hotel;
	cout<<"Ingrese el precio del boleto: "<<endl;
	cin>>bol;
	cout<<"Ingrese el precio del hospedaje del hotel: "<<endl;
	cin>>hotel;
	Vacacion plan(bol,hotel);
	plan.resultado();
	return 0;
}
