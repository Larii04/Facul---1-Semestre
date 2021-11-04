#include <stdio.h>

void armazenar(int tam, float *vetor);

int main(){
	float array[5];
	
	printf ("Insira 5 valores:\n");
	armazenar(5, array);
	printf("\nO valores armazenados sao:");
	for(int i=0; i<5; i++){
		printf ("\n-%.1f", array[i]);
	}
}

void armazenar(int tam, float *vetor){
	for (int i=0; i<tam; i++){
	 	printf ("- ");
	 	scanf ("%f", &vetor[i]);
	 }
}

