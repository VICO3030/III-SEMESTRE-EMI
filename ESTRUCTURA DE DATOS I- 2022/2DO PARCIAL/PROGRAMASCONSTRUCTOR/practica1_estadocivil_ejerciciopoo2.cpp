#include<iostream>
#include<stdlib.h>
#include<time.h>

 
class Estado
{
	int *sue,cantp;
	public:
		Estado(int perso,int *vec);
		void llenar();
		string estadocivil(int estado);
		float sueldoBasico( float sueldo);
		void descuentos(float sueldo);
		void imprimir();
}
Estado::Estado(int *sueldo,int per){
	sue=sueldo;
	cantp=per;
	cout<<"Ingrese la cantidad de empleados = ";
	cin>>per;
	for(int j=0;j<per*2;j=j+2)
	{	estado = 1+ rand()%(4+1-1);//civil
	    switch (estado)
	   {	case 1: return "soltero";
		    case 2: return "casado";
		    case 3: return "divorciado";
		    case 4: return "viudo";
	   }
	}
}

void Descuento(float *sueldo, int rn)
    {
        float desc;
        switch (rn)
        {
        case 1:
            desc = *sueldo * 0.20;
            *sueldo -= desc;
            cout << "El Descuendo del AFP es: "<<desc;
            break;
        case 2:
            desc = *sueldo * 0.15;
            *sueldo -= desc;
            cout << "El Descuendo del AFP es: "<<desc;
            break;
        case 3:
            desc = *sueldo * 0.17;
            *sueldo -= desc;
            cout << "El Descuendo del AFP es: " << desc;
            break;
        case 4:
            desc = *sueldo * 0.14;
            *sueldo -= desc;
            cout << "El Descuendo del AFP es: " << desc;
            break;
        }
    }



void Imprimir()
    {
        switch (estado)
        {
        case 1:
            cout << "el estado civil del empleado es: " <<estCivil[0] << endl;
            break;
        case 2:
            cout << "el estado civil del empleado es:"<<estCivil[1] << endl;
            break;
        case 3:
            cout << "el estado civil del empleado es: "<<estCivil[2] << endl;
            break;
        case 4:
            cout << "el estado civil del empleado es: " << estCivil[3] << endl;
            break;
        }
        cout << "El sueldo basico es: " << sueldoB << endl;
        Bono(&sueldo, rn)<<endl;
        AFPDesc(&sueldo, rn)<<endl;
        IVADesc(&sueldo)<< endl;

    }
};
int main()
{   srand(time(NULL));
	Estado imprimir();
	imprimir.estadocivil();
	imprimir.empleado();
	
}
