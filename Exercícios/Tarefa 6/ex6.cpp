#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char string1[41];
	char string2[41];
	int i;
	int s = 0;
	int quantidade;
	
	printf ("Insira a primeiro string: ");
	fgets(string1, 41, stdin);
	quantidade = strlen(string1);
	
	for(i = 0; i <= quantidade; i++){
		string1[i] = tolower(string1[i]);
		if(string1[i]  == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u'){
			
			string2[s] = string1[i];
			s++;
		}
	}
	for(i = 0; i <= quantidade; i++){
		if(string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u'){
			
		}
		else{
			string2[s] = string1[i];
			s++;
		}
	}
	printf ("\n\nVogais e consoantes em ordem: %s", string2);
} 
