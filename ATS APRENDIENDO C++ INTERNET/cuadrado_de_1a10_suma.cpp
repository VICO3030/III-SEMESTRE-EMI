/*LOs numeros cuadrados del 1 a10 y la suma de todos los numeros*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma=0 ,cuadrado;
	for(int i=1;i<=10;i++){
		cuadrado=i*i;
		suma+=cuadrado;
		cout<<"El cuadrado del numero: "<<i<<" es ="<<cuadrado<<endl;
	}
	cout<<"El resultado de la suma de los cuadrados es ="<<suma<<endl;
	getch();
	return 0;
}
