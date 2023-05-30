#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Electrodomestico
{
	float precio;
	string color;
	float peso;
	char consumo;
	protected:
		Electrodomestico(float _precio,float _peso ,  string _color, char _consumo){
			precio=_precio;
			peso=_peso;
			color=_color;
			consumo=_consumo;
		}
		float getPrecio(){
			return precio;
		}
		float getPeso(){
			return peso;
		}
		string getColor(){
			return color;
		}
		char getConsumo(){
			return consumo;
		}
		float consumo_energetico(){
			if( getConsumo()== 'A' || getConsumo() == 'a'){
				return 	100;
			}
			if( getConsumo()== 'B' || getConsumo() == 'b'){
				return 	80;
			}
			if( getConsumo()== 'c' || getConsumo() == 'C'){
				return 	60;
			}
			if( getConsumo()== 'd' || getConsumo() == 'D'){
				return 	50;
			}
			if( getConsumo()== 'e' || getConsumo() == 'E'){
				return 	30;
			}
			if( getConsumo()=='f' || getConsumo() == 'F'){
				return 	10;
			}
		}
		float CalcularPeso(){
			if(getPeso()>0 && getPeso()<19){
				return 10;
			}
			if(getPeso()>=20 && getPeso()<49){
				return 50;
			}
			if(getPeso()>=50 && getPeso()<79){
				return 80;
			}
			if(getPeso()>=80){
				return 100;
			}
		}
	    void Mostrar_datos(){
			cout<<"\t----------------------------------------------------------"<<endl;
			cout<<"\tSu consumo energetico es de tipo -->\t"<<getConsumo()<<endl;
			cout<<"\tPrecio de su tipo elegido es de -->"<<consumo_energetico()<<endl;
			cout<<"\tSu peso es de ->"<<getPeso()<<endl;
			cout<<"\tSu color es de ->"<<getColor()<<endl;
			cout<<"\tSu precio a pagar TOTAL , Tipo de consumo + su peso es de  "<<consumo_energetico()+CalcularPeso()<<endl;	
		}
		virtual void Mostrar_total(){
		}
		 float  Precio_final(){
			return consumo_energetico()+CalcularPeso();
		}
};

class Lavadora : Electrodomestico{
	float carga;
	//atributos
	public:
		Lavadora(float _carga, float p ,float pe, string c, char co):Electrodomestico(p,pe,c,co){
			carga=_carga;
		}
	
	float getCarga(){
		return carga;	
	}
	float ComprobarCarga(){
		if(getCarga()>30) return 50;
		else return 0;
	}
	void Mostrar_total(){
		Electrodomestico::Mostrar_datos();
		cout<<"\tSU precio final es de  = "<<Precio_final()+ComprobarCarga()<<endl;
	}
			
};

class Television : Electrodomestico{
	float resolucion;
	public:
		Television( float reso , float p ,float pe, string c, char co):Electrodomestico(p,pe,c,co){
			resolucion = reso;
		}
		float getResolucion(){
			return resolucion;
		}

	float  Comprobar40(){
		if(getResolucion()>40) return Precio_final()*0.3;
		else return 0;
	}
	void Mostrar_total(){
	Electrodomestico::Mostrar_datos();
	cout<<"\tSu resolucion es de  :"<<getResolucion()<<"[pulg]"<<endl;
	cout<<"\tSu precio total a pagar es de : "<<Comprobar40()+Precio_final()<<endl;
	}
		
};
int aleatorio(int li, int ls)
{	return rand()%(ls+1-li)+li;
}

void llenarMan(Lavadora *arr[], int cant)
{
	float precio;
	string color;
	char Tipo;
	float peso,carga ;
	for(int i=0;i<cant;i++)
	{


		cout<<" 		COMPRA  # "<<i+1<<endl;
		cout<<"\t1.-Ingrese precio Base : ";cin>>precio;
		cout<<"\t2.-ingrese tipo de Color : ";cin>>color;
		cout<<"\t3.-Ingrese tipo de Consumo energetico [ A Y F] ";cin>>Tipo;
		cout<<"\t4.-Ingrese su peso  : ";cin>>peso;
		cout<<"\t5.-Ingrese carga ; ";cin>>carga;
		arr[i] = new Lavadora(carga,precio, peso ,color , Tipo);
	}
}
void llenar(Television *arr[], int cant)
{
	float precio,res;
	string colores[6]={"blanco","negro","azul","rojo","azul", "gris"};
	int j,L;
	char Tipo[6]={'A','B','C','D','E','F'};
	float peso;
	for(int i=0;i<cant;i++)
	{
		j=aleatorio(0,5);
		colores[j];
		cout<<" 		COMPRA  # "<<i+1<<endl;
		cout<<"\t1.-Ingrese precio Base : ";cin>>precio;
		cout<<"\t2.-ingrese tipo de Color : "<<colores[i]<<endl;
		cout<<"\t3.-Ingrese tipo de Consumo energetico [ A Y F] "<<Tipo[i]<<endl;
		cout<<"\t4.-Ingrese su peso  : ";cin>>peso;
		cout<<"\t5.-Ingrese Resolucioon de la television ; ";cin>>res;
		arr[i] = new Television(res,precio, peso ,colores [i], Tipo[i]);
	}
}

void imprimeDiurno(Lavadora *arr[], int cant, int pos)
{
	if(pos<cant)
	{
		arr[pos]->Mostrar_total();
		cout<<endl;
		imprimeDiurno(arr, cant, pos+1);
	}
}
void imprime(Television *arr[], int cant, int pos)
{
	if(pos<cant)
	{
		arr[pos]->Mostrar_total();
		cout<<endl;
		imprime(arr, cant, pos+1);
	}
}


int main()
{
	
	setlocale(LC_ALL, "spanish");
	int cantL,cantT;
	Lavadora *vecLav[30];
	Television *vecTel[30];
	cout<<"\t----------------ELECTRODOMESTICOS DISPONIBLES --------------------"<<endl;
	cout<<"\tNumero de compras de Lavadora  ==>\t"; cin>>cantL;
	llenarMan(vecLav, cantL);
	cout<<"\n\tNumero de compras de Televisores  ==>\t"; cin>>cantT;
	llenar(vecTel, cantT);
	cout<<"\t------------------------------------------------------------------------\n";
	cout<<"\t\tREPORTE DE COMPRAS DE LAVADORAS \n";
	cout<<"\t------------------------------------------------------------------------\n";
	imprimeDiurno(vecLav, cantL, 0);
	cout<<"\t------------------------------------------------------------------------\n";
	cout<<"\t\tREPORTE DE COMPRAS DE Televisores \n";
	cout<<"\t------------------------------------------------------------------------\n";
	imprime(vecTel, cantT, 0);
	return 0;
}


