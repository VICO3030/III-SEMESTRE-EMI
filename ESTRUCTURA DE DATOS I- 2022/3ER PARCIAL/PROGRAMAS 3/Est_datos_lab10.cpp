#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Mascota
{
	string nom;
	int edad;
	protected:
		Mascota(string na,int ed)
		{
			nom=na;
			edad=ed;
		}
		string getNom()
		{
			return nom;
		}
		int getEdad()
		{
			return edad;
		}
};
class Tarjeta
{
	int tipoMas;
	protected:
		Tarjeta( int ti)
		{
			tipoMas=ti;
		}
		int getTipo()
		{
			return tipoMas;
		}
};
class Vacuna : Mascota,Tarjeta
{
	public:
		Vacuna(string n, int e, int t) : Mascota(n,e),Tarjeta(t)
		{
		}
		string vacunaPerro()
        {
            if (getEdad() >= 6 && getEdad() < 8)
            {
                return "Parvovirus o Moquillo";
            }
            else if ((getEdad() >= 8 && getEdad()) <= 10 || (getEdad() >= 12 && getEdad() <= 14))
            {
                return "polivalente Canina";
            }
            else if (getEdad() >= 16 && getEdad() <= 18)
            {
                return "TraqueoBronquitis";
            }
            else if (getEdad() >= 20 && getEdad() <= 24)
            {
                return "Antirabica";
            }
            else if (getEdad() >= 48)
            {
                return "Revacunacion Anual";
            }
            else
            {
                return "NO tiene vacunacion pendiente";
            }
        }
        string vacunaGato()
        {
            if (getEdad() >= 8 && getEdad() < 12)
            {
                return "leucemia";
            }
            else if ((getEdad() >= 8 && getEdad()) < 12 || (getEdad() >= 14 && getEdad() <= 16))
            {
                return "triple";
            }
            else if (getEdad() >= 18 && getEdad() <= 20)
            {
                return "PIF";
            }
            else if (getEdad() >= 20 && getEdad() <= 22)
            {
                return "RABIA";
            }
            else if (getEdad() >= 44)
            {
                return "Revacunacion Anual";
            }
            else
            {
                return "NO tiene vacunacion pendiente";
            }
        }
		string tipoVacuna()
		{
			if(getTipo()==1)
			{
				return vacunaPerro();
			}
			else
			{
				return vacunaGato();
			}
		}
		void reporte()
		{
			if(getTipo()==1)
			{
				cout<<" MASCOTA : PERRO";
			}
			else
			{
				cout<<" MASCOTA : GATO";
			}
			cout<<" NOMBRE :"<<getNom();
			cout<<"\n Edad :"<<getEdad()<<" SEMANAS ";
			cout<<"\n RECIBE: "<<tipoVacuna();
		}
};
int main()
{
	srand(time(NULL));
	string name;
	int edad, tipo,pos;
	string nombres[7]={"pelusa","tigre","lluvia","pucca","tyson","reina","nekita"};
	pos=rand()%(7-1);
	name=nombres[pos];
	edad=1+rand()%(500+1-1);
	tipo=1+rand()%(2+1-1);
	Vacuna vacunar(name,edad,tipo);
	vacunar.reporte();
}