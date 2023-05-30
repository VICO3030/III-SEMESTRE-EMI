#include <iostream>
using namespace std;
class Factorial
{
	int nro;
	public:
		void validar();
		long factor(int n);
		void mostrar();
};
void Factorial::validar() 
{
	do
	{
		cout<<"Ingrese nro : "; cin>>nro;
		if (nro<0)
			cout<<"Error, vuelva a ingresar \n";
	} while(nro<0);
}
long Factorial::factor(int n) 
{
	if (n==0)
		return 1;
	else
		return factor(n-1)*n;
}
void Factorial::mostrar() 
{
	validar(); // llamada a lectura del numero
	cout<<"Factorial = "<<factor(nro);
}
int main()
{
	Factorial nroFactor;
	nroFactor.mostrar() ;
	return 0;
}



