/*tomar la temperatura cada 4 horas , leer 6 temperaturas , calcular la media 
,la temperatura mas alta y baja del dia*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float temp,acm=0,media,baja=999,alta=0;
	int tam=6;

	for(int i=0;i<24;i+=4){
		cout<<"Ingrese la temperatura "<<i<<" =";cin>>temp;
		acm=acm+temp;
		media=acm/tam;
		//condicion para allar alta
		if(temp>alta){
			alta=temp;
		}

		//condicion para allar baja
		if(temp<baja){
			baja=temp;
		}
	}
	cout<<"La media de la temperatura del dia es de : "<<media<<endl;
	cout<<"La temperatura mas baja es ="<<baja<<endl;
	cout<<"La temperatura mas alta es = "<<alta<<endl;
	return 0;
}
