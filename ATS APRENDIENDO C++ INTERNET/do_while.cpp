/* la sentencia do while
   
   do{
     conjunto de instrucciones ;
 }while(expresion logica);
 */
 
 #include<iostream>
 #include<stdlib.h> //libreria para salir del programa
 using namespace std;
 
 int main(){
 	int i ;
 	i=1;
 	
 	do{
 		cout<<i<<endl;
 		i+=1;
     }while(i<=10);
     system("pause");
     return 0;
	 
 }
