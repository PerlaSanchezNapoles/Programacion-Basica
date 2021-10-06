#include "Cifrado.h"

void cifrado(char cadena[20]){
	char aux;
	char cadenaCifrada[20];
	for(int i = 0;i<20;i++)
		cadenaCifrada[i] = '\0';
	for(int i = 0;cadena[i]!='\0';i++){
		aux = cadena[i];
		aux = aux+13;
		cadenaCifrada[i] = aux;
	}
	printf("La cadena %s cifrada es: %s\n",cadena,cadenaCifrada);
}

void descifrado(char cadena[20]){
	char aux;
	char cadenaDescifrada[20];
	for(int i = 0;i<20;i++)
		cadenaDescifrada[i] = '\0';
	for(int i = 0;cadena[i]!='\0';i++){
		aux = cadena[i];
		aux = aux-13;
		cadenaDescifrada[i] = aux;
	}
	printf("La cadena %s descifrada es: %s\n",cadena,cadenaDescifrada);
}