#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char texto[41];
	int a = 0;
	int i;
	int vogal = 0;
	int espacos;
	
	printf ("Insira o nome desejado: ");
	fgets(texto, 41, stdin);
	printf ("\n------------------------------");
	
	for(i = 0; i <=41; i++){
		if(isspace(texto[i]) == 0){
			espacos = espacos + 1;
		}
	}
	espacos = 41 - espacos;
	
	for(i = 0; i <= 41; i++){
		switch (texto[i]){
        case 'a':
            vogal = vogal + 1;
            break;
        case 'e':
             vogal = vogal + 1;
             break;
        case 'i':
             vogal = vogal + 1;
             break;
        case 'o':
            vogal = vogal + 1;
             break;
        case 'u':
            vogal = vogal + 1;
             break;
        case 'A':
            vogal = vogal + 1;
             break;
        case 'E':
             vogal = vogal + 1;
             break;
        case 'I':
            vogal = vogal + 1;
             break;
        case 'O':
             vogal = vogal + 1;
             break;
        case 'U':
            vogal = vogal + 1;
             break;
    	
		}		
	}	
		printf ("\nO texto escolhido foi: %s.", texto);
		printf("\n\nO numero total de caracteres e' %d.", strlen(texto)-1);
		printf ("\nO numero de vogais existentes sao: %d.", vogal);
		printf ("\nO numero de espacos em branco existentes sao: %d.", espacos);
}	
