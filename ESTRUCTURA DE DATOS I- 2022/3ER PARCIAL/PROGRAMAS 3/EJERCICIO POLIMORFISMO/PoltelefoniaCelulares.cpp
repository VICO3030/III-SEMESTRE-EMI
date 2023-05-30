//EJERCICIO 1:	Se tienen dos empresas de telefonía celular: ENTEL y VIVA, 
//ambas brindan el servicio a la población y se conservan los datos de 
//nro de teléfono, los minutos de llamadas, el tipo de pago (pre-pago y post-pago). 
//Las promociones difieren en cada empresa en base a las siguientes condiciones: a) 
//En caso de ENTEL, da la promoción de 10 SMS a todos los clientes pre-pago con 
//llamadas en el rango de 5 a 10 minutos. Caso contrario se les da WhastApp ilimitado. 
//A los clientes post-pago con llamadas mayores a 30 minutos, les brinda la carga doble. 
//Caso contrario se les entrega una bolsa de 30 MB para navegación.
////b) En caso de VIVA, a los clientes post-pago les brinda el servicio de WhasApp 
//ilimitado y 15 SMS. Para los clientes pre-pago con llamadas menores a 20 minutos 
//les brinda bolsas de navegación y caso contrario se les brinda recarga de 20 Bs. 
//y bolsas diarias de navegación.
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
class Empresa
{	int nroTelf,min;
	string tipo;
	protected:
		Empresa(int n,int m, string t)
		{	nroTelf=n;   min = m;     tipo = t;
		}
		int getNro()
		{	return nroTelf;
		}
		int getMin()
		{ 	return min;
		}
		string getTipo()
		{	return tipo;
		}
		virtual void resultados()
		{
		}
};
class Entel:Empresa
{	// sin atributos
	private:
		int promocion();
	public:
		Entel(int n,int m, string t):Empresa(n,m,t)
		{
		}
		void resultados();
};
//***** metodos de la empresa ENTEL
int Entel::promocion()
{// 1= 10 SMS    2 = WhatsApp Ilimitado  3= Doble carga  4 = 30 MB de navegacion
	if (getTipo()=="pre-pago")
	{	if (getMin()>=5 && getMin()<=10)
			return 1;
		else
			return 2;
	}
	else
	{	if (getMin()>30)
			return 3;
		else
			return 4;
	}			
}
void Entel::resultados()
{	int promo;
	string premio;
	promo=promocion();
	switch (promo)
	{	case 1: { premio= "Se gano 10 SMS "; break;}
		case 2: { premio= "Se gano WhatsApp Ilimitado "; break;}
		case 3: { premio= "Se gano Doble carga "; break;}
		case 4: { premio= "Se gano 30 MB de navegacion "; break;}
	}
	cout<<"Nro telefono = "<<getNro()<<endl<<"Minutos de llamada = "<<getMin()<<endl;
	cout<<"Tipo de pago = "<<getTipo()<<endl<<"Promocion = "<<premio<<endl;
}
class Viva :Empresa
{	private:
		int promocion();
	public:
		Viva(int n,int m, string t):Empresa(n,m,t)
		{
		}
		void resultados();
};
//***** metodos de la empresa VIVA
int Viva::promocion()
{// 1= WhatsApp Ilimitado y 15 SMS   2 = bolsas de navegacion
 //  3= recarga 20 bs y bolsas de navegacion
	if (getTipo()=="post-pago")
			return 1;
	else
	{	if (getMin()<20)
			return 2;
		else
			return 3;
	}			
}
void Viva::resultados()
{	int promo;
	string premio;
	promo=promocion();
	switch (promo)
	{	case 1: { premio= "Se gano WhatsApp Ilimitado y 15 SMS "; break;}
		case 2: { premio= "Se gano bolsas de navegacion "; break;}
		case 3: { premio= "Se gano recarga 20 bs y bolsas de navegacion "; break;}
	}
	cout<<"Nro telefono = "<<getNro()<<endl<<"Minutos de llamada = "<<getMin()<<endl;
	cout<<"Tipo de pago = "<<getTipo()<<endl<<"Promocion = "<<premio<<endl;
}
void menu()
{	cout<<"           EMPRESAS TELEFONICAS  "<<endl;
	cout<<" =================================== "<<endl;
	cout<<"  1. EMPRESA ENTEL "<<endl;
	cout<<"  2. EMPRESA VIVA "<<endl;
}
int main()
{	int telf,min,opcion,seguir;
	string pago[2]={"pre-pago","post-pago"};
	srand(time(NULL));
	int ind;
	do
	{	ind= rand()%2;
		telf=rand()%( 7999999+1-  6000000) + 6000000;  // 6000000  a 7999999
		min= rand()% (121-1)+1;       // 1 a 120
		menu();
		cout<<"Elija una de las opciones.. ";
		cin>>opcion;
		switch (opcion)
		{	case 1: {	Entel persona(telf,min,pago[ind]);
						persona.resultados();
						break;
					}
			case 2:	{	Viva persona2(telf,min,pago[ind]);
						persona2.resultados();
						break;
					}
			default: cout<<"Opcion incorrecta.. "<<endl;
		}
		cout<<"Continuar presione 1, Salir presione 0 u otro";
		cin>>seguir;
	}while(seguir==1);
}
