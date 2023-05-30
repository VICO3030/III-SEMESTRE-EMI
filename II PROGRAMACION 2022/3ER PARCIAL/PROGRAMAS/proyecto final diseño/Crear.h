#include <iostream>
#include <locale.h>
//#include"structs.h

void userRegister(FILE *f, Usuarios u)
{
    int n;
	setlocale(LC_ALL,"spanish");
    if ((f = fopen("UsersData.dat", "ab")) != NULL)
    {
    	system("cls");
    	std::cout<<"\tINGRESO DE USUARIO"<<endl;///...........................................................................TITULO
    	std::cout<<"\n\t--------------------------------------------------------------------------"<<endl;
        std::cout<<"\t\t	Ingresa el Numero de Usuarios a registrar ==> ";std::cin >> n;
        std::cout<<"\t\t-------------------------------------------------------------------------"<<endl;
        for (int i = 1; i <= n; i++)
        {
        	std::cout<<"\t\t[ Ingreso de Datos del Usuario  ==> "<<i<<" ] "<<endl;
        	std::cout<<"\t\t------------------------------------------------"<<endl;
            std::cout << "\t\tIngresa el Id de tu usuario -->\t" ;std::cin >> u.id;
            std::cout << "\n\t\tIngresa el Nombre de tu usuario -->\t" ;std::cin >> u.nombreUsuario;
            std::cout << "\n\t\tIngresa el Telefono del usuario -->\t";std::cin >> u.telefono;
            std::cout << "\n\t\tIngresa el email del usuario -->\t";std::cin >> u.email;
            std::cout << "\n\t\tIngresa la contraseña del usuario -->\t";std::cin >> u.psw;
			std::cout<<"\t\t------------------------------------------------"<<endl;
            fwrite(&u, sizeof(u), 1, f);
          //  fputc('\n', f);
        }
        fclose(f);
    }
    else
    {
    	system("color 4F");//............................................................................color 
        std::cout << "\t\tNo se pudo abrir el archivo : " << std::endl;
    }
}

void ProductRegister(FILE *f, Productos p)
{
    int n;
    if ((f = fopen("Products.dat", "ab")) != NULL)
    {
    	system("cls");
    	std::cout<<"INGRESO DE PRODUCTOS"<<endl;///...........................................................................TITULO
    	std::cout<<"\n\t\t------------------------------------------------------------------"<<endl;
        std::cout << "\t\tIngresa el numero de productos ==>" ;std::cin >> n;
        std::cout<<"\t\t--------------------------------------------------------------------"<<endl;
        
        for (int i = 1; i <= n; i++)
        {
        	std::cout<<"\t\tIngreso de Datos del Producto  [ "<<i <<" ] "<<endl;
        	std::cout<<"\t\t------------------------------------------------"<<endl;
            std::cout <<"\t\tIngresa el Id Del producto -->\t" ; std::cin >> p.id;
            std::cout <<"\n\t\tIngresa el Nombre del Producto -->\t";std::cin >> p.NombreProducto;
            std::cout <<"\n\t\tIngresa el precio del Producto -->\t";std::cin >> p.productPrice;
            std::cout<<"\t\t------------------------------------------------"<<endl;
            fwrite(&p, sizeof(p), 1, f);
          //  fputc('\n', f);
        } 
        fclose(f);
    }
    else
    {
    	system("color 4F");//............................................................................
        std::cout << "\t\tNo se pudo abrir el archivo : " << std::endl;
    }
}
