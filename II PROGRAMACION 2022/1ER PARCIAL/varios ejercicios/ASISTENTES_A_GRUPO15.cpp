//La universidad está realizando un evento internacional por una semana, se están impartiendo 
//5 tutoriales con profesionales expertos en robótica e IOT. La universidad requiere un programa 
//para que calcule los montos que deben cancelar las personas inscritas al evento y montos 
//recaudados en el evento.
//Si se inscriben a los 5 tutoriales existe un descuento del 10% para cualquier tipo de 
//asistente, pero si solo toma algunos, el costo es como se muestra en la tabla:
#include <iostream>
#include <math.h>

using namespace std;

int menu();
int dolar(float x);

int menu()
{
	cout<<"\t=============PRECIOS DEL EVENTO============="<<endl;
	cout<<"1.-Estudiantes EMI    \t 10 $us."<<endl;
	cout<<"2.-Estudiante externo \t 15 $us."<<endl;
	cout<<"3.-Profesional        \t 20 $us."<<endl;
	cout<<"0.-Mostrar resultados del evento"<<endl;
	cout<<"============================================================"<<endl;
}

int dolar(float x)
{
	cout<<"Valor del dolar actual es:"<<endl;
	cin>>x;
	return x;
}

int main()
{
	float dol;
	float num,R,r,acumR=0;
	int op;
	int estudianteEMI=0,externo=0,profesional=0;
	int tot1=0,tot2=0,tot3=0,tot4=0,tot5=0;
	cout<<"Ingrese el valor del dolar"<<endl;
	cin>>dol;
	system("cls");
	do
	{
	menu();	
	int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	int acum=0;
	cout<<"Elija la opcion"<<endl;
	cin>>op;
	switch (op)
	{
	case 1:
		cout<<"¿Cuantos cursos tomara?"<<endl;
		cin>>num;
		R=(num*10)*dol;
		if(num==5)
		{
			r=(R/100)*10;
			acum=acum+r;
			cont5++;
		}
		else 
		
			if(num==1)
			{
			acum=acum+R;
			cont1++;
			}
		
		else 
		
			if(num==2)
			{
			acum=acum+R;
			cont2++;
			}
		
		else 
		
			if(num==3)
			{
			acum=acum+R;
			cont3++;
			}
		
		else 
		
			if(num==4)
			{
			acum=acum+R;
			cont4++;
			}
		estudianteEMI=estudianteEMI+acum;
		break;
	case 2:
		cout<<"cuantos cursos tomara"<<endl;
		cin>>num;
		R=(num*15)*dol;
		if(num==5)
		{
			r=(R/100)*10;
			acum=acum+R;
			cont5++;
		}
		else 
		
			if(num==1)
			{
			acum=acum+R;
			cont1++;
			}
		
		else 
		
			if(num==2)
			{
			acum=acum+R;
			cont2++;
			}
		
		else 
		
			if(num==3)
			{
			acum=acum+R;
			cont3++;
			}
		
		else 
		
			if(num==4)
			{
			acum=acum+R;
			cont4++;
			}
			externo=externo+acum;
		break;
	case 3:
		cout<<"cuantos cursos tomara"<<endl;
		cin>>num;
		R=(num*20)*dol;
		if(num==5)
		{
			r=(R/100)*10;
			acum=acum+R;
			cont5++;
		}
		else 
			if(num==1)
			{
			acum=acum+R;
			cont1++;
			}
		
		else 
			if(num==2)
			{
			acum=acum+R;
			cont2++;
			}
		
		else 
			if(num==3)
			{
			acum=acum+R;
			cont3++;
			}
		
		else 
			if(num==4)
			{
			acum=acum+R;
			cont4++;
			}
			profesional=profesional+acum;
		break;
		
	}
	tot1=tot1+cont1;
	tot2=tot2+cont2;
	tot3=tot3+cont3;
	tot4=tot4+cont4;
	tot5=tot5+cont5;
	//ACUMULADOR TOTAL
	acumR=acumR+acum;

	system("cls");
	}while(op!=0);
	if(tot1+tot2+tot3+tot4+tot5<=200)
	{
		cout<<"El cupo maximo de personas es "<<200-(tot1+tot2+tot3+tot4+tot5)<<" personas!!!"<<endl;
	}
	cout<<"En total "<<tot1+tot2+tot3+tot4+tot5<<" personas tomaron los cursos"<<endl;
	cout<<"La ganacia total por Estudiantes de la EMI fue de: "<<estudianteEMI<<"Bs."<<endl;
	cout<<"La ganacia total por Estudiantes externos fue de: "<<externo<<"Bs."<<endl;
	cout<<"La ganacia total por Profesionales fue de: "<<profesional<<"Bs."<<endl;
	cout<<"La ganancia total del evento sera de: "<<acumR<<"Bs."<<endl;
}
