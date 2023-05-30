#include <iostream>
using namespace std;
//menu
void menu(){
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"                      MENU"<<endl;
	cout<<"    1.-Ordenar por la alternativa 1(forma ascendente)"<<endl;
	cout<<"    2.-Ordenar por la alternativa 2(forma descendiente"<<endl;
	cout<<"    3.-Salida del programa "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"******************Elija una opcion***************** :"<<endl;
	cout<<endl;
}
//tamano de vector 
float llenar(float vector[], int n){
	cout<<" *** DATOS DEL VECTOR ***"<<endl;
	for(int i=0; i<n ;i++){
		cout<<"ingrese el dato en "<<i<<" : ";
		cin>>vector[i];	
	}
	return vector[n];
}
//ordenamiento por la alternativa 1
float ord1(float A[],int n){
	int i,j;
	float temp;
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-2;j++){
			if(A[j]>A[j+1]){
				temp = A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	return A[n];
}

//ordenamiento alternativa 2
float ord2(float A[],int n){
	int i,j;
	float temp;
	for(i=0;i<=n-2;i++){
		for(j=i+1;j<=n-1;j++){
			if(A[i]>A[j]){
				temp = A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	return A[n];
}
void salida(float A[],int n){
	cout<<"el vector ordenado es :"<<endl;
	for(int b=0;b<n;b++){
		cout<<A[b]<<" ";
	}
	cout<<endl;
}
int main(){
	menu();
	int a,b;
	cin>>a;
	while (a<3 && a>0){
	cout<<"ingrese el tamano del vector";
	cin>>b;
	float A[b];
	A[b]=llenar(A,b);
		if(a==1){
			A[b]=ord1(A,b);
			salida(A,b);	
		}
		else{
			A[b]=ord2(A,b);
			salida(A,b);
		}
	cout<<endl;
	menu();
	cin>>a;
	}
	return 0 ;
}

