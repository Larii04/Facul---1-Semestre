#include <stdio.h>

int main(){
	int opcoes;
	
	printf ("Menu:\n");
	printf("1 Abrir;\n");
	printf ("2 Salvar;\n");
	printf ("3 Exluir;\n");
	printf ("4 Exportar.\n");
	printf ("\n\nQual a opcao desejada?: ");
	scanf ("%d", &opcoes);
	
	switch (opcoes){
		case 1:
			printf ("Voce optou por abrir o arquivo. ");
			break;
		case 2:
			printf ("Voce optou por salvar o arquivo. ");
			break;
		case 3:
		    printf ("Voce optou por excluir o arquivo. ");
		    break;
		case 4:
		    printf ("Voce optou por exportar o arquivo. ");
		    break;
		    default:
			printf ("Valor invalido!!"); 
	}
}
