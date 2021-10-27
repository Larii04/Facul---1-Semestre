#include <stdio.h>

int main(){
	float diametro, raio, calculo;
	
	printf("Calculo da area do circuito: \n");
	printf ("Digite o valor do diametro: ");
	scanf ("%f", &diametro);
	
	raio = (diametro/2);
	calculo = (raio*raio)*3.14;
	
	printf ("A area do circulo = %.2f ", calculo);
	printf("cm²");
}
