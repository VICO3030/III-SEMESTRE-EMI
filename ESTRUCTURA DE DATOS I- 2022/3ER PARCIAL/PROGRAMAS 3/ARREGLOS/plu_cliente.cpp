#include<iostream>
using namespace std;
class Cliente{
	private:
		string nombre;
		float sueldo;
		char turno;
	public:
		Cliente (string nom,float su,char tur){
			nombre=nom;
			sueldo=su;
			turno=tur;
		}
		string getNombre(){
			return nombre;
		}
		char getTurno(){
			return turno;
		}
		float getSueldo(){
			return sueldo;
		}
		int verificaTurno(){
			if(turno=='m'||turno=='M')
				return 1;
			else 
			   return 0;
		}
};



int main()
{
	Cliente *pers[5];
	int c=0;
	pers[0]= new Cliente("juan", 1200,'m');
	pers[1]=new Cliente("gaborez",4200,'t');
	pers[2]=new Cliente("cholo", 5200,'m');
	pers[3]=new Cliente("oscar", 6200,'n');
	pers[4]=new Cliente("victor", 7200,'t');
	for(int i =0;i<5;i++){
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"       Empleado "<<(i+1)<<endl;
		cout<<"Nombre ="<<pers[i]->getNombre()<<endl;
		cout<<"Sueldo="<<pers[i]->getSueldo()<<endl;
		cout<<"Turno = "<<pers[i]->getTurno()<<endl	;
		c=c+pers[i]->verificaTurno();
	}
	cout<<"\nSe tienen "<<c<<"personas que trabajan en la manana";
	return 0;

}
