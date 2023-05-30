#include<iostream>
#include<stdlib.h>//para numeros aletorios
#include<time.h>
using namespace std;
class Codigo
{  int nroCod[30],cant;
   public:
   	    int ingresaTam();
   	    void llenar();
   	    void imprimir(int a[],int tam);
   	    void copiar();
   	    bool empiezaPar(int cod);
};
//implementacion de los metodos 
int Codigo::ingresaTam()
{   int tama;
    do
   {  cout<<"ingrese la cantidad de codigos";
      cin>>tama;
      if(tama<=0){
      	cout<<"Error , no se aceptan negativos , vuelve a ingresar";
	  }   
   }while(tama<=0);
   return tama;
}
void Codigo::llenar()
{   cant=ingresaTam();
    for (int p=0;p<cant;p++){
    	nroCod[p]= 10000+rand()%(100000-10000);    //RANGO DE LOS COIDGOS 10000 HASTA 99999
	}
	cout<<"los codigos ingresados son : \n";
	imprimir(nroCod,cant-1);
}
void Codigo::imprimir(int a[],int tam){
	if(tam>=0){
		imprimir(a,tam-1); //ciclo recursivo
		cout<<a[tam]<<"  ";	
	}
}
bool Codigo::empiezaPar(int cod){
	if(cod>=10){
		return empiezaPar(cod/10); //ciclo recursivo
	}	
	else
	{  if (cod%2==0)    return true;  //condicion de fin 
	   else     return false;
	}
}
void Codigo::copiar(){
	for(int pos=0;pos<cant;pos++){
		if(empiezaPar(nroCod[pos])==true){
			copiaCod[j]=nroCod[pos];
			j++;
		}
	}
	if(j==0)  cout<<"No existen codigos que empiezencon con digito par\n";
	else
	{ cout<<"\nLA LISTA DE CODIGOS QUE EMPIEAN CON digito es=  "<<endl;
		imprimir(copiaCod,j-1);
	}
}
int main(){
	Codigo libro;
	srand(time (NULL));
	libro.llenar();
	libro.copiar();
	return 0;
}
