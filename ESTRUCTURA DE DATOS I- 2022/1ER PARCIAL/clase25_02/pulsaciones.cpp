#include <iostream>
using namespace std;
class Atleta
{	char genero;
	int edad;
	public:
		void pedir()
		{	do
			{	cout<<"Ingrese F para femenino y M para masculino : ";
				cin>>genero;
				if (genero!='F'&& genero!='f'&& genero!='M'&& genero!='m')
				{	cout<<"Genero desconocido, ingrese lo solicitado en mayuscula o minuscula"<<endl;
				}
			}while (genero!='F'&& genero!='f'&& genero!='M'&& genero!='m');
			do
			{	cout<<"Ingrese su edad : ";
				cin>>edad;
				if (edad<0 || edad>100)
				{	cout<<"Valor incorrecto, ingrese en el rango de [ 0 a 100]"<<endl;
				}
			}while (edad<0 || edad>100);
			
		}
		float puls()
		{	if (genero=='F'|| genero=='f')
			{	return (220.0-edad)/10;
			}
			else
			{	return (210.0-edad)/10;
			}
		}
		void imprime()
		{	pedir();
			cout<<"Las pulsaciones son = "<<puls();
		}
};

int main()
{	Atleta sport;
    for(int i=0;i<7;i++){
    	cout<<"PULSACION DEL ATLETA #"<<i+1<<endl;
    	sport.imprime();
    	cout<<endl;
	}
	
	return 0;
}
