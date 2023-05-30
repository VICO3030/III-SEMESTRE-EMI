#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Supermercado
{   //atributos
	int cant;
	float precio;
	protected :
		Supermercado(int C, float P)
		{
			cant=C;
			precio=P;
		}
		int getCantidad(){
			return cant;
		}
		float getPrecio(){
			return precio;
		}
};
class oferta : Supermercado{
	int cant;float precio;
	public:
		oferta(int _cant,float _precio):Supermercado(_cant,_precio){
			cant=_cant;
			precio=_precio;
		}
	void condicion(){

			if(precio<100 && cant>200){
				cout<<"El nuevo precio a pagar es  : "<<precio*0.7<<"con 30 % de descuento"<<endl;
			}else{
				cout<<"EL PRODUCTO UNITARIO SE VENDERA AL MISMO PRECIO !! "<<endl;
			}

		}

};

class vendidos : Supermercado{
    int cant;float p;
	public:
		vendidos(int nro ,float _p) :Supermercado(nro,_p){	
	       cant=nro;
	       p=_p;
		}
	void reporte_ventas(){
	float total;
		total=p*cant;
		cout<<"El total del pago por el producto es  : "<<total;	
		}
};



void ejecutar(int po)
{
//precio y cantidad
    int c;
	float p;
	if(po==1)
	{  
        cout<<"Ingrese la cantidad de productos = ";cin>>c;
	     cout<<"ingrese el precio unitario del producto  : ";cin>>p;
		oferta santiago(c,p);
		santiago.condicion();
	
	}
	if( po==2){

	cout<<"Ingrese la cantidad de productos = ";cin>>c;
	cout<<"ingrese el precio  : ";cin>>p;
	vendidos santi(c,p);
	santi.reporte_ventas();

	}
}

void menu(){
	cout<<"         INGRESE TIPO DE VENTA          "<<endl;
	cout<<"_________________________________________"<<endl;
	cout<<"   1.- CON OFERTA  "<<endl;
	cout<<"   2.- VENDIDOS  "<<endl;
	cout<<"___________________________________"<<endl;
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

