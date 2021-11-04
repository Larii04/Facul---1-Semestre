#include <stdio.h>

int main(){
	int num[9];
	int i;
	int acumulador;
	int cont1;
	int resulpar;
	float resulmedia;
	int menornum;
	int pnum;
	
	for (  i = 0; i <= 9; i++){
		printf ("Insira o valor dessa posicao %d: ", i);
		scanf ("%d", &num[i]);
	}
	
	menornum = num[0];
	pnum = 0;
	
	//quantos pares:
	for (  i = 0; i<=9; i++){
		
		//soma numeros
		acumulador= (acumulador + num[i]);
	
		cont1 = num[i]%2;
		if (cont1 == 0){
			resulpar++;
		}
		printf ("%d", resulpar);
		
		//menor numero:
		if (num[i] < menornum){
		menornum = num[i];
		
			//indice menor numero: 
		pnum = i;	 
		}			
	}	
	//media aritmetica:
	resulmedia = (acumulador*1.0)/(i*1.0);
	
	
	printf ("\nA quantidade de numeros pares sao: %d ", resulpar);
	printf("\nO resultado da media aritmetica e' de: %.2f: ", resulmedia);
	printf("\nO menor valor e': %d ", menornum );
	printf ("\nA posicao do indice e' de: %d ", pnum);
}
