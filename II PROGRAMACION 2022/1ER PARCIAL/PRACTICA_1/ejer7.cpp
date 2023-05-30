#include <iostream>
using namespace std;
void menu(); 
//funcion principal
int main(){
	int opcion;
	float n;
	menu();
	cout<<"ELIGE UNA OPCION "<<endl;
	cin>>opcion;
	switch(opcion){
	case 1:
	    cout<<"ingrese la cantidad de gramos de su paquete "<<endl;
		cin>>n;
		cout<<" El pago de su paquete de:"<<n<<" gramos hacia America del norte es de ="<<(n*11)<<"$"<<endl;
		//lamada
		break;
	case 2:
		cout<<"ingrese la cantidad de gramos de su paquete  "<<endl;
		cin>>n;
		cout<<" El pago de su paquete de:"<<n<<" gramos hacia America central es de ="<<(n*10)<<"$"<<endl;
	
	break;
	case 3:
		cout<<"ingrese la cantidad de gramos de su paquete  "<<endl;
		cin>>n;
		cout<<"El pago de su paquete de:"<<n<<" gramos hacia America del Sur es de ="<<(n*12)<<"$"<<endl;
	break;
	case 4:
		cout<<"ingrese la cantidad de gramos de su paquete  "<<endl;
		cin>>n;
		cout<<"El pago de su paquete de:"<<n<<" gramos hacia Europa  es de ="<<(n*24)<<"$"<<endl;
	break;
	case 5:
		cout<<"ingrese la cantidad de gramos de su paquete  "<<endl;
		cin>>n;
		cout<<" El pago de su paquete de:"<<n<<" gramos hacia Europa  es de ="<<(n*27)<<"$"<<endl;
	break;
	default:cout<<"ERROR OPCION  NO VALIDA .....!!!!!! ";break;	
	}
	return 0;
}
void menu(){
	cout<<""<<endl;
	cout<<"---Zona---------Ubicacion ---------Costo/gramo"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"   1.         America del norte       $11    "<<endl;
    cout<<"   2.         America central         $10    "<<endl;
	cout<<"   3.         America del Sur         $12    "<<endl;
	cout<<"   4.         Europa                  $24    "<<endl;
	cout<<"   5.         Asia                    $27    "<<endl;
	cout<<" ---------------------------------------- "<<endl;
}

