#include <stdio.h>
#include <string.h>

struct dados{
	char nome[30], console[10], genero[15];
	int codigo;
	float preco;
};

int main(){
	dados games;
	
	printf("--Armazenar dados--\n\n");
	printf("Insira o nome do game: ");
	fgets(games.nome, 30, stdin);
	printf("Insira o console do game: ");
	fgets(games.console, 10, stdin);
	printf("Insira o genero do game: ");
	fgets(games.genero, 15, stdin);
	printf("Insira o codigo do game: ");
	scanf("%d", &games.codigo);
	printf("Insira o preco: ");
	scanf("%f", &games.preco);
	
	printf("\n\n--Exibindo os dados inseridos--\n");
	printf("O nome do game: %s", games.nome);
	printf("O console do game: %s", games.console);
	printf("O genero do game: %s", games.genero);
	printf("O codigo do game: %d\n", games.codigo);
	printf("O preco: %.2f", games.preco);
}
