//ordenamiento por insercion
#include <iostream>
using  namespace std;
//variables globales
float A[30];
int n;

void llenar(){       
    int p;
    for (p=0;p<n;p++)
    {
    	cout<<"ingrese elemento posicion"<<p<<":";
    	cin>>A[p];
	}  
}

void imprimir(){
	for(int p=0;p<n;p++)
	{
		cout<<A[p]<<" ";
	}
	cout<<endl;
}

void inserccion(){
	float llave;
	int i,j;
	for(j=1;i<=(n-1);j++)
	{   llave=A[j];
	   i=j-1;
	    while(i>=0 && A[i]>llave)
	{   A[i+1]=A[i];
	    i--;
	}
	A[i+1]=llave;
	}
}




int main(){
	cout<<" INGRESE EL TAMANO DEL VECTOR : ";
	cin>>n;
	llenar();//metodo para ingresar los datos a cada posicion del arreglo
	imprimir();//metodo que imprime los numeros ingresados
	cout<<"ALGORITMO DE INSERCCION EJECUTADO";
	inserccion();
	imprimir();
	return 0 ;
}
