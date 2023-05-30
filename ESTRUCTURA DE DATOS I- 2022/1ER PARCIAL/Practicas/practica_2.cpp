//practica #2
//victor manuel caceres paco
#include<iostream>
using namespace std;
//declaro mi funcion
float potencia(float base, int exp);
//funcion
float potencia(float base, int exp)
{
 float res;
if (exp == 0)
 res=1.0;
else if (exp > 0)
 {
res=base * potencia(base,exp - 1);
 }
else if (exp < 0)
 {
res= 1.0 / base *potencia(base,exp + 1);
 }
 return res; 
}

//menu principal
int main(){
float base, exp;
 float res;
cout << "Introduzca el elemento para elevar  a la potencia "<<endl;
cin >> base;
cout << "Expontente:"<<endl;
cin >> exp;
 res=potencia(base,exp);
cout<< "La potencia del " << base << " ^ " << exp << " es de = "<<res;
 return 0;
}
