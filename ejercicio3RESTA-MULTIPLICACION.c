#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int numero1, numero2, resta,multiplicacion ;
	
	char nombre [10];
	printf ("ingrese su nombre: ");
	scanf("%s",nombre);
	
	printf ("ingrese el primer numero entero: \n");
	scanf ("%i",&numero1);
	printf ("ingresa el segundo numero entero: \n");
	scanf ("%i",&numero2);
	
	multiplicacion = numero1 * numero2;
	printf ( \n "la multiplicacion de ambos numeros  es : " );
	printf ( "%i" , multiplicacion );
	
	resta = multiplicacion - numero1;
	printf ( " la resta de la multiplicacion es  : " );
	printf ( "%i" , resta);
	
	

	
	
	
	return 0;
}

