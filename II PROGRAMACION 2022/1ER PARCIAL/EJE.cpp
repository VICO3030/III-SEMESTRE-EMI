#include<iostream>
#include<string.h>
&nbsp;
main()
 
{
 
&nbsp;
 
char titulo[] = "Aprenda C++";
 
char capitulo[] = "Arreglos y Cadenas";
 
&nbsp;
 
cout << "Mayúsculas: " << strupr(titulo);
 
cout << "\n\nMinúsculas: " << strlwr(capitulo);
 
&nbsp;
 
}
<h2>SUBRUTINAS DE CADENAS</h2>
Veamos otras funciones de la biblioteca string.h en el programa <b>39<i>CADENAS.CPP</i></b>:
 
&nbsp;
 
#include <iostream>
 
#include <stdio.h>
 
#include <string.h>
 
&nbsp;
 
main()
 
{
 
char nombre1[12],nombre2[12],cadena[25];
 
char titulo[20];
 
strcpy(nombre2,"Pedro");   strcpy(nombre1,"Margarita");
 
strcpy(titulo,"Trabajando con cadenas");
 
&nbsp;
 
printf("     %s\n\n",titulo);
 
printf("Nombre 1 es %s\n",nombre1);
 
printf("Nombre 2 es %s\n",nombre2);
 
strcpy(cadena,nombre1);   if(strcmp(nombre1,nombre2)>0)  // devuelve 1 si nombre1 > nombre2
 
else
 
strcpy(cadena,nombre2);
 
&nbsp;
 
printf("El nombre mayor alfabéticamente es %s\n",cadena);
 
&nbsp;
 
strcpy(cadena,nombre1);
strcat(cadena,nombre2);   strcat(cadena,"  ");
 
printf("Ambos nombres son %s\n",cadena);
 
}
