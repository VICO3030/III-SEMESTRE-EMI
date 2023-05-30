#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class Trabajo
{
	int sueldo,tipo;
	public:
	Trabajo(int sueldo,int tipo);
	Trabajo(int  sue);
	void menu(int tipo);	
	void Bono(int sueldo,int tipo);
	void mostrar_Trabajdor();
};

Trabajo::Trabajo(int _sueldo,int _tipo)
{ 
    sueldo=_sueldo;
    tipo=_tipo;
}

Trabajo::Trabajo(int sue)
{
	sueldo=sue;
	sue=5000+rand()%(5000-50+1);
}

void Trabajo::menu(int tipo) 
{	
	do
	{	cout<<"INGRESO DEL TURNO QUE DESEE TRABJAR "<<endl;
		cout<<"1.- MANANA"<<endl;
		cout<<"2.- TARDE "<<endl;
		cout<<"3.- NOCHE "<<endl;
		cout<<"4.- SALIR "<<endl;
		cin>>tipo;
		if (tipo!=1 && tipo!=4)  cout<<"Incorrecto, vuelva a elegir\n";
	}while (tipo!=1 && tipo!=4 );
}

void Trabajo::Bono(int sueldo,int tipo)
{
	int aum;
	switch(tipo){
		case 1:
			aum=sueldo*0.05;
			cout<<"Turno     Sueldo        Bono "<<endl;
			cout<<"_____________________________________"<<endl;
			cout<<"Mañana "<<sueldo<<"    "<<aum<<endl;
		break;
		case 2:
		    aum=sueldo*0.03;
			cout<<"Turno     Sueldo        Bono "<<endl;
			cout<<"_____________________________________"<<endl;
			cout<<"Tarde "<<sueldo<<"    "<<aum<<endl;
		break;
		case 3:
		    aum=sueldo*0.04;
			cout<<"Turno     Sueldo        Bono "<<endl;
			cout<<"_____________________________________"<<endl;
			cout<<"Noche"<<sueldo<<"     "<<aum<<endl;
		break;
		case 4:break;
	}
}

int main(){
	Trabajo mostrar;
	mostrar.menu();

	return 0;
	
}

