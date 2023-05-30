#include <stdio.h>
int main() 
{ 
 int a[5] = { 10, 20, 30, 40, 50 }; 
 int *p = a; 
 printf("%d\n", p + 1); 
 return 0;
}
//a) La dirección de a[1]. 
