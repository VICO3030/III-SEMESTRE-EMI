//ordenamiento por insserccion

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[]={ 9,5,7,6,4,3,2,11};
	int i,pos,aux;
	for (i=0;i<11;i++){
		pos=i;
		aux=numeros[i];
		
		while((pos>0) &&(numeros[pos-1]>aux)){
			numeros[pos]=numeros[pos-1];
			pos--;
		}
		numeros[pos]=aux;
	}
	cout<<"Orden Ascendente : ";
	for(i=0;i<8;i++){
		cout<<numeros[i]<<"| ";
	}
	cout<<"\nOrden Descendente : ";
	for (i=9;i>=0;i--){
		cout<<numeros[i]<<"| ";
	}
	
	getch();
	return 0;
}
