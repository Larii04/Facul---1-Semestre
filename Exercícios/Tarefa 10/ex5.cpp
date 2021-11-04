#include <stdio.h>
#include <string.h>

int aux; 

struct dados{
	char nome[20], genero[15];
	int codigo, console;
	float preco;
};

void entrada(dados entrada);
int menu();
int gravar(dados gravar1);

int main(){
	dados games;
	char nome[20], genero[15];
	int console, codigo, opcoes, gravar1;
	float preco;
	
	printf("--Cadastro de games--\n\n");
	entrada(games);
}

void entrada(dados entrada){
		dados games;
		char parar[6] = "ZZZZ";
		
		do{
		fflush(stdin);	
	  	printf("Insira o nome do game: ");
		scanf("%s", &games.nome);
	
		if(strcmp(games.nome, parar)){
		
		fflush(stdin);	
		menu();
	    
	    fflush(stdin);
		printf("Insira o genero do game: ");
		scanf("%s", &games.genero);
		
		fflush(stdin);
		printf("Insira o codigo do jogo: ");
		scanf("%d", &games.codigo);
	
	    fflush(stdin);
		printf("Insira o preco do jogo:");
		scanf("%f", &games.preco);
		printf("\n");
		
		fflush(stdin);
		printf("--Digite ZZZZ para encerrar!!--\n\n");
		
		gravar(games);
			}
		else{
			break;
			}		
		}
	while(strcmp(games.nome, parar));
	}

int gravar(dados gravar1){
   FILE *fp;
   char PS4[10] = "PS4";
   char XBOXONE[10] = "XBOX ONE";
   char PS3[10] = "PS3";
   char XBOX360[10] = "XBOX360";
   char Wii[10] = "	Wii";
   
   fp = fopen("C:\\Aula 11\\arq\\games.txt", "w"); 
   if(fp == 0){
		printf ("Erro ao abrir o arquivo!");
		return 1;
	}	
	fprintf(fp, "Dados do game:");
	if(aux == 1){
		fprintf(fp,"\nNome: %s\tConsole: %s\tGenero: %s\tCodigo: %d\tPreco: %.2f$", gravar1.nome, PS4, gravar1.genero, gravar1.codigo, gravar1.preco);
	}
	if(aux == 2){
		fprintf(fp,"\nNome: %s\tConsole: %s\tGenero: %s\tCodigo: %d\tPreco: %.2f$", gravar1.nome, XBOXONE, gravar1.genero, gravar1.codigo, gravar1.preco);
		}
	if(aux == 3){
		fprintf(fp,"\nNome: %s\tConsole: %s\tGenero: %s\tCodigo: %d\tPreco: %.2f$", gravar1.nome, PS3, gravar1.genero, gravar1.codigo, gravar1.preco);
	}
	if(aux == 4){
		fprintf(fp,"\nNome: %s\tConsole: %s\tGenero: %s\tCodigo: %d\tPreco: %.2f$", gravar1.nome, XBOX360, gravar1.genero, gravar1.codigo, gravar1.preco);
	}
	if(aux == 5){
		fprintf(fp,"\nNome: %s\tConsole: %s\tGenero: %s\tCodigo: %d\tPreco: %.2f$", gravar1.nome, Wii, gravar1.genero, gravar1.codigo, gravar1.preco);
	}	
}

int menu(){
	int opcoes; 
	
	printf("\n--MENU DO CONSOLE--\n\n");
	printf("1 - PS4;\n");
	printf("2 - XBOX ONE;\n");
	printf("3 - PS3;\n");
	printf("4 - XBOX360;\n");
	printf("5 - Wii;\n\n");
	printf("Insira o console do game: ");
	scanf("%d", &opcoes);
		
	switch(opcoes){
		case 1: 
			printf("PS4\n\n");
			aux = 1;
			break;
		case 2:
			printf("XBOX ONE\n\n");
			aux = 2;
			break;
		case 3:
			printf("PS3\n\n");
			aux = 3;
			break;
		case 4:
			printf("XBOX360\n\n");
			aux = 4;
			break;
		case 5:
			printf("Wii\n\n");
			aux = 5;
			break;	
		default:
		printf("Nao existe esta opcao!!!\n");
		aux = 0;
		break;
	}
}
