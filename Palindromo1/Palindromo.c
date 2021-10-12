#include "Palindromo.h"

int palindromo(char cadena[]){
	
	int bandera = 0;
	int j,i;
	
	for(j = 0;cadena[j]!='\0';j++);
	
	for(i = 0,j--;i<j&&j>i;)
		if(cadena[i]==cadena[j]||cadena[i]==' '||cadena[j]==' '||cadena[i]==cadena[j]-32||cadena[i]+32==cadena[j]||cadena[i]-32==cadena[j]||cadena[i]==cadena[j]+32){
			/*x = y + 1*/
			bandera = 1;
			printf("%c %c\n",cadena[i],cadena[j]);	
			if(cadena[i]==' ')
				i++;
			else if(cadena[j]==' ')
				j--;
				else{
					i++;
					j--;
				}		
		}
		else{
			bandera = 0;
			break;
		}

	return bandera;	
}

void recibirDato(char cadena[]){
	
		for(int i = 0;i<50;i++)
		cadena[i] = '\0'; 
	printf("Ingresa una cadena\n");
	gets(cadena);
	
}
	