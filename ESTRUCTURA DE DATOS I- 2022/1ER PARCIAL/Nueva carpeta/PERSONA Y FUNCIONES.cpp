#include <iostream>
using namespace std;
// Declaración de la clase
class persona
{
	public:  // METODOS
		void dormir();
		void hablar();
		void contar();
		void adquirirNombre();
		void decirNombre();
	private:
		char nombre [40]; // ATRIBUTO
};

// Declaración de funciones de la clase
void persona::dormir()
{
	cout << "zzzzzzzzz" << endl;
}
void persona::hablar()
{
	cout << "bla bla bla bla" << endl;
}
void persona::contar()
{
	cout << "1, 2, 3, 4, 5..." << endl;
}
void persona::adquirirNombre()
{
	cout << "Soy una persona. Ingrese mi nombre: ";
	cin >> nombre;
}
void persona::decirNombre()
{
	cout << "Mi nombre es: " << nombre << endl;
}
// llamadas a los procesos
int main()
{
	int respuesta = 0;
	// Creando una persona y capturando su nombre
	cout << "Desea crear una persona? 1=Si, 0=No: ";
	cin >> respuesta;
	if (respuesta == 1)
	{	
		persona juan; // CREAR EL OBJETO
		juan.adquirirNombre();
		cout << "Desea que diga mi nombre? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
			juan.decirNombre();
		cout << "Quiere escucharme hablar? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
			juan.hablar();
		cout << "Desea que vaya a dormir? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
			juan.dormir();
		cout << "Desea oirme contar? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
			juan.contar();
	}
	system("pause");
	return 0;
}
