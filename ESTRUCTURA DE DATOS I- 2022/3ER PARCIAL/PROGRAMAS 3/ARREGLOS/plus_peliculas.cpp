#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class Pelicula
{
	string titulo,genero;
	float duracion;
	public:
	Pelicula(string a , string b, float d){
		titulo=a ;
		genero=b;
		duracion=d;
	}
	string getTitulo(){
		return titulo;
	}
	string obtGenero(){
		return genero;
	}
	float obtDuracion(){
		return duracion;
		
	}
	bool averigua()
	{
		if(genero=="Comedia"&& duracion>2)
		    return true;
		else
		    return false;
	}
};

int aleatorio(int li , int ls){
	return li+rand()%(ls+1-li);
}
void llenarPeliculas(Pelicula *v[],int ta,string ti[],string gen[],float du){
	string tit,ge;
	for(int i=0 ; i<ta ;i++){
		tit=ti[aleatorio(0,5)];
		ge=gen[aleatorio(0,3)];
		v[i]=new Pelicula(tit,ge,du);
		du=aleatorio(0,2)+aleatorio(10,99)/100.0;
	}
}

void mostrarPeliculas(Pelicula *v[],int ta){
	for(int p=0 ;p<ta;p++)
	{
		cout<<"\nPelicula  # "<<(p+1)<<"\n";
		cout<<"=====================\n";
		cout<<"Titulo = "<<v[p]->getTitulo()<<endl;
		cout<<"Genero ="<<v[p]->obtGenero()<<endl;
		cout<<"Duracion = "<<v[p]->obtDuracion()<<endl;
	}
}
void contarPeliculas(Pelicula *v[],int ta)
{
	int cont=0;
	for(int p=0; p<ta ;p++)
	  if(v[p]->averigua())
	    cont ++;
	cout<<"********************************************"<<endl;
	cout<<"Se tienen "<<cont<<"peliculas de comedi con duracion de mas de 2 horas";
	
}

int main()
{
	string titulos[6]={"MADAGASCAR","LAS TINIEBLAS","EL ESTA VIVO","EL HOMBRE QUE TE AMA","DIOS NO ESTA MUERTO","EDIT MACEDO"};
	string	generos[4]={"Comedia","suspenso","accion","terror"};
	float duracion=aleatorio(0,2)+aleatorio(10,99)/100.0;
	int cant;
	char tecla;
	srand(time(NULL));
	Pelicula *films[30];
	do{
		cout<<"Ingrese la cantidad de peliculas que desea registrar : ";cin>>cant;
		llenarPeliculas(films,cant,titulos,generos,duracion);
		mostrarPeliculas(films,cant);
		contarPeliculas(films,cant);
		cout<<"\nSI desea seguir Y o de lo contrario N : ";cin>>tecla;
		
	}while(tecla=='Y'||tecla=='y');
}
