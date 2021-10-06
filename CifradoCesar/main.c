#include "Cifrado.h"

int main(){
	
	printf("Bienvenido al programa de cifrado, ingrese una cadena\n");
	char cadena[20];
	for(int i = 0;i<20;i++)
		cadena[i] = '\0';
	scanf("%s",&cadena);
	printf("Seleccione la opcion\n1.Cifrado\n2.Descifrado\n");
	int op;
	scanf("%d",&op);
	op==1?cifrado(cadena):descifrado(cadena);
	
	return 0;
}