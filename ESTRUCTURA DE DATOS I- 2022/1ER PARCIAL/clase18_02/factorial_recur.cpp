#include <iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;
int factorial(int n ){
	if (n==0){
		return 1;
	}
    else
	{ return n*factorial(n-1); //calculamos el producto caso Base
    }
}
int main(){
	int nro,tecla;
	srand(time(NULL));
	do{
		nro=1+rand()%(16-1);
	    cout<<"El numero generado :"<<nro<<endl;
	    cout<<"el factorial es "<<factorial(nro)<<endl;
	    cout<<"PARA CONTINUAR PRESIONE 1 ,CUALQUIER OTRO PARA SALIR";    // 1 a 15
		cin>>tecla;
	}while(tecla==1);
	return 0;
}
