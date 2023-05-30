/*
Un programa cuya entrada sea una cadena s y un n cuya funsion sea generar la cadena n veces.
*/
#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main()
{
    char cad[30];
    int n;
    cout << "Ingrese una cadena: ";
    fflush(stdin);
    gets(cad);
    fflush(stdin);
    cout << "Ingrese la cantidad de veces que quiere que se repita : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << cad[30] << " ";
    }
    return 0;
}
