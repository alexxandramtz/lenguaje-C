#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int suma,iniciociclo,finciclo,promedio;
	
	iniciociclo=10;
	finciclo=15;
	suma=0;
	promedio=0;
	
	
	do{
		
		    printf("%d\n",iniciociclo);
			
			suma = suma + iniciociclo;
			promedio = suma/5;
		    iniciociclo++;
		
	}while(iniciociclo<=finciclo);
	
	
	printf("\nla suma total es: %d",suma);
	printf("\nel promedio es de: %d",promedio);
	
	
	
	return 0;
}

