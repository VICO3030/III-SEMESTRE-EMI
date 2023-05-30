//ejercicio8
#include<iostream>
using namespace std;
//menu
int main(void)
{
	int cifras=1, num ;
	cout<<"ingrese un numero "<<endl;
	cin>>num;
	while (num>=10){
	   num=num/10;
	   cifras++;
	}
	cout<<"EL NUMERO DE DIGITOS DE 0 QUE TIENE ES DE ="<<cifras<<endl;
	return 0;
}


