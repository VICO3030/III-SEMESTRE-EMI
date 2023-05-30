#include<iostream>
#include<string.h>
using namespace std;
void datos(float & peso, float & est,string & _nombre);
void ejecutar(int op);

class Gimnasio{
    private:
	string nombre;
	protected:
		Gimnasio(string _nombre) {
			nombre=_nombre;
		}
		string getNombre(){
			return nombre;
		}
};

void datos(float & peso, float & est,string & _nombre){
	cout<<"INGRESE SU PESO  [kg]= ";cin>>peso;
	cout<<"INGRESE SU ESTATURA  [m]= ";cin>>est;
	cout<<"INGRESE SU NOMBRE  = ";cin>>_nombre;
}
class Atleta :Gimnasio{
	float peso,estatura;
	public:
        	Atleta(float _peso,float _estatura,string nombre):Gimnasio(nombre)
          	{
          		peso=_peso;
          		estatura=_estatura;
	        }
	float IMC(){
		float imc;
		imc=peso /(estatura*estatura);
		return imc;
	}
	void averigua()
	{
		float cal;
		cal=IMC();
		if(cal >25){
		     cout<< "  SOBREPESO";
		}
		if(cal <18){
			cout<< " DESNUTRICION ";
		}
		if(cal>18 && 25< cal ){
			cout<< " ESTADO NORMAL";
		}
	}
};

class Profesor: Gimnasio{
	
	int nroAnti;
	public:
		Profesor(string nombre ,int _nroAnti):Gimnasio(nombre){
			nroAnti=_nroAnti;
		}
	void nroClases(){
		cout<<"---------------------------------------"<<endl;
		if(nroAnti< 5 )
		{
			cout<<"1 SOLA CLASE ";
		}
		if(nroAnti>=5 && nroAnti<=8 ){
			
			cout<<"TIENE DE 2 A 5 CLASES ";
		}
		if(nroAnti >8){
			cout<<"TIENE 6 CLASES A SU CARGO ";
		}
		
	}	
};


void menu(){
	cout<<"         QUE TIPO DE SERVIDOR ES ?           "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"   1.- ATLETA  "<<endl;
	cout<<"   2.- PROFESOR  "<<endl;
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

void ejecutar(int op)
{
    float peso,est;
    string _nombre,nombre;
    int nro;
	if(op==1)
	{ 
	   datos(peso,est,_nombre);
       Atleta mostrar(peso,est,_nombre);
         
       mostrar.averigua();
       
	}	if( op==2){
		cout<<"Ingrese su nombre = ";cin>>nombre;
		cout<<"Ingrese su  antiguedad =";cin>>nro;
		Profesor mostrar(nombre,nro);
		mostrar.nroClases();

	}
}





