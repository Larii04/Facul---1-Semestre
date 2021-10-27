#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("Insira o valor da hipotenusa: ");
	scanf("%d",&a);
	printf("Insira o valor do primeiro cateto: ");
	scanf("%d",&b);
	printf("Insira o valor do segundo cateto: ");
	scanf("%d",&c);
	
	if (a*a == b*b + c*c){
		printf("O triangulo e retangulo");
	}
	else{
		printf ("O triangulo nao e retangulo");
	}
}
