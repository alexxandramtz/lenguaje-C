#include <stdio.h>

	

int main(int argc, char *argv[]) {
	
	float a,b,c,promedio;
	
	printf("\n ingresa la primer calificacion ");
	scanf("%f",&a);
	
	printf("\n ingresa la segunda calificacion ");
	scanf("%f",&b);
	
	printf("\n ingresa la tercer calificacion ");
	scanf("%f",&c);
	
	promedio = (a+b+c) /2;
	printf("la calificacion final es:%f", promedio);
	
	
	
	
	
	return 0;
}

