#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i,sumaimpares;
	i=1;
	sumaimpares=0;
	do{
		//printf( "%d ",i);
		
		if(i % 2 ==0){
			printf("\nnumero par %d",i);
		}
		else{
			sumaimpares =sumaimpares+i;
		}
		i++;
	} while(i<=20);
	printf("\nla suma de los impares es: %d",sumaimpares);
	
	
	return 0;
}

