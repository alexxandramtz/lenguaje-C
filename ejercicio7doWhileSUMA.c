#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,suma;
	
	suma=0;
	i=1;
	
	do{
		printf("%d ",i);
		suma=suma+i;
		i++;
		
	} while(i <=10);
	printf("\nla suma total es: %d",suma);
	
	return 0;
}

