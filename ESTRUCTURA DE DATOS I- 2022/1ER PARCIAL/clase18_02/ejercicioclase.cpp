#include <iostream >
using namespace std ;
void imprimir (int x,int copia)
{ if(x>0)
   {imprimir (x-1,copia );
   if(x==copia)
        cout<<x;
    else
        cout<<x<<" -";
   } 
}
int main (){
	int nro;
	cout<<"ingrese un numero ";
	cin>>nro;
	imprimir(nro,nro);
	return 0;
}
