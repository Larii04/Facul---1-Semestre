#include <stdio.h>

int main(){
	float velocidade, aceleracao, tempo, calculo;
	
	printf ("Calculo da velocidade final de um automovel: \n");
	printf ("Digite o valor da velocidade inicial em m/s: ");
	scanf ("%f", &velocidade);
	printf ("Digite o valor da aceleracao em m/s²");
	scanf ("%f", &aceleracao);
	printf ("Digite o valor do tempo de percurso em segundos");
	scanf ("%f", &tempo);
	
	calculo = ((aceleracao*tempo)+ velocidade)*3.6;
	
	printf ("A velocidade final do automovel = %.2f ", calculo);
	printf ("kh/h"); 
}
