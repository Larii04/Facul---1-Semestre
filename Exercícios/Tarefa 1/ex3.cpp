#include <stdio.h>

int main(){
	float v1, v2, v3, v4, media;
	
	printf("Calculador de Media\n");
	
	printf("\nDigite o valor 1: ");
	scanf("%f", &v1);
	printf("\nDigite o valor 2: ");
	scanf("%f", &v2);
	printf ("\nDigite o valor 3: ");
	scanf ("%f", &v3);
	printf ("\nDigite o valor 4: ");
	scanf ("%f", &v4);
	
	media = (v1+ v2+ v3+ v4)/4;
	
	printf("\n0 Resultado da media e %.2f", media);
}
