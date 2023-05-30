#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void imprimir( int x){
	if(x>0){
		imprimir(x-1);
		cout<<x<<" - ";
		
	}
}

int main(){
	int nro;
	
	cout<<"Ingrese un numero :";cin>>nro;
	imprimir(nro);
	return 0;
}
