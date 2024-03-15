#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int numero1, numero2, resta,multiplicacion ;
	
	printf ("ingrese el primer numero entero: \n");
	scanf ("%d",& numero1);
	printf ("ingresa el segundo numero entero: \n");
	scanf ("%d",&numero2);
	multiplicacion = numero1 * numero2;
	printf ("la multiplicacion de ambos numeros  es :");
	printf ("%d , multiplicacion ");
	
	resta = numero1 - numero2;
	printf ("la resta de la multiplicacion es  :");
	printf ("%d" , &resta);
	

	
	
	
	return 0;
}

