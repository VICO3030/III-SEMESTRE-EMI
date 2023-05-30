#include <iostream>
using namespace std;

//lenado dell vector 
void llenar(float v[],int t)
{
	for (int p=0;p<t;p++)
	{
		cout<<"Ingrese elemento posicion "<<p<<" : ";
		cin>>v[p];
	}
}

void imprimir(float v[], int t)
{
	for (int p=0;p<t;p++)
	{
		cout<<v[p]<<"  ";
	}
	cout<<endl;
}

//ordenamiento quick sort
void quicksort(float v[],int izq,int der){
	int i,j,temp;
	float AUX,medio;
	i=izq;
	j=der;
	temp=(izq+der)/2;
	medio=v[temp];
	do{
		while (v[i]<medio){
			i++;
		}
		while (v[j]>medio){
			i--;
		}
		if(i<=j){
			AUX=v[i];
			v[i]=v[j];
			v[j]=AUX;
			i++;
			j--;
		}
	}while(i<=j);
	if(izq<j){
		quicksort(v,izq,j);
	}
	if (i<der){
		quicksort(v,i,der);
	}
}
int main(){
	float a[20];
	int d;
	cout<<"Ingrese el tamanio del vector : ";
	cin>>d;
	llenar(a,d);
	cout<<"vector ingresado ";
    imprimir(a,d); 
	quicksort(a,0,d-1);
	cout<<"EL ORDENAMIENTO POR QUICK SORT : ";  
	imprimir(a,d);  
	return 0;		
}
