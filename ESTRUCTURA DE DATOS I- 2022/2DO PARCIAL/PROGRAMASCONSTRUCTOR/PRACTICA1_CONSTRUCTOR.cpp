/* 3.	Ingresar el estado civil, el sueldo basico de los “n” empleados de
 una empresa, y en base a esto realizar el cálculo del bono, el descuento AFP,
el descuento IVA y el sueldo total tomando en cuenta los siguientes datos:*/

#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


class Empleado
{
    float sueldo, sueldoB;
    string *estCivil;
    int rn;

public:
    Empleado(float sue)
    {
        estCivil = new string[4];
        sueldo = sue;
        sueldoB = sueldo;
        rn = 0 + rand() % (4 - 0);
        *(estCivil + 0) = "Soltero";
        *(estCivil + 1) = "Casado";
        *(estCivil + 2) = "Viudo";
        *(estCivil + 3) = "Divorciado";
    }
    float AFPDesc( int rn)
    {
        float desc;
        switch (rn)
        {
        case 0:
            desc = sueldo * 0.20;
            // sueldo -= desc;
            cout << "El Descuendo del AFP es: " << desc;
            break;
        case 1:
            desc = sueldo * 0.15;
            // sueldo -= desc;
            cout << "El Descuendo del AFP es: " << desc;
            break;
        case 2:
            desc = sueldo * 0.17;
            // sueldo -= desc;
            cout << "El Descuendo del AFP es: " << desc;
            break;
        case 3:
            desc = sueldo * 0.14;
            //1sueldo -= desc;
            cout << "El Descuendo del AFP es: " << desc;
            break;
        }
        return desc;
    }

    float IVADesc()
    {
        int desc = sueldo * 0.13;
        // sueldo -= desc;
        cout << "El Descuendo del AFP es: " << desc;
        return desc;
    }

    float Bono( int rn)
    {
        float bon = 0;
        switch (rn)
        {
        case 0:
            bon += 200;
            cout << "el sueldo es actual es: " << sueldo;
            break;
        case 1:
            bon += 300;
            cout << "el sueldo es actual es: " << sueldo;
            break;
        case 2:
            bon += 250;
            cout << "el sueldo es actual es: " << sueldo;
            break;
        case 3:
            bon += 350;
            cout << "el sueldo es actual es: " << sueldo;
            break;
        }
        return sueldo;
    }

    void Imprimir()
    {
        float b, a, i;
        switch (rn)
        {
        case 1:
            cout << "el estado civil del empleado es: " << estCivil[0] << endl;
            break;
        case 2:
            cout << "el estado civil del empleado es: " << estCivil[1] << endl;
            break;
        case 3:
            cout << "el estado civil del empleado es: " << estCivil[2] << endl;
            break;
        case 4:
            cout << "el estado civil del empleado es: " << estCivil[3] << endl;
            break;
        }
        cout << "El sueldo basico es: " << sueldoB << endl;
         b = Bono(rn); cout  << "\n";
        a = AFPDesc( rn); cout << "\n";
        i = IVADesc(); cout << "\n";
        

    }

};

int main() {
    int n;
    float sueldo;
    cout << "Ingresa el numero de empleados: "; cin >> n;
    for(int i = 0; i < n; i++) {
        
        cout << "Ingresa el sueldo: " << endl;
        cin >> sueldo;
        Empleado ss(sueldo);
        ss.Imprimir();
    }


    return 0;
}
