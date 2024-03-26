#include <stdio.h>

int main(int argc, char *argv[]) {
	int opcion,i,j,a,b;
	
	a=0;
	b=0;
	j=1;
	i=1;
	
	do{
		
		printf("\n**** MENU DE OPCIONES ****\n");
		printf("1. imprimir los numeros del 1 al 10\n");
		printf("2. numeros del 1 al 5 \n");
		printf("3. la suma de dos numeros enteros\n");
		printf("4. salir del menu\n");
		
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			while (i<=10){
				printf(" %d ",i);
				i++;
				
			}
			break;
		case 2:
			for(j=1; j<=5; j++){
				printf(" %d ",j);
				
			}
			break;
		case 3:
			printf("ingresa dos numeros a sumar\n");
			scanf("%d %d",&a,&b);
			
			printf("\nel resultado de la suma es: %d",a+b);
			
			break;
		case 4:
			printf("***HASTA PRONTO!!!***");
			break;
		default:
			printf("la opcion no es valida");	
			
		}
		
		} while(opcion != 4);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

