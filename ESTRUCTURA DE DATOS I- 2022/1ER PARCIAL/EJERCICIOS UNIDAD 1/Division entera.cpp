#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>  //  la funcion abs ignorar el signo
using namespace std;
void division(int divi, int divis, int &cociente,int &residuo )
{	if (divi>=divis)
	{	cociente++;
		residuo=divi-divis;
		division(divi-divis,divis,cociente,residuo);
	}
}
int main()
{	int coc=0,res=0,dividendo,divisor;
	cout<<"Ingrese dividendo: ";
	cin>>dividendo;
	cout<<"Ingrese divisor: ";
	cin>>divisor;
	if (abs(dividendo)<abs(divisor)& divisor!=0)
	{	res=dividendo;
		cout<<"Cociente de la division = "<<coc<<endl<<"El residuo de la division = "<<res;
	}
	else
	{	if (divisor==0)
		{	cout<<"La division es indeterminada"<<endl;
		}
		else
		{	division(abs(dividendo),abs(divisor),coc,res);
			if(dividendo>0)
			{	if (divisor <0)
				{	coc=coc*-1;
				}
			}
			else
			{	if(divisor>0)
				{	coc=coc*-1;
					res=res*-1;
				}
				else
				{	res=res*-1;
				}
			}
			cout<<"Cociente de la division = "<<coc<<endl<<"El residuo de la division = "<<res;
		}
	}
	
}
