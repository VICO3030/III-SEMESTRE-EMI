#include <stdio.h> 
main() 
{ 
 int a[2][3] = { 10, 20, 30, 40, 50, 60 }; 
 int *p[2]; 
 p[0] = a[0], p[1] = a[1]; 
 printf("%d\n", p[1][1]); 
}
//a) 50. 
