#include "Palindromo.h"

int main(){
	
	char *cadena[50];
	recibirDato(&cadena);
	if(palindromo(cadena))
		printf("La cadena %s es palindromo\n",cadena);
	else printf("La cadena %s no es palindromo\n",cadena);
	
	return 0;
}