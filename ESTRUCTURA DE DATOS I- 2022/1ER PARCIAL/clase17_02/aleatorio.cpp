#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
float numReal()
{   float num,num2;
    num=250+rand()%(421-250);  //250 a 420
    num2=rand()%100;  //0 a 100
    num2=num2/100;   //parte decimal de 3 digitos 
	return num+num2;
}
void llenar(float v[],int t){
	for (int j=0;j<=t-1;j++)
	{   v[j]=numReal();
	}
}
//imprimir
void imprimir(float v[],int t){
	for(int j =0;j<t;j++){
		cout<<v[j]<<"\t";
		if((j+1) %4==0)
		{  cout<<endl;
		}
	}
}
int main(){
	float vector [50];
	int tam;
	srand(time(NULL));
	cout<<"NUMERO DE ELEMENTOS ;";
	cin>>tam;
	llenar(vector,tam);
	imprimir(vector,tam);
	
	
	return 0;
}
