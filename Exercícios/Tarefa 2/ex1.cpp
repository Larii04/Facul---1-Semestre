#include <stdio.h>

int main(){
	float x, y;
	
	printf("Entre com o primeiro valor: ");
	scanf("%f",&x);
	printf("Entre com o segundo valor: ");
	scanf("%f",&y);
	printf("\n");
	
	if (x == y){
		printf ("Os numeros sao identicos.");
	}
	else {
		if (x < y){
			printf("O maior numero e: %.1f", y);
		}
		else{
			printf ("O maior numero e: %.1f",x);
		}
	}
}
