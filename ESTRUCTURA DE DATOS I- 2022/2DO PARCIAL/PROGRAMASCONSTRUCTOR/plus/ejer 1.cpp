/* hallar area y perimetro de un triangulo 
usando metodos estaticos*/

#include<iostream>
using  namespace std;
class Triangulo
{    //sin atributos
     public: 
          static float area(float b , float a);
          static float perimetro(float l1,float l2,float l3);
          
};
/*construccion de  los metodos no se debe utilizar el nombre de la clase 
en la implementacion del metodo*/
static float area(float b,float a)
{
	return (b*a)/2;
}
static float perimetro(float l1,float l2,float l3)
{ 
   return l1+l2+l3;
}

int main()
{
	int op;
	float ba,ha,lado;
	cout<<"Menu \n";
	cout<<"1.-Area\n";
	cout<<"2.-Perimetro\n";
	cout<<"Elegir opcion....";
	cin>>op;
	switch(op)
	{
		case 1 :{
			cout<<"Ingrese base ";cin>>ba;
			cout<<"Ingrese alura ";cin>>ha;
			cout<<"Su area = "<<area(ba,ha);
			//se llama utilizando nombre de clase punto el metodo
			break;
		}
		case 2: {
			cout<<"Ingrese primer lado ";cin>>ba;
			cout<<"Ingrese segundo lado ";cin>>ha;
			cout<<"Ingrese tercer lado ";cin>>lado;
			cout<<"Su perimetro = "<<perimetro(ba,ha,lado);
			//se llama directamente el metodo
	
			break;
		}
		default : cout<<"No eligio ninguna opcion valida "<<endl;
	}
	return 0;
}
