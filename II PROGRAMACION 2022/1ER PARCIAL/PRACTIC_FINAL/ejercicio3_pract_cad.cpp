#include <iostream>
#include <string.h>
using namespace std;
int espacios(char[]);
int espacios(char c[])
{
	int i, p1=0;
	for(i=0;c[i]!='\0';++i)
	{
		if(c[i-1]==' '&&isalpha(c[i])) 
		{
			++p1;
		}
	}
	if(isalpha(c[0])) ++p1;
	return p1;
}

int main()
{
	char cade[50];
	cout<<"Ingrese el texto con espacios: "<<endl;
	cin.getline(cade, 50);
	cout<<"NRO DE PALABRAS SEGUN EL ESPACIO ES : "<<Contador(cade)<<endl;
	return 0;
}

