#include <stdio.h> 
#include<iostream>
using namespace std;
int main() 
{ 
 int a[2][3] = { 10, 20, 30, 40, 50, 60 }; 
 int **p = a; 
 printf("%d\n", p[1][1]); 
 return 0;
}
//c) El programa produce un error durante la compilación.
