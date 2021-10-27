#include <stdio.h>

int main(){
	float corrente, ohms, tensao;
	
	printf("Digite o valor da corrente: ");
	scanf ("%f", &corrente);
	printf ("Digite o valor do resistor ");
	scanf ("%f", &ohms);
	
	tensao = ohms*corrente;
	
	printf ("\n0O valor de tensao e: %.2f", tensao);
}
