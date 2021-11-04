#include <stdio.h>
#include <string.h>

int main(){
	char x[41];
	char y[41];
	char z[41];
	int i;
	int maior;
	int j;
	int count = 0;
	int flag;
	
	printf ("Insira o string x: ");
	fgets(x, 41, stdin);
	printf ("Insira o string y: ");
	fgets(y, 41, stdin);
	printf ("\nA string x: %s", x);
	printf ("A string y: %s", y);
	
	for(j = 0; j < strlen(x); j++){
		flag = 0;
		for(i = 0; i < strlen(y); i++){
			if (x[j] == y[j]){
				flag = 1;
				break;
			}
		}
		if (!flag){
			z[count] = x[j];
			count++;
		}
	}
	z[count] = '\0';
	printf ("\n\n");
	printf ("String z - %s", z);
}
