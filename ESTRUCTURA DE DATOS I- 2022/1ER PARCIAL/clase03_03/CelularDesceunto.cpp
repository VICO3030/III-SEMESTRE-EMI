#include<iostream>
using namespace std;

class Celular
{   int marca;
    float precio;
    public:
    	int valMarca();
    	float descuento(){
    		switch(marca){
    			case 1:{ descuento=precio*0.2;
					break;
				}
    			case 2:{ descuento=precio*0.14;
					break;
				}
    			case 3:{ descuento=precio*0.13;
					break;
				}
    			case 4:{descuento=precio*0.17;
					break;
				}
			}
			return descuento;
		}
		float pagoFinal(){
			return precio-descuento();
		}
		//imprime los resultados de la maraca , el precio,el descuento;
		void reporte(){
			switch(marca){
    			case 1:{ cout<<"Ha comprado = Galaxi J\n";
					break;
				}
    			case 2:{cout<<"Ha comprado = Galaxi On\n"; 
					break;
				}
    			case 3:{cout<<"Ha comprado = Galaxi Core\n";
					break;
				}
    			case 4:{cout<<"Ha comprado = Galaxi Note\n";
					break;
				}
			}
			cout<<"su precio es :"<<<precio<<" bs-"<<endl;
			cout<<"su desceunto es de "<<descuento<<"Bs.-"<<endl;
			cout<<"su pago final es "<<pagoFinal<<"Bs.-"<<endl;
		}
		float valPrecio();
		void datos(){
			marca=valMarca()
			precio=valPrecio();
			}
};

int Celular::   valMarca()
{ int opcion ;
  {do
    {   cout<<"Marcas de celular\n***********\n";
         cout<<"1. Galaxi J\n";
         cout<<"2. Galaxi On\n";
         cout<<"3. Galaxi Core\n";
         cout<<"4. Galaxi Note\n";
         cout<<"Elija una de las opciones : ";
         cin>>opcion;
         if(opcion<1 || opcion>4 ){
         	cout<<"Esa opcion es incorrecta ,vuelva a intentar\n";
         	system("pause");
         	system("cls");
		 }
	 }
   }while(opcion<1 || opcion>4);
	marca=opcion;
   return opcion;
}
float Celuar :: valPrecio(){
	float p;
	do{
		cout<<"ingrese el precio deL Celular : ";
		cin>>p;
		if(p<=0){
			cout<<"El precio del celular es incorrecto, ingrese valores positivos > a 0\n";
		}
	}while(p<=0)
	return p;
}
int main(){
	Celular phone;
	cout<<"Valor elegido"<<endl;
}
