// con arreglos en la clase con el mismo problema
#include <iostream>
using namespace std;
class TiendaVenta
{	float monto[5];
	string tipo[5];
	public:
		void llenar();
		float pedirMonto();
		string pedirTipo();
		float descInc(int p);
		float total(int p);
		void reporte();
};
float TiendaVenta::pedirMonto()
{	float mon;
	do
	{	cout<<"Ingrese monto de venta : ";
		cin>>mon;
		if (mon<=0)
		{	cout<<"Valor incorrecto, se permiten solo mayores a cero\n";
		}
	}while(mon<=0);
	return mon;
}
string TiendaVenta::pedirTipo()
{	string tip;
	do
	{	cout<<"Ingrese tipo contado o credito en minusculas : ";
		cin>>tip;
		if (tip!="contado"&& tip!="credito")
		{	cout<<"Tipo de venta incorrecto\n";
		}
	}while(tip!="contado"&& tip!="credito");
	return tip;
}
void TiendaVenta::llenar()
{	for(int i=0;i<5;i++)
	{	monto[i]=pedirMonto();
		tipo[i]=pedirTipo();
	}
}
float TiendaVenta::descInc(int p)
{	if (tipo[p]=="contado")
	{	return monto[p]*(-0.1);		// para poder restar
	}
	else
	{	return monto[p]*(0.13);   // para poder sumar
	}
}
float TiendaVenta::total(int pos)
{	return monto[pos]+descInc(pos);
}
void TiendaVenta::reporte()
{	cout<<"REPORTE DE VENTAS REALIZADAS\n";
	cout<<"================================\n";
	for(int venta=0;venta<5;venta++)
	{	cout<<"VENTA # "<<(venta+1)<<endl;
		cout<<"------------------\n";
		cout<<"Monto vendido : "<<monto[venta]<<" Bs\n";
		cout<<"Tipo de venta : "<<tipo[venta]<<"\n";
		if (tipo[venta]=="contado")
		{	cout<<"Monto de descuento : "<<descInc(venta)<<" Bs\n";
		}	
		else
		{	cout<<"Monto de incremento: "<<descInc(venta)<<" Bs\n";
		}
		cout<<"Monto total pagado : "<<total(venta)<<" Bs\n";
	}
}
int main()
{	TiendaVenta store;
	store.llenar();
	store.reporte();
	return 0;
}

