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


void ejecutar(int op)
{

    int cant,carnet;float precio;
	string nom;
	cout<<"Ingrese su nombre : ";cin>>nom;
	if(op==1)
	{  

	cout<<"ingrese su nro de carnet : ";cin>>carnet;
	E_tiempoF impri(carnet,nom);
	impri.datos();
	impri.Promo();

	}
	if( op==2){
	cout<<"Ingrese su sueldo : ";cin>>precio;
    E_tiempoP ver(precio,nom);
    ver.datos();
    ver.Promo();
	}
}

void menu(){
	cout<<"         ELIJA TIPO DE TIEMPO           "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"   1.- TIEMPO FIJO  "<<endl;
	cout<<"   2.- TIEMPO PARCIAL  "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"ELIJA UNA OPION  ........:"<<endl;
}


int main()
{
	int opcion, tecla;
	do{
	    menu();
     	cin>>opcion;
	    ejecutar(opcion);
	    cout<<"\nPulse 1 para seguir y otro valor para terminar ...";
	    cin>>tecla;
	}while(tecla==1);

	return 0;
}

