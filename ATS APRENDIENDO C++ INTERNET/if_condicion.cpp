/* la sentencia if 
    if (condicion){
    instrucciones 1;
}
else{
instruciones 2;
}
*/
#include<iostream>
using namespace std;
int main(){
	int num,dato=5;
	cout<<"digite un numero : ";
	cin>>num;
	if(num==dato){
		cout<<"El numero es 5 ";
	}
	else
	{
		cout<<"el numero es diferente  de "<<dato;
	}
	return 0;
}
