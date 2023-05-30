//finobacci recursividad 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int Fibonacci(int n){
	if(n==1)	return 0;
	else if(n==2)	return 1;
			else	 return Fibonacci(n-1)+Fibonacci(n-2);
			
}

int main(){
	srand(time(NULL));
	int num;
	num=10+rand()%(51-10);

	cout<<"Numero de termino pedido : "<<num<<endl;
	cout<<"El valor de termino es : "<<	Fibonacci(5)<<endl;
}
