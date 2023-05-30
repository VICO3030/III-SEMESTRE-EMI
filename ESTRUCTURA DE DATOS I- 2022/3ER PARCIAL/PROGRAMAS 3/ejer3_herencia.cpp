#include<iostream>
#include<math.h>
using namespace std;

class FiguraCircular 
{
	float radio;
	protected:
		FiguraCircular(float r){
			radio=r;
		}
		float getRadio(){ 
		    return radio;
		}
};

class Circulo : FiguraCircular
{ public:
	Circulo(float ra) : FiguraCircular(ra){
		
	}
	float area(){
		return M_PI * pow( getRadio(),2);
	}
	float perimetro()
	{
		return 2* M_PI * getRadio();
	}
};

class Esfera:FiguraCircular
{
	public:
		Esfera(float ra ):FiguraCircular(ra)
		{
		}
		float areaEsf()
		{ return 4*M_PI *pow(getRadio(),2);
		}
		float volumenEsf()
		
		{return (4/3.0) *M_PI * pow(getRadio(),3);
		}
};
class Elipse :FiguraCircular{
	float b;
	public:
		Elipse(float ra , float _b):FiguraCircular(ra){
			b=_b;
		}
	float areaElip(){
		return getRadio()* b *M_PI;
	}
	float perimetroElip()
	{
		return 2* M_PI* sqrt((pow(getRadio(),2)+ pow(b,2))/2);
	}
};

void menu(){
	cout<<" MENU DE OPCIONES "<<endl;
	cout<<"1.- Circulo "<<endl;
	cout<<"2.- Esfera "<<endl;
	cout<<"3.- Elipse  "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"ELIJA UNA OPCIONN...!! "<<endl;
}

void ejecutar(int op){
	float ra,b;
	 cout<<"Ingrese el radio =";cin>>ra;
	if(op==1){


		Circulo mostrar(ra);
		cout<<"EL AREA DEL CIRCULO ES = "<<mostrar.area()<<endl;
		cout<<"EL PERIMETRO DEL CIRCULO ES = "<<mostrar.perimetro()<<endl;
	}
	if( op==2){

	    Esfera mostrar(ra);
	    cout<<"EL AREA DE LA ESFERA ES = "<<mostrar.areaEsf()<<endl;
	    cout<<"EL VOUMEN DE LA ESFERA ES = "<<mostrar.volumenEsf()<<endl;
		
	}
	if(op==3)
	{

	    cout<<"Ingrese la b de la elipse ";cin>>b;
	    Elipse mostrar(ra,b);
	    cout<<"EL AREA DE LA ELIPSE ES  = "<<mostrar.areaElip()<<endl;
	    cout<<"EL PERIMETRO DE LA ELIPSE ES  = "<<mostrar.perimetroElip()<<endl;
	}
}

int main(){
	int op,tecla;
	do{
		menu();
		cin>>op;
		ejecutar(op);
	    cout<<"\nPulse 1 para seguir y otro valor para terminar ...";
	    cin>>tecla;
	}while(tecla==1);
	return 0;
}
