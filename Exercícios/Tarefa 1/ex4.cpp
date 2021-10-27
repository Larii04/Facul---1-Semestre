#include <stdio.h>

int main(){
	float MM, KM;
	
	printf("Digite a Milha Maritima");
	scanf ("%f", &MM);
	
	KM = MM*1850/1000;
	
	printf("O valor de %.2f de Milha Maritima para Quilometro e %.2f", MM, KM);
}
