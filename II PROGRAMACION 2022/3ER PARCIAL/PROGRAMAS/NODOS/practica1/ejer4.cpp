#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct elemento{
	char dato[30];
	struct elemento *siguiente;
};

typedef struct elemento Nodo;

Nodo*crearPila();
int pilaVacia(Nodo *cima);
void insertar(char *x, Nodo **cima);
void eliminar(Nodo **cima);
void imprimePila(Nodo **cima);
void insertarPalindromo(char *x, Nodo **cima);
void extraer(Nodo **cima);
main(){
	char texto[30];
	Nodo *cima;
	printf("Inserte palindromo: ");
	scanf("%s", texto );
	insertarPalindromo(texto,&cima);

}

Nodo* crearPila(){
	Nodo *cima;
	cima=NULL;
	printf("Pila creada. \n");
	return cima;
}

int pilaVacia(Nodo *cima){
	if(cima==NULL){
		return 1; //regresa 1 si es vacía
	}else
		return 0; //regresa 0 si no es vacía
}

void insertar(char *x, Nodo **cima){
	//fflush(stdin);//inserta al inicio de la lista
	printf("\nPush(insertar): %c\n",x);
	Nodo *nuevo;
	nuevo = (Nodo *) malloc (sizeof(Nodo));
	nuevo->dato,x;//
	nuevo->siguiente=*cima;
	*cima=nuevo;
	
}

void eliminar(Nodo **cima){ //elimina del inicio de la lista
    printf("\nPop (eliminar)\n");
	if(pilaVacia(*cima)==1){
		printf("Error al eliminar: no hay elementos en la pila.\n\n");
	}else{
		Nodo *actual;
		actual=*cima;
		*cima=actual->siguiente;
	if(strcmp(actual->dato,actual->dato)==0){  /*aquí tengo problemas con la
 comparación de caracteres*/
		printf("Coinciden dato %c y %c !!!\n", actual->dato, actual->dato); /*aquí se imprimen caracteres extraños*/
	}else{
		printf("NO es palindromo!!!");
		
	}
		free(actual);
		
	}
}

void imprimePila(Nodo **cima){
	Nodo *actual;
	actual=*cima;
	
	if(pilaVacia(*cima)==1){
		printf("Error al imprimir: no hay elementos en la pila.\n\n");
	}else{
		printf("-------PILA--------\n");
		while(actual != NULL){
			//fflush(stdin);
			printf("%c \n",actual->dato);// aquí se imprimen caracteres extraños
			actual = actual->siguiente;
		}
		printf("-------------------\n");
	}
}

void insertarPalindromo(char *x, Nodo **cima){
	crearPila();
	Nodo *nuevo;
	nuevo=*cima;
	printf("%s\n",x);
	int i=0;
	char palindromo [strlen(x)];
	for(i=0; i<strlen(x); i++){
	insertar(x[i], &*cima);	//hasta aca todo bien
	}
	while(pilaVacia(*cima)==0){
		i--;
		eliminar(&*cima);
		imprimePila(&*cima);
}
	
	printf("La palabra es palindromo ");
}



