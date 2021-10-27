#include <stdio.h>

int main(){
	int num = 0;
	int numero;
	int maiornum;
	
	printf ("Medir o maior numero.\n ");
	
	while (num <= 10){
		printf ("Insira um valor: ");
		scanf ("%d", &numero);
		num++;
		
		if (numero > maiornum){
			maiornum = numero;
		}
    }
	printf ("\nMaior numero inserido foi: %d.", maiornum);
}

 
