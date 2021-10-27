#include <stdio.h>

int main(){
	int x, resto, z;
	
	printf ("--O numero e' primo ou nao?--\n\n");
	printf ("Insira um numero: ");
	scanf ("%d", &x);
	
	for (int i = 1; i <= x; i++){
		resto = x % i;
		if (resto == 0){
			z++;
		}
	}
	if (z == 2){
		printf ("\nO numero %d e' primo.", x);
	}
	else{
		printf ("\nO numero %d nao e' primo.", x);
	}
}
