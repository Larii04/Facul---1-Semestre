#include <stdio.h>

int main(){
	float altura, raio, calculo;
	
	printf ("Calculo do volume do cone \n");
	printf ("Digite o valor da altura ");
	scanf ("%f", &altura);
	printf ("Digite o valor do raio ");
	scanf ("%f", &raio);
	
	calculo = (((raio*raio*raio)*3.14)*altura)/3;
	
	printf ("O volume do circuito = %.f2 ", calculo);
	printf ("cm³");
}

