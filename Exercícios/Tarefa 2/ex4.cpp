#include <stdio.h>

int main(){
	float base, altura, area;
	
	printf("Qual o valor da base?: ");
	scanf("%f", &base);
	printf("Qual o valor da altura?: ");
	scanf("%f", &altura);
	
	if ( base*altura > 100){
		printf("Terreno Grande");
	}
	else{
		printf("Terreno pequeno");
	}
}
