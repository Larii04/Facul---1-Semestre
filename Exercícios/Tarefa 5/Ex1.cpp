#include <stdio.h>

int main(){
	int num[20];
	int i;
	int valor = 101;
	
	for ( i = 0; i < 20; i++){
		num[i] = valor;
		valor++;
	}
	
	printf ("Os valores armazenados sao: ");
	for (i = 0; i < 20; i++){
		printf ("\n%d", num[i]);
	}
}
