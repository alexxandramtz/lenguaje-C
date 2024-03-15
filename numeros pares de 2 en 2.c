#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int contador;
	contador = 2;
	printf("\n numeros de 2 en 2 hasta 10\n");
	
	while (contador <= 10){
	    if (contador % 2 == 0){
			printf(" %d ",contador);
			
		}
		contador++;
		
	}
	
	
	
	
	return 0;
}

