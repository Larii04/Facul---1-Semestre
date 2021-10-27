#include <stdio.h>

int main(){
	float peso, altura, relacao, conta;
	
	printf("Digite o peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	conta = (altura*altura);
	relacao = (peso/conta);
	
	printf("%f", relacao);
	
	if ( relacao < 20){
		printf("\nVoce esta abaixo do peso.");
	}
	else{
		if ( relacao >= 20 && relacao < 25){
			printf("\nVoce esta no peso ideal.");
		}
		else{
			if ( relacao >= 25){
				printf("\nVoce esta acima do peso.");
			}
		}
	}
}

