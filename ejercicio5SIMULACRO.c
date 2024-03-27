#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int i,numero,sumaimpar,multipares;
	i=1;
	sumaimpar =0;
	multipares =1;
	
	while(i<=5){
		printf("ingresa un numero");
		scanf("%d",&numero);
		if(numero % 2 ==0){
			multipares = multipares * numero;
			
		}
		else{
			sumaimpar = sumaimpar + numero;
		}
		i++;
		
	}  
	printf ("la multiplicacion de los pares es: %d", multipares);
	printf ("la suma de los impares es: %d",sumaimpar);
	return 0;
}

