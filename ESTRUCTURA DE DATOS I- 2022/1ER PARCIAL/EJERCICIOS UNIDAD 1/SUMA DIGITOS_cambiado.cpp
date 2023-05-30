// suma de digitos con ciclo de ida
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void sumaDigitos(int nro,int ac)
{ 	int dig;
	if (nro==0)
	{	cout<<"La suma de los digitos = "<<ac;
	}
	else
	{	dig=nro%10;
		if (dig%2!=0)
		{	sumaDigitos(nro/10,ac+dig);
		}
		else
		{	sumaDigitos(nro/10,ac+0);
		}
	}
}
int suma(int nro)
{	int dig;
	if (nro==0)
	{	return 0;
	}
	else
	{	dig=nro%10;
		if (dig%2==0)
		{	return suma(nro/10)+0;
		}
		else
		{	return suma(nro/10)+dig;
		}
	}
}
int main()
{	int numero,valor,copia;
	srand(time(NULL));
	do
	{	numero=0+ rand()%(10051-0);  // 0 a 10050
		cout<<"Numero ingresado es = "<<numero<<endl;
		copia=numero;
		sumaDigitos(numero,0);
		cout<<endl<<"La SUMA CON LA VUELTA ES = "<<suma(copia)<<endl;
		cout<<"\nDesea seguir pulse 1 : ";
		cin>>valor;
		cout<<endl;
	}while (valor==1);
}
