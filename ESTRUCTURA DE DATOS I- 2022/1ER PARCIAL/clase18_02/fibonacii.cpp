#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int fibo(int n){
	if(n==1)     return 0;
	else  if (n==2)   return 1;
        else   return fibo(n-1)+fibo(n-2);		 	
}
int main(){
	int numb;
	srand(time(NULL));
	numb=10+rand()%(51-10);
	cout<<"numero de termino perdido"<<numb<<endl;
	cout<<"El valor de termino es : "<<fibo(numb)<<endl;
	return 0;
}
