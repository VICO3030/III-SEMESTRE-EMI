#include <iostream>
#include <string.h>
#include <windows.h>
//#include"structs.h"
using namespace std;

void deleteProducts(FILE *f, FILE *aux, Productos r)
{
    char co[5];
    
    if ((f = fopen("Products.dat", "rb")) == NULL)
    {
    	system("color 4F");//............................................................................ color
        cout << "\t\terror en apertura en alguno de los ficheros";
    }
    if ((aux = fopen("Products2.dat", "a+b")) == NULL)
    {
        cout << "error en apertura en alguno de los ficheros";
    }
    else
    {
    	cout<<"ELIMINACION DE PRODUCTOS"<<endl;///...........................................................................TITULO
        cout << "\n\t\tIngrese el Nombre del Produtco: ";
        cin >> co;
        fread(&r, sizeof(r), 1, f);
        while (!feof(f))
        {
            /* code */
            if (strcmp(co, r.NombreProducto) == 0)
            {
                cout << "\t\tSe eliminara el articulo ";
                cout << "\t\tCodigo: ";
                cout << r.id << endl;
                cout << "\t\tNombre: ";
                cout << r.NombreProducto << endl;
                Sleep(5000);
                cout << "\t\tRegistro se elimino Correctamente....!!" << endl;
            }
            else
            {
                fwrite(&r, sizeof(r), 1, aux);
            }
            fread(&r, sizeof(r), 1, f);
        }

        fclose(f);
        fclose(aux);
    }

    if ((f = fopen("Products.dat", "wb")) == NULL)
    {
 
        cout << "\t\terror en apertura en alguno de los ficheros";
    }
    if ((aux = fopen("Products2.dat", "rb")) == NULL)
    {
    	system("color 4F");//............................................................................ color
        cout << "\t\terror en apertura en alguno de los ficheros";
    }
    else
    {
        fread(&r, sizeof(r), 1, aux);
        while (!feof(aux))
        {
            /* code */
            fwrite(&r, sizeof(r), 1, f);
            fread(&r, sizeof(r), 1, aux);
        }
        fclose(f);
        fclose(aux);
        system("del /F /A Products2.dat");
    }
}
