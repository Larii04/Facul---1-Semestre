#include <stdio.h>

int fatorial(int fat, int num);

int main(){
	int num;
	printf("Insira o valor que deseja fatorar: ");
	scanf("%d", &num);
	
	fatorial(num, num);
}

int fatorial(int fat, int num){
	num--;
	
	for (num; num >= 1; num--){
		fat = fat * num;
		printf("\nO fatorial de %d e': %d", num, fat);
	}
}

