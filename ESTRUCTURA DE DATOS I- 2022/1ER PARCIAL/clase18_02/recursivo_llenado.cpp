#include<iostream>
using namespace std;
//parametros
void datos(float v[],int tam){
	if(tam>=0){
		datos(v,tam-1);
		cout<<"ingrese elemento posicion [ "<<tam<<" ]  :  ";
	    cin>>v[tam];
		
	}
//	else la condicion if(tam>0)
//	{  cout<<"ingrese elemento posicion [ "<<tam" ]  :  ";
//	cin>>v[tam];
//	}
}
void mostrar(float v[],int p ,int tam){
	if(p<tam){
		cout<<v[p]<<"  ";
		mostrar(v,p+1,tam);
	}	
	
}
void mostrarVuelta(float v[],int tam){
	if(tam>=0){
		mostrarVuelta(v,tam-1);
		cout<<"vector ["<<ta,<<" ] "<<v[tam]<<endl;
	}
}
//menu principal 
int main(){
	float vec[20];
	int tam;
	cout<<"Cantidad de elementos para el vector ";
	datos(vec,tam-1);
	mostratr(vec,0,tam);
	cout<<""<<endl;
	mostrarVuelta(vec)
	
	
	return 0;
}
