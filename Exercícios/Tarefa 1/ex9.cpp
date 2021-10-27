#include <stdio.h>

int main(){
	float dolar, calculo;
	
	printf ("Conversao do dolar em real: \n");
	printf ("Digite o valor da cotaçao do dolar: ");
	scanf ("%f", &dolar);
	
	calculo =dolar*5.4;
	
	printf ("O valor do dolar em real = %.2f", calculo);
	printf ("R$");
}
