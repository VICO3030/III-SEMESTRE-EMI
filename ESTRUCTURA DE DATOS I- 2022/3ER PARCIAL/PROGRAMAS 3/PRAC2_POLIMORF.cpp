#include<iostream>
#include<string.h>
using namespace std;
class Empresa{
	//atributos
	string nombre;
	protected :
		Empresa(string _nombre){
			nombre=_nombre;
		}
		string getNom(){
			return nombre;
		}
		//polimorfimos
		virtual void Promo(){}
		virtual void datos(){
		cout<<"NOMBRE : "<<nombre<<endl;
		}
};

class E_tiempoF:Empresa{
	//atributos
	int nroCarnet;
	public: 
	E_tiempoF(int _nroCarnet,string nombre):Empresa(nombre){
		nroCarnet=_nroCarnet;
	}
	void datos(){}
	void Promo()
	{
		if((nroCarnet%10)%2!=0){
			cout<<"TIENE EL PREMIO DE UN TELEVISOR"<<endl;
		}
		else{
			cout<<"NO SE LE HA OTORGAD NINGUN PREMIO"<<endl;
		}
	}

};



class E_tiempoP : Empresa{
	float sueldo;
	public:
		E_tiempoP(float _sueldo, string _nombre):Empresa(_nombre){
			sueldo=_sueldo;
		}
		void datos(){}
    	void Promo(){
		    if(sueldo <3000){
			   cout<<"FELICIDADES HA SIDO PROMO VIDO "<<endl;
		    }
	    	else{
			   cout<<" NO HA SIDO PROMOVIDO "<<endl;
		    } 
	    }
};



void menu(string n)
{	int opcion,carnet;
     float sueldo;
	cout<<" MENU DE EMPLEADO "<<endl<<"----------------------------"<<endl;
	cout<<"1. TIEMPO FIJO : "<<endl;  
	cout<<"2. TIEMPO PARCIAL : "<<endl;  
	cout<< "Opcion =  "; cin>>opcion;
	switch (opcion)
	{
		case 1: {	
					do
					{	cout<<" INGRESE SU NUMERO DE CARNET ";  cin>>carnet;
					} while (carnet<=0);
					E_tiempoF mostrar(carnet,n);
					mostrar.datos();
					mostrar.Promo();
					break;
				}
		case 2: {	
					do
					{	cout<<" INGRESE SU SUELDO : ";  cin>>sueldo;
					} while (sueldo<=0);
					E_tiempoP ver(sueldo,n);
					ver.datos();
					ver.Promo();
					break;
				}				
	}
}
void datos()
{	string nombre;
	int edad;
	cout<<"INGRESO DE DATOS "<<endl<<"-------------------"<<endl;
	cout<<"SU NOMBRE : ";  cin >>nombre;
	menu(nombre);
}

int main()
{	int seguir;
	do
	{	datos();
		cout<<endl;
		cout<<"Desea continuar..[0]= terminar y otro valor para seguir"; cin>>seguir;
	}while(seguir!=0);
	return 0;
}
