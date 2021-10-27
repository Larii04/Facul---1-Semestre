#include <stdio.h>

int main(){
	int altura;
	int base;
	int area;
	
	printf("Insira a base do triangulo: ");
	scanf("%d",&base);
	printf("Insira a altura do triangulo: ");
	scanf("%d", &altura);
	
	area = base*altura/2;
	
	printf("a area do triangulo e igual a = %d", area);
}
