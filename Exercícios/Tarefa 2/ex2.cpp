#include <stdio.h>

int main(){
	int x, y, z;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &x);
	printf("Insira o segundo numero: ");
	scanf("%d", &y);
	printf("Insira o terceiro numero: ");
	scanf("%d", &z);
	printf("\n");
	
	if ( x > y && x > z){
		printf("\nO maior numero e': %d", x);
	}
	else{
		if ( y > x && y > z){
			printf("\nO maior numero e': %d", y);
		}
		else{
			if ( z > x && z > y){
				printf("\nO maior numero e': %d", z);
			}
		}
	}
	if ( x < y && x < z){
		printf("\nO menor numero e': %d", x);
	}
	else{
		if ( y < x && y < z){
			printf("\nO menor numero e': %d", y);
		}
		else{
			if ( z < x && z < y){
				printf("\nO menor numero e': %d", z);
			}
		}
	}
}
