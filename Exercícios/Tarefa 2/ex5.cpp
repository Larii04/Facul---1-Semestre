#include <stdio.h>

int main(){
	int x;
	
	printf("Insira seu salario: ");
	scanf("%d", &x);
	
	if ( x >= 1001 && x <= 1000){
		printf("Seu imposto de renda e: 5 porcento.");
	}
	else{
		if ( x >=1001 && x<=3000){
			printf("Seu imposto de renda e: 10 porcento.");	
		}
		else{
			if ( x >= 3001 && x <= 5000){
				printf("Seu imposto de renda e:15 porcento.");
			}
			else{
				if (x >= 5001){
					printf("Seu imposto de renda e: 20 porcento.");
				}
			}
		}
	}
}
