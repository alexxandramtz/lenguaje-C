#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numerosecreto = 76;
	int numero;

	
	do{
		printf("adivina el numero secreto: \n");
		printf("\ningresa un numero: \n");
		scanf("%i",&numero);
		
		if(numero > numerosecreto){
			printf("\nel numero es mayor que numero secreto. \n");
			
		}
		else if (numero < numerosecreto){
			printf("el numero es menor que el numero secreto. \n");
			
		}
			
	} while(numero!=numerosecreto);
	printf("el numero es correcto");
		
		
	
	
	
	
	return 0;
}

