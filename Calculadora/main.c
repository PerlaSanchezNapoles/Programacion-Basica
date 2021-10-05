#include "Calculadora.h"

int main(){
	float a,b;
	
	printf("Ingrese el primer numero\n");
	scanf("%f",&a);
	printf("Ingrese el segundo numero\n");
	scanf("%f",&b);
	
	int op = menu();
	ejecucion(op,a,b);
	
	
	return 0;
}