#include <stdio.h>

void ordem(int v1, int v2, int v3);

int main(){
	int a, b, c;
	
	printf ("--Numeros em ordem crescente--\n\n");
	
	printf ("Insira o valor1: ");
	scanf ("%d", &a);
	printf ("Insira o valor2: ");
	scanf ("%d", &b);
	printf ("insira o valor3: ");
	scanf ("%d", &c);
	ordem(a, b, c); 
} 
void ordem(int v1, int v2, int v3){
	int aux;
	
	if (v1 > v2){
		aux = v2;
		v2 = v1;
		v1 = aux;
	}
	if(v2 > v3){
		aux = v3;
		v3 = v2;
		v2 = aux;
	}
	if(v1 > v2){
		aux = v2;
		v2 = v1;
		v1 = aux;
	}
	printf ("\nEm ordem crescente: %d - %d - %d", v1, v2, v3);
}  
