#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//suma de digitos con ciclo de ida
void sumaDigitos(int nro,int ac){
	int dig;
	if(nro==0){
		cout<<"la suma de digtos ="<<ac;
		
	}
	else{
		dig=nro%10;
		if(dig%2!=0){
			sumaDigitos(nro/10,ac+dig);
		}
		else{
			sumaDigitos(nro/10,ac+0);
		}
	}
}
int suma(int nro)
{    int dig;
     if(nro=0){
     return 0;
    }
     else{
        dig=nro%10;
          if(dig%2==0){
          
}

int main(){
	int numero;
	srand(time(NULL));
	do{
	  numero=0+rand()%(10051-0);   // 0 a 10050
	  cout<<"numero ingresado es ="<<numero<<endl;       
	  sumaDigitos(numero,0);
	  cout<<<"\nDesea seguir pulse 1 :";
	  cin>>valor;
	  cout<<endl;
    }
}
