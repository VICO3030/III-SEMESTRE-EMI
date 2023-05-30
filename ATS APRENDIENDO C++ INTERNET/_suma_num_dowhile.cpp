/*5.-Escriba un programa que lea los valores enteros hasta que se introoduzca un valor en el 
rango[20-30] o se introduzca el valor 0. El programa debe entregar de los valores mayor a 0,
entrgar la suma de los valores mayor a 0 introducidos*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int numero,suma=0;
	do{
		cout<<"Digite un numero :";cin>>numero;
		if(numero>0){
			suma+=numero;
		}
	} while(  ((numero<20) ||(numero>30)) && (numero!=0) );
	cout<<"\la suma de los numeros es de: "<<suma<<endl;
	system("pause");
	
	return 0;
	
}
