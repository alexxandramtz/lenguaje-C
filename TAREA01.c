#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1,num2,num3;
	
	printf("ingresa el primer numero entero \n");
	scanf("%d",&num1);
	
	printf("ingresa el segundo numero entero \n");
	scanf("%d",&num2);
	
	printf("ingresa el tercer numero entero \n");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3){
		printf("el numero 1 es mayor: %d ",num1);
	}
	else if (num2>num1 && num2>num3){
		printf("el numero 2 es mayor: %d ",num2);
		
	}
	else if (num3>num1 && num3>num2){
		printf("el numero 3 es mayor: %d ",num3);
		
	}
	else if (num1==num2 && num1==num3){
		printf("\n los tres numeros son iguales");
	}
	
	if(num1==0 && num2==0 && num3==0){
		printf("\n los tres numeros son iguales y nulos");
		
	}
	
	return 0;
}

