#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	char contrasena[10];
	char contrasena2[]="grupo3";
		printf("adivina la contraseņa \n");
	do{
		printf("\ningresa tu contraseņa\n");
		scanf ("%s",contrasena);
		
		
	} while(strcmp (contrasena,contrasena2)!=0);
	
	
	
	return 0;
}

