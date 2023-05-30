#include <iostream>
#include<stdlib.h>
#include<time.h>

//proceso recursivo
using namespace std;
int factorial (int n)
{
	if(n==0)	return 1;
	else return n*factorial(n-1);
}
int main(){
	srand(time(NULL));
	int n;
	n=1+rand()%(16-1);				//1 A 15
	cout<<"Numero generado : "<<n<<endl;
	cout<<"el factorial es  : "<<factorial(n);
	return 0;
}


