#include<iostream>
using namespace std;
int main(){
	int i, posi, c=1;
	char vec[10], dato;
	bool bandera=false;
	for(i=0; i<10; i++){
		cout<<"dato["<<i<<"]";
		cin>>vec[i];
	}
	for(i=0; i<10; i++){
	    cout<<vec[i]<<"|";
	}
	cout<<"\n ingrese dato a buscar ";
	cin>>dato;
	while(c<10 && bandera==false){
	   if(dato==vec[c]){
	       posi=c;
		   bandera=true;
	   }
	   c++;
    }
	if(bandera==true)
	cout<<"\nel dato"<<dato<<"se encuentra en la presion "<<posi;
	else
	cout<<"\nel dato buscado NO se encuentra en el verctor !!! ";
	return 0;
}	
