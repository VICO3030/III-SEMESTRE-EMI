/*Analisis de comlejidad 
  Cuando tenemos un ciclo anidado se tiene el siguiente análisis
  En este caso el bucle exterior se realiza n veces, mientras que el interior se realiza 1, 2,3, 
..., n veces respectivamente. La complejidad será: n * n* 0(1) = k* (O) *2
)
tenemos una secuencai de sentencias 
Ejemplo: se realizará un análisis de complejidad a los algoritmos*/


#include<iostream>
using namespace std;

void resu( int &n)
{
	int d=0,s=0,r=0,a;
    do{
    	a=0;
    	r=r+1;
    	do{
    	  a=a+r;	
		}while(a<=n);
		if(a==n){
			cout<<" es divisible por "<<d;
		}
		else{
			cout<<"no divisible"<<endl;

		}
		d=d+1;
		s=s+1;

	}while(s<=n);
}


int main()
{
	int n;
	cout<<"ingrese  n ";cin>>n;
	resu(n);
	return 0;
}
