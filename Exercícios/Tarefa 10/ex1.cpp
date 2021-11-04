#include <stdio.h>
#include <string.h>

struct cadastro{
	char nome[20];
	int RA;
	float nota1, nota2;
};

int main(){
	cadastro pessoa;
	
	printf("--Armazenar dados--\n\n");
	printf("--Cadastro--\n\n");
	printf("Insira o seu nome: ");
	fgets(pessoa.nome, 20, stdin);
	printf("Insira o seu RA: ");
	scanf("%d", &pessoa.RA);
	printf("Insira a sua nota1: ");
	scanf("%f", &pessoa.nota1);
	printf("Insira a sua nota2: ");
	scanf("%f", &pessoa.nota2);
	
	printf("\n\n--Exibindo os dados inseridos--\n\n");
	printf("O seu nome: %s", pessoa.nome);
	printf("O seu RA: %d\n", pessoa.RA);
	printf("A sua nota1: %.2f\n", pessoa.nota1);
	printf("A sua nota2: %.2f", pessoa.nota2);
}
