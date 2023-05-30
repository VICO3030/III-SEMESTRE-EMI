#include <stdio.h> 
#include<iostream>
int main() 
{ 
 double d = 1024.77; 
 int *p, a = 0; 
 p = (int *)&d; 
 a = *p; 
 printf("%d\n", a); 
 return 0;
}
//c) Imprime un valor absurdo. 
