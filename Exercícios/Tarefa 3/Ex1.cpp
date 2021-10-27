#include <stdio.h>

int main(){
	float preco;
	int x;
	
	printf ("Qual o valor dos paes: ");
	scanf ("%f", &preco);
	printf ("Quantos paes voce deseja: ");
	scanf ("%d", &x);
	printf ("\nSegue abaixo a tabela de precos: ");
	
	for (int i=1; i<=50; i++){
	printf ("\n%.2f * %d = %.2f", preco, i, preco*i);
	}
}
