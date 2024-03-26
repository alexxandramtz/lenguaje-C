#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int opcion,cal1,cal2,cal3,cal4;
	float promedio,calificaciones;
	
	calificaciones=0;
	promedio=0;
	cal1=10;
	cal2=8;
	cal3=7;
	cal4=-7;	
		
		
	do{
		
		printf("\n**** MENU DE OPCIONES ****\n");
		printf("1. Ingrese calificaciones con promedio entre 10 y 9:\n");
		printf("2. Ingrese calificaciones con promedio de 8:\n");
		printf("3. Ingrese calificaciones con promedio de 7:\n");
		printf("4. Ingrese calificaciones con promedio menores a 7:\n ");
		
		scanf("%d",opcion);
		switch(opcion){
		case 1:
			if(cali1>=9){
				printf("Tu calificacion es: %f",promedio);
				scanf("%f",&cal1);
				
			}
			
			break;
			
		case 2:
			
			
			break;
			
			
		case 3:
			
			
			break;
			
			
		case 4:
			
			
			break;
			
			
		default:
			printf("la opcion no es valida");
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	} while(opcion != 4);
	
	
	
	return 0;
}

