//paradigama PROGRMACION ORIENTADA A OBJETO
#include<iostream>
using namespace std;
class Mensaje //es mejor denotarla con 1ra letra mayuscula
{   public:        //los metodos siempre seran publicos ,usar el tipos public
    void imprimir(){
    	cout<<"------------hola mundo------------"<<endl;
	}
};          //simpre anotar punto coma la cerrar la llave siempre
int main(){
	Mensaje objeto;  //instanciar un objeto
	objeto.imprimir();
	return 0;
}
