#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float cmate,cbiologia,chistoria,suma,promedio;
	
	cmate=8;
	cbiologia=6;
	chistoria=6;
	suma = cmate + cbiologia + chistoria;
	promedio = suma /3;
	
	printf("Suma %.2f",suma);
	printf("\npromedio %.2f\n",promedio);
	
	if (promedio>9 && promedio<10){
		printf("FELICIDADES\n!!!");
		
	}
	else if (promedio>8 && promedio<9){
		printf("ERES BUEN ALUMNO\n!!!");
	}
	else if (promedio==7 && promedio<8){
		printf("TE TIENES QUE ESFORZAR MAS\n!!!");
	}
	else if (promedio<7){
		printf("LO SIENTO, NO PASARAS EL AÑO\n!!!");
	}
	if (cmate>cbiologia && cmate>chistoria){
		printf("Tu calificacion mas alta es en Matemáticas: %.2f",cmate);
	}
	else if (cbiologia>cmate && cbiologia>chistoria){
		printf("Tu calificacion mas alta es en Biología: %.2f",cbiologia);
	}
	else if(chistoria>cmate && chistoria>cbiologia){
		printf("Tu calificacion mas alta es en Historia: %.2f",chistoria);
	}
	else if(cmate==cbiologia && cbiologia==cmate){
		printf("Tus calificaciones son iguales\n");
	}
	 if (cmate==0 && cbiologia==0 && chistoria==0){
		printf("TIENES QUE MEJORAR BASTANTE!!: ");
	}
	return 0;
}

