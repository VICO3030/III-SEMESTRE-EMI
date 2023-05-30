//calcular el  numero de pulsaciones de cada personas por segundo
#include <iostream>
using namespace std;
//clase
class Atleta{
	char genero;
	int edad;
	public: 
	    void pedir(){
	    	do{
	    	   cout<<"ingrese F para femenino y M si es masculino =";
	    	   cin>>genero;
	    	   if(genero!=="F"|| genero!=="f"||genero!="M"||genero!="m"){
				   }
	       }while((genero!=="F"|| genero!=="f"||genero!="M"||genero!="m"))
	    	cout<<"ingrese su edad =";
	    	cin>>edad;
		   }
		float puls(){
			if(genero=="F"|| genero=="f"){
				return (220.0-edad)/10;
			}
			else
			{
				return (210.0-edad)/10;
			}
	
		}
		void imprime(){
			pedir();
			cout<<"la pulsacion es de "<<puls();
		}
};
int main(){
	Atletas sport;
	sport.imprime();
	return 0;
}
