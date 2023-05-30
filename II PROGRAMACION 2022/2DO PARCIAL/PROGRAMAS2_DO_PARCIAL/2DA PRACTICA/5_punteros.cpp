/*lea un numero de carnet y buscar en que posicion se encuentra rellenar 25 digitos*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void carnet(int *vec,int tam);
void Busqueda(int *vec,int tam);
int main(){
	srand(time(NULL));
	int *vec;
    int tam=25;
    vec=new int(tam);
    cout<<"NUMERO DE CARNET"<<endl;
    carnet(vec,tam);
    Busqueda(vec,tam);
    return 0;
    
}

void carnet(int *vec,int tam){
	for(int i=0;i<tam;i++){
		*(vec+i)=10000000+rand()%(10000000-100000);
		cout<<"CI ["<<i<<"] ="<<*(vec+i)<<endl;
	}
}

void Busqueda(int *vec,int tam){
	int ci;
	cout<<"Ingrese el numero de carnet que desea buscar = ";
	cin>>ci;
	cout<<"-----------------------------------------------"<<endl;
	for(int i=0;i<tam;i++){
		if(ci== *(vec+i)){
	        cout<<"EL CARNET SI SE ENCUENTRA EN EL VECTOR DE LA POSICION "<<i;break;
	    }
	    else{
	        cout<<"CARNET NO SE ENCUENTRA EN EL VECTOR "<<endl;break;
	   }
    }
}
