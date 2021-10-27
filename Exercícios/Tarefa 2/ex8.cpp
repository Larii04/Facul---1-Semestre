#include <stdio.h>

int main(){
	float V, velocidade, aceleracao, tempo;
	
	printf("Insira o valor da velocidade em m/s: ");
	scanf("%f", &velocidade);
	printf("Insira o valor da aceleracaoem m/s2: ");
	scanf("%f", &aceleracao);
	printf("Insira o valor do tempo em s: ");
	scanf("%f", &tempo);
	
	V= velocidade + aceleracao*tempo;
	
	if ( V <= 40){
		printf("\nO veiculo esta muito lento.");
	}
	else{
		if ( V > 40 && V <= 60){
			printf("\nO veiculo esta na velocidade permitida.");
		}
		else{
			if ( V > 60 && V <= 80){
				printf("\nO veiculo esta na velocidade do cruzeiro.");
			}
			else{
				if ( V > 80 && V <=120){
					printf("\nO veiculo esta na velocidade esta rapido.");
				}
				else{
					if ( V > 120){
						printf("\nO veiculo esta muito rapido.");
					}
				}
			}
		}
	}
}
