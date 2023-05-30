#include <iostream>
using namespace std;

void datos(float v[],int tam) //parametros
{   if (tam>=0)
    {   datos(v,tam-1);
        cout<<"ingrese el elemento de la posicion ["<<tam<<" ;";
	    cin>>v[tam];
	}
	else
	{  cout<<"ingrese el elemento de la posicion ["<<tam<<" ;";
	   cin>>v[tam];
	}
}
     
void mostrar(float v[],int p , int tam)
{   if (p<tam)
   {   cout<<v[p]<<" ";
       mostrar(v,p+1,tam);
   }
}
void mostrarvuelta (float v[],int tam)
{   if(tam>=0)
    { mostrarVuelta(v,tam-1);
    cout<<"vector [ "<<tam<<" ]"<<v[tam]<<endl;
	}
}


int main(){
	float vec[20];
	int tam;
	cout<<"ingrese el tamano del vector "
	datos(vec,tam-1);
	mostrar(vec,0,tam);
	mostrarVuelta(vec,tam-1);
	return 0;
}
