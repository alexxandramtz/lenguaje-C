#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	float promedio,suma,calificaciones;
	
	promedio=0;
	suma=0;
	calificaciones=4;
	
	
	suma=promedio/calificaciones;
/
	
	if(calificaciones>=9){
		printf("Tu promedio es: de A\n ");
		scanf("%f",&promedio);
	}else if(calificaciones>=8){
		printf("Tu promedio es: B\n");
		
	}else if(calificaciones>=7){
		printf("Tu calificacion es: C\n");
		
	}else if(calificaciones<=7){
		printf("Tu calificacion es: F\n");
		
	}else if(calificaciones==0){
		printf("Tu promedio es negativo y nulo\n");
		
	}else if (calificaciones<=-0){
		printf("Esta no es una calificacion valida\n");
	}
	
	return 0;
}

