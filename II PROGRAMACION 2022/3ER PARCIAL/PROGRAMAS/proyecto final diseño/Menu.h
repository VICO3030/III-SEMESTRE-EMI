#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13
//GOTOXY
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwpos;
	dwpos.X=x;
	dwpos.Y=y;
	SetConsoleCursorPosition(hcon,dwpos);
}
//GENERACION DE UN MENU
int menu(const char *title,const char *options[],int n){
	int op=1;
	int tecla;
	bool repite=true;
	do{
		system("cls");
		gotoxy(5,3+op);cout<<"==>";
		//impresion del titulo
		gotoxy(15,2);cout<<title;
		//impresion de las opciones
		for(int i=0;i<n;i++){
			gotoxy(10,4+i);cout<<i+1<<") "<<options[i];
		}
		do{
			tecla=getch();
		}while(tecla!=TECLA_ARRIBA&&tecla!=TECLA_ABAJO&&tecla!=ENTER);
		switch(tecla){
			case TECLA_ARRIBA: {
				op--;
				if(op==0) op=n;
				break;
			}
			case TECLA_ABAJO: {
				op++;
				if(op>n) op=1;
				break;
			}
			case ENTER: repite=false;break;
		}
	}while(repite);
	return op;
}
//SUBMENU1
void submenu1(){
	bool repite=true;
	int opcion;
	
	const char *titulo = " [**********SUB-MENU***********]";
	const char *opciones[3] = {"Usuario","Producto","Regresar"};
	
	do{
		opcion=menu(titulo,opciones,3);
		switch(opcion){
			case 1:{
				FILE *usuario;
				Usuarios userData;
				userRegister(usuario,userData);
				cout<<"\n\t\tDatos del usuario se registraron correctaemnte !!!!"<<endl;
				system("pause>nul");
				break;
			}
			case 2:{
				FILE *producto;
				Productos productData;
				ProductRegister(producto,productData);
				cout<<"\n\t\tDatos del producto registrados correctamente !!!!"<<endl;
				system("pause>nul");
				break;
			}
			case 3:{
				repite = false;
				break;
			}
		}
	}while(repite);
}
//SUBMENU2
void submenu2(){
	bool repite=true;
	int opcion;
	
	const char *titulo = " [**********SUB-MENU***********]";
	const char *opciones[3] = {"Usuario","Producto","Regresar"};
	
	do{
		opcion=menu(titulo,opciones,3);
		switch(opcion){
			case 1:{
				FILE *usuario;
				Usuarios userData;
				Mostrar_Usuario(usuario,userData);
				system("pause>nul");
				break;
			}
			case 2:{
				FILE *productos;
				Productos products;
				Mostra_Producto(productos,products);
				system("pause>nul");
				break;
			}
			case 3:{
				repite = false;
				break;
			}
		}
	}while(repite);
}
//MENU PRICIPAL
void menu_principal(){
	bool repite=true;
	int opcion;
	
	const char *titulo = "MENU PRINCIPAL";
	const char *opciones[5] = {"Agregar","Borrar Producto","Modificar Producto","Mostrar","Salir"};
	
	do{
		opcion=menu(titulo,opciones,5);
		switch(opcion){
			case 1: submenu1();break;
			case 2:{
				FILE *productos;
				FILE *AUX;
				Productos products;
				deleteProducts(productos,AUX,products);
				system("pause>nul");
				break;
			}
			case 3:{
				FILE *fichero;
				Productos products;
				modif_fichero(fichero,products);
				system("pause>nul");
				break;
			}
			case 4:{
				submenu2();break;
			}
			case 5 :{
				repite = false;
				break;
				
			}	
		}
	}while(repite);
}
