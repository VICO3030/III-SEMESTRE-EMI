#include <iostream>
using namespace std;
class Celular
{	int marca;
	float precio;
	public:
		int valMarca();
		float descuento()
		{	float desc;
			switch (marca)
			{	case 1:{	desc=precio*0.2; 
							break; }
				case 2:{	desc=precio*0.14; 
							break; }
				case 3:{	desc=precio*0.13; 
							break; }
				case 4:{	desc=precio*0.17; 
							break; }
			}
			return desc;
		}
		//aqui se obtiene el pago final del celular
		float pagoFinal()
		{	return precio - descuento();
		}
		// aqui se imprimen los resultados de la marca, el precio, el descuento y pago final del celular comprado
		void reporte()
		{	switch (marca)
			{	case 1:{	cout<<" Ha comprado = Galaxy J\n"; 
							break; }
				case 2:{	cout<<" Ha comprado = Galaxy On\n";
							break; }
				case 3:{	cout<<" Ha comprado = Galaxy Core\n"; 
							break; }
				case 4:{	cout<<" Ha comprado = Galaxy Note\n";
							break; }
			}
			cout<<"Su precio es : "<<precio<<" Bs.-"<<endl;
			cout<<"Su descuento es : "<<descuento()<<" Bs.-"<<endl;
			cout<<"Su PAGO FINAL es : "<<pagoFinal()<<" Bs.-"<<endl;
		}
		float valPrecio();
		void datos()
		{	marca=valMarca();
			precio =valPrecio();
		}
};
int Celular::valMarca()
{	int opcion;
	do
	{	cout<<"   Marcas de celular \n***********************\n";
		cout<<"1. Galaxy J\n";
		cout<<"2. Galaxy On\n";
		cout<<"3. Galaxy Core\n";
		cout<<"4. Galaxy Note\n";
		cout<<"Elija una de las opciones : ";
		cin>>opcion;
		if (opcion<1 || opcion>4)
		{	cout<<"Esa opcion no es correcta, vuelva a intentar\n";
			system("pause");
			system("cls");
		}
	}while (opcion<1 || opcion>4);
	return opcion;
}

float Celular::valPrecio()
{	float p;
	do
	{	cout<<"Ingrese el precio del celular : ";
		cin>>p;
		if (p<=0)
		{	cout<<"El precio del celular es incorrecto, ingrese valores positivos > a 0\n";
		}
	}while (p<=0);
	return p;
}
int main()
{	Celular phone;
	float ac=0;
	for(int vender=1;vender<=3;vender++)
	{	phone.datos();
		cout<<"Venta # "<<vender<<"\n====================\n";
		phone.reporte();
		ac=ac+phone.pagoFinal();
	}
	cout<<"Se ha ganado "<<ac<<" Bs"<<endl;
}
