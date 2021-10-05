#include "Calculadora.h"

void suma(float a,float b){
	float suma1 = a+b;
	printf("%.1f\n",suma1);
}

void resta(float a,float b){
	float resta1 = a-b;
	printf("%.1f\n",resta1);
}

void multiplicacion(float a,float b){
	float multiplicacion1 = a*b;
	printf("%.1f\n",multiplicacion1);
}

void division(float a,float b){
	float division1 = a/b;
	printf("%.1f\n",division1);
}

int menu(){
	int op;
	int bandera;
	
	bandera = 0;
	
	do{
		if(bandera==1)printf("Opcion invalida. Repite el numero\n");
		bandera = 1;
		printf("Seleccione la opcion de su preferencia\n");
		printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n");
		scanf("%d",&op);
	}while(op>4||op<1);
	
	return op;
}

void ejecucion(int op,float a, float b){
	
	switch(op){
		case 1:suma(a,b);break;
		case 2:resta(a,b);break;
		case 3:multiplicacion(a,b);break;
		case 4:division(a,b);break;
		default:printf("La opcion es invalida\n");
	}
}