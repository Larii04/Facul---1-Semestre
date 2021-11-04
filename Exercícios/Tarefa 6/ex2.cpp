#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char texto[41];
	
	printf ("Insira a frase desejada em letra minusculas: ");
	fgets(texto, 41, stdin);
	printf ("\n");
	printf("Frase minuscula: %s", texto);
	
	for(int i = 0; i < strlen(texto); i++){
		texto[i] = toupper(texto[i]);
	}
	printf ("Frase maiscula: %s", texto);
}
