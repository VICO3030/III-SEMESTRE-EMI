//ejercicio13
#include<iostream>
using namespace std;
#define TAM 50 

//defincion de prototipos
//voids uno para llenar
void llenar_vector(v[],int t);
void imprimir_vector(v[],int t);
void manejo_vector(int v[],int t,int &c,int&s);


//programa principal
int main(){
	int vec[TAM],t,c=0,s=0;
	cout<<"Cuantos datos tendra el vector"<<endl;
	cin>>t;
	llenar_vector(vec,t);
	imprimir_vector(vec,t);
	manejo_vector(vec,t);
	
	return 0;
}

void llenar_vector(v[],int t){
	int i;
	for(i=0;i<=t;i++){
	    cout<<"dato ["<<i<<"]";
	    cin>>v[i];
	}
}

void imprimir_vector(v[],int t){
	int i;
	for(i=0;i<=t;i++){
		cout<<v[i]<<"/";
	}
}

void manejo_vector(int v[],int t,int &c,int&s){
	int i,c=0,s=0;
	for(i=0;i<=t;i++){
		if(v[i]%2==0){
			c++;
		}
		if(i%2<>0){
			s=s+v[i];		
		}
	}	
}

