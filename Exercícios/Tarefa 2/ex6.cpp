#include <stdio.h>

int main(){
	float p1, p2, p3, media;
	
	printf("Digite o valor da P1: ");
	scanf("%f", &p1);
	printf("Digite o valor da P2: ");
	scanf("%f", &p2);
	
	media = (p1 + 2*p2)/3;
	
	printf("media = %.2f", media);
	
	if (media >= 5){
		printf("APROVADO!");
	}
	else{
		printf("\nDigite o valor da P3: ");
		scanf("%f", &p3);
		
		media = (p1 + 2*p3)/3;
		
		if (media >= 5){
			printf("APROVADO");
		}
		else{
			if (media < 5){
				printf("DP");
			}
		}
	}
}
