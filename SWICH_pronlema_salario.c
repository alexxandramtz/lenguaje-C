#include <stdio.h>

int main(int argc, char *argv[]) {
		/*	como primera opcion sumar los pares donde un numero sera mi inicio y otro el final*/
		/*	esos numeros los establezco yo como inicializacion, como segunda opcion*/
		/*	establacer el pago de una persona, si por 8 horas gana 227 cuanto ganara a la semana*/
		/*	si cada dia trabaja 7 horas, desglozar salario por hora, por 7 horas y el total por semana */
		/*	(7 dias)*/
		/*	y como tercera opcion salir*/
	
	int opcion,numeroinicial,numerofinal,sumapares;
	float salarioinicial,salario8horas,salarioxhoras,salarioxdia,salarioxsemana;
	
	numeroinicial =3;
	numerofinal =13;
	sumapares= 0;
	salarioinicial =227;
	salario8horas =8;
	salarioxhoras =0;
	salarioxdia =0;
	salarioxsemana =0;
	
	
	do {
		printf("\n**** MENU DE OPCIONES ****\n");
		printf("1. suma de numeros pares\n");
		printf("2. total de salario \n");
		printf("3. salir del menu\n");
		printf("***************************\n");
		
		scanf("%d",&opcion);
		
		switch (opcion){
			
		case 1:
			while(numeroinicial <= numerofinal){
				printf("%d ",numeroinicial);
				if(numeroinicial % 2==0){
					sumapares = sumapares + numeroinicial;
				}
				numeroinicial = numeroinicial +1;
			}
			printf("\nla suma de los pares es: %d \n",sumapares);
			
			break;
		case 2:
			salarioxhoras = salarioinicial / salario8horas;
			printf("\nTu salario por horas es de : %f",salarioxhoras);
			salarioxdia = salarioxhoras * 7;
			printf("\nEl salario por 7 horas al dia es de: %f",salarioxdia );
			salarioxsemana = salarioxdia * 7;
			printf("\n el salario por semana es de: %f",salarioxsemana);
			
			break;
			
			
		case 3:
			printf("***Has decidido salir del menu ***");
			break;
			
		default:
			printf("\n Esta opcion no es valida");
			
			
			
		}
		
		
		
	} while(opcion !=3);
	return 0;
}



