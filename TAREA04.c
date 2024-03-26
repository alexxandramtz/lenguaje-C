#include <stdio.h>

int main(int argc, char *argv[]) {
	//haciendo uso de ciclo do while quiero imprimir numeros del 1 al 10 y 
	//sacar el promedio ,solo de los numeros pares que se encuentran del 1 a10
	//y el promedio de los pares , asi como los pares que use para poder sacar
	//el promedio.
	
	
	
	int i,sumapares,promedio;
	i=1;
	sumapares=0;
	
	
	do{
		
		if(i % 2 ==0){
			printf("\nnumero par %d",i);
			sumapares=sumapares+i;
			promedio=sumapares/5;
		}
		else if(i % 2==0){
			
		}
		i++;
		
	} while(i <= 10);
	
	printf("\nla suma de los numeros pares es: %d\n",sumapares);
	printf("\nel promedio de los numeros pares es: %d",promedio);
	
	return 0;
}

