#include <stdio.h>

int main(){
	int num;
	int resto;
	int quantPar;
	int quantImpar;
	int somaPar=0;
	int somaImpar=0;
	
	printf("Insira 15 numeros\n\n");
	
	for(int i = 1; i <= 15; i++){
		printf ("Insira o numero %d: ", i);
		scanf ("%d", &num);
		
		resto = num % 2;
		
		if (resto == 0){
			quantPar++;
		}
		else {
			quantImpar++;
		}
		
		for(int j = 0; j < quantPar; j++){
			somaPar = somaPar + j++;
		}
		
		for(int k = 0; k < quantImpar; k++){
			somaImpar = somaImpar + k++;
		}
	}
	printf ("\nA quantidade de numeros pares e' %d.\n", quantPar);
	printf ("A soma dos numeros pares e' %d.\n", somaPar);
	printf ("A quantidade de numeros impares e' %d.\n", quantImpar);
	printf ("A soma dos numeros impares e' %d.", somaImpar);
}
