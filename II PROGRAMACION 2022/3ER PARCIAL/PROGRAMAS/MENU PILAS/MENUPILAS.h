
struct nodo{
	char dato;
	nodo *sig;
};

void apilar(nodo *&pila,char d){
	nodo *nuevo_nodo=new nodo();//paso 1
	nuevo_nodo-> dato=d;//paso 2
	nuevo_nodo-> sig=pila;//paso 3
	pila = nuevo_nodo;//paso 4
}
void desapilar(nodo *&pila,char &d){
	nodo *aux=pila;//paso1
	d=aux->dato;//paso2
	pila=aux->sig;//paso3
	delete aux;
}
