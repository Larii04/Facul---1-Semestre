#include <stdio.h>

float media(float v1, float v2, float v3);

int main(){
	float v1, v2, v3;
	printf("--Calcular a media aritmetica--");
	printf("\n\nInsira o valor1: ");
	scanf("%f", &v1);
	printf("Insira o valor2: ");
	scanf("%f", &v2);
	printf("Insira o valor3: ");
	scanf("%f", &v3);
	
	printf("O resultado da media e': %.2f", media(v1, v2, v3));
}

float media(float v1, float v2, float v3){
	float media;
	return media = ((v1 + v2 + v3)/3);
}
