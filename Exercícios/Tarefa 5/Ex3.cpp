#include <stdio.h>

int main(){
	int V1[5];
	int V2[5];
	int V3[5];
	int i;
	int cont;
	
	for (i = 0; i < 5; i++){
		printf ("Insira um valor para o primeiro vetor: ");
		scanf ("%d", &V1[i]);	
	}
	printf ("\n");
	for (i = 0; i < 5; i++){
		printf ("Insira um valor para o segundo vetor: ");
		scanf ("%d", &V2[i]);
	}
	
	printf ("-------------------------------\n");
	
	for (i = 0; i < 5; i++){
		printf ("\nNa posicao %d, o valor do primeiro vetor e': %d.", i, V1[i]);
		printf ("\nNa posicao %d, o valor do segundo vetor e': %d.", i, V2[i]);
	}
	for (i = 0; i < 5; i++){
		V3[i] = V1[i] + V2[i];
		cont = V3[i];
	}
		printf ("\n\n-- O TERCEIRO VETOR RESULTA EM:--\n");
		for (i = 0; i < 5; i++){
			printf ("\nNa posicao %d, o valor do terceiro vetor e': %d.", i, V3[i]);
			printf ("\n[%d]+[%d] = [%d]\n", V1[i], V2[i], V3[i]);
		}
}
