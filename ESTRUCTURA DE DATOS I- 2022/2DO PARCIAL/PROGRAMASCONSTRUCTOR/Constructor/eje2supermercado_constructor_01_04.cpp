#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
class Supermercado
{     
	int *vender;
	int tam; 
	public:
	    Supermercado(int ventas);
	    void realizaVenta();
	    int totalVentaProducto(int ti);
	    void montoAcumulado();
	    void mostrarVenta();
};

Supermercado::Supermercado(int ventas)
{ vender= new int[ventas*3];
  tam=ventas*3;
}

void Supermercado::realizaVenta()
{
	for (int i=0;i<tam;i=i+3)
	{   vender[i]=1+rand()%(3+1-1);    //rango de tipos de 1 a 3
	    switch(vender[i]){
	    	case 1: vender[i+1]=15;break;
	    	case 2: vender[i+1]=20; break;
	    	case 3: vender[i+1]=32;
		}
		vender[i+2]=1+rand()%(50+1-1);     //rango de 1 a 50
	}
}

int Supermercado::totalVentaProducto(int ti)
{   int cantTotal=0;
    for(int i=0;i<tam;i=i+3){
    	if(vender[i]==ti)
    	{   cantTotal=cantTotal+vender[i+2];
		}
	}
	return cantTotal;
}

void Supermercado::montoAcumulado()
{   int ven=1,subtotal,total=0; 
   for(int j=0;j<tam;j=j+3)
    { cout<<"Venta # "<<ven<<endl;
    subtotal=vender[j+1]*vender[j+2];
      cout<<"Acumulado = "<<subtotal<<endl;
      total=total+subtotal;
      ven++;
	}
	cout<<"Monto total acumulado de las ventas es : "<<total<<endl;
}

void Supermercado::mostrarVenta(){
	int ven=1;
	for(int i=0;i<tam;i=i+3){
		cout<<"\nIMRESION DE VENTAS  (TIPO -PRECIO- CANTIDAD )"<<endl;
		cout<<"\nMuestra de venta "<<ven<<endl;
	    cout<<"Tipo = "<<vender[i]<<endl;
	    cout<<"Precio = "<<vender[i+1]<<endl;
	    cout<<"Cantidad = "<<vender[i+2]<<endl;
	    ven++;
	}
}

int main(){
	srand(time(NULL));   //CADA vexz cambie los aleatorios
	int cantVentas;
	do
	{   cout<<"Ingrese el numero de Ventas  : ";
	    cin>>cantVentas;
	    if(cantVentas<=0)  
	    { cout<<"El valor no puede ser cero ni  negativo\n";
		}
	}while(cantVentas<=0);
	Supermercado procesoVender(cantVentas);
	procesoVender.realizaVenta();
	cout<<"Cantidad total vendida del producto 1 ="<<procesoVender.totalVentaProducto(1)<<endl;
	cout<<"Cantidad total vendida del producto 2 ="<<procesoVender.totalVentaProducto(2)<<endl;
	cout<<"Cantidad total vendida del producto 3 ="<<procesoVender.totalVentaProducto(3)<<endl;
	procesoVender.montoAcumulado();
	procesoVender.mostrarVenta();
}
