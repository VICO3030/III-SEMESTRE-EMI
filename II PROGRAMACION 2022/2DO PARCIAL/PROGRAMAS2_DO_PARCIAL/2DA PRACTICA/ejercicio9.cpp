#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
void arreglo1(int *vec1,int tam1);
void arreglo2(int *vec2,int tam2);
void ordenar(int *vec3,int n);



void arreglo1(int *vec1,int tam1){
	for(int i=0;i<tam1;i++){
		*(vec1+i)=1+rand()%(100-1);
		cout<<*(vec1+i)<<" | ";
	}
}
void arreglo2(int *vec2,int tam2){
	for(int j=0;j<tam2;j++){
		*(vec2+j)=1+rand()%(100-1); 
		cout<<*(vec2+j)<<" | ";
	}
}

void arreglo3(int *vec1,int* vec2 ,int *vec3,int tam3){
	int j=0;
	for(int i=0;i<tam3;i++){
		if(vec1[i]<=vec2[i]){
			vec3[j]=vec1[i];
			vec3[j+1]=vec2[i];
		}
		else{
			vec3[j]=vec2[i];
			vec3[j+1]=vec1[i];
		}
		
		j=j+2;
		cout<<vec3[i]<<" | ";
	}
}
int  ord1(int *vec3,int n){
	int i,j;
	float temp;
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-2;j++){
			if(vec3[j]>vec3[j+1]){
				temp = vec3[j];
				vec3[j]=vec3[j+1];
				vec3[j+1]=temp;
			}
		}
	}
	return vec3[n];
}
void salida(int*A,int n){
	for(int b=0;b<n;b++){
		cout<<A[b]<<" | ";
	}
	cout<<endl;
}

int main(){
	srand(time(NULL));
	int *vec1,tam1=5;
	int *vec2,tam2=5;
	vec1=new int(tam1);
	vec2=new int(tam2);
	int *vec3, tam3=tam1+tam2;
	vec3=new int(tam3);
	cout<<"PRIMER ARREGLO"<<endl;
	arreglo1(vec1,tam1);
	cout<<"\nSEGUNDO ARREGLO"<<endl;
	arreglo2(vec2,tam2);
	cout<<"\n-------------Vector unido--------------"<<endl;
	arreglo3(vec1,vec2,vec3,tam3);
	cout<<"\n-------------VECTOR ORDENADO-------------"<<endl;
	ord1(vec3,tam3);
	salida(vec3,tam3);
	return 0;
}
