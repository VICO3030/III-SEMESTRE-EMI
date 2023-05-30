#include<iostream>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

class Producto{
	//atributos
	float precio;int cant;
	protected :
		Producto (float _precio , int _cant){
			precio= _precio;
			cant=_cant;
		}
		float getPrecio(){
			return precio;
		}
		int getCant(){
			return cant;
		}
};

class Supermercado{
	//atributos
	string nomb;
	string direc;
	protected:
		Supermercado(string _nom , string _direc){
			nomb=_nom;
			direc=_direc;
			
		}
		string getNom(){
			return nomb;
		}
		string getDirec(){
			return direc;
		}
	
};

class Vender : Producto, Supermercado {
	public:
		Vender (float p , int c , string n , string d):Producto ( p , c), Supermercado(n,d)
		{
		}
		float vendidos(){
			return getPrecio()*getCant();
		}
		void reporteVendidos(){
			cout<<" SUPERMERCADO : "<<getNom()<<endl;
			cout<<"DIRECCION : "<<getDirec()<<endl;
			cout<<"Precio Unitario "<<getPrecio()<<endl;
			cout<<"cantidad Comprada "<<getCant()<<endl;
			cout<<"TOTAL A PAGAR  "<<vendidos()<<endl;
			
		}
		void ofertados()
		{
			if (getPrecio()<100 &&  getCant()>200){
				cout<<"Descuento "<<getPrecio()*0.3<<endl;
				cout<<"Nuevo precio  : "<<getPrecio()*0.7<<endl;
				
			}
			else {
				cout<<"NO SE OFERTA EL PRODUCTO !!!! "<<endl;
			}
		}
		void reporteOfertados(){
			cout<<"SUPERMERCADO : "<<getNom()<<endl;
			cout<<"DIRECCION : "<<getDirec()<<endl;
		    cout<<"Precio Unitario  de una venta  :  "<<getPrecio ()<<endl;
		    cout<<"Cantidad disponible  : "<<getCant()<<endl;
    		ofertados();
		}
};

int main(){
	srand(time(NULL));
	int cant;float precio,cant_super;
	int tipo, mas;
	string nombre[5]={"HIPERMAXI" , "EMI" , "ICE NORTE", "SAN SIMON ", "TODOY PARA SIEMPRE"};
	string direccion[5]={"FINAL_AMERICA_ESTE","KM3 	QUILLACOLLO", "BEIIJIN-03", "PARADA_CHAPARE","LANZA_PRADO"};
	cout<<"Ingrese la cantidad de Supermercados : ";cin>>cant_super;
	mas=1+rand()%(1+5-1);
	for(int i=0 ; i<cant_super;i++ ){

		cout<<"SELECCIONE 1 SI ES OFERTA   , O 2 SI ES VENDIDO :  ";cin>>tipo; 
		cout<<"======================================================="<<endl;
		cout<<"Ingrese las unidades : ";cin>>cant;
		cout<<"Ingrese le precio : ";cin>>precio;
		cout<<"---------------------------------------"<<endl;

		if(tipo ==1){
			Vender mostrar(precio,cant,nombre[mas],direccion[mas]);
			mostrar.ofertados();
			mostrar.reporteOfertados();
		}
		if (tipo ==2){
			Vender mostrar(precio,cant,nombre[mas],direccion[mas]);
			mostrar.vendidos();
			mostrar.reporteVendidos();
	    }
    	

	}
    
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
