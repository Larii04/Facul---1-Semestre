#include <stdio.h>
#include <string.h>

int main(){
	char texto[41];
	int count, tam;
	
	printf ("Insira o texto: ");
	fgets(texto, 41, stdin);
	
	tam = strlen(texto);
	
	printf ("\nO nome ao contrario e: ");
	for(count = tam; count >= 0; count--){
		printf ("%c", texto[count]);
	}
}
