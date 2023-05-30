# include <iostream>
using namespace std;
void llenar(int v[],int t)
{
	for (int p=0;p<t;p++)
	{
		cout<<"Ingrese elemento posicion "<<p<<" : ";
		cin>>v[p];
	}
}
void imprimir(int v[], int t)
{
	for (int p=0;p<t;p++)
	{
		cout<<v[p]<<"  ";
	}
	cout<<endl;
}

// hallar la suma de todos los numeros pares que existen en el vector
void sumaPares(int v[],int t)
{   int sum=0;   // se inicializa el acumulador
	for (int p=0;p<t;p++)
	{
		if (v[p]%2==0) // si el residuo es cero significa que el numero que esta en el arreglo es PAR
			sum=sum+v[p];  // si cumple se acumula el numero que esta en el vector
	}
	cout<<"La suma de los pares = "<<sum;
}

int menu()
{	int opcion;
	cout<<"		1. Llenar el vector\n";
	cout<<"		2. Imprimir el vector\n";
	cout<<"		3. Sumar los valores pares\n";
	cout<<"		4. Salir del programa \n\n";
	cout<<"Elija una opción..\n";
	cin>>opcion;
	return opcion;
}
int main()
{
	int a[20];
	int d,op;
	do
	{
		system("cls");
		op=menu();
		switch (op)
		{	case 1:
					{	cout<<"Ingrese el tamanio del vector : ";
						cin>>d;
						llenar(a,d);  // método para ingresar los datos a cada posicion del arreglo
						break;
					}
			case 2: 
					{	imprimir(a,d); // metodo que imprime los números ingresados
						break;
					}
			case 3: 
					{	sumaPares(a,d);  // se llama a la suma de los pares
						cout<<endl;
						break;
					}
		}
		if (op!=4)	
				system("pause"); 
	}while (op!= 4);
	cout<<"Saliendo del programa...";
	return 0;	
}
