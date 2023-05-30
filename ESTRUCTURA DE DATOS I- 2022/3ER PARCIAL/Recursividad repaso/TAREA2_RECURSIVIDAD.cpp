//tarea recursividad 
#include<iostream>
#include<cmath>
using namespace std;


float potencia(int base , float resultado , int cont){
	if(cont ==0)	return resultado;
	else{
		resultado=resultado*base;
		potencia(base , resultado , cont -1);
		
	}
}
int main()
{	int base , exponente ;
	float  resu=1;
	cout<<"\tIngrese la base : ";cin>>base;
	cout<<"\tIngrese el exponente : ";cin>>exponente;
	if(base >0 && exponente<0){
		cout<<"\tel resultado es de :"<<1/potencia(abs(base), resu , abs(exponente));
	}
	else{
		if(base>0 && exponente >0){
			cout<<"\tel resultado es de :"<<potencia(abs(base),resu,abs(exponente));
		}
		else{
			if(base<0 && exponente <0){
				if(exponente%2==0){
					cout<<"\tEl resultado es de :"<<1/potencia(abs(base),resu,abs(exponente));
				}
				else{
					cout<<"\tEL RESULTADO ES DE : "<<-1/potencia(abs(base),resu,abs(exponente));
				}
			}
			else{
					if(base<0 && exponente >0)
					{
						if(exponente%2==0)
						{
							cout<<"\tel resultado es de : "<<potencia(abs(base), resu ,abs(exponente));
							
						}
						else{
							cout<<"\tel resultado es de :"<<-1*potencia(abs(base), resu , abs(exponente));
						}
					}
					else
					{
						if(base ==0 && exponente ==0)
						{
							cout<<"\t!NO SE PUDO ES UNA INDETERMINACION "<<endl;
						}
						else
						{
							cout<<"\tel resultado es de :"<<potencia(abs(base), resu, abs(exponente));
						}
					}
				}
			}
		}
	return 0;
}

	


