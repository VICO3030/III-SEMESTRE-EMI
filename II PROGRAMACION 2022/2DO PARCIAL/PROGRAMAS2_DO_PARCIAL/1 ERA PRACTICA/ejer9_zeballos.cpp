#include <stdio.h> 
#include <stdlib.h> 
void asigmem(int *p, int t); 
main() 
{ 
 int *p = NULL; 
 asigmem(p, 3); 
 p[0] = 10, p[1] = 20, p[2] = 30; 
 printf("%d\n", p[1]); 
} 
void asigmem(int *p, int t) 
{ 
 p = (int *)malloc(t * sizeof(int)); 
} 
//b) Imprime basura (valor indeterminado). 
