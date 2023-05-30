#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class empresa
{
	int nroTelf, min,forma;
	protected:
		empresa(int n, int m, int f)
		{
			nroTelf = n;
			min = m;
			forma = f;
		}
    int getNroTelf()
    {
 	    return nroTelf;
    }
    int getMin()
    {
	    return min;
    }
    int getForma()
    {
	    return forma;
    }
};
class Entel: empresa
{
	public:
		Entel(int a, int b, int c):empresa(a,b,c)
		{
		}
		string promocion()
		{
			if(getForma()==1)
			{
				if(getMin()>=5 && getMin()<=10)
				{
				    return "\n10 SMS";
				}
				else
				{
					return "\nWhatsapp Ilimitado";
				}
			}
			else
			{
				if(getMin()>30)
				{
					return "\nCarga Doble";
				}
				else
				{
					return"\n30 MB para navegacion";
				}
			}
		}
};
class Viva:empresa
{
	public:
		Viva(int x,int y,int z):empresa(x,y,z)
		{
		}
		void promocion()
		{
			if(getForma()==2)
			{
				cout<<"\nWhatsapp Ilimitado y 15 SMS";
			}
			else
			{
				if(getMin()<20)
				{
					cout<<"\nBolsas de navegacion";
				}
				else
				{
					cout<<"\n20Bs recarga y bolsas diarias de navegacion";
				}
			}
		}
};
void menu()
{
	cout<<"    MENU"<<endl;
	cout<<"1.- Entel"<<endl;
	cout<<"2.- Viva"<<endl;
}
void datos(int &a, int &b, int &c)
{
	a=6000000 + rand()%(79999999+1-6000000);
	b=1 + rand()%(120+1-1);
	c=1 + rand()%(2+1-1);
}
void ejecutar(int opc)
{
	int a,b,c;
	if(opc==1)
	{
		datos(a,b,c);
		Entel clienteE(a,b,c);
		cout<<"\nTelefono = "<<a;
		cout<<"\nMinutos llamadas: "<<b;
		if(c==1)
		{
			cout<<"\nForma de pago = Pre - Pago";
		}
		else
		{
			cout<<"\nForma de pago = Post - Pago";
		}
		datos(a,b,c);
		cout<<clienteE.promocion(); 
	}
	if(opc==2)
	{
		datos(a,b,c);
		Viva clienteV(a,b,c);
		clienteV.promocion();
	}
}
int main()
{
	srand(time(NULL));
	int op,tecla;
	do
	{
	    menu();
	    cin>>op;
	    ejecutar(op);
	    cout<<"\npulse 1 para seguir y otro valor para terminar";
	    cin>>tecla;
    }while(tecla==1);
}
