#include <stdio.h>
#include <string.h>

int main (){
	char string1[41];
	char string2[41];
	
	printf ("Insira o primeiro nome: ");
	fgets(string1, 41, stdin); 
	printf ("Insira o segundo nome: ");
	fgets(string2, 41, stdin);
	printf ("\nPrimeiro nome: %s", string1); 
	printf ("Segundo nome: %s", string2);
	
	strcmp(string2,string1);
	if (strcmp(string2,string1) == 0){
		printf ("\nOs nomes sao identicos!");
	}
	else {
		printf ("\nOs nomes sao diferentes!");
	}
}
