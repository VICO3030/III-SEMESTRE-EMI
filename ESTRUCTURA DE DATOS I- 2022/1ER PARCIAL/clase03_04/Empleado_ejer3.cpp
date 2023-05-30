#include <iostream>
using namespace std;
class Empleado
{    string nombre;
     int carnet;
     float sueldo;
     public:
     	void pedirNombre();
     	void pedirSueldo();
     	void pedirCarnet();	
     	string devnombre();
};
 void Empleado::pedirNombre(){
 	cout<<"ingrese su nombre"<<endl;
	cin>>nombre;
 }
 
void Empleado::pedirCarnet(){
	do{
		cout<<"ingrese numero de carnet =";
	    cin>>carnet;
	    if(carnet<0){
		cout<<"\nnumero de carnet invalido, ingrese numero positivo";
	    }
	}while(carnet<0);
}

void Empleado::pedirSueldo(){
	do{
		cout<<"ingrese su sueldo =";
		cin>>sueldo;
		if(sueldo<0){
			cout<<"\ningreso un sueldo incorrecto,vuelva a intentarlo";
		}
	}while(sueldo<0);
}

int main(){
	float sueldo1;
	int carnet1,i=1,cant;
	string nombre1;
	cout<<"ingrese la cantidad de empleados";
	cin>>cant;
	//imprimir el llamado de mis variable
	//datos por empleado
		Empleado datos;
		for (i=1;i<=cant;i++){
		cout<<"--------------------------------------------------"<<endl;
		cout<<"empleado #"<<i<<endl;
		datos.pedirNombre();
	    datos.pedirCarnet();
	    datos.pedirSueldo();
		cout<<"--------------------------------------------------"<<endl;	
	    cout<<"        Datos del empleado #   "<<i<<endl;
	    cout<<"El nombre del empleado  es ="<<nombre1<<endl;
	    cout<<"El numero de carnet del empleado es "<<carnet1<<endl;
	     cout<<"El el sueldo del empleado "<<i<<" es de ="<<sueldo1<<endl;
	    }
}
