#include <stdio.h>

int main(){
	int x, razao, ntermos, calculo;
	
	printf ("Entre com seu valor inicial: ");
	scanf ("%d",  &x);
	printf ("Qual a razao?: ");
	scanf ("%d", &razao);
	printf ("Quantidade de termos?: ");
	scanf ("%d", &ntermos);
	printf ("%d\n", x);
	
	calculo = x + razao;
	
	printf ("%d", calculo);
	
	for (int i = 3; i <= ntermos; i++){
		calculo = calculo + razao;
		printf ("\n%d", calculo);
	}
}
