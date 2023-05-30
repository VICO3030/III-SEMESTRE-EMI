#include<iostream>
#include<stdlib.h>
using namespace std;

class Empresa
{ 
    int nroTelf,min,forma;
    protected:
    	Empresa(int n , int m, int f){
    	nroTelf=n;
    	min=m;
    	forma=f;
		}
    int getNroTelf(){
    	
    	return nroTelf;	
	}
	int getMin(){
		return min;
	}
	int getForma()
	{
		return forma;
	}
};



class Entel:Empresa
{ public:
	Entel(int a,int b,int c):Empresa(a,b,c)
	{
	}
	
		string promocion()
		{
			if(getForma()==1 )
			{
				if(getMin()>=5 && getMin()<=10)
				{
					return " 10 MSM";
				}
				else{
					return "WHATSAAP ILIMITADO ";
				}
			}
			else{
				if( getMin()>30)
				{
					return "CARGA DOBLE";
				}
				else{
					return "30 MB PARA NAVEGACION";
				}
			}
		}
};


class Viva:Empresa
{
	public:
		Viva(int x , int y ,int z):Empresa(x,y,z)
		{
		}
	void promocion ()
	{ 
	   if (getForma()==2)
	   {
	   	cout<<"WHATSAP ILIMITADO  Y 15 SMS";
	   }
	   else{
	   	if(getMin()<20){
	   			cout<<"BOLSAS DE NAVEGACION ";
		   }
	   	else{
	   		cout<<"20 BS RECARGA Y BOLSAS DIARIAS DE NAVEGAVION ";
		   }
	   }
	
	}
};

void datos( int& a ,int &b , int &c){
	   a= 60000000+rand()%(79999999+1-60000000);
	   b=1+rand()%(120+1-1);
	   c=1+rand()%(2+1-1);
	   cout<<"TELEFONO = "<<a;
	   cout<<"\nminutos llamada = "<<b;
	   if(c==1){
	   	cout<<"\nForma de pago = PRE -PAGO ";
	   }
	   else{
	   	cout<<"\nForma de pago = POST PAGO ";
	   }
}

void ejecutar(int op)
{
	int a,b,c;
	if(op==1)
	{ 
	   datos(a,b,c);
	   Entel clienteE(a,b,c);
	   cout<<clienteE.promocion();
	}
	if( op==2){
		datos(a,b,c);
		Viva clienteV(a,b,c);
		clienteV.promocion();
	}
}

void menu(){
	cout<<"         MENU DE EMPRESAS           "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"   1.- ENTEL  "<<endl;
	cout<<"   2.- VIVA   "<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"ELIJA UNA OPION  ........:"<<endl;
}


int main()
{
	int opcion, tecla;
	do{
	    menu();
     	cin>>opcion;
	    ejecutar(opcion);
	    cout<<"\nPulse 1 para seguir y otro valor para terminar ...";
	    cin>>tecla;
	}while(tecla==1);

	return 0;
}
