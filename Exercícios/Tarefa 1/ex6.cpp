#include <stdio.h>

int main(){
	float celsius, fh;

	printf("Digite o valor em Celsius ");
	scanf ("%f", &celsius);
	
	fh = celsius * 1.8 + 32;
	
	printf ("O valor em fahrenheit e:%.2f", fh);
}
