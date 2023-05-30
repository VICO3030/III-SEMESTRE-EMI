#include <iostream>
#include <string.h>
using namespace std;
void menu()
{
    cout<<"Ingrese la opcion correcta:"<<endl;
    cout<<"1)LONGITUD DE CADENA"<<endl;
    cout<<"2)COMPARAR CADENAS"<<endl;
    cout<<"3)COPIAR CADENA"<<endl;
    cout<<"4)CONCATENAR"<<endl;
    cout<<"OTRO NUMERO PARA SALIR"<<endl;
}
void copiar(char c1[], char copia[])
{
    strcpy( copia, c1 );
    cout<<"La copia es: "<<copia<<endl;
}
void comparar(char c1[], char c2[])
{
    int valor;
    valor= strcmp(c1,c2);//compara
    if (valor==0){
        cout<<"Las cadenas son iguales\n";
    }
    else{
        if (valor==1)
            cout<<"La cadena 1 es mayor que la cadena 2\n";
        else{
            cout<<"La cadena 2 es mayor que la cadena 1\n";
        }
    }
}

void concatenar(char c1[], char c2[])
{
    strcat( c1, " ");
    strcat( c1,c2);
    cout<<"La cadena es: "<<c1<<endl;
}

int main()
{
    int c,opcion;
    char cadena[20],cadena2[20],copia[20],concatenada[40];
    cout << "Escriba la cadena uno:" << endl;
    //cin>>cadena;
    //cin.getline(cadena,20);
    fflush(stdin);
    gets(cadena);
    fflush(stdin);
    cout << "Escriba la cadena dos:" << endl;
    gets(cadena2);
    menu();
    cin>>opcion;
    switch(opcion)
    {
        case 1:
            { c=strlen(cadena);
                cout<<"La cantidad de caracteres es de:"<<c<<endl;
            };break;
        case 2: comparar(cadena,cadena2);break;
        case 3: copiar(cadena,copia);break;
        case 4: concatenar(cadena,cadena2);break;
    }
    return 0;
}

