#include<iostream>
using namespace std;

int main(){
	float num;
	cout<<"Digite un numero  : ";
	cin>>num;
	if(num==0){
		cout<<"es un numero neutro";
	}
	else if(num>0){
		cout<<"Es un numero positivo ";
	}
	if(num<0){
		cout<<"Es un numero negativo";
	}
	return 0;
	
}
