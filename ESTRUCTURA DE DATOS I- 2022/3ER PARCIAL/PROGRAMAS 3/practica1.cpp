#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Encargado
{
	int cant;
	float precio;
	protected :
		Encargado(int _cant, float _precio)
		{
			cant=_cant;
			precio=_precio;
		}
		int getCant(){
			return cant;
		}
		float getPrecio(){
			return precio;
		}
};

class P_vendidos : Encargado{
    int cant;float p;
	public:
		P_vendidos(int nro ,float _p) :Encargado(nro,_p){	
	       cant=nro;
	       p=_p;
		}
	void total(){
	float total,total2=0;
	int uni=0;
			for(int i=0 ;i<cant ;i++){
			cout<<"EL precio de la venta  ["<<i<<"] es = ";cin>>p;
			cout<<"Cuantas cantidades vendio del producto  : ";cin>>uni;
			total=p*uni;
			total2=total2+total;
			
		}
	cout<<"EL TOTAL A PAGAR ES DE  = "<<total2;
	}	

};

class P_oferta : Encargado{
	int cant;float precio;
	public:
		P_oferta(int _cant,float _precio):Encargado(_cant,_precio){
			cant=_cant;
			precio=_precio;
		}
	void datos(){
		int uni;
		cout<<"Ingrese la cantidad de productos disponibles";cin>>cant;
		for(int i=0 ;i<cant ;i++){
			cout<<"---------------------------------------------------------"<<endl;
			cout<<"ingrese el precio unitario del producto ["<<i<<" ] = ";cin>>precio;
			cout<<"cuantas unidades le quedan del producto : ";cin>>uni;
			if(precio<100 && uni>200){
				cout<<"OFERTAR EL PRODUCTO  CON 30 % DE DESCUENTO "<<endl;
				cout<<"El nuevo precio a pagar es  : "<<precio*0.7<<endl;
			}else{
				cout<<"SE VENDE AL MISMO PRECIO "<<endl;
			}

		}
	}
};



void ejecutar(int op)
{
	srand(time(NULL));

    int cant;float precio;
	//precio=99+rand()%(99+150);
	if(op==1)
	{  

	cout<<"Ingrese la cantidad de productos = ";cin>>cant;
	P_vendidos mostrar(cant,precio);
	mostrar.total();
	
	}
	if( op==2){
		P_oferta ver(cant,precio);
		ver.datos();

	}
}

void menu(){
	cout<<"         ELIJA TIPO DE COMPRA           "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"   1.- PRODUCTOS VENDIDOS  "<<endl;
	cout<<"   2.- PRODUCTOS CON OFERTA  "<<endl;
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

