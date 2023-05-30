#include <iostream>
using namespace std;
//declaraciones de las funciones 
void menu(); 
int factorial(int n );
int sumadigitos(int s);
int fibonacci(int n);
//funcion principal
int main(){
	int opcion,n;
	menu();
	cout<<"ELIGE UNA OPCION "<<endl;
	cin>>opcion;
	switch(opcion){
	//factorial
	case 1:
	    cout<<"ingrese un numero ";
		cin>>n;
		cout<<"El factorial del numero  :"<<n<<" es = "<<factorial(n);
		break;
	//suma de digitos
	case 2:
		cout<<"ingrese un numero ";
		cin>>n;
		cout<<"La suma de los de digitos del numero ingresado es de ="<<sumadigitos(n);
	break;
	//fibonacci
	case 3:
	    cout<<"ingrese un numero ";
		cin>>n;
		cout<<" fibonacci  de  "<<fibonacci(n)<<endl;
	break;
		
	case 4:break;
	default:cout<<"ERROR OPCION  NO VALIDA .....!!!!!! ";break;	
	}
	return 0;
}


void menu(){
	cout<<""<<endl;
	cout<<" +++++++++ MENU DE OPCIONES+++++++++ "<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"    1.-FACTORIAL "<<endl;
    cout<<"    2.SUMA DE DIGITOS "<<endl;
	cout<<"    3.FIBONACCI "<<endl;
	cout<<"    4.SALIR "<<endl;
	cout<<" ---------------------------------------- "<<endl;
}

int factorial(int n ){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*i;	
	}
	return f;
}

int sumadigitos(int s){
	int x=0;
	while(s>0){
		x=x+s % 10;
		s=s/10;
	}
	return x;
}

int fibonacci(int n){
	int x=0,y=1,z=1;
	cout<<"1"<<endl;
	for (int i=1;i<n;i++){
		z= x + y;
		cout<<z<<" ";
		x=y;
		y=z;
	}
	return z  ; 
}

