#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char texto[40], busqueda[40];
 
    cout<<"Introduce una palabra: ";
    cin>>texto;
 
    cout << "Introduce otra palabra a buscar en ella: ";
    cin >> busqueda;
 
    if (strstr(texto,busqueda)==0)
        cout << "NO EXISTE EN EL ARREGLO" << endl;
    else
        cout << "SI ESTA DENTRO DEL ARREGLO" << endl;
 
    return 0;
}
