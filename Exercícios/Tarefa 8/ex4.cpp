#include <stdio.h>

float maior(int tam, float *vetor);
float menor(int tam, float *vetor);
float media(int tam, float *vetor);
float acimaMedia(int tam, float *vetor);
float abaixoMedia(int tam, float *vetor);

int main(){
	float array[10];
	
	printf ("--Calculo das notas--\n\n");
	printf ("Insira as 10 notas:\n");
	 for (int i=0; i<10; i++){
	 	printf ("- ");
	 	scanf ("%f", &array[i]);
	 }
	maior(10, array);
	menor(10, array);
	media(10, array);
	acimaMedia(10, array);
	abaixoMedia (10, array);
}

float maior(int tam, float *vetor){
	float maior;
		for (int i = 0; i < tam; i++){
			if (vetor[i] > maior){
			maior = vetor[i];
		}
	}
	printf ("\nO maior valor e': %.1f", maior);
}

float menor(int tam, float *vetor){
	float menor;
		for (int i = 0; i < tam; i++){
			if (vetor[i] < menor){
			menor = vetor[i];
		}
	}
	printf ("\nO menor valor e': %.1f", menor);
}

float media(int tam, float *vetor){
	float soma = 0, media;
	for (int i = 0; i < tam; i++){
		soma = soma + vetor[i];
	}
	media = soma/tam;
	printf ("\nO calculo da media e': %.2f", media);
}

float acimaMedia(int tam, float *vetor){
	float acima=0, media;
	
		for (int i = 0; i < tam; i++){
		if (vetor[i] > media){
			acima++;
		}	
	}
	printf ("\nOs valores acima da media: %.0f", acima);
}

float abaixoMedia(int tam, float *vetor){
	float abaixo=0, media;
	
		for (int i = 0; i < tam; i++){
		if (vetor[i] < media){
			abaixo++;
		}	
	}
	printf ("\nOs valores abaixo da media: %.0f", abaixo);
}
