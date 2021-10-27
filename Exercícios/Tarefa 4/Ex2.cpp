#include <stdio.h>

int main(){
	int x, y, i, resul;
	i = 0;
	resul = 1;
	
	printf("Insira o valor da base: ");
	scanf ("%d", &x);
	printf ("Insira o valor do expoente desejado: ");
	scanf ("%d", &y);
	
	while (i < y){
		resul *= x;
		i++;
	}
	printf ("\n%d elevado %d e' igual  a %d.", x, y, resul);
}
