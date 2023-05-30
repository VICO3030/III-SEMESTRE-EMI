#include<iostream>

using namespace std;
int main(){
	int x,y,ca=1;

		cout<<"Ingrese numero para x :";cin>>x;
		cout<<"Ingrese el numero y :";cin>>y;
		for(int i=1;i<=y;i++){
			ca=ca*x;
		}
	cout<<"El resultado de la expresion es ="<<ca;

	return 0;
}
