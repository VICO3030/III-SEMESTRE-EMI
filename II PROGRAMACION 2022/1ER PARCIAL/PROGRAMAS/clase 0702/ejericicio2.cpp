//ejercicio 2 en clase
#include <iostream>
using namespace std;
//PROTOTIPO DE UNA FUNCION 
float sumar(float a ,float b); //subprogramas esta en los parentesis
void sumar1(float a,float b,float & c);/*declaracion de un  procedimiento , no utilizan retunr
*/
	
//programa principal
int main()
{   //inicio del programa
	float a,b,c;//declaracion de variables
	cout<<"ingrese el primer numero : ";
	cin>>a;//ingreso de datos desde teclado
	cout<<"ingrese el segundo numero : ";
	cin>>b;//ingreso de datos desde teclado
	//invocacion o llamado a la funcion 
	cout<<"la suma con la funcion es  = "<<sumar(a,b) ;/*forma a de invocar a una funcion
	resu=sumar(a,b)
	 forma B cout<<"la suma es ="<<resu;*/
	sumar1(a,b,c);
	cout<<"\nla suma con el procedimiento es = "<<c;
	return 0;	
}  
//fin del programa 
//IMPLEMENTACION O DEFINICION DE FUNCIONES
float sumar(float x ,float y)
{
	float c;
	c=x+y; //proceso
	return c;
}//fin del programa
void sumar1 (float a,float b, float & c){
c=a+b;
}
 
