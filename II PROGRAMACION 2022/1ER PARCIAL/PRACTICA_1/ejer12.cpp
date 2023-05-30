//ejercicio12
#include<iostream>
#include<conio.h>
using namespace std;
//declaracion de mis funciones 

int main(){
	int numeros[100][100],filas,columnas;
	cout<<"Digite el numero de filas "<<filas<<endl;
	cout<<"Digite el numero de columnas"<<columnas<<endl;
	//almacenando los elemntos de la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
		cin>>numeros[i][j];	
		}
	}
	//mostrando mi matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		  cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
	

