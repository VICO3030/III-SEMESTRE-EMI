#include <stdio.h> 
typedef union 
{ 
 int a; 
 float b; 
} tdato; 
main() 
{ 
 tdato *s = NULL; 
 s->a = 0; 
 printf("%d %g\n", s->a, s->b); 
}
//d) Imprime basura (valor indeterminado)
