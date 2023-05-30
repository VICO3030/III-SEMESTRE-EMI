#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void cambiarcolor(int X)
{ 
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X); 
} 
void pin(int,int);
void sin(int);
int main ()
{
 system ("color f3");
 cout<<"\n";
 
 int n=240,r=244,a=252,am=254;
 
 cout<<"\n\t";
 sin(4);
 pin(4,n);
 sin(9);
 pin(1,n);
 
 cout<<"\n\t";
 sin(3);pin(1,n);pin(1,r);pin(2,a);pin(1,r);pin(1,n);sin(7);pin(1,n);pin(1,r);pin(1,n);
 
 cout<<"\n\t";
 sin(2);pin(1,n);pin(1,r);pin(4,a);pin(1,r);pin(1,n); sin(6);pin(1,n);pin(2,r);pin(1,n);  
  
 cout<<"\n\t";
 sin(2);pin(1,n); pin(6,a); pin(1,n); sin(6);pin(1,n);pin(2,r);pin(1,n);   
 
 cout<<"\n\t";
 sin(1);pin(1,n);pin(7,a);pin(1,r);pin(1,n);sin(4);pin(1,n);pin(1,r);pin(1,am);pin(2,r);pin(1,n);
 
 cout<<"\n\t";
 pin(1,n);pin(4,a);sin(1);pin(1,n);pin(2,a);pin(1,r);pin(1,n);sin(4);pin(1,n);pin(1,r);pin(2,am);pin(1,r);pin(1,n);
 
 cout<<"\n\t";
 pin(1,n);pin(4,a);pin(2,n);pin(1,a);pin(3,r);pin(1,n);sin(3);pin(1,n);pin(1,r);pin(1,am);pin(2,r);pin(1,n);
 
 cout<<"\n\t";
 pin(1,n);pin(4,a);pin(2,n);pin(1,a);pin(3,r);pin(1,n);sin(4);pin(1,n);pin(1,a);pin(2,n);
 
 cout<<"\n\t";
 sin(1);pin(1,n);pin(1,r);pin(5,a);pin(4,r);pin(1,n);sin(3);pin(1,n);pin(1,a);pin(1,n);
 
 cout<<"\n\t";
 sin(2);pin(2,n);pin(9,r);pin(1,n);sin(1);pin(1,n);pin(2,a);pin(1,n);
 
 cout<<"\n\t";
 sin(4);pin(3,n);pin(2,r);pin(1,n);pin(3,r);pin(2,n);pin(1,r);pin(1,a);pin(1,n);
 
 cout<<"\n\t";
 sin(5);pin(1,n);pin(2,am);pin(1,n);pin(5,r);pin(1,n);pin(2,r);pin(1,n);
 
 cout<<"\n\t";
 sin(5);pin(1,n);pin(3,am);pin(2,n);pin(3,r);pin(1,n);pin(1,r);pin(1,n);
 
 cout<<"\n\t";
 sin(4);pin(1,n);sin(1);pin(1,n);pin(3,am);pin(4,r);pin(2,n);
 
 cout<<"\n\t";
 sin(5);pin(3,n);sin(2);pin(3,r);pin(2,n);
 
 cout<<"\n\t";
 sin(8);pin(3,n);pin(1,r);pin(2,n);
 
 cout<<"\n\t";
 sin(9);pin(1,n);sin(1);pin(1,r);sin(1);pin(1,n);
 
 cout<<"\n\t";
 sin(10);pin(3,n);
 

getch ();
return 0;
}
void pin(int x,int c){
           cambiarcolor (c);
           int i;
           for(i=1;i<=x;i++){
           cout<<char(219)<<char(219);
           }
           }
void sin(int o){
           
           int j;
           for(j=1;j<=o;j++){
           cout<<char(255)<<char(255);
           }
           }
