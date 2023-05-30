#include<iostream>
using namespace std;

class Empleado
{
	int turno;
	float sueldo;
	private:
		float aumento()
    	{   float aum;
		    if(sueldo>500 && turno==1){
    		    aum= sueldo*0.05;
    		}
    	    else
    	    {
    	        if(sueldo<500 && turno==2)
    	        aum= sueldo*0.07;
			}
			return aum;
		}
  	
	public:
		Empleado(int t, float s)
		{  turno=t;
		   sueldo=s;
		}
		void total()
		{
			if (turno==1)
			cout<<"Turno manana"<<endl;
		    else 
		    cout<<"Turno tarde"<<endl;
		    cout<<"Su salario es = "<<endl;
		    cout<<"Su aumento es = "<<aumento()<<endl;
		    cout<<"Su total ganado es = "<<sueldo+aumento()<<endl;
        }
    
};

//modulo de validacion del turno 
int validaTurno(string msg)
{   int tu;
    do{
    	cout<<msg;
    	cin>>tu;
    	if(tu<1 || tu>2)
    	   cout<<"Ese turno no existe ,vuelva a intentarlo "<<endl;
	}while(tu<1 || tu>2);
	return tu ;
}
//modulo de validacion del sueldo
float validarSueldo(string texto)
{
	float su;
	do{
		cout<<texto;
		cin>>su;
		if(su>=200)  //sueldo minimos es de 200bs
	        cout<<"Error , se deben ingresar montos superiores a 199 bs ";
    } while(su<200);
    return su;
}

int main(){
	int turno,tecla;
	float sueldo;
	do
	{
		//validacion para turno
	    turno=validaTurno("Ingrese su turno con valor <1> manana y <2> en la Tarde : ");
	    //validacion para sueldo
	    sueldo=validarSueldo("Ingrese el monto de su salario : ");
	    Empleado oscar(turno,sueldo);
	    oscar.total();
	    cout<<"Dese continuar pulse 1 o culaquier otro numero ";
	    cin>>tecla;
	}while(tecla==1);	
}
