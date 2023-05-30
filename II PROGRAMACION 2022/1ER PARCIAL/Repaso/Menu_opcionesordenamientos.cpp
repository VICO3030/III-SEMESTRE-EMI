//menu de ordenamientos

#include<iostream>
using namespace std;

int menu(){
	int opcion;
	cout<<"";
	cout<<"----------MENU---------"<<endl;
	cout<<"1.-ORDENAMIENTO POR INSERCCION"<<endl;
	cout<<"2.-ORDENAMIENTO POR SELECCION "<<endl;
	cout<<"3.- SALIDA "<<endl;
	cout<<" "<<endl;
	cout<<"ELIJA UNA OPCION :  ";
	cin>>opcion;
}
void llenar(float V[],int n){
	for(int i=0;i<n;i++){
		cout<<"ingrese elemento de la posicion  ["<<i<<" ]: ";
		cin>>V[i];
	}
}
void imprimir(float V[],int n){
	cout<<"VECTOR : ";
	for(int i=0;i<n;i++){
		cout<<V[i]<<"|";
	}
}

int main(){
	float Vector[30];
	int op,tam;
	menu();
	cout<<"INGRESE EL TAMANO DEL VECTOR  : ";
	cin>>tam;
	llenar(Vector,tam);
	imprimir(Vector,tam);
	return 0;
}
