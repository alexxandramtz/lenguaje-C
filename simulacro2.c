#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float kilometros =1.5,gasxlitro =40;
	float distanciametro,consumoxmetro,gasolina2000;
	
	distanciametro = kilometros * 1500;
	consumoxmetro = gasxlitro / distanciametro;
	gasolina2000 = consumoxmetro * 2000;
	
	printf("El consumo de gasolina por metro es: %.2f litros\n",consumoxmetro);
	printf("El total de gasolina al recorrer 2000 metros es: %.2f\n",gasolina2000);
	
	
	return 0;
}

