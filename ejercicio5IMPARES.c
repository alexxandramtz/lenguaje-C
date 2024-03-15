#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	
	i=1;
	
	while(i<=5){
		
		if(i % 2 == 0){
			printf(" %d ",i);
			
		}
		i++;
		
	}
	printf("\n la suma de los numeros pares es %d \n" , i);
	
	
	
	
	return 0;
}

