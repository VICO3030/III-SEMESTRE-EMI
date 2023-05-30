#include <iostream>
using namespace std;
class Tienda
{	float monto;
	string tipo;
	public:
		void pedirMonto();
		void pedirTipo();
		float descInc();
		float total();
		float devMonto();
		string devTipo();
};
void Tienda::pedirMonto()
{	do
	{	cout<<"Ingrese monto de venta : ";
		cin>>monto;
		if (monto<=0)
		{	cout<<"Valor incorrecto, se permiten solo mayores a cero\n";
		}
	}while(monto<=0);
}

void Tienda::pedirTipo()
{	do
	{	cout<<"Ingrese tipo contado o credito en minusculas : ";
		cin>>tipo;
		if (tipo!="contado"&& tipo!="credito")
		{	cout<<"Tipo de venta incorrecto\n";
		}
	}while(tipo!="contado"&& tipo!="credito");
}
float Tienda::descInc()
{	if (tipo=="contado")
	{	return monto*0.1;		// para poder sumar
	}
	else
	{	return monto*(-0.13);   // para poder restar
	}
}
float Tienda::total()
{	return monto+descInc();
}
float Tienda::devMonto()
{	return monto;
}
string Tienda::devTipo()
{	return tipo;
}
int main()
{	//Tienda vender;
	float mon[6],porc[6],tot[6];
	string tip[6];
	int venta;
	for (venta=1;venta<=5;venta++)
	{	Tienda vender;
		cout<<"Venta realizada # "<<venta<<endl;
		vender.pedirMonto();
		mon[venta]=vender.devMonto();
		vender.pedirTipo();
		tip[venta]=vender.devTipo();
		porc[venta]=vender.descInc();
		tot[venta]=vender.total();
	}
	cout<<"REPORTE DE VENTAS REALIZADAS\n";
	cout<<"================================\n";
	for(venta=1;venta<=5;venta++)
	{	cout<<"VENTA # "<<venta<<endl;
		cout<<"------------------\n";
		cout<<"Monto vendido : "<<mon[venta]<<" Bs\n";
		cout<<"Tipo de venta : "<<tip[venta]<<"\n";
		if (tip[venta]=="contado")
		{	cout<<"Monto de descuento : "<<porc[venta]<<" Bs\n";
		}	
		else
		{	cout<<"Monto de incremento: "<<porc[venta]<<" Bs\n";
		}
		cout<<"Monto total pagado : "<<tot[venta]<<" Bs\n";
	}
	return 0;
}

