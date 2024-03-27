#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int inicio,nfinal,i,suma,ipares,impares;
	
	inicio =10;
	nfinal =15;
	suma=0;
	ipares=0;
	impares=0;
	//i=1;
	for(i=inicio; i<=nfinal; i++){
		printf(" %d ",i);
		
		if(i % 2==0){
			ipares=ipares+1;
		}
		else{
			impares=impares+1;
		}
		suma=suma+i;
	}
	
	printf("\nel total de impares es: %d",impares);
	printf("\nel total de pares es:  %d",ipares);
	printf("\nla suma total es: %d",suma);
	return 0;
}

