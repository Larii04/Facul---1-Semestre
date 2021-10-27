#include <stdio.h>

int main(){
	int populacao, taxa, anos, pfutura;
	
	printf ("Qual a quantidade da populacao atual do municipio?: ");
	scanf ("%d", &populacao);
	printf ("Qual a taxa percentual anual de crescimento por ano?: ");
	scanf ("%d", &taxa);
	printf ("Qual e' o numero de anos futuros?: ");
	scanf ("%d", &anos);
	
	for (int i = 1; i <= anos; i++){
	pfutura = (populacao + ((populacao * taxa)/100));
	printf ("\nA populacao no ano %d equivale a: %d", i, pfutura);
	}
}
