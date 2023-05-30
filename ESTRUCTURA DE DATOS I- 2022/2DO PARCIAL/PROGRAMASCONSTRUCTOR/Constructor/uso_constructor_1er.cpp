//pulsaciones de una persona  creando 4 objetoos
#include<iostream>
using namespace std;

class Gimnasio
{
	private: 
	    char gene;
	    int edad;
	public: 
	    Gimnasio(char ge ,int ed);
	    float pulsaciones();	    
};

Gimnasio::Gimnasio(char ge,int ed)
{   gene=ge;
    edad=ed;
}

float Gimnasio::pulsaciones()
{
	if(gene=='f'|| gene=='F'){
		return(210 - edad)/10.0;
	}
	else
	{
		return (210.0-edad)/10;
	}
}

char validarGenero()
{  char letra;
   do{
   	cout<<"Ingrese el genero <f o F>  = FEMENNINO  <m o M > MASCULINO : ";
   	cin>>letra;
   	if(letra!='f'&& letra!='F'&& letra!='M'&& letra!='m')
   	cout<<"NO es un genero valido"<<endl;
   }while(letra!='f'&& letra!='F'&& letra!='M'&& letra!='m');
   return letra;
}

int validarEdad()
{   int edad;
   do{
   	    cout<<"Ingrese su Edad : ";
   	    cin>>edad;
   	    if(edad<1||edad>100){
   	    	cout<<"Nro de Edad invalido , intente de nuevo ";
		}
    }while(edad<1||edad>100);
    return edad;
}


int main(){
	char genero;
	int edad;
	//validacion
	cout<<"-----------Resporte de las pulsaciones es ---------"<<endl;
	for (int i=1;i<=5;i++)
	{
	genero=validarGenero();
	edad=validarEdad();
	Gimnasio personal1(genero,edad);
	

	cout<<"persona  ["<<i<<"],sus pulsaciones = "<<personal1.pulsaciones()<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
	}

//	genero=validarGenero();
//	edad=validarEdad();
//	Gimnasio personal2(genero,edad);
//	genero=validarGenero();
//	edad=validarEdad();
//	Gimnasio personal3(genero,edad);
//	genero=validarGenero();
//	edad=validarEdad();
//	Gimnasio personal4(genero,edad);


//	cout<<"persona 2 ,sus pulsaciones = "<<personal2.pulsaciones()<<endl;
//	cout<<"persona 3 ,sus pulsaciones = "<<personal3.pulsaciones()<<endl;
//	cout<<"persona 4 ,sus pulsaciones = "<<personal4.pulsaciones()<<endl;
}
