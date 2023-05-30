//ejercicio 2
#include <iostream>
#include <string.h>
using namespace std;
//procesos
void texto(char cade[],int &cont_a,int &cont_e,int &cont_i,int &cont_o,int &cont_u);
//programa principal
int main ()
{ 
	char cade1[30];
	cout<<"INGRESE UN TEXTO:"<<endl;
	fflush(stdin);
	gets(cade1);
	fflush(stdin);
	int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
	texto(cade1, vocal_a, vocal_e, vocal_i, vocal_o, vocal_u);
	cout<<"EL TEXTO COMPLETO ES: "<<cade1<<endl;
	cout<<"LAS VOCAL A APARECE: "<<vocal_a<<" VECES "<<endl;
	cout<<"LAS VOCAL E APARECE: "<<vocal_e<<" VECES "<<endl;
	cout<<"LAS VOCAL I APARECE: "<<vocal_i<<" VECES "<<endl;
	cout<<"LAS VOCAL O APARECE: "<<vocal_o<<" VECES "<<endl;
	cout<<"LAS VOCAL U APARECE: "<<vocal_u<<" VECES "<<endl;
	
	return 0;
}
void texto(char cade[30],int &cont_a,int &cont_e,int &cont_i,int &cont_o,int &cont_u)
{
	int i, n;
	//contadores
	n=strlen(cade);
	for (i=0;i<n;i++)
	{
		switch (cade[i])
		{
			case 'a': cont_a++; break;
			case 'e': cont_e++; break;
			case 'i': cont_i++; break;
			case 'o': cont_o++; break;
			case 'u': cont_u++; break;
		}
	}
}


