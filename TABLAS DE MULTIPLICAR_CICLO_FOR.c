#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,j;
	
	for (i=1; i<=10; i++){
		printf("\ntabla de multiplicar: %d", i);
		
	   for (j=1; j<=10; j++){
		printf ("\n%d x %d = %d",i,j,i*j );
	   }
	    printf(" \n ");
	   
	}
	return 0;
}

