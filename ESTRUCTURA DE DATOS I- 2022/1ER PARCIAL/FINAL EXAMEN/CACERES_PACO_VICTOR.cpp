#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
class Numeros
{	int nroCod[30],cant,impares;
	public:
		int ingresaTam();
		void llenar();
		void imprimir(int a[],int tam);
		void Impar(int cod[],int tam);
		int  ordenamiento(int A[],int n);
};
// IMPLEMENTACION DE LOS METODOS
int Numeros::ingresaTam()
{	int tama;
	do
	{	cout<<"INGRESE LA CANTIDAD DE NUMEROS QUE DESEA  : ";
		cin>>tama;
		if (tama<=0)	cout<<"Error, no se aceptan negativos o ceros, vuelva a ingresar !";
	}while(tama<=0);
	return tama;
}
void Numeros::llenar()
{	cant=ingresaTam();
	for(int p=0;p<cant;p++)
	{	nroCod[p]=1+ rand()%(100-1) ;      
	}
	cout<<"\nLos Numeros  ingresados son : \n";
	imprimir(nroCod,cant-1);  
}
//a)  impresion del arreglo con numeros ingresados
void Numeros::imprimir(int a[],int tam){
	for(int i=0;i<=tam;i++){
		cout<<a[i]<<"  ";
	}
}

////b) numeros que cumplen con la condicion (suma de digitos impares es un valor PAR )
//	void Impar(int cod[],int tam){
//		int impares;
//		for(int i=0;i<=tam;i++){
//			if(cod[i]%2==1){
//				impares=cod[i];
//				cout<<"Los numeros impares son = "<<impares;	
//			}
//		}	
//	}
////c) los numeros   ordenamiento descendente 
//int  Numeros::ordenamiento(int A[],int n){
//	int i,j;
//	int  temp;
//	for(i=1;i<=n-1;i++){
//		for(j=0;j<=n-2;j++){
//			if(A[j]>A[j+1]){
//				temp = A[j];
//				A[j]=A[j+1];
//				A[j+1]=temp;
//			}
//		}
//	}
//	return A[n];
//}


int main()
{	Numeros mostrar;
    srand(time(NULL));
	mostrar.llenar();
//	mostrar.Impar();
//	mostrar.ordenamiento();
	return 0;
}
