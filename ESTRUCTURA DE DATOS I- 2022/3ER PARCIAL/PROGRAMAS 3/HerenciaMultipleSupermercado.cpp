#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class Supermercado
{	string nombre;
	protected:
		Supermercado(string n){ nombre=n;	}
		string obtNombre() { return nombre;	}
};
class Producto
{	int cant;
	float precio;
	protected:
		Producto(int c, float p) { cant=c; precio=p;		}
		int obtCantidad()  {	return cant;		}
		float obtPrecio()  {	return precio;		}
		float totalPagar() {    return cant*precio;		}
		float descuento() {  if (precio<100 && cant >200)  return precio*0.3;
								else return 0;
						  }
		void nuevoPrecio(); 
};
void Producto::nuevoPrecio()
{ 	if (descuento()==0) 	cout<<"Se vende al mismo precio ";
  	else cout<<"El nuevo precio de venta es = "<<precio-descuento();
	cout<<endl;
}
		
class Vender:Supermercado,Producto
{	int tipo;
	public:
		Vender(string, int,float, int);
		void mostrar();
};
Vender::Vender(string n, int c, float p, int t):Supermercado(n),Producto(c,p)
{	tipo=t;
}
void Vender::mostrar()
{	if (tipo==1)    // es producto vendido
	{	cout<<"Supermercado = "<<obtNombre()<<endl;
		cout<<"Cantidad comprada = "<<obtCantidad()<<endl;
		cout<<"Precio unitario = "<<obtPrecio()<<endl;
		cout<<"Total a pagar = "<<totalPagar()<<endl;
	}
	else
	{	cout<<"Supermercado = "<<obtNombre()<<endl;
		cout<<"Cantidad disponible = "<<obtCantidad()<<endl;
		cout<<"Precio unitario = "<<obtPrecio()<<endl;
		cout<<"Su descuento es = "<<descuento()<<endl;
		nuevoPrecio();
	}
}

int aleatorio(int li, int ls)
{	return li+rand()%(ls+1-li);
}

int main()
{	int tipo, cant,ind;
	float precio;
	string nombre[4]={"Hipermaxi","Ktal","SuperBarato","ICE Norte"};
	srand(time(0));
	tipo=1; //aleatorio(1,2);
	cant=aleatorio(1,500);
	ind=aleatorio(0,3);
	precio=aleatorio(10,300)+(1+rand()%(100-1))/100.0;
	Vender venta(nombre[ind],cant,precio,tipo);
	venta.mostrar();
}
