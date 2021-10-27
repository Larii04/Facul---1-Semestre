#include <stdio.h>

int main(){
	int maior, menor, cont, impar;
	
	printf("Definir o intervalo de numeros.\n\n");
	printf ("Insira o valor minimo: ");
	scanf ("%d", &menor);
	printf ("Insira o valor maximo: ");
	scanf ("%d", &maior);
	
	impar = menor;
	
	while ( impar <= maior){
		cont = (impar%2);
		if ( cont != 0){
			printf ("\n%d", impar);
		}
		impar++;
	}
}
	
