#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Empleado
{
	private:
		char Turno;
		float salario;
	public:
		Empleado(char,float);
		float Aumento();
	
};
Empleado::Empleado(char _Turno,float _salario)
{
	Turno=_Turno;
	salario=_salario;
}
float Empleado::Aumento()
{
	float aumento;
	if(salario>500 && (Turno =='M' || Turno =='m'))
	{   
	   return (salario*0.5)+salario;
	}
	else {
		return (salario*0.7)+salario;
	}
}

char validarTurno()
{
	char _turno;
	do{
		cout<<"M o m = es mañana   ,  T o =es tarde "<<endl;
		cout<<"Ingrese el turno de trabajo <T,t o M,m >  " ; cin>>_turno;
		if(_turno!='m'&&_turno !='M'&&_turno!='t'&&_turno !='T')
		{
			cout<<"No es una opcion valida intentelo de nuevo!!!!!"<<endl;
		}
	}while(_turno!='m'&&_turno !='M'&&_turno !='t'&&_turno!='T');
	return _turno;
}

float salario()
{ 
    float sal;
	sal=1+rand()%(400+600);
	cout<<"el salario es de = "<<sal<<endl;
	return sal;
}

int main()
{
	srand(time(NULL));
	char TURNO;
	float SALARIO;
	TURNO=validarTurno();
	SALARIO=salario();
	Empleado primero(TURNO,SALARIO);
	cout<<"EL sueldo totoal del empleado mas el aumento es de  = "<<primero.Aumento();
	
}


