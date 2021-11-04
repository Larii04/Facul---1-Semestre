#include <stdio.h>

void troca(int &a, int &b, int &aux);


int main(){
	int x, y, aux;
	
	printf("--Troca de valores--\n\n");
	
	printf ("Insira o valor de A: ");
	scanf ("%d", &x);
	printf ("Insira o valor de B: ");
	scanf ("%d", &y);
	
	troca(x, y, aux);
	printf ("\n\nO valor de A passou a ser %d", aux);
	printf ("\nO valor de B passou a ser %d", y);
}

void troca(int &a, int &b, int &aux){
	aux = b;
	b = a;
}



