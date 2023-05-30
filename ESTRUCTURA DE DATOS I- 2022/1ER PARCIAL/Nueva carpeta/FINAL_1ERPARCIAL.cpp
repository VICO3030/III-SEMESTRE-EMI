// TAREA FINAL ESTRUCTURA
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define MAX 100

using namespace std;

class Biblioteca
{
private:
    int numerosBiblioteca[MAX]; // Numeros generados aleatoriamente de 3 a 5 digitos, [100, 99999]
    int cantidad;

public:
    Biblioteca(int cantidad)
    {
        this->cantidad = cantidad;
        for (int i = 0; i < cantidad; i++)
        {
            numerosBiblioteca[i] = 100 + rand() % (99999 - 100);
        }
    }

    // a) Suma de los numeros que estan en el intervalo [253, 5245]
    int sumaIntervalo()
    {
        int suma = 0;
        for (int i = 0; i < cantidad; i++)
        {
            if (numerosBiblioteca[i] >= 253 && numerosBiblioteca[i] <= 5245)
            {
                suma += numerosBiblioteca[i];
            }
        }
        return suma;
    }

    // b) Cantidad de numeros que terminan en 33
    int cantidadTerminan33()
    {
        int contador = 0;
        for (int i = 0; i < cantidad; i++)
        {
            if (numerosBiblioteca[i] % 10 == 3)
            {
                if (numerosBiblioteca[i] % 100/10==3)
                {
                    contador++;
                }
            }
        }
        return contador;
    }
    // c) Suma de numeros menores a 1354
    int sumaMenores1354()
    {
        int suma = 0;
        for (int i = 0; i < cantidad; i++)
        {
            if (numerosBiblioteca[i] < 1354)
            {
                suma = suma+numerosBiblioteca[i];
            }
        }
        return suma;
    }
    // d) Promedio de todos los numeros que inician con 4
    int promedioInician4()
    {
        int suma = 0;
        int contador = 0;
        for (int i = 0; i < cantidad; i++)
        {
            // numeros entre 100 y 999, que inician con 4
            if (numerosBiblioteca[i] >= 100 && numerosBiblioteca[i] <= 999 && numerosBiblioteca[i] / 100 == 4)
            {
                suma += numerosBiblioteca[i];
                contador++;
                // cout << "[" << i << "]: " << numerosBiblioteca[i] << " / " << 100 << " = " << numerosBiblioteca[i] / 100 << endl;
            }
            // numeros entre 1000 y 9999, que inician con 4
            if (numerosBiblioteca[i] >= 1000 && numerosBiblioteca[i] <= 9999 && numerosBiblioteca[i] / 1000 == 4)
            {
                suma += numerosBiblioteca[i];
                contador++;
                // cout << "[" << i << "]: " << numerosBiblioteca[i] << " / " << 1000 << " = " << numerosBiblioteca[i] / 1000 << endl;
            }
            // numeros entre 10000 y 99999, que inician con 4
            if (numerosBiblioteca[i] >= 10000 && numerosBiblioteca[i] <= 99999 && numerosBiblioteca[i] / 10000 == 4)
            {
                suma += numerosBiblioteca[i];
                contador++;
            }
        }
        if (contador == 0)
        {
            cout << "No hay numeros que inician con 4" << endl;
            return 0;
        }
        else
        {
            return suma / contador;
        }
    }

    // Funcion que imprime los numeros generados
    void imprimirNumeros()
    {
        cout << "Numeros generados: [ ";
        for (int i = 0; i < cantidad - 1; i++)
        {
            cout << numerosBiblioteca[i] << ", ";
        }
        cout << numerosBiblioteca[cantidad - 1] << " ]" << endl;
    }
};

// Pruebas
void pruebas()
{
    srand(time(NULL));
    Biblioteca biblioteca(10);
    biblioteca.imprimirNumeros();
    cout << "a) Suma de los numeros que estan en el intervalo [253, 5245]:  " << biblioteca.sumaIntervalo() << endl;
    cout << "b) Cantidad de numeros que terminan en 33: " << biblioteca.cantidadTerminan33() << endl;
    cout << "c) Suma de numeros menores a 1354: " << biblioteca.sumaMenores1354() << endl;
    cout << "d) Promedio de todos los numeros que inician con 4: " << biblioteca.promedioInician4() << endl;
}

// Main
int main()
{
    pruebas();
    return 0;
}
