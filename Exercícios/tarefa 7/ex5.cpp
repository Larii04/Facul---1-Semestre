#include <stdio.h>

int opcoes;

int menu();

int main(){
		
		menu();
	
	switch (opcoes){
		case 1:
			printf("\nVoce selecionou a opcao 1 - abrir.");
			break;
		case 2:
			printf("\nVoce selecionou a opcao 2 - salvar.");
			break;
		case 3:
			printf("\nVoce selecionou a opcao 3 - copiar.");
			break;	
		case 4:
			printf("\nVoce selecionou a opcao 4 - colar.");
			break;
		case 5:
			printf("\nVoce selecionou a opcao 5 - apagar.");
			break;
	}
	
}

int menu(){
	
	printf("\n--MENU--\n\n");
	printf("1 - abrir;\n");
	printf("2 - salvar;\n");
	printf("3 - copiar;\n");
	printf("4 - colar;\n");
	printf("5 - apagar;\n\n");
	printf("Selecione a opcao desejada: ");
	scanf("%d", &opcoes);
	
}
