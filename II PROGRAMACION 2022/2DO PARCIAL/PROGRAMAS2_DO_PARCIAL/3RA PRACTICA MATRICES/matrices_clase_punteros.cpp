#include<iostream>
using  namespace std;
 
int main(){
	int a=4;
	int *p;
	int **q;
	p=&a;
	q=&p;
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<**q<<endl;

	return 0;
}
