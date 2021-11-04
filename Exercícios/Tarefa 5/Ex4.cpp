#include <stdio.h>

int main(){
	int Array[8];
	Array[0] = 8;
	Array[1] = 14;
	Array[2] = 37;
	Array[3] = 55;
	Array[4] = 63;
	Array[5] = 74;
	Array[6] = 82;
	Array[7] = 91;
	int num;
	int Xmaior = 0;
	int X = 0;
	
	for (int i = 0; i < 9; i++){
		printf ("\nNa posicao %d, o vetor e': %d.", i, Array[i]);
	}
	while (X != 1){
		printf ("\n\nDigite um valor de 0 a 100: ");
		scanf ("%d", &num);
		if (num >= 0 && num <= 100){ 
			X = 1;
		}
	}
	printf ("\n");
	
	Xmaior = 0;
	for (int i = 0; i < 8; i++){
		if (num == Array[i]){
			printf ("Esse numero ja existe dentro do vetor. Digite outro numero: ");
			scanf ("%d", &num);
		}
	}
	Array[8] = num;
	for (int i = 0; i < 9; i++){
		for (int j = i+1; j < 9; j++){
			if (Array[i] > Array[j]){
				Xmaior = Array[i];
				Array[i] = Array[j];
				Array[j] = Xmaior;
			}
		}
	}
	for (int i = 0; i < 9; i++){
		printf ("\nO vetor na posicao %d e': %d.", i, Array[i]);
	}
}
