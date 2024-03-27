#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int numero,suma;
	
	suma=0;
		
	do{
		printf("ingresa numeros negativos / para salir ingresa un num.positivo: \n");
		scanf(" %d ",&numero);
		if(numero<0){
			suma=suma+numero;
		}
		else{
			printf("estas saliendo del programa");
		}
		
		
		
	} while(numero < 0);
	
	printf("la suma total es: %d",suma);
	
	return 0;
}

