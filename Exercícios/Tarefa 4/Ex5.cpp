#include <stdio.h>

int main (){
	float compra, cotacao, cont, pontos, resul;
	int cartao;
	
	printf("Insira o valor da compra: ");
	scanf ("%f", &compra);
	printf ("Insira o valor da cotacao do dolar: ");
	scanf ("%f", &cotacao);
	
	printf ("\nMenu: ");
	printf ("\n1 Bronze - 1.0ponto; ");
	printf("\n2 Prata - 1.2pontos; ");
	printf ("\n3 Ouro - 1.5pontos; ");
	printf ("\n4 Diamante - 2.0pontos. ");
	printf ("\n\nSelecione o cartao desejado: ");
	scanf ("%d", &cartao);
	
	switch (cartao){
	case 1:
		cont = compra/cotacao;
	    resul = cont*1.0;
			printf ("Voce selecionou o cartao Bronze para efetuar a compra. ");
			break;
		case 2:
			cont = compra/cotacao;
        	resul = cont*1.2;
		    printf ("Voce selecionou o cartao Prata para efetuar a compra. ");
		    break;
		case 3:
			cont = compra/cotacao;
	        resul = cont*1.5;
		    printf ("Voce selecionou o cartao Ouro para efetuar a compra. ");
			break;
		case 4:
			cont = compra/cotacao;
	        resul = cont*2.0;
			printf ("Voce selecionou o cartao Diamante para efetuar a compra. ");
			break;
			
			default:
			printf ("Nao existe essa opcao!! ");	
	}
	
	printf ("\n\nO valor total da compra e' de %.2f.", compra);
	printf ("\nO cartao selecionado foi %d.", cartao);
	printf ("\nO valor total de pontos atribuidos e' de %.2f.", resul);
}
