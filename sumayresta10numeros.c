#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
/*	con el ciclo de tu preferencia ,quiero que pidas 10 numeros, pueden ser */
/*    positivos o negativos, que sume los pares positivos y le reste la suma */
/*	de los negativos, al final mostrar la suma de positivos,la suma de */
/*	los negativos y la resta final.*/
	
	int i,numero,sumpositpar,sumneg,resta;
	i=1;
	sumpositpar=0;
	sumneg=0;
	
	while(i <=10){
		
		
		printf("Ingrese un numero positivo o negativo que sea entero: ");
		scanf("%d",&numero);
		//printf("\n%d",numero);
		//i++;
		
		if (numero > 0){
			if(numero % 2 == 0){
				
				sumpositpar = sumpositpar + numero;
			}
		}
		else {
			sumneg = sumneg + numero;
		}
		i++;
	}	
		printf("\nLa suma de negativos es: %d",sumneg);
		printf("\nLa suma de los positivos es: %d",sumpositpar);
		resta = sumpositpar - sumneg;
	    printf("\nLa resta final es: %d - (%d) = %d",sumpositpar,sumneg,resta);
	
	
	return 0;
}



