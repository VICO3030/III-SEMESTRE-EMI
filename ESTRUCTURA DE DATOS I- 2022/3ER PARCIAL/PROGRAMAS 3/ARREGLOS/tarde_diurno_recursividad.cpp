#include <iostream>
#include <locale.h>

using namespace std;

class Trabajadores{
	string nombre;
	float sueldo;
	
	protected:
		Trabajadores(string n, float s)
		{
			nombre = n;
			sueldo = s;
		}
		string getNom()
		{
			return nombre;
		}
		float getSuel()
		{
			return sueldo;
		}
		void mostrar()
		{
			cout<<"Nombre del trabajador: "<<nombre<<endl;
			cout<<"Sueldo del Empleado: "<<sueldo<<endl;
		}
		virtual void mostrarDatos(){}
};

class Diurno:Trabajadores{
	public:
		Diurno(string n, float sueld):Trabajadores(n, sueld){}
		float bono()
		{
			float porc;
			if(getSuel()>2000)
			{
				porc = 0.12;
			}
			else porc=0.05;
			return getSuel()*porc;
		}
		
		float total()
		{
			return getSuel()+bono();	
		}
		int veriMay3500()
		{
			if(getSuel()>3500) return 1;
			else return 0;
		}
		void mostrarDatos()
		{
			cout<<"Empleado turno Dia\n";
			Trabajadores::mostrar();
			cout<<"Su bono es de "<<bono()<<" Bs\n";
			cout<<"Su sueldo total más el bono es de "<<total()<<" Bs\n";
		}
};

class Tarde:Trabajadores{
	int antiguedad;
	public:
		Tarde(string n, float s, int a):Trabajadores(n,s)
		{
			antiguedad = a;
		}
		int getAntig()
		{
			return antiguedad;
		}
		char categoria()
		{
			if(getAntig()>20) return 'A';
			else 
				if(getAntig()<10) return 'B';
				else return 'C';
		}
		void mostrarDatos()
		{
			cout<<"Empleado Turno Tarde\n";
			Trabajadores::mostrar();
			cout<<"Su antiguedad es de: "<<getAntig()<<" años"<<endl;
			cout<<"Su categoria: "<<categoria()<<endl;
		}
};

void llenarMan(Diurno *arr[], int cant)
{
	string name;
	float pay;
	for(int i=0;i<cant;i++)
	{
		cout<<"Empleado "<<i+1<<":\n";
		cout<<"Su Nombre: "; cin>>name;
		cout<<"Su sueldo: "; cin>>pay;
		arr[i] = new Diurno(name, pay);
	}
}

void llenarTar(Tarde *ar[], int cant)
{
	string name;
	float pay;
	int anti;
	for(int i=0;i<cant;i++)
	{
		cout<<"Empleado "<<i+1<<":\n";
		cout<<"Su Nombre: "; cin>>name;
		cout<<"Su sueldo: "; cin>>pay;
		cout<<"Su antiguedad: "; cin>>anti;
		ar[i] = new Tarde(name, pay, anti);
	}
}

void imprimeDiurno(Diurno *arr[], int cant, int pos)
{
	if(pos<cant)
	{
		arr[pos]->mostrarDatos();
		cout<<endl;
		imprimeDiurno(arr, cant, pos+1);
	}
}

void imprimeTarde(Tarde *arr[], int cant, int pos)
{
	if(pos<cant)
	{
		arr[pos]->mostrarDatos();
		cout<<endl;
		imprimeTarde(arr, cant, pos+1);
	}
}

void gananMas3500(Diurno *ar[], int c, int p, int sum)
{
	if(p<c)
	{
		sum=sum + ar[p]->veriMay3500();
		gananMas3500(ar, c, p+1, sum);
	}
	else
	{
		cout<<"La cantidad de Empleados que ganan más de 3500 en el turno día es de: "<<sum<<endl;
	}
}

void CategoriasA(Tarde *a[], int c, int i, int contar)
{
	if(i<c)
	{
		if(a[i]->categoria()=='A')
		{
			contar++;
		}
		CategoriasA(a, c, i+1, contar);
	}
	else
	{
		cout<<"La cantidad de empleados de categoria A es de: "<<contar<<endl;
	}
}

int main(){
	setlocale(LC_ALL, "spanish");
	int canMan, canTar;
	Diurno *vecMan[35];
	Tarde *vecTar[35];
	cout<<"Ingrese el numero de empleados de la mañana: "; cin>>canMan;
	llenarMan(vecMan, canMan);
	cout<<"Ingrese el numero de empleados del turno tarde: "; cin>>canTar;
	llenarTar(vecTar, canTar);
	cout<<"\t\t\t---------------------------------\n";
	cout<<"\t\t\tREPORTE DE EMPLEADOS DE LA MAÑANA\n";
	cout<<"\t\t\t---------------------------------\n";
	imprimeDiurno(vecMan, canMan, 0);
	cout<<"\t\t\t--------------------------------\n";
	cout<<"\t\t\tREPORTE DE EMPLEADOS DE LA TARDE\n";
	cout<<"\t\t\t--------------------------------\n";
	imprimeTarde(vecTar, canTar, 0);
	cout<<"\t\t\t--------------------------\n";
	cout<<"\t\t\tRESULTADOS DE LOS CALCULOS\n";
	cout<<"\t\t\t--------------------------\n";
	gananMas3500(vecMan, canMan, 0, 0);
	CategoriasA(vecTar, canTar, 0, 0);
	return 0;
}
